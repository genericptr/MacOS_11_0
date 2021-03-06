{ Parsed from AppKit.framework NSTextField.h }

{ Types from NSTextField }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSTextFieldPtr = ^NSTextField;
  NSTextFieldDelegateProtocolPtr = ^NSTextFieldDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSTextField = objcclass external (NSControl, NSUserInterfaceValidationsProtocol, NSAccessibilityNavigableStaticTextProtocol, NSTextContentProtocol)
  public
    procedure setPlaceholderString(newValue: NSString); message 'setPlaceholderString:'; { available in macos 10.10 }
    function placeholderString: NSString; message 'placeholderString'; { available in macos 10.10 }
    procedure setPlaceholderAttributedString(newValue: NSAttributedString); message 'setPlaceholderAttributedString:'; { available in macos 10.10 }
    function placeholderAttributedString: NSAttributedString; message 'placeholderAttributedString'; { available in macos 10.10 }
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setTextColor(newValue: NSColor); message 'setTextColor:';
    function textColor: NSColor; message 'textColor';
    procedure setBordered(newValue: objcbool); message 'setBordered:';
    function isBordered: objcbool; message 'isBordered';
    procedure setBezeled(newValue: objcbool); message 'setBezeled:';
    function isBezeled: objcbool; message 'isBezeled';
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure setSelectable(newValue: objcbool); message 'setSelectable:';
    function isSelectable: objcbool; message 'isSelectable';
    procedure selectText (sender: id); message 'selectText:';
    procedure setDelegate(newValue: NSTextFieldDelegateProtocol); message 'setDelegate:';
    function delegate: NSTextFieldDelegateProtocol; message 'delegate';
    function textShouldBeginEditing (textObject: NSText): objcbool; message 'textShouldBeginEditing:';
    function textShouldEndEditing (textObject: NSText): objcbool; message 'textShouldEndEditing:';
    procedure textDidBeginEditing (notification: NSNotification); message 'textDidBeginEditing:';
    procedure textDidEndEditing (notification: NSNotification); message 'textDidEndEditing:';
    procedure textDidChange (notification: NSNotification); message 'textDidChange:';
    function acceptsFirstResponder: objcbool; message 'acceptsFirstResponder';
    procedure setBezelStyle(newValue: NSTextFieldBezelStyle); message 'setBezelStyle:';
    function bezelStyle: NSTextFieldBezelStyle; message 'bezelStyle';
    procedure setPreferredMaxLayoutWidth(newValue: CGFloat); message 'setPreferredMaxLayoutWidth:'; { available in macos 10.8 }
    function preferredMaxLayoutWidth: CGFloat; message 'preferredMaxLayoutWidth'; { available in macos 10.8 }
    procedure setMaximumNumberOfLines(newValue: NSInteger); message 'setMaximumNumberOfLines:'; { available in macos 10.11 }
    function maximumNumberOfLines: NSInteger; message 'maximumNumberOfLines'; { available in macos 10.11 }
    procedure setAllowsDefaultTighteningForTruncation(newValue: objcbool); message 'setAllowsDefaultTighteningForTruncation:'; { available in macos 10.11 }
    function allowsDefaultTighteningForTruncation: objcbool; message 'allowsDefaultTighteningForTruncation'; { available in macos 10.11 }
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setLineBreakStrategy(newValue: NSLineBreakStrategy); message 'setLineBreakStrategy:'; { available in macos 10.15 }
    function lineBreakStrategy: NSLineBreakStrategy; message 'lineBreakStrategy'; { available in macos 10.15 }
    {$endif}

    { Adopted protocols }
    function contentType: NSTextContentType; message 'contentType'; { available in macos 11.0 }
    procedure setContentType (newValue: NSTextContentType); message 'setContentType:'; { available in macos 11.0 }
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:';
    function accessibilityValue: NSString; message 'accessibilityValue';
  end;


type
  NSTextField_NSTouchBar = objccategory external name 'NSTouchBar' (NSTextField)
    procedure setAutomaticTextCompletionEnabled(newValue: objcbool); message 'setAutomaticTextCompletionEnabled:'; { available in macos 10.12.2 }
    function isAutomaticTextCompletionEnabled: objcbool; message 'isAutomaticTextCompletionEnabled'; { available in macos 10.12.2 }
    procedure setAllowsCharacterPickerTouchBarItem(newValue: objcbool); message 'setAllowsCharacterPickerTouchBarItem:'; { available in macos 10.12.2 }
    function allowsCharacterPickerTouchBarItem: objcbool; message 'allowsCharacterPickerTouchBarItem'; { available in macos  }
  end;

type
  NSTextFieldConvenience = objccategory external (NSTextField)
    class function labelWithString (stringValue_: NSString): id; message 'labelWithString:'; { available in macos 10.12 }
    class function wrappingLabelWithString (stringValue_: NSString): id; message 'wrappingLabelWithString:'; { available in macos 10.12 }
    class function labelWithAttributedString (attributedStringValue_: NSAttributedString): id; message 'labelWithAttributedString:'; { available in macos 10.12 }
    class function textFieldWithString (stringValue_: NSString): id; message 'textFieldWithString:'; { available in macos  }
  end;

type
  NSTextFieldAttributedStringMethods = objccategory external (NSTextField)
    procedure setAllowsEditingTextAttributes(newValue: objcbool); message 'setAllowsEditingTextAttributes:';
    function allowsEditingTextAttributes: objcbool; message 'allowsEditingTextAttributes';
    procedure setImportsGraphics(newValue: objcbool); message 'setImportsGraphics:';
    function importsGraphics: objcbool; message 'importsGraphics';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextFieldDelegateProtocol = objcprotocol external name 'NSTextFieldDelegate' (NSControlTextEditingDelegateProtocol)
  optional
    function textField_textView_candidatesForSelectedRange (textField: NSTextField; textView: NSTextView; selectedRange: NSRange): NSArray; message 'textField:textView:candidatesForSelectedRange:'; { available in macos 10.12.2 }
    function textField_textView_candidates_forSelectedRange (textField: NSTextField; textView: NSTextView; candidates: NSArray; selectedRange: NSRange): NSArray; message 'textField:textView:candidates:forSelectedRange:'; { available in macos 10.12.2 }
    function textField_textView_shouldSelectCandidateAtIndex (textField: NSTextField; textView: NSTextView; index: NSUInteger): objcbool; message 'textField:textView:shouldSelectCandidateAtIndex:'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSTextField_NSDeprecated = objccategory external name 'NSDeprecated' (NSTextField)
    procedure setTitleWithMnemonic (stringWithAmpersand: NSString); message 'setTitleWithMnemonic:'; deprecated;
  end;
{$endif}

