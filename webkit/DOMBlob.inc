{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMBlob.h }

{$ifdef TYPES}
type
  DOMBlobPtr = ^DOMBlob;
{$endif}

{$ifdef CLASSES}

type
  DOMBlob = objcclass external (DOMObject)
  public
    function size: culonglong; message 'size';
  end;
{$endif}

