{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSXMLDocument.h }

{ Types from NSXMLDocument }
{$ifdef TYPES}





{$endif}


{$ifdef TYPES}
type
  NSXMLDocumentPtr = ^NSXMLDocument;
{$endif}

{$ifdef TYPES}
type
  NSXMLDocumentContentKind = NSUInteger;
  NSXMLDocumentContentKindPtr = ^NSXMLDocumentContentKind;

const
  NSXMLDocumentXMLKind = 0;
  NSXMLDocumentXHTMLKind = 1;
  NSXMLDocumentHTMLKind = 2;
  NSXMLDocumentTextKind = 3;
{$endif}

{$ifdef CLASSES}

type
  NSXMLDocument = objcclass external (NSXMLNode)
  private
    _encoding: NSString;
    _version: NSString;
    _docType: NSXMLDTD;
    _children: NSArray;
    _childrenHaveMutated: objcbool;
    _standalone: objcbool;
    padding:array[0..1] of cint8;
    _rootElement: NSXMLElement;
    _URI: NSString;
    _extraIvars: id;
    _fidelityMask: NSUInteger;
    _contentKind: NSXMLDocumentContentKind;
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithXMLString_options_error (string_: NSString; mask: NSXMLNodeOptions; error: NSErrorPtr): id; message 'initWithXMLString:options:error:';
    function initWithContentsOfURL_options_error (url: NSURL; mask: NSXMLNodeOptions; error: NSErrorPtr): id; message 'initWithContentsOfURL:options:error:';
    function initWithData_options_error (data: NSData; mask: NSXMLNodeOptions; error: NSErrorPtr): id; message 'initWithData:options:error:'; { NS_DESIGNATED_INITIALIZER }
    function initWithRootElement (element: NSXMLElement): id; message 'initWithRootElement:'; { NS_DESIGNATED_INITIALIZER }
    class function replacementClassForClass (cls: pobjc_class): pobjc_class; message 'replacementClassForClass:';
    procedure setCharacterEncoding(newValue: NSString); message 'setCharacterEncoding:';
    function characterEncoding: NSString; message 'characterEncoding';
    procedure setVersion(newValue: NSString); message 'setVersion:';
    function version: NSString; message 'version';
    procedure setStandalone(newValue: objcbool); message 'setStandalone:';
    function isStandalone: objcbool; message 'isStandalone';
    procedure setDocumentContentKind(newValue: NSXMLDocumentContentKind); message 'setDocumentContentKind:';
    function documentContentKind: NSXMLDocumentContentKind; message 'documentContentKind';
    procedure setMIMEType(newValue: NSString); message 'setMIMEType:';
    function MIMEType: NSString; message 'MIMEType';
    procedure setDTD(newValue: NSXMLDTD); message 'setDTD:';
    function DTD: NSXMLDTD; message 'DTD';
    procedure setRootElement (root: NSXMLElement); message 'setRootElement:';
    function rootElement: NSXMLElement; message 'rootElement';
    procedure insertChild_atIndex (child: NSXMLNode; index_: NSUInteger); message 'insertChild:atIndex:';
    procedure insertChildren_atIndex (children_: NSArray; index_: NSUInteger); message 'insertChildren:atIndex:';
    procedure removeChildAtIndex (index_: NSUInteger); message 'removeChildAtIndex:';
    procedure setChildren (children_: NSArray); message 'setChildren:';
    procedure addChild (child: NSXMLNode); message 'addChild:';
    procedure replaceChildAtIndex_withNode (index_: NSUInteger; node: NSXMLNode); message 'replaceChildAtIndex:withNode:';
    function XMLData: NSData; message 'XMLData';
    function XMLDataWithOptions (options: NSXMLNodeOptions): NSData; message 'XMLDataWithOptions:';
    function objectByApplyingXSLT_arguments_error (xslt: NSData; arguments: NSDictionary; error: NSErrorPtr): id; message 'objectByApplyingXSLT:arguments:error:';
    function objectByApplyingXSLTString_arguments_error (xslt: NSString; arguments: NSDictionary; error: NSErrorPtr): id; message 'objectByApplyingXSLTString:arguments:error:';
    function objectByApplyingXSLTAtURL_arguments_error (xsltURL: NSURL; argument: NSDictionary; error: NSErrorPtr): id; message 'objectByApplyingXSLTAtURL:arguments:error:';
    function validateAndReturnError (error: NSErrorPtr): objcbool; message 'validateAndReturnError:';
  end;
{$endif}

