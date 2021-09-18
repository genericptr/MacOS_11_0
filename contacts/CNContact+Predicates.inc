{ Parsed from Contacts.framework CNContact+Predicates.h }
{$ifdef CLASSES}

type
  CNContact_Predicates = objccategory external name 'Predicates' (CNContact)
    class function predicateForContactsMatchingName (name: NSString): NSPredicate; message 'predicateForContactsMatchingName:';
    class function predicateForContactsMatchingEmailAddress (emailAddress: NSString): NSPredicate; message 'predicateForContactsMatchingEmailAddress:'; { available in macos , ios , watchos  }
    class function predicateForContactsMatchingPhoneNumber (phoneNumber: CNPhoneNumber): NSPredicate; message 'predicateForContactsMatchingPhoneNumber:'; { available in macos , ios , watchos  }
    class function predicateForContactsWithIdentifiers (identifiers: NSArray): NSPredicate; message 'predicateForContactsWithIdentifiers:';
    class function predicateForContactsInGroupWithIdentifier (groupIdentifier: NSString): NSPredicate; message 'predicateForContactsInGroupWithIdentifier:';
    class function predicateForContactsInContainerWithIdentifier (containerIdentifier: NSString): NSPredicate; message 'predicateForContactsInContainerWithIdentifier:';
  end;
{$endif}

