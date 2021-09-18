{ Parsed from Foundation.framework NSKeyedArchiver.h }

{$ifdef TYPES}
type
  NSKeyedArchiverPtr = ^NSKeyedArchiver;
  NSKeyedUnarchiverPtr = ^NSKeyedUnarchiver;
  NSKeyedArchiverDelegateProtocolPtr = ^NSKeyedArchiverDelegateProtocol;
  NSKeyedUnarchiverDelegateProtocolPtr = ^NSKeyedUnarchiverDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSInvalidArchiveOperationException: NSExceptionName; cvar; external;
  NSInvalidUnarchiveOperationException: NSExceptionName; cvar; external;
  NSKeyedArchiveRootObjectKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSKeyedArchiver = objcclass external (NSCoder)
  public
    function initRequiringSecureCoding (requiresSecureCoding: objcbool): id; message 'initRequiringSecureCoding:'; { available in macos , ios , watchos , tvos  }
    class function archivedDataWithRootObject_requiringSecureCoding_error (object_: id; requiresSecureCoding: objcbool; error: NSErrorPtr): NSData; message 'archivedDataWithRootObject:requiringSecureCoding:error:'; { available in macos , ios , watchos , tvos  }
    function init: id; message 'init'; deprecated 'Use -initRequiringSecureCoding: instead';
    function initForWritingWithMutableData (data: NSMutableData): id; message 'initForWritingWithMutableData:'; deprecated 'Use -initRequiringSecureCoding: instead';
    class function archivedDataWithRootObject (rootObject: id): NSData; message 'archivedDataWithRootObject:'; deprecated 'Use +archivedDataWithRootObject:requiringSecureCoding:error: instead';
    class function archiveRootObject_toFile (rootObject: id; path: NSString): objcbool; message 'archiveRootObject:toFile:'; deprecated 'Use +archivedDataWithRootObject:requiringSecureCoding:error: and -writeToURL:options:error: instead';
    procedure setDelegate(newValue: NSKeyedArchiverDelegateProtocol); message 'setDelegate:';
    function delegate: NSKeyedArchiverDelegateProtocol; message 'delegate';
    procedure setOutputFormat(newValue: NSPropertyListFormat); message 'setOutputFormat:';
    function outputFormat: NSPropertyListFormat; message 'outputFormat';
    function encodedData: NSData; message 'encodedData'; { available in macosx , ios , watchos , tvos  }
    procedure finishEncoding; message 'finishEncoding';
    class procedure classSetClassName_forClass (codedName: NSString; cls: pobjc_class); message 'setClassName:forClass:';
    procedure setClassName_forClass (codedName: NSString; cls: pobjc_class); message 'setClassName:forClass:';
    class function classClassNameForClass (cls: pobjc_class): NSString; message 'classNameForClass:';
    function classNameForClass (cls: pobjc_class): NSString; message 'classNameForClass:';
    procedure encodeObject_forKey (object_: id; key: NSString); message 'encodeObject:forKey:';
    procedure encodeConditionalObject_forKey (object_: id; key: NSString); message 'encodeConditionalObject:forKey:';
    procedure encodeBool_forKey (value: objcbool; key: NSString); message 'encodeBool:forKey:';
    procedure encodeInt_forKey (value: cint; key: NSString); message 'encodeInt:forKey:';
    procedure encodeInt32_forKey (value: cint32; key: NSString); message 'encodeInt32:forKey:';
    procedure encodeInt64_forKey (value: cint64; key: NSString); message 'encodeInt64:forKey:';
    procedure encodeFloat_forKey (value: single; key: NSString); message 'encodeFloat:forKey:';
    procedure encodeDouble_forKey (value: double; key: NSString); message 'encodeDouble:forKey:';
    procedure encodeBytes_length_forKey (bytes: pbyte; length: NSUInteger; key: NSString); message 'encodeBytes:length:forKey:';
    procedure setRequiresSecureCoding(newValue: objcbool); message 'setRequiresSecureCoding:'; { available in macos , ios , watchos , tvos  }
    function requiresSecureCoding: objcbool; message 'requiresSecureCoding'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSKeyedUnarchiver = objcclass external (NSCoder)
  public
    function initForReadingFromData_error (data: NSData; error: NSErrorPtr): id; message 'initForReadingFromData:error:'; { available in macos , ios , watchos , tvos  }
    class function unarchivedObjectOfClass_fromData_error (cls: pobjc_class; data: NSData; error: NSErrorPtr): id; message 'unarchivedObjectOfClass:fromData:error:'; { available in macos , ios , watchos , tvos  }
    class function unarchivedArrayOfObjectsOfClass_fromData_error (cls: pobjc_class; data: NSData; error: NSErrorPtr): NSArray; message 'unarchivedArrayOfObjectsOfClass:fromData:error:'; { available in macos , ios , watchos , tvos  }
    class function unarchivedDictionaryWithKeysOfClass_objectsOfClass_fromData_error (keyCls: pobjc_class; valueCls: pobjc_class; data: NSData; error: NSErrorPtr): NSDictionary; message 'unarchivedDictionaryWithKeysOfClass:objectsOfClass:fromData:error:'; { available in macos , ios , watchos , tvos  }
    class function unarchivedObjectOfClasses_fromData_error (classes: NSSet; data: NSData; error: NSErrorPtr): id; message 'unarchivedObjectOfClasses:fromData:error:'; { available in macos , ios , watchos , tvos  }
    class function unarchivedArrayOfObjectsOfClasses_fromData_error (classes: NSSet; data: NSData; error: NSErrorPtr): NSArray; message 'unarchivedArrayOfObjectsOfClasses:fromData:error:'; { available in macos , ios , watchos , tvos  }
    class function unarchivedDictionaryWithKeysOfClasses_objectsOfClasses_fromData_error (keyClasses: NSSet; valueClasses: NSSet; data: NSData; error: NSErrorPtr): NSDictionary; message 'unarchivedDictionaryWithKeysOfClasses:objectsOfClasses:fromData:error:'; { available in macos , ios , watchos , tvos  }
    function init: id; message 'init'; deprecated 'Use -initForReadingFromData:error: instead';
    function initForReadingWithData (data: NSData): id; message 'initForReadingWithData:'; deprecated 'Use -initForReadingFromData:error: instead';
    class function unarchiveObjectWithData (data: NSData): id; message 'unarchiveObjectWithData:'; deprecated 'Use +unarchivedObjectOfClass:fromData:error: instead';
    class function unarchiveTopLevelObjectWithData_error (data: NSData; error: NSErrorPtr): id; message 'unarchiveTopLevelObjectWithData:error:';
    class function unarchiveObjectWithFile (path: NSString): id; message 'unarchiveObjectWithFile:'; deprecated 'Use +unarchivedObjectOfClass:fromData:error: instead';
    procedure setDelegate(newValue: NSKeyedUnarchiverDelegateProtocol); message 'setDelegate:';
    function delegate: NSKeyedUnarchiverDelegateProtocol; message 'delegate';
    procedure finishDecoding; message 'finishDecoding';
    class procedure classSetClass_forClassName (cls: pobjc_class; codedName: NSString); message 'setClass:forClassName:';
    procedure setClass_forClassName (cls: pobjc_class; codedName: NSString); message 'setClass:forClassName:';
    class function classClassForClassName (codedName: NSString): pobjc_class; message 'classForClassName:';
    function classForClassName (codedName: NSString): pobjc_class; message 'classForClassName:';
    function containsValueForKey (key: NSString): objcbool; message 'containsValueForKey:';
    function decodeObjectForKey (key: NSString): id; message 'decodeObjectForKey:';
    function decodeBoolForKey (key: NSString): objcbool; message 'decodeBoolForKey:';
    function decodeIntForKey (key: NSString): cint; message 'decodeIntForKey:';
    function decodeInt32ForKey (key: NSString): cint32; message 'decodeInt32ForKey:';
    function decodeInt64ForKey (key: NSString): cint64; message 'decodeInt64ForKey:';
    function decodeFloatForKey (key: NSString): single; message 'decodeFloatForKey:';
    function decodeDoubleForKey (key: NSString): double; message 'decodeDoubleForKey:';
    function decodeBytesForKey_returnedLength (key: NSString; lengthp: NSUIntegerPtr): pbyte; message 'decodeBytesForKey:returnedLength:';
    procedure setRequiresSecureCoding(newValue: objcbool); message 'setRequiresSecureCoding:'; { available in macos , ios , watchos , tvos  }
    function requiresSecureCoding: objcbool; message 'requiresSecureCoding'; { available in macos , ios , watchos , tvos  }
    procedure setDecodingFailurePolicy(newValue: NSDecodingFailurePolicy); message 'setDecodingFailurePolicy:'; { available in macos , ios , watchos , tvos  }
    function decodingFailurePolicy: NSDecodingFailurePolicy; message 'decodingFailurePolicy'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSKeyedArchiverDelegateProtocol = objcprotocol external name 'NSKeyedArchiverDelegate' (NSObjectProtocol)
  optional
    function archiver_willEncodeObject (archiver: NSKeyedArchiver; object_: id): id; message 'archiver:willEncodeObject:';
    procedure archiver_didEncodeObject (archiver: NSKeyedArchiver; object_: id); message 'archiver:didEncodeObject:';
    procedure archiver_willReplaceObject_withObject (archiver: NSKeyedArchiver; object_: id; newObject: id); message 'archiver:willReplaceObject:withObject:';
    procedure archiverWillFinish (archiver: NSKeyedArchiver); message 'archiverWillFinish:';
    procedure archiverDidFinish (archiver: NSKeyedArchiver); message 'archiverDidFinish:';
  end;

