{ Parsed from StoreKit.framework SKStorefront.h }

{$ifdef TYPES}
type
  SKStorefrontPtr = ^SKStorefront;
{$endif}

{$ifdef CLASSES}

type
  SKStorefront = objcclass external (NSObject)
  public
    function countryCode: NSString; message 'countryCode'; { available in ios , macos , watchos  }
    function identifier: NSString; message 'identifier'; { available in ios , macos , watchos  }
  end;
{$endif}

