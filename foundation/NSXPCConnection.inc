{ Parsed from Foundation.framework NSXPCConnection.h }

{ Types from NSXPCInterface }
{$ifdef TYPES}

{$endif}


{ Types from NSXPCCoder }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  NSXPCConnectionRemoteObjectProxyWithErrorHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
  NSXPCConnectionSynchronousRemoteObjectProxyWithErrorHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
  NSXPCConnectionInterruptionHandlerCallback = reference to procedure; cblock; cdecl;
  NSXPCConnectionInvalidationHandlerCallback = reference to procedure; cblock; cdecl;
  NSXPCConnectionScheduleSendBarrierBlockCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSXPCConnectionPtr = ^NSXPCConnection;
  NSXPCListenerPtr = ^NSXPCListener;
  NSXPCInterfacePtr = ^NSXPCInterface;
  NSXPCListenerEndpointPtr = ^NSXPCListenerEndpoint;
  NSXPCCoderPtr = ^NSXPCCoder;
  NSXPCProxyCreatingProtocolPtr = ^NSXPCProxyCreatingProtocol;
  NSXPCListenerDelegateProtocolPtr = ^NSXPCListenerDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSXPCProxyCreatingProtocol = objcprotocol external name 'NSXPCProxyCreating'
    function remoteObjectProxy: id; message 'remoteObjectProxy';
    function remoteObjectProxyWithErrorHandler (handler: NSXPCConnectionRemoteObjectProxyWithErrorHandlerCallback): id; message 'remoteObjectProxyWithErrorHandler:';
  optional
    function synchronousRemoteObjectProxyWithErrorHandler (handler: NSXPCConnectionSynchronousRemoteObjectProxyWithErrorHandlerCallback): id; message 'synchronousRemoteObjectProxyWithErrorHandler:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$ifdef TYPES}
type
  NSXPCConnectionOptions = NSUInteger;
  NSXPCConnectionOptionsPtr = ^NSXPCConnectionOptions;

const
  NSXPCConnectionPrivileged = 1 shl 12;
{$endif}

{$ifdef CLASSES}

