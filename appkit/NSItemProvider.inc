{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSItemProvider.h }
{$ifdef CLASSES}

type
  NSItemSourceInfo = objccategory external (NSItemProvider)
    function sourceFrame: NSRect; message 'sourceFrame'; { available in macos  }
    function containerFrame: NSRect; message 'containerFrame'; { available in macos  }
    function preferredPresentationSize: NSSize; message 'preferredPresentationSize'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTypeIdentifierDateText: NSString { available in 10_10, 8_0 }; cvar; external;
  NSTypeIdentifierAddressText: NSString { available in 10_10, 8_0 }; cvar; external;
  NSTypeIdentifierPhoneNumberText: NSString { available in 10_10, 8_0 }; cvar; external;
  NSTypeIdentifierTransitInformationText: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

