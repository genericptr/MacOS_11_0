{ Parsed from Foundation.framework NSDictionary.h }

{$ifdef CALLBACKS}
type
  NSDictionaryEnumerateKeysAndObjectsUsingBlockCallback = reference to procedure (key: id; obj: id; stop: objcboolPtr); cblock; cdecl;
  NSDictionaryEnumerateKeysAndObjectsWithOptionsCallback = reference to procedure (key: id; obj: id; stop: objcboolPtr); cblock; cdecl;
  NSDictionaryKeysOfEntriesPassingTestCallback = reference to function (key: id; obj: id; stop: objcboolPtr): objcbool; cblock; cdecl;
  NSDictionaryKeysOfEntriesWithOptionsCallback = reference to function (key: id; obj: id; stop: objcboolPtr): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSDictionaryPtr = ^NSDictionary;
  NSMutableDictionaryPtr = ^NSMutableDictionary;
{$endif}

{$ifdef CLASSES}

type
  NSDictionary = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol, NSFastEnumerationProtocol)
  public
    function count: NSUInteger; message 'count';
    function objectForKey (aKey: id): id; message 'objectForKey:';
    function keyEnumerator: NSEnumerator; message 'keyEnumerator';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithObjects_forKeys_count (objects: id { variable size array of id }; keys: id { variable size array of id }; cnt: NSUInteger): id; message 'initWithObjects:forKeys:count:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSExtendedDictionary = objccategory external (NSDictionary)
    function allKeys: NSArray; message 'allKeys';
    function allKeysForObject (anObject: id): NSArray; message 'allKeysForObject:';
    function allValues: NSArray; message 'allValues';
    function description: NSString; message 'description';
    function descriptionInStringsFileFormat: NSString; message 'descriptionInStringsFileFormat';
    function descriptionWithLocale (locale: id): NSString; message 'descriptionWithLocale:';
    function descriptionWithLocale_indent (locale: id; level: NSUInteger): NSString; message 'descriptionWithLocale:indent:';
    function isEqualToDictionary (otherDictionary: NSDictionary): objcbool; message 'isEqualToDictionary:';
    function objectEnumerator: NSEnumerator; message 'objectEnumerator';
    function objectsForKeys_notFoundMarker (keys: NSArray; marker: id): NSArray; message 'objectsForKeys:notFoundMarker:';
    function writeToURL_error (url: NSURL; error: NSErrorPtr): objcbool; message 'writeToURL:error:'; { available in macos , ios , watchos , tvos  }
    function keysSortedByValueUsingSelector (comparator: SEL): NSArray; message 'keysSortedByValueUsingSelector:';
    procedure getObjects_andKeys_count (objects: id { variable size array of id }; keys: id { variable size array of id }; count_: NSUInteger); message 'getObjects:andKeys:count:'; { available in macos , ios , watchos , tvos  }
    function objectForKeyedSubscript (key: id): id; message 'objectForKeyedSubscript:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateKeysAndObjectsUsingBlock (block: NSDictionaryEnumerateKeysAndObjectsUsingBlockCallback); message 'enumerateKeysAndObjectsUsingBlock:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateKeysAndObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: NSDictionaryEnumerateKeysAndObjectsWithOptionsCallback); message 'enumerateKeysAndObjectsWithOptions:usingBlock:'; { available in macos , ios , watchos , tvos  }
    function keysSortedByValueUsingComparator (cmptr: NSComparator): NSArray; message 'keysSortedByValueUsingComparator:'; { available in macos , ios , watchos , tvos  }
    function keysSortedByValueWithOptions_usingComparator (opts: NSSortOptions; cmptr: NSComparator): NSArray; message 'keysSortedByValueWithOptions:usingComparator:'; { available in macos , ios , watchos , tvos  }
    function keysOfEntriesPassingTest (predicate: NSDictionaryKeysOfEntriesPassingTestCallback): NSSet; message 'keysOfEntriesPassingTest:'; { available in macos , ios , watchos , tvos  }
    function keysOfEntriesWithOptions_passingTest (opts: NSEnumerationOptions; predicate: NSDictionaryKeysOfEntriesWithOptionsCallback): NSSet; message 'keysOfEntriesWithOptions:passingTest:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSDictionary_NSDeprecated = objccategory external name 'NSDeprecated' (NSDictionary)
    procedure getObjects_andKeys (objects: id { variable size array of id }; keys: id { variable size array of id }); message 'getObjects:andKeys:';
    class function dictionaryWithContentsOfFile (path: NSString): NSDictionary; message 'dictionaryWithContentsOfFile:'; deprecated 'replace with dictionaryWithContentsOfURL:error:';
    class function dictionaryWithContentsOfURL (url: NSURL): NSDictionary; message 'dictionaryWithContentsOfURL:'; deprecated 'replace with dictionaryWithContentsOfURL:error:';
    function initWithContentsOfFile (path: NSString): NSDictionary; message 'initWithContentsOfFile:'; deprecated 'replace with initWithContentsOfURL:error:';
    function initWithContentsOfURL (url: NSURL): NSDictionary; message 'initWithContentsOfURL:'; deprecated 'replace with initWithContentsOfURL:error:';
    function writeToFile_atomically (path: NSString; useAuxiliaryFile: objcbool): objcbool; message 'writeToFile:atomically:'; deprecated 'replace with writeToURL:error:';
    function writeToURL_atomically (url: NSURL; atomically: objcbool): objcbool; message 'writeToURL:atomically:'; deprecated 'replace with writeToURL:error:';
  end;

