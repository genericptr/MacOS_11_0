{ Parsed from Foundation.framework NSString.h }

{ Types from NSStringExtensionMethods }
{$ifdef TYPES}

type
  NSStringEnumerationOptions = NSUInteger;
type
  NSStringEnumerationOptionsPtr = ^NSStringEnumerationOptions;

const
  NSStringEnumerationByLines = 0;
  NSStringEnumerationByParagraphs = 1;
  NSStringEnumerationByComposedCharacterSequences = 2;
  NSStringEnumerationByWords = 3;
  NSStringEnumerationBySentences = 4;
  NSStringEnumerationByCaretPositions = 5 { available in macos 11.0, ios 14.0, watchos 7.0, tvos 14.0 };
  NSStringEnumerationByDeletionClusters = 6 { available in macos 11.0, ios 14.0, watchos 7.0, tvos 14.0 };
  NSStringEnumerationReverse = 1 shl 8;
  NSStringEnumerationSubstringNotRequired = 1 shl 9;
  NSStringEnumerationLocalized = 1 shl 10;

type
  NSStringTransform = NSString;
type
  NSStringTransformPtr = ^NSStringTransform;
{$endif}

{$ifdef CALLBACKS}
type
  NSStringEnumerateSubstringsInRangeCallback = reference to procedure (substring: NSString; substringRange: NSRange; enclosingRange: NSRange; stop: objcboolPtr); cblock; cdecl;
  NSStringEnumerateLinesUsingBlockCallback = reference to procedure (line: NSString; stop: objcboolPtr); cblock; cdecl;
  NSStringInitWithCharactersNoCopyCallback = reference to procedure (param1: unicharPtr; param2: NSUInteger); cblock; cdecl;
  NSStringInitWithBytesNoCopyCallback = reference to procedure (param1: pointer; param2: NSUInteger); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSStringPtr = ^NSString;
  NSMutableStringPtr = ^NSMutableString;
  NSSimpleCStringPtr = ^NSSimpleCString;
  NSConstantStringPtr = ^NSConstantString;
{$endif}

{$ifdef TYPES}
type
  unichar = cushort;
  unicharPtr = ^unichar;
  NSStringCompareOptions = NSUInteger;
  NSStringCompareOptionsPtr = ^NSStringCompareOptions;

const
  NSCaseInsensitiveSearch = 1;
  NSLiteralSearch = 2;
  NSBackwardsSearch = 4;
  NSAnchoredSearch = 8;
  NSNumericSearch = 64;
  NSDiacriticInsensitiveSearch = 128 { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 };
  NSWidthInsensitiveSearch = 256 { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 };
  NSForcedOrderingSearch = 512 { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 };
  NSRegularExpressionSearch = 1024 { available in macos 10.7, ios 3.2, watchos 2.0, tvos 9.0 };

type
  NSStringEncoding = NSUInteger;
  NSStringEncodingPtr = ^NSStringEncoding;
  NSStringEncodingConversionOptions = NSUInteger;
  NSStringEncodingConversionOptionsPtr = ^NSStringEncodingConversionOptions;

const
  NSStringEncodingConversionAllowLossy = 1;
  NSStringEncodingConversionExternalRepresentation = 2;

const
  NSASCIIStringEncoding = 1;
  NSNEXTSTEPStringEncoding = 2;
  NSJapaneseEUCStringEncoding = 3;
  NSUTF8StringEncoding = 4;
  NSISOLatin1StringEncoding = 5;
  NSSymbolStringEncoding = 6;
  NSNonLossyASCIIStringEncoding = 7;
  NSShiftJISStringEncoding = 8;
  NSISOLatin2StringEncoding = 9;
  NSUnicodeStringEncoding = 10;
  NSWindowsCP1251StringEncoding = 11;
  NSWindowsCP1252StringEncoding = 12;
  NSWindowsCP1253StringEncoding = 13;
  NSWindowsCP1254StringEncoding = 14;
  NSWindowsCP1250StringEncoding = 15;
  NSISO2022JPStringEncoding = 21;
  NSMacOSRomanStringEncoding = 30;
  NSUTF16StringEncoding = NSUnicodeStringEncoding;
  NSUTF16BigEndianStringEncoding = $90000100;
  NSUTF16LittleEndianStringEncoding = $94000100;
  NSUTF32StringEncoding = $8c000100;
  NSUTF32BigEndianStringEncoding = $98000100;
  NSUTF32LittleEndianStringEncoding = $9c000100;

