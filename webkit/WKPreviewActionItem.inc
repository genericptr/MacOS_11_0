{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKPreviewActionItem.h }

{$ifdef TYPES}
type
  WKPreviewActionItemProtocolPtr = ^WKPreviewActionItemProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef PROTOCOLS}

type
  WKPreviewActionItemProtocol = objcprotocol external name 'WKPreviewActionItem' (UIPreviewActionItemProtocol)
    function identifier: NSString; message 'identifier';
  end;
{$endif}

{$endif}