type
  NSDictionaryCreation = objccategory external (NSDictionary)
    class function dictionary: id; message 'dictionary';
    class function dictionaryWithObject_forKey (object_: id; key: id): id; message 'dictionaryWithObject:forKey:';
    class function dictionaryWithObjects_forKeys_count (objects: id { variable size array of id }; keys: id { variable size array of id }; cnt: NSUInteger): id; message 'dictionaryWithObjects:forKeys:count:';
    class function dictionaryWithObjectsAndKeys (firstObject: id): id; varargs; message 'dictionaryWithObjectsAndKeys:';
    class function dictionaryWithDictionary (dict: NSDictionary): id; message 'dictionaryWithDictionary:';
    class function dictionaryWithObjects_forKeys (objects: NSArray; keys: NSArray): id; message 'dictionaryWithObjects:forKeys:';
    function initWithObjectsAndKeys (firstObject: id): id; varargs; message 'initWithObjectsAndKeys:';
    function initWithDictionary (otherDictionary: NSDictionary): id; message 'initWithDictionary:';
    function initWithDictionary_copyItems (otherDictionary: NSDictionary; flag: objcbool): id; message 'initWithDictionary:copyItems:';
    function initWithObjects_forKeys (objects: NSArray; keys: NSArray): id; message 'initWithObjects:forKeys:';
    function initWithContentsOfURL_error (url: NSURL; error: NSErrorPtr): NSDictionary; message 'initWithContentsOfURL:error:'; { available in macos , ios , watchos , tvos  }
    class function dictionaryWithContentsOfURL_error (url: NSURL; error: NSErrorPtr): NSDictionary; message 'dictionaryWithContentsOfURL:error:'; { available in macos , ios , watchos , tvos  }
  end;


type
  NSMutableDictionary = objcclass external (NSDictionary)
  public
    procedure removeObjectForKey (aKey: id); message 'removeObjectForKey:';
    procedure setObject_forKey (anObject: id; aKey: id); message 'setObject:forKey:';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCapacity (numItems: NSUInteger): id; message 'initWithCapacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;


type
  NSExtendedMutableDictionary = objccategory external (NSMutableDictionary)
    procedure addEntriesFromDictionary (otherDictionary: NSDictionary); message 'addEntriesFromDictionary:';
    procedure removeAllObjects; message 'removeAllObjects';
    procedure removeObjectsForKeys (keyArray: NSArray); message 'removeObjectsForKeys:';
    procedure setDictionary (otherDictionary: NSDictionary); message 'setDictionary:';
    procedure setObject_forKeyedSubscript (obj: id; key: id); message 'setObject:forKeyedSubscript:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSMutableDictionaryCreation = objccategory external (NSMutableDictionary)
    class function dictionaryWithCapacity (numItems: NSUInteger): id; message 'dictionaryWithCapacity:';
    class function dictionaryWithContentsOfFile (path: NSString): NSMutableDictionary; message 'dictionaryWithContentsOfFile:';
    class function dictionaryWithContentsOfURL (url: NSURL): NSMutableDictionary; message 'dictionaryWithContentsOfURL:';
    function initWithContentsOfFile (path: NSString): NSMutableDictionary; message 'initWithContentsOfFile:';
    function initWithContentsOfURL (url: NSURL): NSMutableDictionary; message 'initWithContentsOfURL:';
  end;

type
  NSDictionary_NSSharedKeySetDictionary = objccategory external name 'NSSharedKeySetDictionary' (NSDictionary)
    class function sharedKeySetForKeys (keys: NSArray): id; message 'sharedKeySetForKeys:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSSharedKeySetDictionary = objccategory external (NSMutableDictionary)
    class function dictionaryWithSharedKeySet (keyset: id): NSMutableDictionary; message 'dictionaryWithSharedKeySet:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSGenericFastEnumeraiton = objccategory external (NSDictionary)
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: id { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

