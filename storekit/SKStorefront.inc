{ Parsed from StoreKit.framework SKStorefront.h }

{$ifdef TYPES}
type
  SKStorefrontPtr = ^SKStorefront;
{$endif}

{$ifdef CLASSES}

type
  SKStorefront = objcclass external (NSObject)
  public
    function countryCode: NSString; message 'countryCode'; { available in ios 13.0, macos 10.15, watchos 6.2 }
    function identifier: NSString; message 'identifier'; { available in ios 13.0, macos 10.15, watchos 6.2 }
  end;
{$endif}

