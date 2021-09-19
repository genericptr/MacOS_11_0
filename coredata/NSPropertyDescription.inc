{ Parsed from CoreData.framework NSPropertyDescription.h }

{$ifdef TYPES}
type
  NSPropertyDescriptionPtr = ^NSPropertyDescription;
{$endif}

{$ifdef CLASSES}

type
  NSPropertyDescription = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  private
  public
    function entity: NSEntityDescription; message 'entity';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setOptional(newValue: objcbool); message 'setOptional:';
    function isOptional: objcbool; message 'isOptional';
    procedure setTransient(newValue: objcbool); message 'setTransient:';
    function isTransient: objcbool; message 'isTransient';
    function validationPredicates: NSArray; message 'validationPredicates';
    function validationWarnings: NSArray; message 'validationWarnings';
    procedure setValidationPredicates_withValidationWarnings (validationPredicates_: NSArray; validationWarnings_: NSArray); message 'setValidationPredicates:withValidationWarnings:';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
    procedure setIndexed(newValue: objcbool); message 'setIndexed:'; deprecated 'in  "Use NSEntityDescription.indexes instead", ,,,';
    function isIndexed: objcbool; message 'isIndexed'; deprecated 'in  "Use NSEntityDescription.indexes instead", ,,,';
    function versionHash: NSData; message 'versionHash'; { available in macosx 10.5,ios 3.0 }
    procedure setVersionHashModifier(newValue: NSString); message 'setVersionHashModifier:'; { available in macosx 10.5,ios 3.0 }
    function versionHashModifier: NSString; message 'versionHashModifier'; { available in macosx 10.5,ios 3.0 }
    procedure setIndexedBySpotlight(newValue: objcbool); message 'setIndexedBySpotlight:'; { available in macosx 10.6,ios 3.0 }
    function isIndexedBySpotlight: objcbool; message 'isIndexedBySpotlight'; { available in macosx 10.6,ios 3.0 }
    procedure setStoredInExternalRecord(newValue: objcbool); message 'setStoredInExternalRecord:'; deprecated 'Spotlight integration is deprecated. Use CoreSpotlight integration instead.';
    function isStoredInExternalRecord: objcbool; message 'isStoredInExternalRecord'; deprecated 'Spotlight integration is deprecated. Use CoreSpotlight integration instead.';
    procedure setRenamingIdentifier(newValue: NSString); message 'setRenamingIdentifier:'; { available in macosx 10.6,ios 3.0 }
    function renamingIdentifier: NSString; message 'renamingIdentifier'; { available in macosx 10.6,ios 3.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