type
  NSKeyedUnarchiverDelegateProtocol = objcprotocol external name 'NSKeyedUnarchiverDelegate' (NSObjectProtocol)
  optional
    function unarchiver_cannotDecodeObjectOfClassName_originalClasses (unarchiver: NSKeyedUnarchiver; name: NSString; classNames: NSArray): pobjc_class; message 'unarchiver:cannotDecodeObjectOfClassName:originalClasses:';
    function unarchiver_didDecodeObject (unarchiver: NSKeyedUnarchiver; object_: id): id; message 'unarchiver:didDecodeObject:';
    procedure unarchiver_willReplaceObject_withObject (unarchiver: NSKeyedUnarchiver; object_: id; newObject: id); message 'unarchiver:willReplaceObject:withObject:';
    procedure unarchiverWillFinish (unarchiver: NSKeyedUnarchiver); message 'unarchiverWillFinish:';
    procedure unarchiverDidFinish (unarchiver: NSKeyedUnarchiver); message 'unarchiverDidFinish:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSKeyedArchiverObjectSubstitution = objccategory external (NSObject)
    function classForKeyedArchiver: pobjc_class; message 'classForKeyedArchiver';
    function replacementObjectForKeyedArchiver (archiver: NSKeyedArchiver): id; message 'replacementObjectForKeyedArchiver:';
    class function classFallbacksForKeyedArchiver: NSArray; message 'classFallbacksForKeyedArchiver';
  end;

type
  NSKeyedUnarchiverObjectSubstitution = objccategory external (NSObject)
    class function classForKeyedUnarchiver: pobjc_class; message 'classForKeyedUnarchiver';
  end;
{$endif}

