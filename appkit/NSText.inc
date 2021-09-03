{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSText.h }

{ Types from NSText }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSTextPtr = ^NSText;
  NSTextDelegateProtocolPtr = ^NSTextDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  NSTextAlignment = NSInteger;
  NSTextAlignmentPtr = ^NSTextAlignment;

const
  NSTextAlignmentLeft = 0;
  {$if defined(TARGET_ABI_USES_IOS_VALUES)}
  NSTextAlignmentCenter = 1;
  NSTextAlignmentRight = 2;
  {$else}
  NSTextAlignmentRight = 1;
  NSTextAlignmentCenter = 2;
  {$endif}
  NSTextAlignmentJustified = 3;
  NSTextAlignmentNatural = 4;

type
  NSWritingDirection = NSInteger;
  NSWritingDirectionPtr = ^NSWritingDirection;

const
  NSWritingDirectionNatural = -1;
  NSWritingDirectionLeftToRight = 0;
  NSWritingDirectionRightToLeft = 1;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSText = objcclass external (NSView, NSChangeSpellingProtocol, NSIgnoreMisspelledWordsProtocol)
  public
    function initWithFrame (frameRect: NSRect): id; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setString(newValue: NSString); message 'setString:';
    function string_: NSString; message 'string';
    procedure replaceCharactersInRange_withString (range: NSRange; string_: NSString); message 'replaceCharactersInRange:withString:';
    procedure replaceCharactersInRange_withRTF (range: NSRange; rtfData: NSData); message 'replaceCharactersInRange:withRTF:';
    procedure replaceCharactersInRange_withRTFD (range: NSRange; rtfdData: NSData); message 'replaceCharactersInRange:withRTFD:';
    function RTFFromRange (range: NSRange): NSData; message 'RTFFromRange:';
    function RTFDFromRange (range: NSRange): NSData; message 'RTFDFromRange:';
    function writeRTFDToFile_atomically (path: NSString; flag: objcbool): objcbool; message 'writeRTFDToFile:atomically:';
    function readRTFDFromFile (path: NSString): objcbool; message 'readRTFDFromFile:';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure setSelectable(newValue: objcbool); message 'setSelectable:';
    function isSelectable: objcbool; message 'isSelectable';
    procedure setRichText(newValue: objcbool); message 'setRichText:';
    function isRichText: objcbool; message 'isRichText';
    procedure setImportsGraphics(newValue: objcbool); message 'setImportsGraphics:';
    function importsGraphics: objcbool; message 'importsGraphics';
    procedure setFieldEditor(newValue: objcbool); message 'setFieldEditor:';
    function isFieldEditor: objcbool; message 'isFieldEditor';
    procedure setUsesFontPanel(newValue: objcbool); message 'setUsesFontPanel:';
    function usesFontPanel: objcbool; message 'usesFontPanel';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    function isRulerVisible: objcbool; message 'isRulerVisible';
    procedure setSelectedRange(newValue: NSRange); message 'setSelectedRange:';
    function selectedRange: NSRange; message 'selectedRange';
    procedure scrollRangeToVisible (range: NSRange); message 'scrollRangeToVisible:';
    procedure setFont(newValue: NSFont); message 'setFont:';
    function font: NSFont; message 'font';
    procedure setTextColor(newValue: NSColor); message 'setTextColor:';
    function textColor: NSColor; message 'textColor';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setAlignment(newValue: NSTextAlignment); message 'setAlignment:';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setBaseWritingDirection(newValue: NSWritingDirection); message 'setBaseWritingDirection:';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    {$endif}
    procedure setTextColor_range (color: NSColor; range: NSRange); message 'setTextColor:range:';
    procedure setFont_range (font_: NSFont; range: NSRange); message 'setFont:range:';
    procedure setMaxSize(newValue: NSSize); message 'setMaxSize:';
    function maxSize: NSSize; message 'maxSize';
    procedure setMinSize(newValue: NSSize); message 'setMinSize:';
    function minSize: NSSize; message 'minSize';
    procedure setHorizontallyResizable(newValue: objcbool); message 'setHorizontallyResizable:';
    function isHorizontallyResizable: objcbool; message 'isHorizontallyResizable';
    procedure setVerticallyResizable(newValue: objcbool); message 'setVerticallyResizable:';
    function isVerticallyResizable: objcbool; message 'isVerticallyResizable';
    procedure sizeToFit; message 'sizeToFit';
    procedure copy (sender: id); message 'copy:';
    procedure copyFont (sender: id); message 'copyFont:';
    procedure copyRuler (sender: id); message 'copyRuler:';
    procedure cut (sender: id); message 'cut:';
    procedure delete (sender: id); message 'delete:';
    procedure paste (sender: id); message 'paste:';
    procedure pasteFont (sender: id); message 'pasteFont:';
    procedure pasteRuler (sender: id); message 'pasteRuler:';
    procedure selectAll (sender: id); message 'selectAll:';
    procedure changeFont (sender: id); message 'changeFont:';
    procedure alignLeft (sender: id); message 'alignLeft:';
    procedure alignRight (sender: id); message 'alignRight:';
    procedure alignCenter (sender: id); message 'alignCenter:';
    procedure subscript (sender: id); message 'subscript:';
    procedure superscript (sender: id); message 'superscript:';
    procedure underline (sender: id); message 'underline:';
    procedure unscript (sender: id); message 'unscript:';
    procedure showGuessPanel (sender: id); message 'showGuessPanel:';
    procedure checkSpelling (sender: id); message 'checkSpelling:';
    procedure toggleRuler (sender: id); message 'toggleRuler:';

    { Adopted protocols }
    procedure changeSpelling (sender: id); message 'changeSpelling:';
    procedure ignoreSpelling (sender: id); message 'ignoreSpelling:';
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  NSEnterCharacter = $0003;
  NSBackspaceCharacter = $0008;
  NSTabCharacter = $0009;
  NSNewlineCharacter = $000a;
  NSFormFeedCharacter = $000c;
  NSCarriageReturnCharacter = $000d;
  NSBackTabCharacter = $0019;
  NSDeleteCharacter = $007f;
  NSLineSeparatorCharacter = $2028;
  NSParagraphSeparatorCharacter = $2029;

