{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMHTMLOptionsCollection.h }

{$ifdef TYPES}
type
  DOMHTMLOptionsCollectionPtr = ^DOMHTMLOptionsCollection;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLOptionsCollection = objcclass external (DOMObject)
  public
    procedure setSelectedIndex(newValue: cint); message 'setSelectedIndex:'; { available in 10_5 }
    function selectedIndex: cint; message 'selectedIndex'; { available in 10_5 }
    procedure setLength(newValue: cuint); message 'setLength:';
    function length: cuint; message 'length';
    function namedItem (name: NSString): DOMNode; message 'namedItem:';
    procedure add_index (option: DOMHTMLOptionElement; index: cuint); message 'add:index:'; { available in 10_5 }
    procedure remove (index: cuint); message 'remove:'; { available in 10_6 }
    function item (index: cuint): DOMNode; message 'item:';
  end;
{$endif}
