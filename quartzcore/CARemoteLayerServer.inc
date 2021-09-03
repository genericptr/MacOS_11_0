{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CARemoteLayerServer.h }

{$ifdef TYPES}
type
  CARemoteLayerServerPtr = ^CARemoteLayerServer;
{$endif}

{$ifdef CLASSES}

type
  CARemoteLayerServer = objcclass external (NSObject)
  private
  public
    class function sharedServer: CARemoteLayerServer; message 'sharedServer';
    function serverPort: mach_port_t; message 'serverPort';
  end;


type
  CALayer_CARemoteLayerServer = objccategory external name 'CARemoteLayerServer' (CALayer)
    class function layerWithRemoteClientId (client_id: cuint32): CALayer; message 'layerWithRemoteClientId:';
  end;
{$endif}

