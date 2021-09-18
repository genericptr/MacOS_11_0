{ Parsed from AppKit.framework NSBox.h }

{$ifdef TYPES}
type
  NSBoxPtr = ^NSBox;
{$endif}

{$ifdef TYPES}
type
  NSTitlePosition = NSUInteger;
  NSTitlePositionPtr = ^NSTitlePosition;

const
  NSNoTitle = 0;
  NSAboveTop = 1;
  NSAtTop = 2;
  NSBelowTop = 3;
  NSAboveBottom = 4;
  NSAtBottom = 5;
  NSBelowBottom = 6;

type
  NSBoxType = NSUInteger;
  NSBoxTypePtr = ^NSBoxType;

const
  NSBoxPrimary = 0;
  NSBoxSeparator = 2;
  NSBoxCustom = 4 { available in macos  };
{$endif}

{$ifdef CLASSES}

type
  NSBox = objcclass external (NSView)
  public
    procedure setBoxType(newValue: NSBoxType); message 'setBoxType:';
    function boxType: NSBoxType; message 'boxType';
    procedure setTitlePosition(newValue: NSTitlePosition); message 'setTitlePosition:';
    function titlePosition: NSTitlePosition; message 'titlePosition';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setTitleFont(newValue: NSFont); message 'setTitleFont:';
    function titleFont: NSFont; message 'titleFont';
    function borderRect: NSRect; message 'borderRect';
    function titleRect: NSRect; message 'titleRect';
    function titleCell: id; message 'titleCell';
    procedure setContentViewMargins(newValue: NSSize); message 'setContentViewMargins:';
    function contentViewMargins: NSSize; message 'contentViewMargins';
    procedure sizeToFit; message 'sizeToFit';
    procedure setFrameFromContentFrame (contentFrame: NSRect); message 'setFrameFromContentFrame:';
    procedure setContentView(newValue: NSView); message 'setContentView:';
    function contentView: NSView; message 'contentView';
    procedure setTransparent(newValue: objcbool); message 'setTransparent:'; { available in macos  }
    function isTransparent: objcbool; message 'isTransparent'; { available in macos  }
    procedure setBorderWidth(newValue: CGFloat); message 'setBorderWidth:'; { available in macos  }
    function borderWidth: CGFloat; message 'borderWidth'; { available in macos  }
    procedure setCornerRadius(newValue: CGFloat); message 'setCornerRadius:'; { available in macos  }
    function cornerRadius: CGFloat; message 'cornerRadius'; { available in macos  }
    procedure setBorderColor(newValue: NSColor); message 'setBorderColor:'; { available in macos  }
    function borderColor: NSColor; message 'borderColor'; { available in macos  }
    procedure setFillColor(newValue: NSColor); message 'setFillColor:'; { available in macos  }
    function fillColor: NSColor; message 'fillColor'; { available in macos  }
  end;


type
  NSBox_NSDeprecated = objccategory external name 'NSDeprecated' (NSBox)
    procedure setBorderType(newValue: NSBorderType); message 'setBorderType:'; deprecated 'borderType is only applicable to NSBoxOldStyle, which is deprecated. To replace a borderType of NSNoBorder, use the `transparent` property.';
    function borderType: NSBorderType; message 'borderType'; deprecated 'borderType is only applicable to NSBoxOldStyle, which is deprecated. To replace a borderType of NSNoBorder, use the `transparent` property.';
    procedure setTitleWithMnemonic (stringWithAmpersand: NSString); message 'setTitleWithMnemonic:'; deprecated;
  end;
{$endif}

{$ifdef TYPES}
const
  NSBoxSecondary = 1 deprecated 'replace with NSBoxPrimary';
  NSBoxOldStyle = 3 deprecated 'NSBoxOldStyle is discouraged in modern application design. It should be replaced with either NSBoxPrimary or NSBoxCustom.';
{$endif}

