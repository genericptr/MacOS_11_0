{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNGroup+Predicates.h }
{$ifdef CLASSES}

type
  CNGroup_Predicates = objccategory external name 'Predicates' (CNGroup)
    class function predicateForGroupsWithIdentifiers (identifiers: NSArray): NSPredicate; message 'predicateForGroupsWithIdentifiers:';
    class function predicateForSubgroupsInGroupWithIdentifier (parentGroupIdentifier: NSString): NSPredicate; message 'predicateForSubgroupsInGroupWithIdentifier:'; { available in 10_11, NA }
    class function predicateForGroupsInContainerWithIdentifier (containerIdentifier: NSString): NSPredicate; message 'predicateForGroupsInContainerWithIdentifier:';
  end;
{$endif}

