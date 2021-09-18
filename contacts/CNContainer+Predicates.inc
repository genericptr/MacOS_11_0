{ Parsed from Contacts.framework CNContainer+Predicates.h }
{$ifdef CLASSES}

type
  Predicates = objccategory external (CNContainer)
    class function predicateForContainersWithIdentifiers (identifiers: NSArray): NSPredicate; message 'predicateForContainersWithIdentifiers:';
    class function predicateForContainerOfContactWithIdentifier (contactIdentifier: NSString): NSPredicate; message 'predicateForContainerOfContactWithIdentifier:';
    class function predicateForContainerOfGroupWithIdentifier (groupIdentifier: NSString): NSPredicate; message 'predicateForContainerOfGroupWithIdentifier:';
  end;
{$endif}

