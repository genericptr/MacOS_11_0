{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMFile.h }

{$ifdef TYPES}
type
  DOMFilePtr = ^DOMFile;
{$endif}

{$ifdef CLASSES}

type
  DOMFile = objcclass external (DOMBlob)
  public
    function name: NSString; message 'name';
  end;
{$endif}

