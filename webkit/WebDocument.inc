{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebDocument.h }

{$ifdef TYPES}
type
  WebDocumentViewProtocolPtr = ^WebDocumentViewProtocol;
  WebDocumentSearchingProtocolPtr = ^WebDocumentSearchingProtocol;
  WebDocumentTextProtocolPtr = ^WebDocumentTextProtocol;
  WebDocumentRepresentationProtocolPtr = ^WebDocumentRepresentationProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  WebDocumentViewProtocol = objcprotocol external name 'WebDocumentView' (NSObjectProtocol)
    procedure setDataSource (dataSource: WebDataSource); message 'setDataSource:';
    procedure dataSourceUpdated (dataSource: WebDataSource); message 'dataSourceUpdated:';
    procedure setNeedsLayout (flag: objcbool); message 'setNeedsLayout:';
    procedure layout; message 'layout';
    procedure viewWillMoveToHostWindow (hostWindow: NSWindowPtr); message 'viewWillMoveToHostWindow:';
    procedure viewDidMoveToHostWindow; message 'viewDidMoveToHostWindow';
  end;

type
  WebDocumentSearchingProtocol = objcprotocol external name 'WebDocumentSearching' (NSObjectProtocol)
    function searchFor_direction_caseSensitive_wrap (string_: NSString; forward: objcbool; caseFlag: objcbool; wrapFlag: objcbool): objcbool; message 'searchFor:direction:caseSensitive:wrap:';
  end;

type
  WebDocumentTextProtocol = objcprotocol external name 'WebDocumentText' (NSObjectProtocol)
    function supportsTextEncoding: objcbool; message 'supportsTextEncoding';
    function string_: NSString; message 'string';
    function attributedString: NSAttributedString; message 'attributedString';
    function selectedString: NSString; message 'selectedString';
    function selectedAttributedString: NSAttributedString; message 'selectedAttributedString';
    procedure selectAll; message 'selectAll';
    procedure deselectAll; message 'deselectAll';
  end;

type
  WebDocumentRepresentationProtocol = objcprotocol external name 'WebDocumentRepresentation' (NSObjectProtocol)
    procedure setDataSource (dataSource: WebDataSource); message 'setDataSource:';
    procedure receivedData_withDataSource (data: NSData; dataSource: WebDataSource); message 'receivedData:withDataSource:';
    procedure receivedError_withDataSource (error: NSError; dataSource: WebDataSource); message 'receivedError:withDataSource:';
    procedure finishedLoadingWithDataSource (dataSource: WebDataSource); message 'finishedLoadingWithDataSource:';
    function canProvideDocumentSource: objcbool; message 'canProvideDocumentSource';
    function documentSource: NSString; message 'documentSource';
    function title: NSString; message 'title';
  end;
{$endif}

