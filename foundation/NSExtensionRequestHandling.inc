{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSExtensionRequestHandling.h }

{$ifdef TYPES}
type
  NSExtensionRequestHandlingProtocolPtr = ^NSExtensionRequestHandlingProtocol;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef PROTOCOLS}

type
  NSExtensionRequestHandlingProtocol = objcprotocol external name 'NSExtensionRequestHandling' (NSObjectProtocol)
  required
    procedure beginRequestWithExtensionContext (context: NSExtensionContext); message 'beginRequestWithExtensionContext:';
  end;
{$endif}

{$endif}
