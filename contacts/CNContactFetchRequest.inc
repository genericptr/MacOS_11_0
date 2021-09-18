{ Parsed from Contacts.framework CNContactFetchRequest.h }

{$ifdef TYPES}
type
  CNContactFetchRequestPtr = ^CNContactFetchRequest;
{$endif}

{$ifdef CLASSES}

type
  CNContactFetchRequest = objcclass external (CNFetchRequest, NSSecureCodingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithKeysToFetch (keysToFetch: NSArray): id; message 'initWithKeysToFetch:'; { NS_DESIGNATED_INITIALIZER }
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setKeysToFetch(newValue: NSArray); message 'setKeysToFetch:';
    function keysToFetch: NSArray; message 'keysToFetch';
    procedure setMutableObjects(newValue: objcbool); message 'setMutableObjects:'; { available in 10_12, 10_0 }
    function mutableObjects: objcbool; message 'mutableObjects'; { available in 10_12, 10_0 }
    procedure setUnifyResults(newValue: objcbool); message 'setUnifyResults:';
    function unifyResults: objcbool; message 'unifyResults';
    procedure setSortOrder(newValue: CNContactSortOrder); message 'setSortOrder:';
    function sortOrder: CNContactSortOrder; message 'sortOrder';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

