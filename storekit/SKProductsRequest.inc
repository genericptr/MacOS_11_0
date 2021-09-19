{ Parsed from StoreKit.framework SKProductsRequest.h }

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
    procedure productsRequest_didReceiveResponse (request: SKProductsRequest; response: SKProductsResponse); message 'productsRequest:didReceiveResponse:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
  end;
{$endif}

{$ifdef CLASSES}

type
  SKProductsRequest = objcclass external (SKRequest)
  private
    _productsRequestInternal: id;
  public
    function initWithProductIdentifiers (productIdentifiers: NSSet): id; message 'initWithProductIdentifiers:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    procedure setDelegate(newValue: SKProductsRequestDelegateProtocol); message 'setDelegate:'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function delegate: SKProductsRequestDelegateProtocol; message 'delegate'; { available in ios 3.0, macos 10.7, watchos 6.2 }
  end;

type
  SKProductsResponse = objcclass external (NSObject)
  private
    _internal: id;
  public
    function products: NSArray; message 'products'; { available in ios 3.0, macos 10.7, watchos 6.2 }
    function invalidProductIdentifiers: NSArray; message 'invalidProductIdentifiers'; { available in ios 3.0, macos 10.7, watchos 6.2 }
  end;
{$endif}

