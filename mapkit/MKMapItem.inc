{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKMapItem.h }

{ Types from MKMapItem }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  MKMapItemOpenInMapsWithLaunchOptionsCallback = reference to function (success: objcbool): pointer; cblock; cdecl;
  MKMapItemOpenMapsWithItemsCallback = reference to function (success: objcbool): pointer; cblock; cdecl;
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
    procedure setPointOfInterestCategory(newValue: MKPointOfInterestCategory); message 'setPointOfInterestCategory:'; { unavailable in watchos }
    function pointOfInterestCategory: MKPointOfInterestCategory; message 'pointOfInterestCategory'; { unavailable in watchos }
    class function mapItemForCurrentLocation: MKMapItem; message 'mapItemForCurrentLocation';
    function initWithPlacemark (placemark_: MKPlacemark): id; message 'initWithPlacemark:';
    function openInMapsWithLaunchOptions (launchOptions: NSDictionary): objcbool; message 'openInMapsWithLaunchOptions:'; { unavailable in tvos }
    class function openMapsWithItems_launchOptions (mapItems: NSArray; launchOptions: NSDictionary): objcbool; message 'openMapsWithItems:launchOptions:'; { unavailable in tvos }
    {$if defined(TARGET_OS_IOS)}
    procedure openInMapsWithLaunchOptions_fromScene_completionHandler (launchOptions: NSDictionary; scene: UIScene; completion: MKMapItemOpenInMapsWithLaunchOptionsCallback); message 'openInMapsWithLaunchOptions:fromScene:completionHandler:'; { unavailable in watchos, tvos, macos }
    class procedure openMapsWithItems_launchOptions_fromScene_completionHandler (mapItems: NSArray; launchOptions: NSDictionary; scene: UIScene; completion: MKMapItemOpenMapsWithItemsCallback); message 'openMapsWithItems:launchOptions:fromScene:completionHandler:'; { unavailable in watchos, tvos, macos }
    {$endif}
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKLaunchOptionsDirectionsModeKey: NSString { unavailable in tvos }; cvar; external;
  MKLaunchOptionsMapTypeKey: NSString { unavailable in tvos, watchos }; cvar; external;
  MKLaunchOptionsShowsTrafficKey: NSString { unavailable in tvos, watchos }; cvar; external;
  MKLaunchOptionsDirectionsModeDefault: NSString { unavailable in tvos }; cvar; external;
  MKLaunchOptionsDirectionsModeDriving: NSString { unavailable in tvos }; cvar; external;
  MKLaunchOptionsDirectionsModeWalking: NSString { unavailable in tvos }; cvar; external;
  MKLaunchOptionsDirectionsModeTransit: NSString { unavailable in tvos }; cvar; external;
  MKLaunchOptionsMapCenterKey: NSString { unavailable in tvos }; cvar; external;
  MKLaunchOptionsMapSpanKey: NSString { unavailable in tvos }; cvar; external;
  MKLaunchOptionsCameraKey: NSString { unavailable in tvos }; cvar; external;
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
