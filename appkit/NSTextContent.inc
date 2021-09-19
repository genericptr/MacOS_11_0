{ Parsed from AppKit.framework NSTextContent.h }

{$ifdef TYPES}
type
  NSTextContentProtocolPtr = ^NSTextContentProtocol;
{$endif}

{$ifdef TYPES}
type
  NSTextContentType = NSString;
  NSTextContentTypePtr = ^NSTextContentType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextContentTypeUsername: NSTextContentType { available in macos 11.0 }; cvar; external;
  NSTextContentTypePassword: NSTextContentType { available in macos 11.0 }; cvar; external;
  NSTextContentTypeOneTimeCode: NSTextContentType { available in macos 11.0 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextContentProtocol = objcprotocol external name 'NSTextContent'
    procedure setContentType(newValue: NSTextContentType); message 'setContentType:'; { available in macos 11.0 }
    function contentType: NSTextContentType; message 'contentType'; { available in macos 11.0 }
  end;
{$endif}

