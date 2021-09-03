{ Parsed from MapKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MapKit.framework/Headers/MKTileOverlayRenderer.h }

{$ifdef TYPES}
type
  MKTileOverlayRendererPtr = ^MKTileOverlayRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKTileOverlayRenderer = objcclass external (MKOverlayRenderer)
  public
    function initWithTileOverlay (overlay_: MKTileOverlay): id; message 'initWithTileOverlay:';
    procedure reloadData; message 'reloadData';
  end;
{$endif}

