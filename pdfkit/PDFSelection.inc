{ Parsed from PDFKit.framework PDFSelection.h }

{$ifdef TYPES}
type
  PDFSelectionPtr = ^PDFSelection;
{$endif}

{$ifdef CLASSES}

type
  PDFSelection = objcclass external (NSObject, NSCopyingProtocol)
  private
    _private: PDFSelectionPrivate;
  public
    function initWithDocument (document: PDFDocument): id; message 'initWithDocument:'; { available in 10_5, 11_0 }
    function pages: NSArray; message 'pages';
    procedure setColor(newValue: PDFKitPlatformColorPtr); message 'setColor:'; { available in 10_5, 11_0 }
    function color: PDFKitPlatformColorPtr; message 'color'; { available in 10_5, 11_0 }
    function string_: NSString; message 'string';
    function attributedString: NSAttributedString; message 'attributedString';
    function boundsForPage (page: PDFPage): PDFRect; message 'boundsForPage:';
    function numberOfTextRangesOnPage (page: PDFPage): NSUInteger; message 'numberOfTextRangesOnPage:'; { available in 10_7, 11_0 }
    function rangeAtIndex_onPage (index: NSUInteger; page: PDFPage): NSRange; message 'rangeAtIndex:onPage:'; { available in 10_7, 11_0 }
    function selectionsByLine: NSArray; message 'selectionsByLine'; { available in 10_5, 11_0 }
    procedure addSelection (selection: PDFSelection); message 'addSelection:';
    procedure addSelections (selections: NSArray); message 'addSelections:'; { available in 10_5, 11_0 }
    procedure extendSelectionAtEnd (succeed: NSInteger); message 'extendSelectionAtEnd:';
    procedure extendSelectionAtStart (precede: NSInteger); message 'extendSelectionAtStart:';
    procedure extendSelectionForLineBoundaries; message 'extendSelectionForLineBoundaries'; { available in 10_13, 11_0 }
    procedure drawForPage_active (page: PDFPage; active: objcbool); message 'drawForPage:active:';
    procedure drawForPage_withBox_active (page: PDFPage; box: PDFDisplayBox; active: objcbool); message 'drawForPage:withBox:active:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

