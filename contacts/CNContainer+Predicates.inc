{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNContainer+Predicates.h }
{$ifdef CLASSES}

type
  Predicates = objccategory external (CNContainer)
    class function predicateForContainersWithIdentifiers (identifiers: NSArray): NSPredicate; message 'predicateForContainersWithIdentifiers:';
    class function predicateForContainerOfContactWithIdentifier (contactIdentifier: NSString): NSPredicate; message 'predicateForContainerOfContactWithIdentifier:';
    class function predicateForContainerOfGroupWithIdentifier (groupIdentifier: NSString): NSPredicate; message 'predicateForContainerOfGroupWithIdentifier:';
  end;
{$endif}

