{ Parsed from AppKit.framework NSSearchField.h }

{$ifdef TYPES}
type
  NSSearchFieldPtr = ^NSSearchField;
  NSSearchFieldDelegateProtocolPtr = ^NSSearchFieldDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSSearchFieldRecentsAutosaveName = NSString;
  NSSearchFieldRecentsAutosaveNamePtr = ^NSSearchFieldRecentsAutosaveName;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSearchFieldDelegateProtocol = objcprotocol external name 'NSSearchFieldDelegate' (NSTextFieldDelegateProtocol)
  optional
    procedure searchFieldDidStartSearching (sender: NSSearchField); message 'searchFieldDidStartSearching:'; { available in macos 10.11 }
    procedure searchFieldDidEndSearching (sender: NSSearchField); message 'searchFieldDidEndSearching:'; { available in macos 10.11 }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSSearchField = objcclass external (NSTextField)
  public
    function searchTextBounds: NSRect; message 'searchTextBounds'; { available in macos 11.0 }
    function searchButtonBounds: NSRect; message 'searchButtonBounds'; { available in macos 11.0 }
    function cancelButtonBounds: NSRect; message 'cancelButtonBounds'; { available in macos 11.0 }
    procedure setRecentSearches(newValue: NSArray); message 'setRecentSearches:';
    function recentSearches: NSArray; message 'recentSearches';
    procedure setRecentsAutosaveName(newValue: NSSearchFieldRecentsAutosaveName); message 'setRecentsAutosaveName:';
    function recentsAutosaveName: NSSearchFieldRecentsAutosaveName; message 'recentsAutosaveName';
    procedure setSearchMenuTemplate(newValue: NSMenu); message 'setSearchMenuTemplate:'; { available in macos 10.10 }
    function searchMenuTemplate: NSMenu; message 'searchMenuTemplate'; { available in macos 10.10 }
    procedure setSendsWholeSearchString(newValue: objcbool); message 'setSendsWholeSearchString:'; { available in macos 10.10 }
    function sendsWholeSearchString: objcbool; message 'sendsWholeSearchString'; { available in macos 10.10 }
    procedure setMaximumRecents(newValue: NSInteger); message 'setMaximumRecents:'; { available in macos 10.10 }
    function maximumRecents: NSInteger; message 'maximumRecents'; { available in macos 10.10 }
    procedure setSendsSearchStringImmediately(newValue: objcbool); message 'setSendsSearchStringImmediately:'; { available in macos 10.10 }
    function sendsSearchStringImmediately: objcbool; message 'sendsSearchStringImmediately'; { available in macos 10.10 }
    procedure setDelegate(newValue: NSSearchFieldDelegateProtocol); message 'setDelegate:'; { available in macos 10.11 }
    function delegate: NSSearchFieldDelegateProtocol; message 'delegate'; { available in macos 10.11 }
  end;


type
  NSSearchField_Deprecated = objccategory external (NSSearchField)
    function rectForSearchTextWhenCentered (isCentered: objcbool): NSRect; message 'rectForSearchTextWhenCentered:'; deprecated 'replace with searchTextBounds';
    function rectForSearchButtonWhenCentered (isCentered: objcbool): NSRect; message 'rectForSearchButtonWhenCentered:'; deprecated 'replace with searchButtonBounds';
    function rectForCancelButtonWhenCentered (isCentered: objcbool): NSRect; message 'rectForCancelButtonWhenCentered:'; deprecated 'replace with cancelButtonBounds';
    procedure setCentersPlaceholder(newValue: objcbool); message 'setCentersPlaceholder:'; deprecated 'The placeholder centering UI design is no longer available. Setting this property is no-op.';
    function centersPlaceholder: objcbool; message 'centersPlaceholder'; deprecated 'The placeholder centering UI design is no longer available. Setting this property is no-op.';
  end;
{$endif}

