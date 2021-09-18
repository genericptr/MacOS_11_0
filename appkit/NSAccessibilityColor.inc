{ Parsed from AppKit.framework NSAccessibilityColor.h }

{$ifdef TYPES}
type
  NSAccessibilityColorProtocolPtr = ^NSAccessibilityColorProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSAccessibilityColorProtocol = objcprotocol external name 'NSAccessibilityColor'
  required
    function accessibilityName: NSString; message 'accessibilityName';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSAccessibilityColorConformance = objccategory external (NSColor)
  end;
{$endif}

