{ Parsed from Foundation.framework NSExtensionRequestHandling.h }

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
