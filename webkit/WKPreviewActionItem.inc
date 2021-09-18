{ Parsed from WebKit.framework WKPreviewActionItem.h }

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
