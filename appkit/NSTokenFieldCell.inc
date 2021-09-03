{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTokenFieldCell.h }

{$ifdef TYPES}
type
  NSTokenFieldCellPtr = ^NSTokenFieldCell;
  NSTokenFieldCellDelegateProtocolPtr = ^NSTokenFieldCellDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSTokenStyle = NSUInteger;
  NSTokenStylePtr = ^NSTokenStyle;

const
  NSTokenStyleDefault = 0;
  NSTokenStyleNone = 1;
  NSTokenStyleRounded = 2;
  NSTokenStyleSquared = 3 { available in macos  };
  NSTokenStylePlainSquared = 4 { available in macos  };
{$endif}

{$ifdef CLASSES}

type
  NSTokenFieldCell = objcclass external (NSTextFieldCell)
  public
    procedure setTokenStyle(newValue: NSTokenStyle); message 'setTokenStyle:';
    function tokenStyle: NSTokenStyle; message 'tokenStyle';
    procedure setCompletionDelay(newValue: NSTimeInterval); message 'setCompletionDelay:';
    function completionDelay: NSTimeInterval; message 'completionDelay';
    class function defaultCompletionDelay: NSTimeInterval; message 'defaultCompletionDelay';
    procedure setTokenizingCharacterSet(newValue: NSCharacterSet); message 'setTokenizingCharacterSet:';
    function tokenizingCharacterSet: NSCharacterSet; message 'tokenizingCharacterSet';
    class function defaultTokenizingCharacterSet: NSCharacterSet; message 'defaultTokenizingCharacterSet';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTokenFieldCellDelegateProtocol = objcprotocol external name 'NSTokenFieldCellDelegate' (NSObjectProtocol)
  optional
    function tokenFieldCell_completionsForSubstring_indexOfToken_indexOfSelectedItem (tokenFieldCell: NSTokenFieldCell; substring: NSString; tokenIndex: NSInteger; selectedIndex: NSIntegerPtr): NSArray; message 'tokenFieldCell:completionsForSubstring:indexOfToken:indexOfSelectedItem:';
    function tokenFieldCell_shouldAddObjects_atIndex (tokenFieldCell: NSTokenFieldCell; tokens: NSArray; index: NSUInteger): NSArray; message 'tokenFieldCell:shouldAddObjects:atIndex:';
    function tokenFieldCell_displayStringForRepresentedObject (tokenFieldCell: NSTokenFieldCell; representedObject: id): NSString; message 'tokenFieldCell:displayStringForRepresentedObject:';
    function tokenFieldCell_editingStringForRepresentedObject (tokenFieldCell: NSTokenFieldCell; representedObject: id): NSString; message 'tokenFieldCell:editingStringForRepresentedObject:';
    function tokenFieldCell_representedObjectForEditingString (tokenFieldCell: NSTokenFieldCell; editingString: NSString): id; message 'tokenFieldCell:representedObjectForEditingString:';
    function tokenFieldCell_writeRepresentedObjects_toPasteboard (tokenFieldCell: NSTokenFieldCell; objects: NSArray; pboard: NSPasteboard): objcbool; message 'tokenFieldCell:writeRepresentedObjects:toPasteboard:';
    function tokenFieldCell_readFromPasteboard (tokenFieldCell: NSTokenFieldCell; pboard: NSPasteboard): NSArray; message 'tokenFieldCell:readFromPasteboard:';
    function tokenFieldCell_menuForRepresentedObject (tokenFieldCell: NSTokenFieldCell; representedObject: id): NSMenu; message 'tokenFieldCell:menuForRepresentedObject:';
    function tokenFieldCell_hasMenuForRepresentedObject (tokenFieldCell: NSTokenFieldCell; representedObject: id): objcbool; message 'tokenFieldCell:hasMenuForRepresentedObject:';
    function tokenFieldCell_styleForRepresentedObject (tokenFieldCell: NSTokenFieldCell; representedObject: id): NSTokenStyle; message 'tokenFieldCell:styleForRepresentedObject:';
  end;
{$endif}

{$ifdef TYPES}
const
  NSDefaultTokenStyle = NSTokenStyleDefault deprecated 'replace with NSTokenStyleDefault';
  NSPlainTextTokenStyle = NSTokenStyleNone deprecated 'replace with NSTokenStyleNone';
  NSRoundedTokenStyle = NSTokenStyleRounded deprecated 'replace with NSTokenStyleRounded';
{$endif}

