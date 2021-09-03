{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMFileList.h }

{$ifdef TYPES}
type
  DOMFileListPtr = ^DOMFileList;
{$endif}

{$ifdef CLASSES}

type
  DOMFileList = objcclass external (DOMObject)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMFile; message 'item:';
  end;
{$endif}

