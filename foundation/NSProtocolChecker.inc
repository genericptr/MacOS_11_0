{ Parsed from Foundation.framework NSProtocolChecker.h }

{$ifdef TYPES}
type
  NSProtocolCheckerPtr = ^NSProtocolChecker;
{$endif}

{$ifdef CLASSES}

type
  NSProtocolChecker = objcclass external (NSProxy)
  public
    function protocol: Protocol; message 'protocol';
    function target: NSObjectPtr; message 'target';
  end;


type
  NSProtocolCheckerCreation = objccategory external (NSProtocolChecker)
    class function protocolCheckerWithTarget_protocol (anObject: NSObjectPtr; aProtocol: Protocol): id; message 'protocolCheckerWithTarget:protocol:';
    function initWithTarget_protocol (anObject: NSObjectPtr; aProtocol: Protocol): id; message 'initWithTarget:protocol:';
  end;
{$endif}

