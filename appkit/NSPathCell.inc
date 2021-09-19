{ Parsed from AppKit.framework NSPathCell.h }

{$ifdef TYPES}
type
  NSPathCellPtr = ^NSPathCell;
  NSPathCellDelegateProtocolPtr = ^NSPathCellDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSPathStyle = NSInteger;
  NSPathStylePtr = ^NSPathStyle;

const
  NSPathStyleStandard = 0;
  NSPathStylePopUp = 2;
  NSPathStyleNavigationBar = 1 deprecated;
{$endif}

{$ifdef CLASSES}

type
  NSPathCell = objcclass external (NSActionCell, NSMenuItemValidationProtocol, NSOpenSavePanelDelegateProtocol)
  public
    procedure setPathStyle(newValue: NSPathStyle); message 'setPathStyle:';
    function pathStyle: NSPathStyle; message 'pathStyle';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setObjectValue (obj: NSCopyingProtocol); message 'setObjectValue:';
    procedure setAllowedTypes(newValue: NSArray); message 'setAllowedTypes:';
    function allowedTypes: NSArray; message 'allowedTypes';
    procedure setDelegate(newValue: NSPathCellDelegateProtocol); message 'setDelegate:';
    function delegate: NSPathCellDelegateProtocol; message 'delegate';
    class function pathComponentCellClass: pobjc_class; message 'pathComponentCellClass';
    procedure setPathComponentCells(newValue: NSArray); message 'setPathComponentCells:';
    function pathComponentCells: NSArray; message 'pathComponentCells';
    function rectOfPathComponentCell_withFrame_inView (cell: NSPathComponentCell; frame: NSRect; view: NSView): NSRect; message 'rectOfPathComponentCell:withFrame:inView:';
    function pathComponentCellAtPoint_withFrame_inView (point: NSPoint; frame: NSRect; view: NSView): NSPathComponentCell; message 'pathComponentCellAtPoint:withFrame:inView:';
    function clickedPathComponentCell: NSPathComponentCell; message 'clickedPathComponentCell';
    procedure mouseEntered_withFrame_inView (event: NSEvent; frame: NSRect; view: NSView); message 'mouseEntered:withFrame:inView:';
    procedure mouseExited_withFrame_inView (event: NSEvent; frame: NSRect; view: NSView); message 'mouseExited:withFrame:inView:';
    procedure setDoubleAction(newValue: SEL); message 'setDoubleAction:';
    function doubleAction: SEL; message 'doubleAction';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setPlaceholderString(newValue: NSString); message 'setPlaceholderString:';
    function placeholderString: NSString; message 'placeholderString';
    procedure setPlaceholderAttributedString(newValue: NSAttributedString); message 'setPlaceholderAttributedString:';
    function placeholderAttributedString: NSAttributedString; message 'placeholderAttributedString';

    { Adopted protocols }
    procedure panel_didChangeToDirectoryURL (sender: id; url: NSURL); message 'panel:didChangeToDirectoryURL:'; { available in macos 10.6 }
    function panel_shouldEnableURL (sender: id; url: NSURL): objcbool; message 'panel:shouldEnableURL:'; { available in macos 10.6 }
    function panel_userEnteredFilename_confirmed (sender: id; filename: NSString; okFlag: objcbool): NSString; message 'panel:userEnteredFilename:confirmed:';
    function panel_validateURL_error (sender: id; url: NSURL; outError: NSErrorPtr): objcbool; message 'panel:validateURL:error:'; { available in macos 10.6 }
    procedure panel_willExpand (sender: id; expanding: objcbool); message 'panel:willExpand:';
    procedure panelSelectionDidChange (sender: id); message 'panelSelectionDidChange:';
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPathCellDelegateProtocol = objcprotocol external name 'NSPathCellDelegate' (NSObjectProtocol)
  optional
    procedure pathCell_willDisplayOpenPanel (pathCell: NSPathCell; openPanel: NSOpenPanel); message 'pathCell:willDisplayOpenPanel:';
    procedure pathCell_willPopUpMenu (pathCell: NSPathCell; menu: NSMenu); message 'pathCell:willPopUpMenu:';
  end;
{$endif}

