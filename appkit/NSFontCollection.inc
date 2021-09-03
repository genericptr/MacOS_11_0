{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSFontCollection.h }

{$ifdef TYPES}
type
  NSFontCollectionPtr = ^NSFontCollection;
  NSMutableFontCollectionPtr = ^NSMutableFontCollection;
{$endif}

{$ifdef TYPES}
type
  NSFontCollectionVisibility = NSUInteger;
  NSFontCollectionVisibilityPtr = ^NSFontCollectionVisibility;

const
  NSFontCollectionVisibilityProcess = 1 shl 0;
  NSFontCollectionVisibilityUser = 1 shl 1;
  NSFontCollectionVisibilityComputer = 1 shl 2;

type
  NSFontCollectionMatchingOptionKey = NSString;
  NSFontCollectionMatchingOptionKeyPtr = ^NSFontCollectionMatchingOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontCollectionIncludeDisabledFontsOption: NSFontCollectionMatchingOptionKey { available in macos  }; cvar; external;
  NSFontCollectionRemoveDuplicatesOption: NSFontCollectionMatchingOptionKey { available in macos  }; cvar; external;
  NSFontCollectionDisallowAutoActivationOption: NSFontCollectionMatchingOptionKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSFontCollectionName = NSString;
  NSFontCollectionNamePtr = ^NSFontCollectionName;
{$endif}

{$ifdef CLASSES}

type
  NSFontCollection = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSCodingProtocol)
  public
    class function fontCollectionWithDescriptors (queryDescriptors: NSArray): NSFontCollection; message 'fontCollectionWithDescriptors:';
    class function fontCollectionWithAllAvailableDescriptors: NSFontCollection; message 'fontCollectionWithAllAvailableDescriptors';
    class function fontCollectionWithLocale (locale: NSLocale): NSFontCollection; message 'fontCollectionWithLocale:';
    class function showFontCollection_withName_visibility_error (collection: NSFontCollection; name: NSFontCollectionName; visibility: NSFontCollectionVisibility; error: NSErrorPtr): objcbool; message 'showFontCollection:withName:visibility:error:';
    class function hideFontCollectionWithName_visibility_error (name: NSFontCollectionName; visibility: NSFontCollectionVisibility; error: NSErrorPtr): objcbool; message 'hideFontCollectionWithName:visibility:error:';
    class function renameFontCollectionWithName_visibility_toName_error (name: NSFontCollectionName; visibility: NSFontCollectionVisibility; name3: NSFontCollectionName; error: NSErrorPtr): objcbool; message 'renameFontCollectionWithName:visibility:toName:error:';
    class function allFontCollectionNames: NSArray; message 'allFontCollectionNames';
    class function fontCollectionWithName (name: NSFontCollectionName): NSFontCollection; message 'fontCollectionWithName:';
    class function fontCollectionWithName_visibility (name: NSFontCollectionName; visibility: NSFontCollectionVisibility): NSFontCollection; message 'fontCollectionWithName:visibility:';
    function queryDescriptors: NSArray; message 'queryDescriptors';
    function exclusionDescriptors: NSArray; message 'exclusionDescriptors';
    function matchingDescriptors: NSArray; message 'matchingDescriptors';
    function matchingDescriptorsWithOptions (options: NSDictionary): NSArray; message 'matchingDescriptorsWithOptions:';
    function matchingDescriptorsForFamily (family: NSString): NSArray; message 'matchingDescriptorsForFamily:';
    function matchingDescriptorsForFamily_options (family: NSString; options: NSDictionary): NSArray; message 'matchingDescriptorsForFamily:options:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  NSMutableFontCollection = objcclass external (NSFontCollection)
  public
    class function fontCollectionWithDescriptors (queryDescriptors_: NSArray): NSMutableFontCollection; message 'fontCollectionWithDescriptors:';
    class function fontCollectionWithAllAvailableDescriptors: NSMutableFontCollection; message 'fontCollectionWithAllAvailableDescriptors';
    class function fontCollectionWithLocale (locale: NSLocale): NSMutableFontCollection; message 'fontCollectionWithLocale:';
    class function fontCollectionWithName (name: NSFontCollectionName): NSMutableFontCollection; message 'fontCollectionWithName:';
    class function fontCollectionWithName_visibility (name: NSFontCollectionName; visibility: NSFontCollectionVisibility): NSMutableFontCollection; message 'fontCollectionWithName:visibility:';
    procedure setQueryDescriptors(newValue: NSArray); message 'setQueryDescriptors:';
    function queryDescriptors: NSArray; message 'queryDescriptors';
    procedure setExclusionDescriptors(newValue: NSArray); message 'setExclusionDescriptors:';
    function exclusionDescriptors: NSArray; message 'exclusionDescriptors';
    procedure addQueryForDescriptors (descriptors: NSArray); message 'addQueryForDescriptors:';
    procedure removeQueryForDescriptors (descriptors: NSArray); message 'removeQueryForDescriptors:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontCollectionDidChangeNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSFontCollectionUserInfoKey = NSString;
  NSFontCollectionUserInfoKeyPtr = ^NSFontCollectionUserInfoKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontCollectionActionKey: NSFontCollectionUserInfoKey { available in macos  }; cvar; external;
  NSFontCollectionNameKey: NSFontCollectionUserInfoKey { available in macos  }; cvar; external;
  NSFontCollectionOldNameKey: NSFontCollectionUserInfoKey { available in macos  }; cvar; external;
  NSFontCollectionVisibilityKey: NSFontCollectionUserInfoKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSFontCollectionActionTypeKey = NSString;
  NSFontCollectionActionTypeKeyPtr = ^NSFontCollectionActionTypeKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFontCollectionWasShown: NSFontCollectionActionTypeKey { available in macos  }; cvar; external;
  NSFontCollectionWasHidden: NSFontCollectionActionTypeKey { available in macos  }; cvar; external;
  NSFontCollectionWasRenamed: NSFontCollectionActionTypeKey { available in macos  }; cvar; external;
  NSFontCollectionAllFonts: NSFontCollectionName { available in macos  }; cvar; external;
  NSFontCollectionUser: NSFontCollectionName { available in macos  }; cvar; external;
  NSFontCollectionFavorites: NSFontCollectionName { available in macos  }; cvar; external;
  NSFontCollectionRecentlyUsed: NSFontCollectionName { available in macos  }; cvar; external;
{$endif}

