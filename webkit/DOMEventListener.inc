{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMEventListener.h }

{$ifdef TYPES}
type
  DOMEventListenerProtocolPtr = ^DOMEventListenerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  DOMEventListenerProtocol = objcprotocol external name 'DOMEventListener' (NSObjectProtocol)
    procedure handleEvent (event: DOMEvent); message 'handleEvent:';
  end;
{$endif}

