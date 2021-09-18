{ Parsed from AppKit.framework NSUserInterfaceItemSearching.h }

{$ifdef CALLBACKS}
type
  NSUserInterfaceItemSearchingSearchForItemsWithSearchStringCallback = reference to procedure (items: NSArray); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSUserInterfaceItemSearchingProtocolPtr = ^NSUserInterfaceItemSearchingProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSUserInterfaceItemSearchingProtocol = objcprotocol external name 'NSUserInterfaceItemSearching' (NSObjectProtocol)
  required
    procedure searchForItemsWithSearchString_resultLimit_matchedItemHandler (searchString: NSString; resultLimit: NSInteger; handleMatchedItems: NSUserInterfaceItemSearchingSearchForItemsWithSearchStringCallback); message 'searchForItemsWithSearchString:resultLimit:matchedItemHandler:';
    function localizedTitlesForItem (item: id): NSArray; message 'localizedTitlesForItem:';
  optional
    procedure performActionForItem (item: id); message 'performActionForItem:';
    procedure showAllHelpTopicsForSearchString (searchString: NSString); message 'showAllHelpTopicsForSearchString:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSUserInterfaceItemSearching = objccategory external (NSApplication)
    procedure registerUserInterfaceItemSearchHandler (handler: NSUserInterfaceItemSearchingProtocol); message 'registerUserInterfaceItemSearchHandler:'; { available in macos  }
    procedure unregisterUserInterfaceItemSearchHandler (handler: NSUserInterfaceItemSearchingProtocol); message 'unregisterUserInterfaceItemSearchHandler:'; { available in macos  }
    function searchString_inUserInterfaceItemString_searchRange_foundRange (searchString: NSString; stringToSearch: NSString; searchRange: NSRange; foundRange: NSRangePtr): objcbool; message 'searchString:inUserInterfaceItemString:searchRange:foundRange:'; { available in macos  }
  end;
{$endif}

