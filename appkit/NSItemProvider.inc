{ Parsed from AppKit.framework NSItemProvider.h }
{$ifdef CLASSES}

type
  NSItemSourceInfo = objccategory external (NSItemProvider)
    function sourceFrame: NSRect; message 'sourceFrame'; { available in macos 10.10 }
    function containerFrame: NSRect; message 'containerFrame'; { available in macos 10.10 }
    function preferredPresentationSize: NSSize; message 'preferredPresentationSize'; { available in macos 10.10 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTypeIdentifierDateText: NSString { available in macos 10.10, ios 8.0 }; cvar; external;
  NSTypeIdentifierAddressText: NSString { available in macos 10.10, ios 8.0 }; cvar; external;
  NSTypeIdentifierPhoneNumberText: NSString { available in macos 10.10, ios 8.0 }; cvar; external;
  NSTypeIdentifierTransitInformationText: NSString { available in macos 10.10, ios 8.0 }; cvar; external;
{$endif}