type
  NSTextMovement = NSInteger;
  NSTextMovementPtr = ^NSTextMovement;

const
  NSTextMovementReturn = $10;
  NSTextMovementTab = $11;
  NSTextMovementBacktab = $12;
  NSTextMovementLeft = $13;
  NSTextMovementRight = $14;
  NSTextMovementUp = $15;
  NSTextMovementDown = $16;
  NSTextMovementCancel = $17;
  NSTextMovementOther = 0;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextDidBeginEditingNotification: NSNotificationName; cvar; external;
  NSTextDidEndEditingNotification: NSNotificationName; cvar; external;
  NSTextDidChangeNotification: NSNotificationName; cvar; external;
  NSTextMovementUserInfoKey: NSString { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  NSIllegalTextMovement = 0;
  NSReturnTextMovement = $10;
  NSTabTextMovement = $11;
  NSBacktabTextMovement = $12;
  NSLeftTextMovement = $13;
  NSRightTextMovement = $14;
  NSUpTextMovement = $15;
  NSDownTextMovement = $16;
  NSCancelTextMovement = $17;
  NSOtherTextMovement = 0;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextDelegateProtocol = objcprotocol external name 'NSTextDelegate' (NSObjectProtocol)
  optional
    function textShouldBeginEditing (textObject: NSText): objcbool; message 'textShouldBeginEditing:';
    function textShouldEndEditing (textObject: NSText): objcbool; message 'textShouldEndEditing:';
    procedure textDidBeginEditing (notification: NSNotification); message 'textDidBeginEditing:';
    procedure textDidEndEditing (notification: NSNotification); message 'textDidEndEditing:';
    procedure textDidChange (notification: NSNotification); message 'textDidChange:';
  end;
{$endif}

{$ifdef TYPES}
const
  NSTextWritingDirectionEmbedding = 0 shl 1 deprecated 'Use NSWritingDirectionEmbedding instead';
  NSTextWritingDirectionOverride = 1 shl 1 deprecated 'Use NSWritingDirectionOverride instead';

const
  NSLeftTextAlignment = NSTextAlignmentLeft deprecated 'replace with NSTextAlignmentLeft';
  NSRightTextAlignment = NSTextAlignmentRight deprecated 'replace with NSTextAlignmentRight';
  NSCenterTextAlignment = NSTextAlignmentCenter deprecated 'replace with NSTextAlignmentCenter';
  NSJustifiedTextAlignment = NSTextAlignmentJustified deprecated 'replace with NSTextAlignmentJustified';
  NSNaturalTextAlignment = NSTextAlignmentNatural deprecated 'replace with NSTextAlignmentNatural';
{$endif}

{$endif}

{$else}
{$endif}
