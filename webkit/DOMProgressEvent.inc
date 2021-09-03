{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMProgressEvent.h }

{$ifdef TYPES}
type
  DOMProgressEventPtr = ^DOMProgressEvent;
{$endif}

{$ifdef CLASSES}

type
  DOMProgressEvent = objcclass external (DOMEvent)
  public
    function lengthComputable: objcbool; message 'lengthComputable';
    function loaded: culonglong; message 'loaded';
    function total: culonglong; message 'total';
  end;
{$endif}

