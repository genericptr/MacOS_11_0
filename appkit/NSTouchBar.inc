{ Parsed from AppKit.framework NSTouchBar.h }

{$ifdef TYPES}
type
  NSTouchBarPtr = ^NSTouchBar;
  NSTouchBarDelegateProtocolPtr = ^NSTouchBarDelegateProtocol;
  NSTouchBarProviderProtocolPtr = ^NSTouchBarProviderProtocol;
{$endif}

{$ifdef TYPES}
type
  NSTouchBarCustomizationIdentifier = NSString { available in ios 13.0 };
  NSTouchBarCustomizationIdentifierPtr = ^NSTouchBarCustomizationIdentifier { available in ios 13.0 };
{$endif}

{$ifdef CLASSES}

type
  NSTouchBar = objcclass external (NSObject, NSCodingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setCustomizationIdentifier(newValue: NSTouchBarCustomizationIdentifier); message 'setCustomizationIdentifier:';
    function customizationIdentifier: NSTouchBarCustomizationIdentifier; message 'customizationIdentifier';
    procedure setCustomizationAllowedItemIdentifiers(newValue: NSArray); message 'setCustomizationAllowedItemIdentifiers:';
    function customizationAllowedItemIdentifiers: NSArray; message 'customizationAllowedItemIdentifiers';
    procedure setCustomizationRequiredItemIdentifiers(newValue: NSArray); message 'setCustomizationRequiredItemIdentifiers:';
    function customizationRequiredItemIdentifiers: NSArray; message 'customizationRequiredItemIdentifiers';
    procedure setDefaultItemIdentifiers(newValue: NSArray); message 'setDefaultItemIdentifiers:';
    function defaultItemIdentifiers: NSArray; message 'defaultItemIdentifiers';
    function itemIdentifiers: NSArray; message 'itemIdentifiers';
    procedure setPrincipalItemIdentifier(newValue: NSTouchBarItemIdentifier); message 'setPrincipalItemIdentifier:';
    function principalItemIdentifier: NSTouchBarItemIdentifier; message 'principalItemIdentifier';
    procedure setEscapeKeyReplacementItemIdentifier(newValue: NSTouchBarItemIdentifier); message 'setEscapeKeyReplacementItemIdentifier:';
    function escapeKeyReplacementItemIdentifier: NSTouchBarItemIdentifier; message 'escapeKeyReplacementItemIdentifier';
    procedure setTemplateItems(newValue: NSSet); message 'setTemplateItems:';
    function templateItems: NSSet; message 'templateItems';
    procedure setDelegate(newValue: NSTouchBarDelegateProtocol); message 'setDelegate:';
    function delegate: NSTouchBarDelegateProtocol; message 'delegate';
    function itemForIdentifier (identifier: NSTouchBarItemIdentifier): NSTouchBarItem; message 'itemForIdentifier:';
    function isVisible: objcbool; message 'isVisible';
    class procedure setAutomaticCustomizeTouchBarMenuItemEnabled(newValue: objcbool); message 'setAutomaticCustomizeTouchBarMenuItemEnabled:'; { available in macos 10.15, ios 13.0 }
    class function isAutomaticCustomizeTouchBarMenuItemEnabled: objcbool; message 'isAutomaticCustomizeTouchBarMenuItemEnabled'; { available in macos 10.15, ios 13.0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTouchBarDelegateProtocol = objcprotocol external name 'NSTouchBarDelegate' (NSObjectProtocol)
  optional
    function touchBar_makeItemForIdentifier (touchBar: NSTouchBar; identifier: NSTouchBarItemIdentifier): NSTouchBarItem; message 'touchBar:makeItemForIdentifier:';
  end;

type
  NSTouchBarProviderProtocol = objcprotocol external name 'NSTouchBarProvider' (NSObjectProtocol)
  required
    function touchBar: NSTouchBar; message 'touchBar'; { available in macos 10.12.2 }
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSTouchBarProvider = objccategory external (NSResponder)
    procedure setTouchBar(newValue: NSTouchBar); message 'setTouchBar:'; { available in macos 10.12.2 }
    function touchBar: NSTouchBar; message 'touchBar'; { available in macos 10.12.2 }
    function makeTouchBar: NSTouchBar; message 'makeTouchBar'; { available in macos 10.12.2 }
  end;

type
  NSTouchBarCustomization = objccategory external (NSApplication)
    procedure setAutomaticCustomizeTouchBarMenuItemEnabled(newValue: objcbool); message 'setAutomaticCustomizeTouchBarMenuItemEnabled:'; { available in macos 10.12.2 }
    function isAutomaticCustomizeTouchBarMenuItemEnabled: objcbool; message 'isAutomaticCustomizeTouchBarMenuItemEnabled'; { available in macos 10.12.2 }
    procedure toggleTouchBarCustomizationPalette (sender: id); message 'toggleTouchBarCustomizationPalette:'; { available in macos 10.12.2 }
  end;
{$endif}

{$endif}
