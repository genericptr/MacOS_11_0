{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTextContent.h }

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
  NSTextContentTypeUsername: NSTextContentType { available in macos  }; cvar; external;
  NSTextContentTypePassword: NSTextContentType { available in macos  }; cvar; external;
  NSTextContentTypeOneTimeCode: NSTextContentType { available in macos  }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextContentProtocol = objcprotocol external name 'NSTextContent'
    procedure setContentType(newValue: NSTextContentType); message 'setContentType:'; { available in macos  }
    function contentType: NSTextContentType; message 'contentType'; { available in macos  }
  end;
{$endif}

