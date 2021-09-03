{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CARemoteLayerClient.h }

{$ifdef TYPES}
type
  CARemoteLayerClientPtr = ^CARemoteLayerClient;
{$endif}

{$ifdef CLASSES}

type
  CARemoteLayerClient = objcclass external (NSObject)
  private
    _impl: id;
  public
    function initWithServerPort (port: mach_port_t): id; message 'initWithServerPort:';
    procedure invalidate; message 'invalidate';
    function clientId: cuint32; message 'clientId';
    procedure setLayer(newValue: CALayer); message 'setLayer:';
    function layer: CALayer; message 'layer';
  end;
{$endif}

