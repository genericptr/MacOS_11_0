{ Parsed from StoreKit.framework SKRequest.h }

{$ifdef TYPES}
type
  SKRequestPtr = ^SKRequest;
  SKRequestDelegateProtocolPtr = ^SKRequestDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  SKRequest = objcclass external (NSObject)
  private
    _requestInternal: id;
  public
    procedure setDelegate(newValue: SKRequestDelegateProtocol); message 'setDelegate:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function delegate: SKRequestDelegateProtocol; message 'delegate'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure cancel; message 'cancel'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure start; message 'start'; { available in ios 3.0, macos 10.7, watchos 6.2 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKRequestDelegateProtocol = objcprotocol external name 'SKRequestDelegate' (NSObjectProtocol)
  optional
    procedure requestDidFinish (request: SKRequest); message 'requestDidFinish:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure request_didFailWithError (request: SKRequest; error: NSError); message 'request:didFailWithError:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
  end;
{$endif}

