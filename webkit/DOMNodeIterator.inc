{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMNodeIterator.h }

{$ifdef TYPES}
type
  DOMNodeIteratorPtr = ^DOMNodeIterator;
{$endif}

{$ifdef CLASSES}

type
  DOMNodeIterator = objcclass external (DOMObject)
  public
    function root: DOMNode; message 'root';
    function whatToShow: cuint; message 'whatToShow';
    function filter: DOMNodeFilterProtocol; message 'filter';
    function expandEntityReferences: objcbool; message 'expandEntityReferences';
    function referenceNode: DOMNode; message 'referenceNode'; { available in 10_5 }
    function pointerBeforeReferenceNode: objcbool; message 'pointerBeforeReferenceNode'; { available in 10_5 }
    function nextNode: DOMNode; message 'nextNode';
    function previousNode: DOMNode; message 'previousNode';
    procedure detach; message 'detach';
  end;
{$endif}

