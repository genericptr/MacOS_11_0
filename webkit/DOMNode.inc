{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMNode.h }

{$ifdef TYPES}
type
  DOMNodePtr = ^DOMNode;
{$endif}

{$ifdef TYPES}
const
  DOM_ELEMENT_NODE = 1;
  DOM_ATTRIBUTE_NODE = 2;
  DOM_TEXT_NODE = 3;
  DOM_CDATA_SECTION_NODE = 4;
  DOM_ENTITY_REFERENCE_NODE = 5;
  DOM_ENTITY_NODE = 6;
  DOM_PROCESSING_INSTRUCTION_NODE = 7;
  DOM_COMMENT_NODE = 8;
  DOM_DOCUMENT_NODE = 9;
  DOM_DOCUMENT_TYPE_NODE = 10;
  DOM_DOCUMENT_FRAGMENT_NODE = 11;
  DOM_NOTATION_NODE = 12;
  DOM_DOCUMENT_POSITION_DISCONNECTED = $01;
  DOM_DOCUMENT_POSITION_PRECEDING = $02;
  DOM_DOCUMENT_POSITION_FOLLOWING = $04;
  DOM_DOCUMENT_POSITION_CONTAINS = $08;
  DOM_DOCUMENT_POSITION_CONTAINED_BY = $10;
  DOM_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC = $20;
{$endif}

{$ifdef CLASSES}

type
  DOMNode = objcclass external (DOMObject, DOMEventTargetProtocol)
  public
    function nodeName: NSString; message 'nodeName';
    procedure setNodeValue(newValue: NSString); message 'setNodeValue:';
    function nodeValue: NSString; message 'nodeValue';
    function nodeType: cushort; message 'nodeType';
    function parentNode: DOMNode; message 'parentNode';
    function childNodes: DOMNodeList; message 'childNodes';
    function firstChild: DOMNode; message 'firstChild';
    function lastChild: DOMNode; message 'lastChild';
    function previousSibling: DOMNode; message 'previousSibling';
    function nextSibling: DOMNode; message 'nextSibling';
    function ownerDocument: DOMDocument; message 'ownerDocument';
    function namespaceURI: NSString; message 'namespaceURI';
    procedure setPrefix(newValue: NSString); message 'setPrefix:';
    function prefix: NSString; message 'prefix';
    function localName: NSString; message 'localName';
    function attributes: DOMNamedNodeMap; message 'attributes';
    function baseURI: NSString; message 'baseURI'; { available in 10_5 }
    procedure setTextContent(newValue: NSString); message 'setTextContent:'; { available in 10_5 }
    function textContent: NSString; message 'textContent'; { available in 10_5 }
    function parentElement: DOMElement; message 'parentElement'; { available in 10_5 }
    function isContentEditable: objcbool; message 'isContentEditable'; { available in 10_5 }
    function insertBefore_refChild (newChild: DOMNode; refChild: DOMNode): DOMNode; message 'insertBefore:refChild:'; { available in 10_5 }
    function replaceChild_oldChild (newChild: DOMNode; oldChild: DOMNode): DOMNode; message 'replaceChild:oldChild:'; { available in 10_5 }
    function removeChild (oldChild: DOMNode): DOMNode; message 'removeChild:';
    function appendChild (newChild: DOMNode): DOMNode; message 'appendChild:';
    function hasChildNodes: objcbool; message 'hasChildNodes';
    function cloneNode (deep: objcbool): DOMNode; message 'cloneNode:';
    procedure normalize; message 'normalize';
    function isSupported_version (feature: NSString; version: NSString): objcbool; message 'isSupported:version:'; { available in 10_5 }
    function hasAttributes: objcbool; message 'hasAttributes';
    function isSameNode (other: DOMNode): objcbool; message 'isSameNode:'; { available in 10_5 }
    function isEqualNode (other: DOMNode): objcbool; message 'isEqualNode:'; { available in 10_5 }
    function lookupPrefix (namespaceURI_: NSString): NSString; message 'lookupPrefix:'; { available in 10_5 }
    function lookupNamespaceURI (prefix_: NSString): NSString; message 'lookupNamespaceURI:'; { available in 10_5 }
    function isDefaultNamespace (namespaceURI_: NSString): objcbool; message 'isDefaultNamespace:'; { available in 10_5 }
    function compareDocumentPosition (other: DOMNode): cushort; message 'compareDocumentPosition:'; { available in 10_6 }
    function contains (other: DOMNode): objcbool; message 'contains:'; { available in 10_5 }

    { Adopted protocols }
    procedure addEventListener_listener (type_: NSString; useCapture: objcbool); message 'addEventListener:listener:'; deprecated 'in 10_4, 10_5';
    procedure addEventListener_listener_useCapture (type_: NSString; listener: id; useCapture: objcbool); message 'addEventListener:listener:useCapture:'; { available in 10_5 }
    function dispatchEvent (event: DOMEvent): objcbool; message 'dispatchEvent:';
    procedure removeEventListener_listener (type_: NSString; useCapture: objcbool); message 'removeEventListener:listener:'; deprecated 'in 10_4, 10_5';
    procedure removeEventListener_listener_useCapture (type_: NSString; listener: id; useCapture: objcbool); message 'removeEventListener:listener:useCapture:'; { available in 10_5 }
  end;


type
  DOMNodeDeprecated = objccategory external (DOMNode)
    function insertBefore (newChild: DOMNode): DOMNode; message 'insertBefore:'; deprecated 'in 10_4, 10_5';
    function replaceChild (newChild: DOMNode): DOMNode; message 'replaceChild:'; deprecated 'in 10_4, 10_5';
    function isSupported (feature: NSString): objcbool; message 'isSupported:'; deprecated 'in 10_4, 10_5';
  end;
{$endif}

