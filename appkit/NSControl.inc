{ Parsed from AppKit.framework NSControl.h }

{ Types from NSControl }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSControlPtr = ^NSControl;
  NSControlTextEditingDelegateProtocolPtr = ^NSControlTextEditingDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSControl = objcclass external (NSView)
  public
    function initWithFrame (frameRect: NSRect): id; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
    procedure setIgnoresMultiClick(newValue: objcbool); message 'setIgnoresMultiClick:';
    function ignoresMultiClick: objcbool; message 'ignoresMultiClick';
    procedure setContinuous(newValue: objcbool); message 'setContinuous:';
    function isContinuous: objcbool; message 'isContinuous';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure setRefusesFirstResponder(newValue: objcbool); message 'setRefusesFirstResponder:';
    function refusesFirstResponder: objcbool; message 'refusesFirstResponder';
    procedure setHighlighted(newValue: objcbool); message 'setHighlighted:'; { available in macos  }
    function isHighlighted: objcbool; message 'isHighlighted'; { available in macos  }
    procedure setControlSize(newValue: NSControlSize); message 'setControlSize:'; { available in macos  }
    function controlSize: NSControlSize; message 'controlSize'; { available in macos  }
    procedure setFormatter(newValue: NSFormatter); message 'setFormatter:';
    function formatter: NSFormatter; message 'formatter';
    procedure setObjectValue(newValue: id); message 'setObjectValue:';
    function objectValue: id; message 'objectValue';
    procedure setStringValue(newValue: NSString); message 'setStringValue:';
    function stringValue: NSString; message 'stringValue';
    procedure setAttributedStringValue(newValue: NSAttributedString); message 'setAttributedStringValue:';
    function attributedStringValue: NSAttributedString; message 'attributedStringValue';
    procedure setIntValue(newValue: cint); message 'setIntValue:';
    function intValue: cint; message 'intValue';
    procedure setIntegerValue(newValue: NSInteger); message 'setIntegerValue:';
    function integerValue: NSInteger; message 'integerValue';
    procedure setFloatValue(newValue: single); message 'setFloatValue:';
    function floatValue: single; message 'floatValue';
    procedure setDoubleValue(newValue: double); message 'setDoubleValue:';
    function doubleValue: double; message 'doubleValue';
    function sizeThatFits (size: NSSize): NSSize; message 'sizeThatFits:'; { available in macos  }
    procedure sizeToFit; message 'sizeToFit';
    function sendActionOn (mask: NSEventMask): NSInteger; message 'sendActionOn:';
    function sendAction_to (action_: SEL; target_: id): objcbool; message 'sendAction:to:';
    procedure takeIntValueFrom (sender: id); message 'takeIntValueFrom:';
    procedure takeFloatValueFrom (sender: id); message 'takeFloatValueFrom:';
    procedure takeDoubleValueFrom (sender: id); message 'takeDoubleValueFrom:';
    procedure takeStringValueFrom (sender: id); message 'takeStringValueFrom:';
    procedure takeObjectValueFrom (sender: id); message 'takeObjectValueFrom:';
    procedure takeIntegerValueFrom (sender: id); message 'takeIntegerValueFrom:'; { available in macos  }
    procedure mouseDown (event: NSEvent); message 'mouseDown:';
    procedure performClick (sender: id); message 'performClick:';
    procedure setFont(newValue: NSFont); message 'setFont:';
    function font: NSFont; message 'font';
    procedure setUsesSingleLineMode(newValue: objcbool); message 'setUsesSingleLineMode:'; { available in macos  }
    function usesSingleLineMode: objcbool; message 'usesSingleLineMode'; { available in macos  }
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:'; { available in macos  }
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode'; { available in macos  }
    procedure setAlignment(newValue: NSTextAlignment); message 'setAlignment:';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setBaseWritingDirection(newValue: NSWritingDirection); message 'setBaseWritingDirection:';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    {$endif}
    procedure setAllowsExpansionToolTips(newValue: objcbool); message 'setAllowsExpansionToolTips:'; { available in macos  }
    function allowsExpansionToolTips: objcbool; message 'allowsExpansionToolTips'; { available in macos  }
    function expansionFrameWithFrame (contentFrame: NSRect): NSRect; message 'expansionFrameWithFrame:'; { available in macos  }
    procedure drawWithExpansionFrame_inView (contentFrame: NSRect; view: NSView); message 'drawWithExpansionFrame:inView:'; { available in macos  }
  end;


