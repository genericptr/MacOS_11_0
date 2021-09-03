{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSCoder.h }

{ Types from NSExtendedCoder }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSCoderPtr = ^NSCoder;
{$endif}

{$ifdef TYPES}
type
  NSDecodingFailurePolicy = NSInteger;
  NSDecodingFailurePolicyPtr = ^NSDecodingFailurePolicy;

const
  NSDecodingFailurePolicyRaiseException = 0;
  NSDecodingFailurePolicySetErrorAndReturn = 1;
{$endif}

{$ifdef CLASSES}

type
  NSCoder = objcclass external (NSObject)
  public
    procedure encodeValueOfObjCType_at (type_: PChar; addr: pointer); message 'encodeValueOfObjCType:at:';
    procedure encodeDataObject (data: NSData); message 'encodeDataObject:';
    function decodeDataObject: NSData; message 'decodeDataObject';
    procedure decodeValueOfObjCType_at_size (type_: PChar; data: pointer; size: NSUInteger); message 'decodeValueOfObjCType:at:size:'; { available in macos , ios , watchos , tvos  }
    function versionForClassName (className: NSString): NSInteger; message 'versionForClassName:';
  end;


type
  NSExtendedCoder = objccategory external (NSCoder)
    procedure encodeObject (object_: id); message 'encodeObject:';
    procedure encodeRootObject (rootObject: id); message 'encodeRootObject:';
    procedure encodeBycopyObject (anObject: id); message 'encodeBycopyObject:';
    procedure encodeByrefObject (anObject: id); message 'encodeByrefObject:';
    procedure encodeConditionalObject (object_: id); message 'encodeConditionalObject:';
    procedure encodeValuesOfObjCTypes (types: PChar); varargs; message 'encodeValuesOfObjCTypes:';
    procedure encodeArrayOfObjCType_count_at (type_: PChar; count: NSUInteger; array_: pointer); message 'encodeArrayOfObjCType:count:at:';
    procedure encodeBytes_length (byteaddr: pointer; length: NSUInteger); message 'encodeBytes:length:';
    function decodeObject: id; message 'decodeObject';
    function decodeTopLevelObjectAndReturnError (error: NSErrorPtr): id; message 'decodeTopLevelObjectAndReturnError:'; { available in macos , ios , watchos , tvos  }
    procedure decodeValuesOfObjCTypes (types: PChar); varargs; message 'decodeValuesOfObjCTypes:';
    procedure decodeArrayOfObjCType_count_at (itemType: PChar; count: NSUInteger; array_: pointer); message 'decodeArrayOfObjCType:count:at:';
    function decodeBytesWithReturnedLength (lengthp: NSUIntegerPtr): pointer; message 'decodeBytesWithReturnedLength:';
    {$if defined(TARGET_OS_OSX)}
    procedure encodePropertyList (aPropertyList: id); message 'encodePropertyList:';
    function decodePropertyList: id; message 'decodePropertyList';
    {$endif}
    procedure setObjectZone (zone: NSZonePtr); message 'setObjectZone:';
    function objectZone: NSZonePtr; message 'objectZone';
    function systemVersion: cuint; message 'systemVersion';
    function allowsKeyedCoding: objcbool; message 'allowsKeyedCoding';
    procedure encodeObject_forKey (object_: id; key: NSString); message 'encodeObject:forKey:';
    procedure encodeConditionalObject_forKey (object_: id; key: NSString); message 'encodeConditionalObject:forKey:';
    procedure encodeBool_forKey (value: objcbool; key: NSString); message 'encodeBool:forKey:';
    procedure encodeInt_forKey (value: cint; key: NSString); message 'encodeInt:forKey:';
    procedure encodeInt32_forKey (value: cint32; key: NSString); message 'encodeInt32:forKey:';
    procedure encodeInt64_forKey (value: cint64; key: NSString); message 'encodeInt64:forKey:';
    procedure encodeFloat_forKey (value: single; key: NSString); message 'encodeFloat:forKey:';
    procedure encodeDouble_forKey (value: double; key: NSString); message 'encodeDouble:forKey:';
    procedure encodeBytes_length_forKey (bytes: pbyte; length: NSUInteger; key: NSString); message 'encodeBytes:length:forKey:';
    function containsValueForKey (key: NSString): objcbool; message 'containsValueForKey:';
    function decodeObjectForKey (key: NSString): id; message 'decodeObjectForKey:';
    function decodeTopLevelObjectForKey_error (key: NSString; error: NSErrorPtr): id; message 'decodeTopLevelObjectForKey:error:'; { available in macos , ios , watchos , tvos  }
    function decodeBoolForKey (key: NSString): objcbool; message 'decodeBoolForKey:';
    function decodeIntForKey (key: NSString): cint; message 'decodeIntForKey:';
    function decodeInt32ForKey (key: NSString): cint32; message 'decodeInt32ForKey:';
    function decodeInt64ForKey (key: NSString): cint64; message 'decodeInt64ForKey:';
    function decodeFloatForKey (key: NSString): single; message 'decodeFloatForKey:';
    function decodeDoubleForKey (key: NSString): double; message 'decodeDoubleForKey:';
    function decodeBytesForKey_returnedLength (key: NSString; lengthp: NSUIntegerPtr): pbyte; message 'decodeBytesForKey:returnedLength:';
    procedure encodeInteger_forKey (value: NSInteger; key: NSString); message 'encodeInteger:forKey:'; { available in macos , ios , watchos , tvos  }
    function decodeIntegerForKey (key: NSString): NSInteger; message 'decodeIntegerForKey:'; { available in macos , ios , watchos , tvos  }
    function requiresSecureCoding: objcbool; message 'requiresSecureCoding'; { available in macos , ios , watchos , tvos  }
    function decodeObjectOfClass_forKey (aClass: pobjc_class; key: NSString): id; message 'decodeObjectOfClass:forKey:'; { available in macos , ios , watchos , tvos  }
    function decodeTopLevelObjectOfClass_forKey_error (aClass: pobjc_class; key: NSString; error: NSErrorPtr): id; message 'decodeTopLevelObjectOfClass:forKey:error:'; { available in macos , ios , watchos , tvos  }
    function decodeArrayOfObjectsOfClass_forKey (cls: pobjc_class; key: NSString): NSArray; message 'decodeArrayOfObjectsOfClass:forKey:'; { available in macos , ios , watchos , tvos  }
    function decodeDictionaryWithKeysOfClass_objectsOfClass_forKey (keyCls: pobjc_class; objectCls: pobjc_class; key: NSString): NSDictionary; message 'decodeDictionaryWithKeysOfClass:objectsOfClass:forKey:'; { available in macos , ios , watchos , tvos  }
    function decodeObjectOfClasses_forKey (classes: NSSet; key: NSString): id; message 'decodeObjectOfClasses:forKey:'; { available in macos , ios , watchos , tvos  }
    function decodeTopLevelObjectOfClasses_forKey_error (classes: NSSet; key: NSString; error: NSErrorPtr): id; message 'decodeTopLevelObjectOfClasses:forKey:error:'; { available in macos , ios , watchos , tvos  }
    function decodeArrayOfObjectsOfClasses_forKey (classes: NSSet; key: NSString): NSArray; message 'decodeArrayOfObjectsOfClasses:forKey:'; { available in macos , ios , watchos , tvos  }
    function decodeDictionaryWithKeysOfClasses_objectsOfClasses_forKey (keyClasses: NSSet; objectClasses: NSSet; key: NSString): NSDictionary; message 'decodeDictionaryWithKeysOfClasses:objectsOfClasses:forKey:'; { available in macos , ios , watchos , tvos  }
    function decodePropertyListForKey (key: NSString): id; message 'decodePropertyListForKey:'; { available in macos , ios , watchos , tvos  }
    function allowedClasses: NSSet; message 'allowedClasses'; { available in macos , ios , watchos , tvos  }
    procedure failWithError (error: NSError); message 'failWithError:'; { available in macos , ios , watchos , tvos  }
    function decodingFailurePolicy: NSDecodingFailurePolicy; message 'decodingFailurePolicy'; { available in macos , ios , watchos , tvos  }
    function error: NSError; message 'error'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef FUNCTIONS}
function NXReadNSObjectFromCoder(decoder: NSCoder): NSObjectPtr; cdecl; external; deprecated 'Not supported';
{$endif}

{$ifdef CLASSES}

type
  NSTypedstreamCompatibility = objccategory external (NSCoder)
    procedure encodeNXObject (object_: id); message 'encodeNXObject:'; deprecated 'Not supported';
    function decodeNXObject: id; message 'decodeNXObject'; deprecated 'Not supported';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSCoder_NSDeprecated = objccategory external name 'NSDeprecated' (NSCoder)
    procedure decodeValueOfObjCType_at (type_: PChar; data: pointer); message 'decodeValueOfObjCType:at:'; deprecated 'replace with decodeValueOfObjCType:at:size:';
  end;
{$endif}

