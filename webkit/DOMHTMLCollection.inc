{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLCollection.h }

{$ifdef TYPES}
type
  DOMHTMLCollectionPtr = ^DOMHTMLCollection;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLCollection = objcclass external (DOMObject)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMNode; message 'item:';
    function namedItem (name: NSString): DOMNode; message 'namedItem:';
    function tags (name: NSString): DOMNodeList; message 'tags:'; { available in 10_6 }
  end;
{$endif}

