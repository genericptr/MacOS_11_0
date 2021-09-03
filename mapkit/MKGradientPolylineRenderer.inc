{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKGradientPolylineRenderer.h }

{ Types from MKGradientPolylineRenderer }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  MKGradientPolylineRendererPtr = ^MKGradientPolylineRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKGradientPolylineRenderer = objcclass external (MKPolylineRenderer)
  public
    function locations: NSArray; message 'locations';
    {$if defined(TARGET_OS_IPHONE)}
    function colors: NSArray; message 'colors';
    procedure setColors_atLocations (colors_: NSArray; locations_: NSArray); message 'setColors:atLocations:';
    {$else}
    function colors_: NSArray; message 'colors';
    procedure setColors_atLocations (colors__: NSArray; locations_: NSArray); message 'setColors:atLocations:';
    {$endif}
  end;
{$endif}

