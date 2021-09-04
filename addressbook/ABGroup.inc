{ Parsed from AddressBook.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AddressBook.framework/Headers/ABGroup.h }

{$ifdef TYPES}
type
  ABGroupPtr = ^ABGroup;
{$endif}

{$ifndef __ABGROUP__}
{$ifdef CLASSES}

type
  ABGroup = objcclass external (ABRecord)
  private
    _groupReserved1: id;
    _groupReserved2: id;
  public
    function members: NSArray; message 'members';
    function addMember (person: ABPerson): objcbool; message 'addMember:';
    function removeMember (person: ABPerson): objcbool; message 'removeMember:';
    function subgroups: NSArray; message 'subgroups';
    function addSubgroup (group: ABGroup): objcbool; message 'addSubgroup:';
    function removeSubgroup (group: ABGroup): objcbool; message 'removeSubgroup:';
    function parentGroups: NSArray; message 'parentGroups';
    function setDistributionIdentifier_forProperty_person (identifier: NSString; property_: NSString; person: ABPerson): objcbool; message 'setDistributionIdentifier:forProperty:person:';
    function distributionIdentifierForProperty_person (property_: NSString; person: ABPerson): NSString; message 'distributionIdentifierForProperty:person:';
  end;


type
  ABGroup_Properties = objccategory external (ABGroup)
    class function addPropertiesAndTypes (properties: NSDictionary): NSInteger; message 'addPropertiesAndTypes:';
    class function removeProperties (properties: NSArray): NSInteger; message 'removeProperties:';
    class function properties: NSArray; message 'properties';
    class function typeOfProperty (property_: NSString): ABPropertyType; message 'typeOfProperty:';
  end;

type
  ABGroup_Searching = objccategory external (ABGroup)
    class function searchElementForProperty_label_key_value_comparison (property_: NSString; label_: NSString; key: NSString; value: id; comparison: ABSearchComparison): ABSearchElement; message 'searchElementForProperty:label:key:value:comparison:';
  end;
{$endif}

{$endif}