const
  NSProprietaryStringEncoding = 65536;

{$endif}

{$ifdef CLASSES}

type
  NSString = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function length: NSUInteger; message 'length';
    function characterAtIndex (index: NSUInteger): unichar; message 'characterAtIndex:';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSStringExtensionMethods = objccategory external (NSString)
    function substringFromIndex (from: NSUInteger): NSString; message 'substringFromIndex:';
    function substringToIndex (to_: NSUInteger): NSString; message 'substringToIndex:';
    function substringWithRange (range: NSRange): NSString; message 'substringWithRange:';
    procedure getCharacters_range (buffer: unicharPtr; range: NSRange); message 'getCharacters:range:';
    function compare (string_: NSString): NSComparisonResult; message 'compare:';
    function compare_options (string_: NSString; mask: NSStringCompareOptions): NSComparisonResult; message 'compare:options:';
    function compare_options_range (string_: NSString; mask: NSStringCompareOptions; rangeOfReceiverToCompare: NSRange): NSComparisonResult; message 'compare:options:range:';
    function compare_options_range_locale (string_: NSString; mask: NSStringCompareOptions; rangeOfReceiverToCompare: NSRange; locale: id): NSComparisonResult; message 'compare:options:range:locale:';
    function caseInsensitiveCompare (string_: NSString): NSComparisonResult; message 'caseInsensitiveCompare:';
    function localizedCompare (string_: NSString): NSComparisonResult; message 'localizedCompare:';
    function localizedCaseInsensitiveCompare (string_: NSString): NSComparisonResult; message 'localizedCaseInsensitiveCompare:';
    function localizedStandardCompare (string_: NSString): NSComparisonResult; message 'localizedStandardCompare:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function isEqualToString (aString: NSString): objcbool; message 'isEqualToString:';
    function hasPrefix (str: NSString): objcbool; message 'hasPrefix:';
    function hasSuffix (str: NSString): objcbool; message 'hasSuffix:';
    function commonPrefixWithString_options (str: NSString; mask: NSStringCompareOptions): NSString; message 'commonPrefixWithString:options:';
    function containsString (str: NSString): objcbool; message 'containsString:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function localizedCaseInsensitiveContainsString (str: NSString): objcbool; message 'localizedCaseInsensitiveContainsString:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function localizedStandardContainsString (str: NSString): objcbool; message 'localizedStandardContainsString:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function localizedStandardRangeOfString (str: NSString): NSRange; message 'localizedStandardRangeOfString:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function rangeOfString (searchString: NSString): NSRange; message 'rangeOfString:';
    function rangeOfString_options (searchString: NSString; mask: NSStringCompareOptions): NSRange; message 'rangeOfString:options:';
    function rangeOfString_options_range (searchString: NSString; mask: NSStringCompareOptions; rangeOfReceiverToSearch: NSRange): NSRange; message 'rangeOfString:options:range:';
    function rangeOfString_options_range_locale (searchString: NSString; mask: NSStringCompareOptions; rangeOfReceiverToSearch: NSRange; locale: NSLocale): NSRange; message 'rangeOfString:options:range:locale:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function rangeOfCharacterFromSet (searchSet: NSCharacterSet): NSRange; message 'rangeOfCharacterFromSet:';
    function rangeOfCharacterFromSet_options (searchSet: NSCharacterSet; mask: NSStringCompareOptions): NSRange; message 'rangeOfCharacterFromSet:options:';
    function rangeOfCharacterFromSet_options_range (searchSet: NSCharacterSet; mask: NSStringCompareOptions; rangeOfReceiverToSearch: NSRange): NSRange; message 'rangeOfCharacterFromSet:options:range:';
    function rangeOfComposedCharacterSequenceAtIndex (index: NSUInteger): NSRange; message 'rangeOfComposedCharacterSequenceAtIndex:';
    function rangeOfComposedCharacterSequencesForRange (range: NSRange): NSRange; message 'rangeOfComposedCharacterSequencesForRange:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function stringByAppendingString (aString: NSString): NSString; message 'stringByAppendingString:';
    function stringByAppendingFormat (format: NSString): NSString; varargs; message 'stringByAppendingFormat:';
    function doubleValue: double; message 'doubleValue';
    function floatValue: single; message 'floatValue';
    function intValue: cint; message 'intValue';
    function integerValue: NSInteger; message 'integerValue'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function longLongValue: clonglong; message 'longLongValue'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function boolValue: objcbool; message 'boolValue'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function uppercaseString: NSString; message 'uppercaseString';
    function lowercaseString: NSString; message 'lowercaseString';
    function capitalizedString: NSString; message 'capitalizedString';
    function localizedUppercaseString: NSString; message 'localizedUppercaseString'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function localizedLowercaseString: NSString; message 'localizedLowercaseString'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function localizedCapitalizedString: NSString; message 'localizedCapitalizedString'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function uppercaseStringWithLocale (locale: NSLocale): NSString; message 'uppercaseStringWithLocale:'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    function lowercaseStringWithLocale (locale: NSLocale): NSString; message 'lowercaseStringWithLocale:'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    function capitalizedStringWithLocale (locale: NSLocale): NSString; message 'capitalizedStringWithLocale:'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    procedure getLineStart_end_contentsEnd_forRange (startPtr: NSUIntegerPtr; lineEndPtr: NSUIntegerPtr; contentsEndPtr: NSUIntegerPtr; range: NSRange); message 'getLineStart:end:contentsEnd:forRange:';
    function lineRangeForRange (range: NSRange): NSRange; message 'lineRangeForRange:';
    procedure getParagraphStart_end_contentsEnd_forRange (startPtr: NSUIntegerPtr; parEndPtr: NSUIntegerPtr; contentsEndPtr: NSUIntegerPtr; range: NSRange); message 'getParagraphStart:end:contentsEnd:forRange:';
    function paragraphRangeForRange (range: NSRange): NSRange; message 'paragraphRangeForRange:';
    procedure enumerateSubstringsInRange_options_usingBlock (range: NSRange; opts: NSStringEnumerationOptions; block: NSStringEnumerateSubstringsInRangeCallback); message 'enumerateSubstringsInRange:options:usingBlock:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure enumerateLinesUsingBlock (block: NSStringEnumerateLinesUsingBlockCallback); message 'enumerateLinesUsingBlock:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function UTF8String: PChar; message 'UTF8String';
    function fastestEncoding: NSStringEncoding; message 'fastestEncoding';
    function smallestEncoding: NSStringEncoding; message 'smallestEncoding';
    function dataUsingEncoding_allowLossyConversion (encoding: NSStringEncoding; lossy: objcbool): NSData; message 'dataUsingEncoding:allowLossyConversion:';
    function dataUsingEncoding (encoding: NSStringEncoding): NSData; message 'dataUsingEncoding:';
    function canBeConvertedToEncoding (encoding: NSStringEncoding): objcbool; message 'canBeConvertedToEncoding:';
    function cStringUsingEncoding (encoding: NSStringEncoding): PChar; message 'cStringUsingEncoding:';
    function getCString_maxLength_encoding (buffer: PChar; maxBufferCount: NSUInteger; encoding: NSStringEncoding): objcbool; message 'getCString:maxLength:encoding:';
    function getBytes_maxLength_usedLength_encoding_options_range_remainingRange (buffer: pointer; maxBufferCount: NSUInteger; usedBufferCount: NSUIntegerPtr; encoding: NSStringEncoding; options: NSStringEncodingConversionOptions; range: NSRange; leftover: NSRangePointer): objcbool; message 'getBytes:maxLength:usedLength:encoding:options:range:remainingRange:';
    function maximumLengthOfBytesUsingEncoding (enc: NSStringEncoding): NSUInteger; message 'maximumLengthOfBytesUsingEncoding:';
    function lengthOfBytesUsingEncoding (enc: NSStringEncoding): NSUInteger; message 'lengthOfBytesUsingEncoding:';
    class function availableStringEncodings: NSStringEncodingPtr; message 'availableStringEncodings';
    class function localizedNameOfStringEncoding (encoding: NSStringEncoding): NSString; message 'localizedNameOfStringEncoding:';
    class function defaultCStringEncoding: NSStringEncoding; message 'defaultCStringEncoding';
    function decomposedStringWithCanonicalMapping: NSString; message 'decomposedStringWithCanonicalMapping';
    function precomposedStringWithCanonicalMapping: NSString; message 'precomposedStringWithCanonicalMapping';
    function decomposedStringWithCompatibilityMapping: NSString; message 'decomposedStringWithCompatibilityMapping';
    function precomposedStringWithCompatibilityMapping: NSString; message 'precomposedStringWithCompatibilityMapping';
    function componentsSeparatedByString (separator: NSString): NSArray; message 'componentsSeparatedByString:';
    function componentsSeparatedByCharactersInSet (separator: NSCharacterSet): NSArray; message 'componentsSeparatedByCharactersInSet:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function stringByTrimmingCharactersInSet (set_: NSCharacterSet): NSString; message 'stringByTrimmingCharactersInSet:';
    function stringByPaddingToLength_withString_startingAtIndex (newLength: NSUInteger; padString: NSString; padIndex: NSUInteger): NSString; message 'stringByPaddingToLength:withString:startingAtIndex:';
    function stringByFoldingWithOptions_locale (options: NSStringCompareOptions; locale: NSLocale): NSString; message 'stringByFoldingWithOptions:locale:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function stringByReplacingOccurrencesOfString_withString_options_range (target: NSString; replacement: NSString; options: NSStringCompareOptions; searchRange: NSRange): NSString; message 'stringByReplacingOccurrencesOfString:withString:options:range:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function stringByReplacingOccurrencesOfString_withString (target: NSString; replacement: NSString): NSString; message 'stringByReplacingOccurrencesOfString:withString:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function stringByReplacingCharactersInRange_withString (range: NSRange; replacement: NSString): NSString; message 'stringByReplacingCharactersInRange:withString:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function stringByApplyingTransform_reverse (transform: NSStringTransform; reverse: objcbool): NSString; message 'stringByApplyingTransform:reverse:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function writeToURL_atomically_encoding_error (url: NSURL; useAuxiliaryFile: objcbool; enc: NSStringEncoding; error: NSErrorPtr): objcbool; message 'writeToURL:atomically:encoding:error:';
    function writeToFile_atomically_encoding_error (path: NSString; useAuxiliaryFile: objcbool; enc: NSStringEncoding; error: NSErrorPtr): objcbool; message 'writeToFile:atomically:encoding:error:';
    function description: NSString; message 'description';
    function hash: NSUInteger; message 'hash';
    function initWithCharactersNoCopy_length_freeWhenDone (characters: unicharPtr; length_: NSUInteger; freeBuffer: objcbool): id; message 'initWithCharactersNoCopy:length:freeWhenDone:';
    function initWithCharactersNoCopy_length_deallocator (chars: unicharPtr; len: NSUInteger; deallocator: NSStringInitWithCharactersNoCopyCallback): id; message 'initWithCharactersNoCopy:length:deallocator:';
    function initWithCharacters_length (characters: unicharPtr; length_: NSUInteger): id; message 'initWithCharacters:length:';
    function initWithUTF8String (nullTerminatedCString: PChar): id; message 'initWithUTF8String:';
    function initWithString (aString: NSString): id; message 'initWithString:';
    function initWithFormat (format: NSString): id; varargs; message 'initWithFormat:';
    function initWithFormat_arguments (format: NSString; argList: va_list): id; message 'initWithFormat:arguments:';
    function initWithFormat_locale (format: NSString; locale: id): id; varargs; message 'initWithFormat:locale:';
    function initWithFormat_locale_arguments (format: NSString; locale: id; argList: va_list): id; message 'initWithFormat:locale:arguments:';
    function initWithData_encoding (data: NSData; encoding: NSStringEncoding): id; message 'initWithData:encoding:';
    function initWithBytes_length_encoding (bytes: pointer; len: NSUInteger; encoding: NSStringEncoding): id; message 'initWithBytes:length:encoding:';
    function initWithBytesNoCopy_length_encoding_freeWhenDone (bytes: pointer; len: NSUInteger; encoding: NSStringEncoding; freeBuffer: objcbool): id; message 'initWithBytesNoCopy:length:encoding:freeWhenDone:';
    function initWithBytesNoCopy_length_encoding_deallocator (bytes: pointer; len: NSUInteger; encoding: NSStringEncoding; deallocator: NSStringInitWithBytesNoCopyCallback): id; message 'initWithBytesNoCopy:length:encoding:deallocator:';
    class function string_: id; message 'string';
    class function stringWithString (string__: NSString): id; message 'stringWithString:';
    class function stringWithCharacters_length (characters: unicharPtr; length_: NSUInteger): id; message 'stringWithCharacters:length:';
    class function stringWithUTF8String (nullTerminatedCString: PChar): id; message 'stringWithUTF8String:';
    class function stringWithFormat (format: NSString): id; varargs; message 'stringWithFormat:';
    class function localizedStringWithFormat (format: NSString): id; varargs; message 'localizedStringWithFormat:';
    function initWithCString_encoding (nullTerminatedCString: PChar; encoding: NSStringEncoding): id; message 'initWithCString:encoding:';
    class function stringWithCString_encoding (cString: PChar; enc: NSStringEncoding): id; message 'stringWithCString:encoding:';
    function initWithContentsOfURL_encoding_error (url: NSURL; enc: NSStringEncoding; error: NSErrorPtr): id; message 'initWithContentsOfURL:encoding:error:';
    function initWithContentsOfFile_encoding_error (path: NSString; enc: NSStringEncoding; error: NSErrorPtr): id; message 'initWithContentsOfFile:encoding:error:';
    class function stringWithContentsOfURL_encoding_error (url: NSURL; enc: NSStringEncoding; error: NSErrorPtr): id; message 'stringWithContentsOfURL:encoding:error:';
    class function stringWithContentsOfFile_encoding_error (path: NSString; enc: NSStringEncoding; error: NSErrorPtr): id; message 'stringWithContentsOfFile:encoding:error:';
    function initWithContentsOfURL_usedEncoding_error (url: NSURL; enc: NSStringEncodingPtr; error: NSErrorPtr): id; message 'initWithContentsOfURL:usedEncoding:error:';
    function initWithContentsOfFile_usedEncoding_error (path: NSString; enc: NSStringEncodingPtr; error: NSErrorPtr): id; message 'initWithContentsOfFile:usedEncoding:error:';
    class function stringWithContentsOfURL_usedEncoding_error (url: NSURL; enc: NSStringEncodingPtr; error: NSErrorPtr): id; message 'stringWithContentsOfURL:usedEncoding:error:';
    class function stringWithContentsOfFile_usedEncoding_error (path: NSString; enc: NSStringEncodingPtr; error: NSErrorPtr): id; message 'stringWithContentsOfFile:usedEncoding:error:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSStringEncodingDetectionOptionsKey = NSString;
  NSStringEncodingDetectionOptionsKeyPtr = ^NSStringEncodingDetectionOptionsKey;
{$endif}