type
  NSXPCConnection = objcclass external (NSObject, NSXPCProxyCreatingProtocol)
  public
    function initWithServiceName (serviceName: NSString): id; message 'initWithServiceName:'; { unavailable in ios, watchos, tvos }
    function serviceName: NSString; message 'serviceName';
    function initWithMachServiceName_options (name: NSString; options: NSXPCConnectionOptions): id; message 'initWithMachServiceName:options:'; { unavailable in ios, watchos, tvos }
    function initWithListenerEndpoint (endpoint: NSXPCListenerEndpoint): id; message 'initWithListenerEndpoint:';
    function endpoint: NSXPCListenerEndpoint; message 'endpoint';
    procedure setExportedInterface(newValue: NSXPCInterface); message 'setExportedInterface:';
    function exportedInterface: NSXPCInterface; message 'exportedInterface';
    procedure setExportedObject(newValue: id); message 'setExportedObject:';
    function exportedObject: id; message 'exportedObject';
    procedure setRemoteObjectInterface(newValue: NSXPCInterface); message 'setRemoteObjectInterface:';
    function remoteObjectInterface: NSXPCInterface; message 'remoteObjectInterface';
    function remoteObjectProxy: id; message 'remoteObjectProxy';
    function remoteObjectProxyWithErrorHandler (handler: NSXPCConnectionRemoteObjectProxyWithErrorHandlerCallback): id; message 'remoteObjectProxyWithErrorHandler:';
    function synchronousRemoteObjectProxyWithErrorHandler (handler: NSXPCConnectionSynchronousRemoteObjectProxyWithErrorHandlerCallback): id; message 'synchronousRemoteObjectProxyWithErrorHandler:'; { available in macos , ios , watchos , tvos  }
    procedure setInterruptionHandler(newValue: NSXPCConnectionInterruptionHandlerCallback); message 'setInterruptionHandler:';
    function interruptionHandler: NSXPCConnectionInterruptionHandlerCallback; message 'interruptionHandler';
    procedure setInvalidationHandler(newValue: NSXPCConnectionInvalidationHandlerCallback); message 'setInvalidationHandler:';
    function invalidationHandler: NSXPCConnectionInvalidationHandlerCallback; message 'invalidationHandler';
    procedure resume; message 'resume';
    procedure suspend; message 'suspend';
    procedure invalidate; message 'invalidate';
    function auditSessionIdentifier: au_asid_t; message 'auditSessionIdentifier';
    function processIdentifier: pid_t; message 'processIdentifier';
    function effectiveUserIdentifier: uid_t; message 'effectiveUserIdentifier';
    function effectiveGroupIdentifier: gid_t; message 'effectiveGroupIdentifier';
    class function currentConnection: NSXPCConnection; message 'currentConnection'; { available in macos , ios , watchos , tvos  }
    procedure scheduleSendBarrierBlock (block: NSXPCConnectionScheduleSendBarrierBlockCallback); message 'scheduleSendBarrierBlock:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSXPCListener = objcclass external (NSObject)
  public
    class function serviceListener: NSXPCListener; message 'serviceListener';
    class function anonymousListener: NSXPCListener; message 'anonymousListener';
    function initWithMachServiceName (name: NSString): id; message 'initWithMachServiceName:'; { unavailable in ios, watchos, tvos }
    procedure setDelegate(newValue: NSXPCListenerDelegateProtocol); message 'setDelegate:';
    function delegate: NSXPCListenerDelegateProtocol; message 'delegate';
    function endpoint: NSXPCListenerEndpoint; message 'endpoint';
    procedure resume; message 'resume';
    procedure suspend; message 'suspend';
    procedure invalidate; message 'invalidate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSXPCListenerDelegateProtocol = objcprotocol external name 'NSXPCListenerDelegate' (NSObjectProtocol)
  optional
    function listener_shouldAcceptNewConnection (listener: NSXPCListener; newConnection: NSXPCConnection): objcbool; message 'listener:shouldAcceptNewConnection:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSXPCInterface = objcclass external (NSObject)
  private
    _protocol: Protocol;
    _reserved2: pointer;
    _reserved1: id;
  public
    class function interfaceWithProtocol (protocol_: Protocol): NSXPCInterface; message 'interfaceWithProtocol:';
    procedure setProtocol(newValue: Protocol); message 'setProtocol:';
    function protocol: Protocol; message 'protocol';
    procedure setClasses_forSelector_argumentIndex_ofReply (classes: NSSet; sel_: SEL; arg: NSUInteger; ofReply: objcbool); message 'setClasses:forSelector:argumentIndex:ofReply:';
    function classesForSelector_argumentIndex_ofReply (sel_: SEL; arg: NSUInteger; ofReply: objcbool): NSSet; message 'classesForSelector:argumentIndex:ofReply:';
    procedure setInterface_forSelector_argumentIndex_ofReply (ifc: NSXPCInterface; sel_: SEL; arg: NSUInteger; ofReply: objcbool); message 'setInterface:forSelector:argumentIndex:ofReply:';
    function interfaceForSelector_argumentIndex_ofReply (sel_: SEL; arg: NSUInteger; ofReply: objcbool): NSXPCInterface; message 'interfaceForSelector:argumentIndex:ofReply:';
    {$if defined(__NULL_MACRO__)}
    procedure setXPCType_forSelector_argumentIndex_ofReply (type_: xpc_type_t; sel_: SEL; arg: NSUInteger; ofReply: objcbool); message 'setXPCType:forSelector:argumentIndex:ofReply:'; { available in macos , ios , watchos , tvos  }
    function XPCTypeForSelector_argumentIndex_ofReply (sel_: SEL; arg: NSUInteger; ofReply: objcbool): xpc_type_t; message 'XPCTypeForSelector:argumentIndex:ofReply:'; { available in macos , ios , watchos , tvos  }
    {$endif}
  end;

type
  NSXPCListenerEndpoint = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _internal: pointer;

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSXPCCoder = objcclass external (NSCoder)
  private
    _userInfo: NSObjectProtocol;
    _reserved1: id;
  public
    {$if defined(__NULL_MACRO__)}
    procedure encodeXPCObject_forKey (xpcObject: xpc_object_t; key: NSString); message 'encodeXPCObject:forKey:';
    function decodeXPCObjectOfType_forKey (type_: xpc_type_t; key: NSString): xpc_object_t; message 'decodeXPCObjectOfType:forKey:'; { available in macos , ios , watchos , tvos  }
    {$endif}
    procedure setUserInfo(newValue: NSObjectProtocol); message 'setUserInfo:';
    function userInfo: NSObjectProtocol; message 'userInfo';
    function connection: NSXPCConnection; message 'connection'; { available in macosx , ios , watchos , tvos  }
  end;
{$endif}

