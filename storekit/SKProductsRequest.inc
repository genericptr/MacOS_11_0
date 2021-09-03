{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKProductsRequest.h }

{$ifdef TYPES}
type
  SKProductsRequestPtr = ^SKProductsRequest;
  SKProductsResponsePtr = ^SKProductsResponse;
  SKProductsRequestDelegateProtocolPtr = ^SKProductsRequestDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SKProductsRequestDelegateProtocol = objcprotocol external name 'SKProductsRequestDelegate' (SKRequestDelegateProtocol)
  required
    procedure productsRequest_didReceiveResponse (request: SKProductsRequest; response: SKProductsResponse); message 'productsRequest:didReceiveResponse:'; { available in ios , macos , watchos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  SKProductsRequest = objcclass external (SKRequest)
  private
    _productsRequestInternal: id;
  public
    function initWithProductIdentifiers (productIdentifiers: NSSet): id; message 'initWithProductIdentifiers:'; { available in ios , macos , watchos  }
    procedure setDelegate(newValue: id); message 'setDelegate:'; { available in ios , macos , watchos  }
    function delegate: id; message 'delegate'; { available in ios , macos , watchos  }
  end;

type
  SKProductsResponse = objcclass external (NSObject)
  private
    _internal: id;
  public
    function products: NSArray; message 'products'; { available in ios , macos , watchos  }
    function invalidProductIdentifiers: NSArray; message 'invalidProductIdentifiers'; { available in ios , macos , watchos  }
  end;
{$endif}