{$ifdef CLASSES}

type
  NSStringEncodingDetection = objccategory external (NSString)
    class function stringEncodingForData_encodingOptions_convertedString_usedLossyConversion (data: NSData; opts: NSDictionary; string_: NSStringPtr; usedLossyConversion: objcboolPtr): NSStringEncoding; message 'stringEncodingForData:encodingOptions:convertedString:usedLossyConversion:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSString_NSItemProvider = objccategory external name 'NSItemProvider' (NSString)
  end;


type
  NSMutableString = objcclass external (NSString)
  public
    procedure replaceCharactersInRange_withString (range: NSRange; aString: NSString); message 'replaceCharactersInRange:withString:';
  end;


type
  NSMutableStringExtensionMethods = objccategory external (NSMutableString)
    procedure insertString_atIndex (aString: NSString; loc: NSUInteger); message 'insertString:atIndex:';
    procedure deleteCharactersInRange (range: NSRange); message 'deleteCharactersInRange:';
    procedure appendString (aString: NSString); message 'appendString:';
    procedure appendFormat (format: NSString); varargs; message 'appendFormat:';
    procedure setString (aString: NSString); message 'setString:';
    function replaceOccurrencesOfString_withString_options_range (target: NSString; replacement: NSString; options: NSStringCompareOptions; searchRange: NSRange): NSUInteger; message 'replaceOccurrencesOfString:withString:options:range:';
    function applyTransform_reverse_range_updatedRange (transform: NSStringTransform; reverse: objcbool; range: NSRange; resultingRange: NSRangePointer): objcbool; message 'applyTransform:reverse:range:updatedRange:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function initWithCapacity (capacity: NSUInteger): NSMutableString; message 'initWithCapacity:';
    class function stringWithCapacity (capacity: NSUInteger): NSMutableString; message 'stringWithCapacity:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCharacterConversionException: NSExceptionName; cvar; external;
  NSParseErrorException: NSExceptionName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSExtendedStringPropertyListParsing = objccategory external (NSString)
    function propertyList: id; message 'propertyList';
    function propertyListFromStringsFileFormat: NSDictionary; message 'propertyListFromStringsFileFormat';
  end;

