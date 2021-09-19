{ Parsed from AppKit.framework NSToolbar.h }

{$ifdef TYPES}
type
  NSToolbarPtr = ^NSToolbar;
  NSToolbarDelegateProtocolPtr = ^NSToolbarDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSToolbarIdentifier = NSString { available in ios 13.0 };
  NSToolbarIdentifierPtr = ^NSToolbarIdentifier { available in ios 13.0 };
  NSToolbarItemIdentifier = NSString { available in ios 13.0 };
  NSToolbarItemIdentifierPtr = ^NSToolbarItemIdentifier { available in ios 13.0 };
  NSToolbarDisplayMode = NSUInteger;
  NSToolbarDisplayModePtr = ^NSToolbarDisplayMode;

const
  NSToolbarDisplayModeDefault = 0;
  NSToolbarDisplayModeIconAndLabel = 1;
  NSToolbarDisplayModeIconOnly = 2;
  NSToolbarDisplayModeLabelOnly = 3;

type
  NSToolbarSizeMode = NSUInteger;
  NSToolbarSizeModePtr = ^NSToolbarSizeMode;

const
  NSToolbarSizeModeDefault = 0;
  NSToolbarSizeModeRegular = 1;
  NSToolbarSizeModeSmall = 2;
{$endif}

{$ifdef CLASSES}

type
  NSToolbar = objcclass external (NSObject)
  public
    function initWithIdentifier (identifier: NSToolbarIdentifier): id; message 'initWithIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init'; { available in macos 10.13 }
    procedure insertItemWithItemIdentifier_atIndex (itemIdentifier: NSToolbarItemIdentifier; index: NSInteger); message 'insertItemWithItemIdentifier:atIndex:';
    procedure removeItemAtIndex (index: NSInteger); message 'removeItemAtIndex:';
    procedure setDelegate(newValue: NSToolbarDelegateProtocol); message 'setDelegate:';
    function delegate: NSToolbarDelegateProtocol; message 'delegate';
    procedure setVisible(newValue: objcbool); message 'setVisible:';
    function isVisible: objcbool; message 'isVisible';
    procedure runCustomizationPalette (sender: id); message 'runCustomizationPalette:';
    function customizationPaletteIsRunning: objcbool; message 'customizationPaletteIsRunning';
    procedure setDisplayMode(newValue: NSToolbarDisplayMode); message 'setDisplayMode:';
    function displayMode: NSToolbarDisplayMode; message 'displayMode';
    procedure setSelectedItemIdentifier(newValue: NSToolbarItemIdentifier); message 'setSelectedItemIdentifier:';
    function selectedItemIdentifier: NSToolbarItemIdentifier; message 'selectedItemIdentifier';
    procedure setSizeMode(newValue: NSToolbarSizeMode); message 'setSizeMode:'; { unavailable in ios }
    function sizeMode: NSToolbarSizeMode; message 'sizeMode'; { unavailable in ios }
    procedure setShowsBaselineSeparator(newValue: objcbool); message 'setShowsBaselineSeparator:';
    function showsBaselineSeparator: objcbool; message 'showsBaselineSeparator';
    procedure setAllowsUserCustomization(newValue: objcbool); message 'setAllowsUserCustomization:';
    function allowsUserCustomization: objcbool; message 'allowsUserCustomization';
    function identifier: NSToolbarIdentifier; message 'identifier';
    function items: NSArray; message 'items';
    function visibleItems: NSArray; message 'visibleItems';
    procedure setCenteredItemIdentifier(newValue: NSToolbarItemIdentifier); message 'setCenteredItemIdentifier:'; { available in macos 10.14 }
    function centeredItemIdentifier: NSToolbarItemIdentifier; message 'centeredItemIdentifier'; { available in macos 10.14 }
    procedure setAutosavesConfiguration(newValue: objcbool); message 'setAutosavesConfiguration:';
    function autosavesConfiguration: objcbool; message 'autosavesConfiguration';
    procedure setConfigurationFromDictionary (configDict: NSDictionary); message 'setConfigurationFromDictionary:'; { unavailable in ios }
    function configurationDictionary: NSDictionary; message 'configurationDictionary'; { unavailable in ios }
    procedure validateVisibleItems; message 'validateVisibleItems'; { unavailable in ios }
    procedure setAllowsExtensionItems(newValue: objcbool); message 'setAllowsExtensionItems:'; { unavailable in ios } { available in macos 10.10 }
    function allowsExtensionItems: objcbool; message 'allowsExtensionItems'; { unavailable in ios } { available in macos 10.10 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSToolbarDelegateProtocol = objcprotocol external name 'NSToolbarDelegate' (NSObjectProtocol)
  optional
    function toolbar_itemForItemIdentifier_willBeInsertedIntoToolbar (toolbar: NSToolbar; itemIdentifier: NSToolbarItemIdentifier; flag: objcbool): NSToolbarItem; message 'toolbar:itemForItemIdentifier:willBeInsertedIntoToolbar:';
    function toolbarDefaultItemIdentifiers (toolbar: NSToolbar): NSArray; message 'toolbarDefaultItemIdentifiers:';
    function toolbarAllowedItemIdentifiers (toolbar: NSToolbar): NSArray; message 'toolbarAllowedItemIdentifiers:';
  optional
    function toolbarSelectableItemIdentifiers (toolbar: NSToolbar): NSArray; message 'toolbarSelectableItemIdentifiers:';
    procedure toolbarWillAddItem (notification: NSNotification); message 'toolbarWillAddItem:';
    procedure toolbarDidRemoveItem (notification: NSNotification); message 'toolbarDidRemoveItem:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSToolbarWillAddItemNotification: NSNotificationName { available in ios 13.0 }; cvar; external;
  NSToolbarDidRemoveItemNotification: NSNotificationName { available in ios 13.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSToolbar_NSDeprecated = objccategory external name 'NSDeprecated' (NSToolbar)
    procedure setFullScreenAccessoryView(newValue: NSView); message 'setFullScreenAccessoryView:'; deprecated 'Use NSTitlebarAccessoryViewController with NSWindow instead';
    function fullScreenAccessoryView: NSView; message 'fullScreenAccessoryView'; deprecated 'Use NSTitlebarAccessoryViewController with NSWindow instead';
    procedure setFullScreenAccessoryViewMinHeight(newValue: CGFloat); message 'setFullScreenAccessoryViewMinHeight:'; deprecated 'Use NSTitlebarAccessoryViewController and its fullScreenMinHeight property with NSWindow instead.';
    function fullScreenAccessoryViewMinHeight: CGFloat; message 'fullScreenAccessoryViewMinHeight'; deprecated 'Use NSTitlebarAccessoryViewController and its fullScreenMinHeight property with NSWindow instead.';
    procedure setFullScreenAccessoryViewMaxHeight(newValue: CGFloat); message 'setFullScreenAccessoryViewMaxHeight:'; deprecated 'Use NSTitlebarAccessoryViewController with NSWindow instead. The max height of a titlebar accessory is implied by its view''s height.';
    function fullScreenAccessoryViewMaxHeight: CGFloat; message 'fullScreenAccessoryViewMaxHeight'; deprecated 'Use NSTitlebarAccessoryViewController with NSWindow instead. The max height of a titlebar accessory is implied by its view''s height.';
  end;
{$endif}

