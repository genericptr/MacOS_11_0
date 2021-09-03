{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKStorefront.h }

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

