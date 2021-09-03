{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSearchField.h }

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
    procedure searchFieldDidStartSearching (sender: NSSearchField); message 'searchFieldDidStartSearching:'; { available in macos  }
    procedure searchFieldDidEndSearching (sender: NSSearchField); message 'searchFieldDidEndSearching:'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSSearchField = objcclass external (NSTextField)
  public
    function searchTextBounds: NSRect; message 'searchTextBounds'; { available in macos  }
    function searchButtonBounds: NSRect; message 'searchButtonBounds'; { available in macos  }
    function cancelButtonBounds: NSRect; message 'cancelButtonBounds'; { available in macos  }
    procedure setRecentSearches(newValue: NSArray); message 'setRecentSearches:';
    function recentSearches: NSArray; message 'recentSearches';
    procedure setRecentsAutosaveName(newValue: NSSearchFieldRecentsAutosaveName); message 'setRecentsAutosaveName:';
    function recentsAutosaveName: NSSearchFieldRecentsAutosaveName; message 'recentsAutosaveName';
    procedure setSearchMenuTemplate(newValue: NSMenu); message 'setSearchMenuTemplate:'; { available in macos  }
    function searchMenuTemplate: NSMenu; message 'searchMenuTemplate'; { available in macos  }
    procedure setSendsWholeSearchString(newValue: objcbool); message 'setSendsWholeSearchString:'; { available in macos  }
    function sendsWholeSearchString: objcbool; message 'sendsWholeSearchString'; { available in macos  }
    procedure setMaximumRecents(newValue: NSInteger); message 'setMaximumRecents:'; { available in macos  }
    function maximumRecents: NSInteger; message 'maximumRecents'; { available in macos  }
    procedure setSendsSearchStringImmediately(newValue: objcbool); message 'setSendsSearchStringImmediately:'; { available in macos  }
    function sendsSearchStringImmediately: objcbool; message 'sendsSearchStringImmediately'; { available in macos  }
    procedure setDelegate(newValue: id); message 'setDelegate:'; { available in macos  }
    function delegate: id; message 'delegate'; { available in macos  }
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

