{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKRequest.h }

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
    procedure setDelegate(newValue: SKRequestDelegateProtocol); message 'setDelegate:'; { available in ios , macos , watchos  }
    function delegate: SKRequestDelegateProtocol; message 'delegate'; { available in ios , macos , watchos  }
    procedure cancel; message 'cancel'; { available in ios , macos , watchos  }
    procedure start; message 'start'; { available in ios , macos , watchos  }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKRequestDelegateProtocol = objcprotocol external name 'SKRequestDelegate' (NSObjectProtocol)
  optional
    procedure requestDidFinish (request: SKRequest); message 'requestDidFinish:'; { available in ios , macos , watchos  }
    procedure request_didFailWithError (request: SKRequest; error: NSError); message 'request:didFailWithError:'; { available in ios , macos , watchos  }
  end;
{$endif}