type
  NSStringDeprecated = objccategory external (NSString)
    function cString: PChar; message 'cString'; deprecated 'Use -cStringUsingEncoding: instead';
    function lossyCString: PChar; message 'lossyCString'; deprecated 'Use -cStringUsingEncoding: instead';
    function cStringLength: NSUInteger; message 'cStringLength'; deprecated 'Use -lengthOfBytesUsingEncoding: instead';
    procedure getCString (bytes: PChar); message 'getCString:'; deprecated 'Use -getCString:maxLength:encoding: instead';
    procedure getCString_maxLength (bytes: PChar; maxLength: NSUInteger); message 'getCString:maxLength:'; deprecated 'Use -getCString:maxLength:encoding: instead';
    procedure getCString_maxLength_range_remainingRange (bytes: PChar; maxLength: NSUInteger; aRange: NSRange; leftoverRange: NSRangePointer); message 'getCString:maxLength:range:remainingRange:'; deprecated 'Use -getCString:maxLength:encoding: instead';
    function writeToFile_atomically (path: NSString; useAuxiliaryFile: objcbool): objcbool; message 'writeToFile:atomically:'; deprecated 'Use -writeToFile:atomically:error: instead';
    function writeToURL_atomically (url: NSURL; atomically: objcbool): objcbool; message 'writeToURL:atomically:'; deprecated 'Use -writeToURL:atomically:error: instead';
    function initWithContentsOfFile (path: NSString): id; message 'initWithContentsOfFile:'; deprecated 'Use -initWithContentsOfFile:encoding:error: instead';
    function initWithContentsOfURL (url: NSURL): id; message 'initWithContentsOfURL:'; deprecated 'Use -initWithContentsOfURL:encoding:error: instead';
    class function stringWithContentsOfFile (path: NSString): id; message 'stringWithContentsOfFile:'; deprecated 'Use +stringWithContentsOfFile:encoding:error: instead';
    class function stringWithContentsOfURL (url: NSURL): id; message 'stringWithContentsOfURL:'; deprecated 'Use +stringWithContentsOfURL:encoding:error: instead';
    function initWithCStringNoCopy_length_freeWhenDone (bytes: PChar; length_: NSUInteger; freeBuffer: objcbool): id; message 'initWithCStringNoCopy:length:freeWhenDone:'; deprecated 'Use -initWithCString:encoding: instead';
    function initWithCString_length (bytes: PChar; length_: NSUInteger): id; message 'initWithCString:length:'; deprecated 'Use -initWithCString:encoding: instead';
    function initWithCString (bytes: PChar): id; message 'initWithCString:'; deprecated 'Use -initWithCString:encoding: instead';
    class function stringWithCString_length (bytes: PChar; length_: NSUInteger): id; message 'stringWithCString:length:'; deprecated 'Use +stringWithCString:encoding:';
    class function stringWithCString (bytes: PChar): id; message 'stringWithCString:'; deprecated 'Use +stringWithCString:encoding: instead';
    procedure getCharacters (buffer: unicharPtr); message 'getCharacters:';
  end;
{$endif}

{$ifdef TYPES}
const
  NS_UNICHAR_IS_EIGHT_BIT = 0;
{$endif}

{$ifdef CLASSES}

type
  NSSimpleCString = objcclass external (NSString)
  private
    bytes: PChar;
    numBytes: cint;
    {$if defined(__LP64__)}
    _unused: cint;
    {$endif}
  end;

type
  NSConstantString = objcclass external (NSSimpleCString)
  end;
{$endif}

{$if defined(__OBJC2__)}

{$else}
{$ifdef EXTERNAL_SYMBOLS}
var
  _NSConstantStringClassReference: pointer; cvar; external;
{$endif}

{$endif}
