{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSPortNameServer.h }

{$ifdef TYPES}
type
  NSPortNameServerPtr = ^NSPortNameServer;
  NSMachBootstrapServerPtr = ^NSMachBootstrapServer;
  NSMessagePortNameServerPtr = ^NSMessagePortNameServer;
  NSSocketPortNameServerPtr = ^NSSocketPortNameServer;
{$endif}

{$ifdef CLASSES}

type
  NSPortNameServer = objcclass external (NSObject)
  public
    class function systemDefaultPortNameServer: NSPortNameServer; message 'systemDefaultPortNameServer';
    function portForName (name: NSString): NSPort; message 'portForName:';
    function portForName_host (name: NSString; host: NSString): NSPort; message 'portForName:host:';
    function registerPort_name (port: NSPort; name: NSString): objcbool; message 'registerPort:name:';
    function removePortForName (name: NSString): objcbool; message 'removePortForName:';
  end;
{$endif}

{$if defined(TARGET_OS_OSX) or defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSMachBootstrapServer = objcclass external (NSPortNameServer)
  public
    class function sharedInstance: id; message 'sharedInstance';
    function portForName (name: NSString): NSPort; message 'portForName:';
    function portForName_host (name: NSString; host: NSString): NSPort; message 'portForName:host:';
    function registerPort_name (port: NSPort; name: NSString): objcbool; message 'registerPort:name:';
    function servicePortWithName (name: NSString): NSPort; message 'servicePortWithName:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSMessagePortNameServer = objcclass external (NSPortNameServer)
  public
    class function sharedInstance: id; message 'sharedInstance';
    function portForName (name: NSString): NSPort; message 'portForName:';
    function portForName_host (name: NSString; host: NSString): NSPort; message 'portForName:host:';
  end;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  NSSocketPortNameServer = objcclass external (NSPortNameServer)
  public
    class function sharedInstance: id; message 'sharedInstance';
    function portForName (name: NSString): NSPort; message 'portForName:';
    function portForName_host (name: NSString; host: NSString): NSPort; message 'portForName:host:';
    function registerPort_name (port: NSPort; name: NSString): objcbool; message 'registerPort:name:';
    function removePortForName (name: NSString): objcbool; message 'removePortForName:';
    function portForName_host_nameServerPortNumber (name: NSString; host: NSString; portNumber: cuint16): NSPort; message 'portForName:host:nameServerPortNumber:';
    function registerPort_name_nameServerPortNumber (port: NSPort; name: NSString; portNumber: cuint16): objcbool; message 'registerPort:name:nameServerPortNumber:';
    procedure setDefaultNameServerPortNumber(newValue: cuint16); message 'setDefaultNameServerPortNumber:';
    function defaultNameServerPortNumber: cuint16; message 'defaultNameServerPortNumber';
  end;
{$endif}

{$endif}
