{ Parsed from ImageKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Headers/IKFilterUIView.h }

{$ifdef TYPES}
type
  IKFilterUIViewPtr = ^IKFilterUIView;
{$endif}

{$ifdef CLASSES}

type
  IKFilterUIView = objcclass external (NSView)
  private
    _priv:array[0..7] of pointer;
  public
    class function viewWithFrame_filter (frameRect: NSRect; inFilter: CIFilterPtr): id; message 'viewWithFrame:filter:';
    function initWithFrame_filter (frameRect: NSRect; inFilter: CIFilterPtr): id; message 'initWithFrame:filter:';
    function filter: CIFilterPtr; message 'filter';
    function objectController: NSObjectControllerPtr; message 'objectController';
  end;
{$endif}

