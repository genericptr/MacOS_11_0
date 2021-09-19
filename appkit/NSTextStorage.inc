{ Parsed from AppKit.framework NSTextStorage.h }

{$ifdef TYPES}
type
  NSTextStoragePtr = ^NSTextStorage;
  NSTextStorageDelegateProtocolPtr = ^NSTextStorageDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  NSTextStorageEditActions = NSUInteger;
  NSTextStorageEditActionsPtr = ^NSTextStorageEditActions;

const
  NSTextStorageEditedAttributes = 1 shl 0 { available in macos 10.0, ios 7.0, tvos 9.0 };
  NSTextStorageEditedCharacters = 1 shl 1 { available in macos 10.0, ios 7.0, tvos 9.0 };
{$endif}

{$ifdef CLASSES}

type
  NSTextStorage = objcclass external (NSMutableAttributedString, NSSecureCodingProtocol)
  public
    function layoutManagers: NSArray; message 'layoutManagers';
    procedure addLayoutManager (aLayoutManager: NSLayoutManager); message 'addLayoutManager:';
    procedure removeLayoutManager (aLayoutManager: NSLayoutManager); message 'removeLayoutManager:';
    function editedMask: NSTextStorageEditActions; message 'editedMask';
    function editedRange: NSRange; message 'editedRange';
    function changeInLength: NSInteger; message 'changeInLength';
    procedure setDelegate(newValue: NSTextStorageDelegateProtocol); message 'setDelegate:';
    function delegate: NSTextStorageDelegateProtocol; message 'delegate';
    procedure edited_range_changeInLength (editedMask_: NSTextStorageEditActions; editedRange_: NSRange; delta: NSInteger); message 'edited:range:changeInLength:';
    procedure processEditing; message 'processEditing';
    function fixesAttributesLazily: objcbool; message 'fixesAttributesLazily';
    procedure invalidateAttributesInRange (range: NSRange); message 'invalidateAttributesInRange:';
    procedure ensureAttributesAreFixedInRange (range: NSRange); message 'ensureAttributesAreFixedInRange:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextStorageDelegateProtocol = objcprotocol external name 'NSTextStorageDelegate' (NSObjectProtocol)
  optional
    procedure textStorage_willProcessEditing_range_changeInLength (textStorage: NSTextStorage; editedMask: NSTextStorageEditActions; editedRange: NSRange; delta: NSInteger); message 'textStorage:willProcessEditing:range:changeInLength:'; { available in macos 10.11, ios 7.0, tvos 9.0 }
    procedure textStorage_didProcessEditing_range_changeInLength (textStorage: NSTextStorage; editedMask: NSTextStorageEditActions; editedRange: NSRange; delta: NSInteger); message 'textStorage:didProcessEditing:range:changeInLength:'; { available in macos 10.11, ios 7.0, tvos 9.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextStorageWillProcessEditingNotification: NSNotificationName { available in macos 10.0, ios 7.0, tvos 9.0 }; cvar; external;
  NSTextStorageDidProcessEditingNotification: NSNotificationName { available in macos 10.0, ios 7.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSTextStorageEditedOptions = NSUInteger;
  NSTextStorageEditedOptionsPtr = ^NSTextStorageEditedOptions;
{$endif}

{$ifdef CLASSES}

type
  NSDeprecatedTextStorageDelegateInterface = objccategory external (NSObject)
    procedure textStorageWillProcessEditing (notification: NSNotification); message 'textStorageWillProcessEditing:'; deprecated 'Use -textStorage:willProcessEditing:range:changeInLength: instead.';
    procedure textStorageDidProcessEditing (notification: NSNotification); message 'textStorageDidProcessEditing:'; deprecated 'Use -textStorage:didProcessEditing:range:changeInLength: instead.';
  end;
{$endif}

{$endif}

{$else}
{$endif}
