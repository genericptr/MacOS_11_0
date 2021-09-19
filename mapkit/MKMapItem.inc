{ Parsed from MapKit.framework MKMapItem.h }

{ Types from MKMapItem }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  MKMapItemOpenInMapsWithLaunchOptionsCallback = reference to procedure (success: objcbool); cblock; cdecl;
  MKMapItemOpenMapsWithItemsCallback = reference to procedure (success: objcbool); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MKMapItemPtr = ^MKMapItem;
{$endif}

{$ifdef CLASSES}

type
  MKMapItem = objcclass external (NSObject)
  public
    function placemark: MKPlacemark; message 'placemark';
    function isCurrentLocation: objcbool; message 'isCurrentLocation';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setPhoneNumber(newValue: NSString); message 'setPhoneNumber:';
    function phoneNumber: NSString; message 'phoneNumber';
    procedure setUrl(newValue: NSURL); message 'setUrl:';
    function url: NSURL; message 'url';
    procedure setTimeZone(newValue: NSTimeZone); message 'setTimeZone:'; { available in 10_11, 9_0 }
    function timeZone: NSTimeZone; message 'timeZone'; { available in 10_11, 9_0 }
    procedure setPointOfInterestCategory(newValue: MKPointOfInterestCategory); message 'setPointOfInterestCategory:'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    function pointOfInterestCategory: MKPointOfInterestCategory; message 'pointOfInterestCategory'; { unavailable in watchos } { available in ios 13.0, macos 10.15, tvos 13.0 }
    class function mapItemForCurrentLocation: MKMapItem; message 'mapItemForCurrentLocation';
    function initWithPlacemark (placemark_: MKPlacemark): id; message 'initWithPlacemark:';
    function openInMapsWithLaunchOptions (launchOptions: NSDictionary): objcbool; message 'openInMapsWithLaunchOptions:'; { unavailable in tvos }
    class function openMapsWithItems_launchOptions (mapItems: NSArray; launchOptions: NSDictionary): objcbool; message 'openMapsWithItems:launchOptions:'; { unavailable in tvos }
    {$if defined(TARGET_OS_IOS)}
    procedure openInMapsWithLaunchOptions_fromScene_completionHandler (launchOptions: NSDictionary; scene: UIScene; completion: MKMapItemOpenInMapsWithLaunchOptionsCallback); message 'openInMapsWithLaunchOptions:fromScene:completionHandler:'; { unavailable in watchos, tvos, macos } { available in ios 13.2 }
    class procedure openMapsWithItems_launchOptions_fromScene_completionHandler (mapItems: NSArray; launchOptions: NSDictionary; scene: UIScene; completion: MKMapItemOpenMapsWithItemsCallback); message 'openMapsWithItems:launchOptions:fromScene:completionHandler:'; { unavailable in watchos, tvos, macos } { available in ios 13.2 }
    {$endif}
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKLaunchOptionsDirectionsModeKey: NSString { unavailable in tvos } { available in 10_9, 6_0 }; cvar; external;
  MKLaunchOptionsMapTypeKey: NSString { unavailable in tvos, watchos } { available in 10_9, 6_0 }; cvar; external;
  MKLaunchOptionsShowsTrafficKey: NSString { unavailable in tvos, watchos } { available in 10_9, 6_0 }; cvar; external;
  MKLaunchOptionsDirectionsModeDefault: NSString { unavailable in tvos } { available in 10_12, 10_0 }; cvar; external;
  MKLaunchOptionsDirectionsModeDriving: NSString { unavailable in tvos } { available in 10_9, 6_0 }; cvar; external;
  MKLaunchOptionsDirectionsModeWalking: NSString { unavailable in tvos } { available in 10_9, 6_0 }; cvar; external;
  MKLaunchOptionsDirectionsModeTransit: NSString { unavailable in tvos } { available in 10_11, 9_0 }; cvar; external;
  MKLaunchOptionsMapCenterKey: NSString { unavailable in tvos } { available in 10_9, 6_0 }; cvar; external;
  MKLaunchOptionsMapSpanKey: NSString { unavailable in tvos } { available in 10_9, 6_0 }; cvar; external;
  MKLaunchOptionsCameraKey: NSString { unavailable in tvos } { available in 10_10, 7_1 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  MKMapItemSerialization = objccategory external (MKMapItem)
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKMapItemTypeIdentifier: NSString { available in 10_13, 11_0 }; cvar; external;
{$endif}

{$if defined(TARGET_OS_IOS)}
{$ifdef CLASSES}

type
  MKMapItemDragAndDropSupport = objccategory external (MKMapItem)
  end;
{$endif}

{$endif}
