{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSComboBox.h }

{$ifdef TYPES}
type
  NSComboBoxPtr = ^NSComboBox;
  NSComboBoxDataSourceProtocolPtr = ^NSComboBoxDataSourceProtocol;
  NSComboBoxDelegateProtocolPtr = ^NSComboBoxDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSComboBoxWillPopUpNotification: NSNotificationName; cvar; external;
  NSComboBoxWillDismissNotification: NSNotificationName; cvar; external;
  NSComboBoxSelectionDidChangeNotification: NSNotificationName; cvar; external;
  NSComboBoxSelectionIsChangingNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSComboBoxDataSourceProtocol = objcprotocol external name 'NSComboBoxDataSource' (NSObjectProtocol)
  optional
    function numberOfItemsInComboBox (comboBox: NSComboBox): NSInteger; message 'numberOfItemsInComboBox:';
    function comboBox_objectValueForItemAtIndex (comboBox: NSComboBox; index: NSInteger): id; message 'comboBox:objectValueForItemAtIndex:';
    function comboBox_indexOfItemWithStringValue (comboBox: NSComboBox; string_: NSString): NSUInteger; message 'comboBox:indexOfItemWithStringValue:';
    function comboBox_completedString (comboBox: NSComboBox; string_: NSString): NSString; message 'comboBox:completedString:';
  end;

type
  NSComboBoxDelegateProtocol = objcprotocol external name 'NSComboBoxDelegate' (NSTextFieldDelegateProtocol)
  optional
    procedure comboBoxWillPopUp (notification: NSNotification); message 'comboBoxWillPopUp:';
    procedure comboBoxWillDismiss (notification: NSNotification); message 'comboBoxWillDismiss:';
    procedure comboBoxSelectionDidChange (notification: NSNotification); message 'comboBoxSelectionDidChange:';
    procedure comboBoxSelectionIsChanging (notification: NSNotification); message 'comboBoxSelectionIsChanging:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSComboBox = objcclass external (NSTextField)
  public
    procedure setHasVerticalScroller(newValue: objcbool); message 'setHasVerticalScroller:';
    function hasVerticalScroller: objcbool; message 'hasVerticalScroller';
    procedure setIntercellSpacing(newValue: NSSize); message 'setIntercellSpacing:';
    function intercellSpacing: NSSize; message 'intercellSpacing';
    procedure setItemHeight(newValue: CGFloat); message 'setItemHeight:';
    function itemHeight: CGFloat; message 'itemHeight';
    procedure setNumberOfVisibleItems(newValue: NSInteger); message 'setNumberOfVisibleItems:';
    function numberOfVisibleItems: NSInteger; message 'numberOfVisibleItems';
    procedure setButtonBordered(newValue: objcbool); message 'setButtonBordered:';
    function isButtonBordered: objcbool; message 'isButtonBordered';
    procedure reloadData; message 'reloadData';
    procedure noteNumberOfItemsChanged; message 'noteNumberOfItemsChanged';
    procedure setUsesDataSource(newValue: objcbool); message 'setUsesDataSource:';
    function usesDataSource: objcbool; message 'usesDataSource';
    procedure scrollItemAtIndexToTop (index: NSInteger); message 'scrollItemAtIndexToTop:';
    procedure scrollItemAtIndexToVisible (index: NSInteger); message 'scrollItemAtIndexToVisible:';
    procedure selectItemAtIndex (index: NSInteger); message 'selectItemAtIndex:';
    procedure deselectItemAtIndex (index: NSInteger); message 'deselectItemAtIndex:';
    function indexOfSelectedItem: NSInteger; message 'indexOfSelectedItem';
    function numberOfItems: NSInteger; message 'numberOfItems';
    procedure setCompletes(newValue: objcbool); message 'setCompletes:';
    function completes: objcbool; message 'completes';
    procedure setDelegate(newValue: NSComboBoxDelegateProtocol); message 'setDelegate:';
    function delegate: NSComboBoxDelegateProtocol; message 'delegate';
    procedure setDataSource(newValue: NSComboBoxDataSourceProtocol); message 'setDataSource:';
    function dataSource: NSComboBoxDataSourceProtocol; message 'dataSource';
    procedure addItemWithObjectValue (object_: id); message 'addItemWithObjectValue:';
    procedure addItemsWithObjectValues (objects: NSArray); message 'addItemsWithObjectValues:';
    procedure insertItemWithObjectValue_atIndex (object_: id; index: NSInteger); message 'insertItemWithObjectValue:atIndex:';
    procedure removeItemWithObjectValue (object_: id); message 'removeItemWithObjectValue:';
    procedure removeItemAtIndex (index: NSInteger); message 'removeItemAtIndex:';
    procedure removeAllItems; message 'removeAllItems';
    procedure selectItemWithObjectValue (object_: id); message 'selectItemWithObjectValue:';
    function itemObjectValueAtIndex (index: NSInteger): id; message 'itemObjectValueAtIndex:';
    function objectValueOfSelectedItem: id; message 'objectValueOfSelectedItem';
    function indexOfItemWithObjectValue (object_: id): NSInteger; message 'indexOfItemWithObjectValue:';
    function objectValues: NSArray; message 'objectValues';
  end;
{$endif}

