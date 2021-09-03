{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSAccessibilityColor.h }

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

