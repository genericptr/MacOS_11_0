{ Parsed from AppKit.framework NSFormCell.h }

{ Types from NSFormCell }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSFormCellPtr = ^NSFormCell;
{$endif}

{$ifdef CLASSES}

type
  NSFormCell = objcclass external (NSActionCell)
  public
    function initTextCell (string_: NSString): id; message 'initTextCell:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initImageCell (image_: NSImage): id; message 'initImageCell:';
    function titleWidth (size: NSSize): CGFloat; message 'titleWidth:';
    procedure setTitleWidth(newValue: CGFloat); message 'setTitleWidth:';
    function titleWidth_: CGFloat; message 'titleWidth';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setTitleFont(newValue: NSFont); message 'setTitleFont:';
    function titleFont: NSFont; message 'titleFont';
    function isOpaque: objcbool; message 'isOpaque';
    procedure setPlaceholderString(newValue: NSString); message 'setPlaceholderString:';
    function placeholderString: NSString; message 'placeholderString';
    procedure setPlaceholderAttributedString(newValue: NSAttributedString); message 'setPlaceholderAttributedString:';
    function placeholderAttributedString: NSAttributedString; message 'placeholderAttributedString';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setTitleAlignment(newValue: NSTextAlignment); message 'setTitleAlignment:';
    function titleAlignment: NSTextAlignment; message 'titleAlignment';
    procedure setTitleBaseWritingDirection(newValue: NSWritingDirection); message 'setTitleBaseWritingDirection:';
    function titleBaseWritingDirection: NSWritingDirection; message 'titleBaseWritingDirection';
    {$endif}
    procedure setPreferredTextFieldWidth(newValue: CGFloat); message 'setPreferredTextFieldWidth:'; { available in macos 10.8 }
    function preferredTextFieldWidth: CGFloat; message 'preferredTextFieldWidth'; { available in macos 10.8 }
  end;


type
  NSKeyboardUI = objccategory external (NSFormCell)
    procedure setTitleWithMnemonic (stringWithAmpersand: NSString); message 'setTitleWithMnemonic:'; deprecated;
  end;

type
  NSFormCellAttributedStringMethods = objccategory external (NSFormCell)
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:';
    function attributedTitle: NSAttributedString; message 'attributedTitle';
  end;
{$endif}

