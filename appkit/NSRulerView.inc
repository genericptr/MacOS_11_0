{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSRulerView.h }

{$ifdef TYPES}
type
  NSRulerViewPtr = ^NSRulerView;
{$endif}

{$ifdef TYPES}
type
  NSRulerOrientation = NSUInteger;
  NSRulerOrientationPtr = ^NSRulerOrientation;

const
  NSHorizontalRuler = 0;
  NSVerticalRuler = 1;

type
  NSRulerViewUnitName = NSString;
  NSRulerViewUnitNamePtr = ^NSRulerViewUnitName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSRulerViewUnitInches: NSRulerViewUnitName { available in macos  }; cvar; external;
  NSRulerViewUnitCentimeters: NSRulerViewUnitName { available in macos  }; cvar; external;
  NSRulerViewUnitPoints: NSRulerViewUnitName { available in macos  }; cvar; external;
  NSRulerViewUnitPicas: NSRulerViewUnitName { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSRulerView = objcclass external (NSView)
  public
    class procedure registerUnitWithName_abbreviation_unitToPointsConversionFactor_stepUpCycle_stepDownCycle (unitName: NSRulerViewUnitName; abbreviation: NSString; conversionFactor: CGFloat; stepUpCycle: NSArray; stepDownCycle: NSArray); message 'registerUnitWithName:abbreviation:unitToPointsConversionFactor:stepUpCycle:stepDownCycle:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithScrollView_orientation (scrollView: NSScrollView; orientation: NSRulerOrientation): id; message 'initWithScrollView:orientation:'; { NS_DESIGNATED_INITIALIZER }
    procedure setScrollView(newValue: NSScrollView); message 'setScrollView:';
    function scrollView: NSScrollView; message 'scrollView';
    procedure setOrientation(newValue: NSRulerOrientation); message 'setOrientation:';
    function orientation: NSRulerOrientation; message 'orientation';
    function baselineLocation: CGFloat; message 'baselineLocation';
    function requiredThickness: CGFloat; message 'requiredThickness';
    procedure setRuleThickness(newValue: CGFloat); message 'setRuleThickness:';
    function ruleThickness: CGFloat; message 'ruleThickness';
    procedure setReservedThicknessForMarkers(newValue: CGFloat); message 'setReservedThicknessForMarkers:';
    function reservedThicknessForMarkers: CGFloat; message 'reservedThicknessForMarkers';
    procedure setReservedThicknessForAccessoryView(newValue: CGFloat); message 'setReservedThicknessForAccessoryView:';
    function reservedThicknessForAccessoryView: CGFloat; message 'reservedThicknessForAccessoryView';
    procedure setMeasurementUnits(newValue: NSRulerViewUnitName); message 'setMeasurementUnits:';
    function measurementUnits: NSRulerViewUnitName; message 'measurementUnits';
    procedure setOriginOffset(newValue: CGFloat); message 'setOriginOffset:';
    function originOffset: CGFloat; message 'originOffset';
    procedure setClientView(newValue: NSView); message 'setClientView:';
    function clientView: NSView; message 'clientView';
    procedure addMarker (marker: NSRulerMarker); message 'addMarker:';
    procedure removeMarker (marker: NSRulerMarker); message 'removeMarker:';
    procedure setMarkers(newValue: NSArray); message 'setMarkers:';
    function markers: NSArray; message 'markers';
    function trackMarker_withMouseEvent (marker: NSRulerMarker; event: NSEvent): objcbool; message 'trackMarker:withMouseEvent:';
    procedure setAccessoryView(newValue: NSView); message 'setAccessoryView:';
    function accessoryView: NSView; message 'accessoryView';
    procedure moveRulerlineFromLocation_toLocation (oldLocation: CGFloat; newLocation: CGFloat); message 'moveRulerlineFromLocation:toLocation:';
    procedure invalidateHashMarks; message 'invalidateHashMarks';
    procedure drawHashMarksAndLabelsInRect (rect: NSRect); message 'drawHashMarksAndLabelsInRect:';
    procedure drawMarkersInRect (rect: NSRect); message 'drawMarkersInRect:';
    function isFlipped: objcbool; message 'isFlipped';
  end;


type
  NSRulerMarkerClientViewDelegation = objccategory external (NSView)
    function rulerView_shouldMoveMarker (ruler: NSRulerView; marker: NSRulerMarker): objcbool; message 'rulerView:shouldMoveMarker:';
    function rulerView_willMoveMarker_toLocation (ruler: NSRulerView; marker: NSRulerMarker; location: CGFloat): CGFloat; message 'rulerView:willMoveMarker:toLocation:';
    procedure rulerView_didMoveMarker (ruler: NSRulerView; marker: NSRulerMarker); message 'rulerView:didMoveMarker:';
    function rulerView_shouldRemoveMarker (ruler: NSRulerView; marker: NSRulerMarker): objcbool; message 'rulerView:shouldRemoveMarker:';
    procedure rulerView_didRemoveMarker (ruler: NSRulerView; marker: NSRulerMarker); message 'rulerView:didRemoveMarker:';
    function rulerView_shouldAddMarker (ruler: NSRulerView; marker: NSRulerMarker): objcbool; message 'rulerView:shouldAddMarker:';
    function rulerView_willAddMarker_atLocation (ruler: NSRulerView; marker: NSRulerMarker; location: CGFloat): CGFloat; message 'rulerView:willAddMarker:atLocation:';
    procedure rulerView_didAddMarker (ruler: NSRulerView; marker: NSRulerMarker); message 'rulerView:didAddMarker:';
    procedure rulerView_handleMouseDown (ruler: NSRulerView; event: NSEvent); message 'rulerView:handleMouseDown:';
    procedure rulerView_willSetClientView (ruler: NSRulerView; newClient: NSView); message 'rulerView:willSetClientView:';
    function rulerView_locationForPoint (ruler: NSRulerView; point: NSPoint): CGFloat; message 'rulerView:locationForPoint:'; { available in macos  }
    function rulerView_pointForLocation (ruler: NSRulerView; point: CGFloat): NSPoint; message 'rulerView:pointForLocation:'; { available in macos  }
  end;
{$endif}

