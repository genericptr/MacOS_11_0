{ Parsed from PDFKit.framework PDFOutline.h }

{$ifdef TYPES}
type
  PDFOutlinePtr = ^PDFOutline;
{$endif}

{$ifdef CLASSES}

type
  PDFOutline = objcclass external (NSObject)
  private
    _private: PDFOutlinePrivate;
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function document: PDFDocument; message 'document';
    function parent: PDFOutline; message 'parent'; { available in macos 10.5, ios 11.0 }
    function numberOfChildren: NSUInteger; message 'numberOfChildren';
    function index: NSUInteger; message 'index'; { available in macos 10.5, ios 11.0 }
    function childAtIndex (index_: NSUInteger): PDFOutline; message 'childAtIndex:';
    procedure insertChild_atIndex (child: PDFOutline; index_: NSUInteger); message 'insertChild:atIndex:'; { available in macos 10.5, ios 11.0 }
    procedure removeFromParent; message 'removeFromParent'; { available in macos 10.5, ios 11.0 }
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setIsOpen(newValue: objcbool); message 'setIsOpen:'; { available in macos 10.5, ios 11.0 }
    function isOpen: objcbool; message 'isOpen'; { available in macos 10.5, ios 11.0 }
    procedure setDestination(newValue: PDFDestination); message 'setDestination:';
    function destination: PDFDestination; message 'destination';
    procedure setAction(newValue: PDFAction); message 'setAction:'; { available in macos 10.5, ios 11.0 }
    function action: PDFAction; message 'action'; { available in macos 10.5, ios 11.0 }
  end;
{$endif}