type
  NSControlEditableTextMethods = objccategory external (NSControl)
    function currentEditor: NSText; message 'currentEditor';
    function abortEditing: objcbool; message 'abortEditing';
    procedure validateEditing; message 'validateEditing';
    procedure editWithFrame_editor_delegate_event (rect: NSRect; textObj: NSText; delegate: id; event: NSEvent); message 'editWithFrame:editor:delegate:event:'; { available in macos  }
    procedure selectWithFrame_editor_delegate_start_length (rect: NSRect; textObj: NSText; delegate: id; selStart: NSInteger; selLength: NSInteger); message 'selectWithFrame:editor:delegate:start:length:'; { available in macos  }
    procedure endEditing (textObj: NSText); message 'endEditing:'; { available in macos  }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSControlTextEditingDelegateProtocol = objcprotocol external name 'NSControlTextEditingDelegate' (NSObjectProtocol)
  optional
    procedure controlTextDidBeginEditing (obj: NSNotification); message 'controlTextDidBeginEditing:';
    procedure controlTextDidEndEditing (obj: NSNotification); message 'controlTextDidEndEditing:';
    procedure controlTextDidChange (obj: NSNotification); message 'controlTextDidChange:';
    function control_textShouldBeginEditing (control: NSControl; fieldEditor: NSText): objcbool; message 'control:textShouldBeginEditing:';
    function control_textShouldEndEditing (control: NSControl; fieldEditor: NSText): objcbool; message 'control:textShouldEndEditing:';
    function control_didFailToFormatString_errorDescription (control: NSControl; string_: NSString; error: NSString): objcbool; message 'control:didFailToFormatString:errorDescription:';
    procedure control_didFailToValidatePartialString_errorDescription (control: NSControl; string_: NSString; error: NSString); message 'control:didFailToValidatePartialString:errorDescription:';
    function control_isValidObject (control: NSControl; obj: id): objcbool; message 'control:isValidObject:';
    function control_textView_doCommandBySelector (control: NSControl; textView: NSTextView; commandSelector: SEL): objcbool; message 'control:textView:doCommandBySelector:';
    function control_textView_completions_forPartialWordRange_indexOfSelectedItem (control: NSControl; textView: NSTextView; words: NSArray; charRange: NSRange; index: NSIntegerPtr): NSArray; message 'control:textView:completions:forPartialWordRange:indexOfSelectedItem:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSControlTextDidBeginEditingNotification: NSNotificationName; cvar; external;
  NSControlTextDidEndEditingNotification: NSNotificationName; cvar; external;
  NSControlTextDidChangeNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSControl_NSDeprecated = objccategory external name 'NSDeprecated' (NSControl)
    procedure setFloatingPointFormat_left_right (autoRange: objcbool; leftDigits: NSUInteger; rightDigits: NSUInteger); message 'setFloatingPointFormat:left:right:'; deprecated;
    class procedure setCellClass(newValue: pobjc_class); message 'setCellClass:';
    class function cellClass: pobjc_class; message 'cellClass';
    procedure setCell(newValue: NSCell); message 'setCell:';
    function cell: NSCell; message 'cell';
    function selectedCell: NSCell; message 'selectedCell';
    function selectedTag: NSInteger; message 'selectedTag';
    procedure setNeedsDisplay; message 'setNeedsDisplay'; deprecated 'Set the needsDisplay property to YES instead';
    procedure calcSize; message 'calcSize'; deprecated 'Override -layout instead. This method should never be called';
    procedure updateCell (cell_: NSCell); message 'updateCell:';
    procedure updateCellInside (cell_: NSCell); message 'updateCellInside:';
    procedure drawCellInside (cell_: NSCell); message 'drawCellInside:';
    procedure drawCell (cell_: NSCell); message 'drawCell:';
    procedure selectCell (cell_: NSCell); message 'selectCell:';
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSControlSubclassNotifications = objccategory external (NSObject)
    procedure controlTextDidBeginEditing (obj: NSNotification); message 'controlTextDidBeginEditing:'; deprecated 'This is now an optional method of the NSControlTextEditingDelegate protocol.';
    procedure controlTextDidEndEditing (obj: NSNotification); message 'controlTextDidEndEditing:'; deprecated 'This is now an optional method of the NSControlTextEditingDelegate protocol.';
    procedure controlTextDidChange (obj: NSNotification); message 'controlTextDidChange:'; deprecated 'This is now an optional method of the NSControlTextEditingDelegate protocol.';
  end;
{$endif}

{$endif}
