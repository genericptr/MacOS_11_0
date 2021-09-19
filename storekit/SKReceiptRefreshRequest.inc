{ Parsed from StoreKit.framework SKReceiptRefreshRequest.h }

{$ifdef TYPES}
type
  SKReceiptRefreshRequestPtr = ^SKReceiptRefreshRequest;
{$endif}

{$ifdef CLASSES}

type
  SKReceiptRefreshRequest = objcclass external (SKRequest)
  private
    _properties: NSDictionary;
  public
    function initWithReceiptProperties (properties: NSDictionary): id; message 'initWithReceiptProperties:'; { available in ios 7.0, macos 10.9, watchos 6.2 }
    function receiptProperties: NSDictionary; message 'receiptProperties'; { available in ios 7.0, macos 10.9, watchos 6.2 }
  end;
{$endif}

{$ifdef FUNCTIONS}
function SKTerminateForInvalidReceipt: pointer; cdecl; external; { available in ios 7.1, macos 10.14, watchos 6.2 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SKReceiptPropertyIsExpired: NSString { available in ios 7.0, macos 10.9, watchos 6.2 }; cvar; external;
  SKReceiptPropertyIsRevoked: NSString { available in ios 7.0, macos 10.9, watchos 6.2 }; cvar; external;
  SKReceiptPropertyIsVolumePurchase: NSString { available in ios 7.0, macos 10.9, watchos 6.2 }; cvar; external;
{$endif}

