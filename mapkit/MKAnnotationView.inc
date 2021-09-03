{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKAnnotationView.h }

{ Types from MKAnnotationView }
{$ifdef TYPES}




{$endif}


{$ifdef TYPES}
type
  MKAnnotationViewPtr = ^MKAnnotationView;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKAnnotationCalloutInfoDidChangeNotification: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MKAnnotationViewDragState = NSUInteger;
  MKAnnotationViewDragStatePtr = ^MKAnnotationViewDragState;

const
  MKAnnotationViewDragStateNone = 0;
  MKAnnotationViewDragStateStarting = 1;
  MKAnnotationViewDragStateDragging = 2;
  MKAnnotationViewDragStateCanceling = 3;
  MKAnnotationViewDragStateEnding = 4;

type
  MKFeatureDisplayPriority = single { unavailable in watchos };
  MKFeatureDisplayPriorityPtr = ^MKFeatureDisplayPriority { unavailable in watchos };

const
  MKFeatureDisplayPriorityRequired = 1000 { unavailable in watchos };
  MKFeatureDisplayPriorityDefaultHigh = 750 { unavailable in watchos };
  MKFeatureDisplayPriorityDefaultLow = 250 { unavailable in watchos };

type
  MKAnnotationViewZPriority = single { unavailable in watchos };
  MKAnnotationViewZPriorityPtr = ^MKAnnotationViewZPriority { unavailable in watchos };

const
  MKAnnotationViewZPriorityMax = 1000 { unavailable in watchos };
  MKAnnotationViewZPriorityDefaultSelected = 1000 { unavailable in watchos };
  MKAnnotationViewZPriorityDefaultUnselected = 500 { unavailable in watchos };
  MKAnnotationViewZPriorityMin = 0 { unavailable in watchos };

type
  MKAnnotationViewCollisionMode = NSInteger;
  MKAnnotationViewCollisionModePtr = ^MKAnnotationViewCollisionMode;

const
  MKAnnotationViewCollisionModeRectangle = 0;
  MKAnnotationViewCollisionModeCircle = 1;
  MKAnnotationViewCollisionModeNone = 2 { unavailable in watchos };
{$endif}

{$if defined(interface)defined(MKAnnotationView)defined(UIView)}

{$else}
{$ifdef CLASSES}

