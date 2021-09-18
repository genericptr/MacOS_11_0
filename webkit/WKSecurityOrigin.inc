{ Parsed from WebKit.framework WKSecurityOrigin.h }

{$ifdef TYPES}
type
  WKSecurityOriginPtr = ^WKSecurityOrigin;
{$endif}

{$ifdef CLASSES}

type
  WKSecurityOrigin = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function protocol: NSString; message 'protocol';
    function host: NSString; message 'host';
    function port: NSInteger; message 'port';
  end;
{$endif}

