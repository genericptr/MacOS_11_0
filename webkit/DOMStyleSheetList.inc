{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMStyleSheetList.h }

{$ifdef TYPES}
type
  DOMStyleSheetListPtr = ^DOMStyleSheetList;
{$endif}

{$ifdef CLASSES}

type
  DOMStyleSheetList = objcclass external (DOMObject)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMStyleSheet; message 'item:';
  end;
{$endif}

