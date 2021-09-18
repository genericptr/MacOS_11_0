{ Parsed from AppKit.framework NSForm.h }

{ Types from NSForm }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSFormPtr = ^NSForm;
{$endif}

{$ifdef CLASSES}

type
  NSForm = objcclass external (NSMatrix)
  public
    function indexOfSelectedItem: NSInteger; message 'indexOfSelectedItem';
    procedure setEntryWidth (width: CGFloat); message 'setEntryWidth:';
    procedure setInterlineSpacing (spacing: CGFloat); message 'setInterlineSpacing:';
    procedure setBordered (flag: objcbool); message 'setBordered:';
    procedure setBezeled (flag: objcbool); message 'setBezeled:';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setTitleAlignment (mode_: NSTextAlignment); message 'setTitleAlignment:';
    procedure setTextAlignment (mode_: NSTextAlignment); message 'setTextAlignment:';
    {$endif}
    procedure setTitleFont (fontObj: NSFont); message 'setTitleFont:';
    procedure setTextFont (fontObj: NSFont); message 'setTextFont:';
    function cellAtIndex (index: NSInteger): id; message 'cellAtIndex:';
    procedure drawCellAtIndex (index: NSInteger); message 'drawCellAtIndex:';
    function addEntry (title: NSString): NSFormCell; message 'addEntry:';
    function insertEntry_atIndex (title: NSString; index: NSInteger): NSFormCell; message 'insertEntry:atIndex:';
    procedure removeEntryAtIndex (index: NSInteger); message 'removeEntryAtIndex:';
    function indexOfCellWithTag (tag_: NSInteger): NSInteger; message 'indexOfCellWithTag:';
    procedure selectTextAtIndex (index: NSInteger); message 'selectTextAtIndex:';
    procedure setFrameSize (newSize: NSSize); message 'setFrameSize:';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setTitleBaseWritingDirection (writingDirection: NSWritingDirection); message 'setTitleBaseWritingDirection:';
    procedure setTextBaseWritingDirection (writingDirection: NSWritingDirection); message 'setTextBaseWritingDirection:';
    {$endif}
    procedure setPreferredTextFieldWidth (preferredWidth: CGFloat); message 'setPreferredTextFieldWidth:'; { available in macos  }
    function preferredTextFieldWidth: CGFloat; message 'preferredTextFieldWidth'; { available in macos  }
  end;
{$endif}