type
  MKAnnotationView = objcclass external (NSView)
  public
    function initWithAnnotation_reuseIdentifier (annotation: id; reuseIdentifier: NSString): id; message 'initWithAnnotation:reuseIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function reuseIdentifier: NSString; message 'reuseIdentifier';
    procedure prepareForReuse; message 'prepareForReuse';
    procedure prepareForDisplay; message 'prepareForDisplay'; { available in 10_13, 11_0 }
    procedure setAnnotation(newValue: id); message 'setAnnotation:';
    function annotation: id; message 'annotation';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setImage(newValue: UIImagePtr); message 'setImage:';
    function image: UIImagePtr; message 'image';
    {$else}
    procedure setImage_(newValue: NSImage); message 'setImage:';
    function image_: NSImage; message 'image';
    {$endif}
    procedure setCenterOffset(newValue: CGPoint); message 'setCenterOffset:';
    function centerOffset: CGPoint; message 'centerOffset';
    procedure setCalloutOffset(newValue: CGPoint); message 'setCalloutOffset:';
    function calloutOffset: CGPoint; message 'calloutOffset';
    procedure setLeftCalloutOffset(newValue: CGPoint); message 'setLeftCalloutOffset:'; { unavailable in ios, tvos, watchos }
    function leftCalloutOffset: CGPoint; message 'leftCalloutOffset'; { unavailable in ios, tvos, watchos }
    procedure setRightCalloutOffset(newValue: CGPoint); message 'setRightCalloutOffset:'; { unavailable in ios, tvos, watchos }
    function rightCalloutOffset: CGPoint; message 'rightCalloutOffset'; { unavailable in ios, tvos, watchos }
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure setHighlighted(newValue: objcbool); message 'setHighlighted:';
    function isHighlighted: objcbool; message 'isHighlighted';
    procedure setSelected(newValue: objcbool); message 'setSelected:';
    function isSelected: objcbool; message 'isSelected';
    procedure setSelected_animated (selected: objcbool; animated: objcbool); message 'setSelected:animated:';
    procedure setCanShowCallout(newValue: objcbool); message 'setCanShowCallout:';
    function canShowCallout: objcbool; message 'canShowCallout';
    {$if defined(TARGET_OS_IPHONE)}
    procedure setLeftCalloutAccessoryView(newValue: UIViewPtr); message 'setLeftCalloutAccessoryView:';
    function leftCalloutAccessoryView: UIViewPtr; message 'leftCalloutAccessoryView';
    {$else}
    procedure setLeftCalloutAccessoryView_(newValue: NSView); message 'setLeftCalloutAccessoryView:';
    function leftCalloutAccessoryView_: NSView; message 'leftCalloutAccessoryView';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setRightCalloutAccessoryView(newValue: UIViewPtr); message 'setRightCalloutAccessoryView:';
    function rightCalloutAccessoryView: UIViewPtr; message 'rightCalloutAccessoryView';
    {$else}
    procedure setRightCalloutAccessoryView_(newValue: NSView); message 'setRightCalloutAccessoryView:';
    function rightCalloutAccessoryView_: NSView; message 'rightCalloutAccessoryView';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setDetailCalloutAccessoryView(newValue: UIViewPtr); message 'setDetailCalloutAccessoryView:'; { available in 10_11, 9_0 }
    function detailCalloutAccessoryView: UIViewPtr; message 'detailCalloutAccessoryView'; { available in 10_11, 9_0 }
    {$else}
    procedure setDetailCalloutAccessoryView_(newValue: NSView); message 'setDetailCalloutAccessoryView:'; { available in 10_11, 9_0 }
    function detailCalloutAccessoryView_: NSView; message 'detailCalloutAccessoryView'; { available in 10_11, 9_0 }
    {$endif}
    procedure setDraggable(newValue: objcbool); message 'setDraggable:'; { unavailable in tvos }
    function isDraggable: objcbool; message 'isDraggable'; { unavailable in tvos }
    procedure setDragState(newValue: MKAnnotationViewDragState); message 'setDragState:'; { unavailable in tvos }
    function dragState: MKAnnotationViewDragState; message 'dragState'; { unavailable in tvos }
    procedure setDragState_animated (newDragState: MKAnnotationViewDragState; animated: objcbool); message 'setDragState:animated:'; { unavailable in tvos }
    procedure setClusteringIdentifier(newValue: NSString); message 'setClusteringIdentifier:'; { available in 10_13, 11_0 }
    function clusteringIdentifier: NSString; message 'clusteringIdentifier'; { available in 10_13, 11_0 }
    function clusterAnnotationView: MKAnnotationView; message 'clusterAnnotationView'; { available in 10_13, 11_0 }
    procedure setDisplayPriority(newValue: MKFeatureDisplayPriority); message 'setDisplayPriority:'; { available in 10_13, 11_0 }
    function displayPriority: MKFeatureDisplayPriority; message 'displayPriority'; { available in 10_13, 11_0 }
    procedure setZPriority(newValue: MKAnnotationViewZPriority); message 'setZPriority:'; { unavailable in watchos }
    function zPriority: MKAnnotationViewZPriority; message 'zPriority'; { unavailable in watchos }
    procedure setSelectedZPriority(newValue: MKAnnotationViewZPriority); message 'setSelectedZPriority:'; { unavailable in watchos }
    function selectedZPriority: MKAnnotationViewZPriority; message 'selectedZPriority'; { unavailable in watchos }
    procedure setCollisionMode(newValue: MKAnnotationViewCollisionMode); message 'setCollisionMode:'; { available in 10_13, 11_0 }
    function collisionMode: MKAnnotationViewCollisionMode; message 'collisionMode'; { available in 10_13, 11_0 }
  end;
{$endif}

{$endif}
