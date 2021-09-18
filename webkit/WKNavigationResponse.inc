{ Parsed from WebKit.framework WKNavigationResponse.h }

{$ifdef TYPES}
type
  WKNavigationResponsePtr = ^WKNavigationResponse;
{$endif}

{$ifdef CLASSES}

type
  WKNavigationResponse = objcclass external (NSObject)
  public
    function isForMainFrame: objcbool; message 'isForMainFrame';
    function response: NSURLResponse; message 'response';
    function canShowMIMEType: objcbool; message 'canShowMIMEType';
  end;
{$endif}

