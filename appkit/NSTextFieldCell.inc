{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTextFieldCell.h }

{$ifdef TYPES}
type
  NSTextFieldCellPtr = ^NSTextFieldCell;
{$endif}

{$ifdef TYPES}
type
  NSTextFieldBezelStyle = NSUInteger;
  NSTextFieldBezelStylePtr = ^NSTextFieldBezelStyle;

const
  NSTextFieldSquareBezel = 0;
  NSTextFieldRoundedBezel = 1;
{$endif}

{$ifdef CLASSES}

type
  NSTextFieldCell = objcclass external (NSActionCell)
  public
    function initTextCell (string_: NSString): id; message 'initTextCell:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initImageCell (image_: NSImage): id; message 'initImageCell:';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setTextColor(newValue: NSColor); message 'setTextColor:';
    function textColor: NSColor; message 'textColor';
    function setUpFieldEditorAttributes (textObj: NSText): NSText; message 'setUpFieldEditorAttributes:';
    procedure setBezelStyle(newValue: NSTextFieldBezelStyle); message 'setBezelStyle:';
    function bezelStyle: NSTextFieldBezelStyle; message 'bezelStyle';
    procedure setPlaceholderString(newValue: NSString); message 'setPlaceholderString:';
    function placeholderString: NSString; message 'placeholderString';
    procedure setPlaceholderAttributedString(newValue: NSAttributedString); message 'setPlaceholderAttributedString:';
    function placeholderAttributedString: NSAttributedString; message 'placeholderAttributedString';
    procedure setWantsNotificationForMarkedText (flag: objcbool); message 'setWantsNotificationForMarkedText:'; { available in macos  }
    procedure setAllowedInputSourceLocales(newValue: NSArray); message 'setAllowedInputSourceLocales:'; { available in macos  }
    function allowedInputSourceLocales: NSArray; message 'allowedInputSourceLocales'; { available in macos  }
  end;
{$endif}

