{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMNodeList.h }

{$ifdef TYPES}
type
  DOMNodeListPtr = ^DOMNodeList;
{$endif}

{$ifdef CLASSES}

type
  DOMNodeList = objcclass external (DOMObject)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMNode; message 'item:';
  end;
{$endif}

