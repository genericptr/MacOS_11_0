{ Parsed from Foundation.framework NSDistantObject.h }

{$ifdef TYPES}
type
  NSDistantObjectPtr = ^NSDistantObject;
{$endif}

{$ifdef CLASSES}

type
  NSDistantObject = objcclass external (NSProxy, NSCodingProtocol)
  private
    _knownSelectors: id;
    _wireCount: NSUInteger;
    _refCount: NSUInteger;
    _proto: id;
    ___2: cuint16;
    ___1: cuint8;
    _wireType: cuint8;
    _remoteClass: id;
  public
    class function proxyWithTarget_connection (target: id; connection: NSConnection): id; message 'proxyWithTarget:connection:';
    function initWithTarget_connection (target: id; connection: NSConnection): id; message 'initWithTarget:connection:';
    class function proxyWithLocal_connection (target: id; connection: NSConnection): id; message 'proxyWithLocal:connection:';
    function initWithLocal_connection (target: id; connection: NSConnection): id; message 'initWithLocal:connection:';
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setProtocolForProxy (proto: Protocol); message 'setProtocolForProxy:';
    function connectionForProxy: NSConnection; message 'connectionForProxy';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

