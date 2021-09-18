{ Parsed from Foundation.framework NSData.h }

{$ifdef CALLBACKS}
type
  NSDataEnumerateByteRangesUsingBlockCallback = reference to procedure (bytes: pointer; byteRange: NSRange; stop: objcboolPtr); cblock; cdecl;
  NSDataInitWithBytesNoCopyCallback = reference to procedure (bytes: pointer; length: NSUInteger); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSDataPtr = ^NSData;
  NSMutableDataPtr = ^NSMutableData;
  NSPurgeableDataPtr = ^NSPurgeableData;
{$endif}

{$ifdef TYPES}
type
  NSDataReadingOptions = NSUInteger;
  NSDataReadingOptionsPtr = ^NSDataReadingOptions;

const
  NSDataReadingMappedIfSafe = 1 shl 0;
  NSDataReadingUncached = 1 shl 1;
  NSDataReadingMappedAlways = 1 shl 3 { available in macos , ios , watchos , tvos  };
  NSDataReadingMapped = NSDataReadingMappedIfSafe deprecated 'replace with NSDataReadingMappedIfSafe';
  NSMappedRead = NSDataReadingMapped deprecated 'replace with NSDataReadingMapped';
  NSUncachedRead = NSDataReadingUncached deprecated 'replace with NSDataReadingUncached';

type
  NSDataWritingOptions = NSUInteger;
  NSDataWritingOptionsPtr = ^NSDataWritingOptions;

const
  NSDataWritingAtomic = 1 shl 0;
  NSDataWritingWithoutOverwriting = 1 shl 1 { available in macos , ios , watchos , tvos  };
  NSDataWritingFileProtectionNone = $10000000 { available in macos , ios , watchos , tvos  };
  NSDataWritingFileProtectionComplete = $20000000 { available in macos , ios , watchos , tvos  };
  NSDataWritingFileProtectionCompleteUnlessOpen = $30000000 { available in macos , ios , watchos , tvos  };
  NSDataWritingFileProtectionCompleteUntilFirstUserAuthentication = $40000000 { available in macos , ios , watchos , tvos  };
  NSDataWritingFileProtectionMask = $f0000000 { available in macos , ios , watchos , tvos  };
  NSAtomicWrite = NSDataWritingAtomic deprecated 'replace with NSDataWritingAtomic';

type
  NSDataSearchOptions = NSUInteger;
  NSDataSearchOptionsPtr = ^NSDataSearchOptions;

const
  NSDataSearchBackwards = 1 shl 0;
  NSDataSearchAnchored = 1 shl 1;

type
  NSDataBase64EncodingOptions = NSUInteger;
  NSDataBase64EncodingOptionsPtr = ^NSDataBase64EncodingOptions;

const
  NSDataBase64Encoding64CharacterLineLength = 1 shl 0;
  NSDataBase64Encoding76CharacterLineLength = 1 shl 1;
  NSDataBase64EncodingEndLineWithCarriageReturn = 1 shl 4;
  NSDataBase64EncodingEndLineWithLineFeed = 1 shl 5;

type
  NSDataBase64DecodingOptions = NSUInteger;
  NSDataBase64DecodingOptionsPtr = ^NSDataBase64DecodingOptions;

const
  NSDataBase64DecodingIgnoreUnknownCharacters = 1 shl 0;
{$endif}

{$ifdef CLASSES}

type
  NSData = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol, NSSecureCodingProtocol)
  public
    function length: NSUInteger; message 'length';
    function bytes: pointer; message 'bytes';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSExtendedData = objccategory external (NSData)
    function description: NSString; message 'description';
    procedure getBytes_length (buffer: pointer; length_: NSUInteger); message 'getBytes:length:';
    procedure getBytes_range (buffer: pointer; range: NSRange); message 'getBytes:range:';
    function isEqualToData (other: NSData): objcbool; message 'isEqualToData:';
    function subdataWithRange (range: NSRange): NSData; message 'subdataWithRange:';
    function writeToFile_atomically (path: NSString; useAuxiliaryFile: objcbool): objcbool; message 'writeToFile:atomically:';
    function writeToURL_atomically (url: NSURL; atomically: objcbool): objcbool; message 'writeToURL:atomically:';
    function writeToFile_options_error (path: NSString; writeOptionsMask: NSDataWritingOptions; errorPtr: NSErrorPtr): objcbool; message 'writeToFile:options:error:';
    function writeToURL_options_error (url: NSURL; writeOptionsMask: NSDataWritingOptions; errorPtr: NSErrorPtr): objcbool; message 'writeToURL:options:error:';
    function rangeOfData_options_range (dataToFind: NSData; mask: NSDataSearchOptions; searchRange: NSRange): NSRange; message 'rangeOfData:options:range:'; { available in macos , ios , watchos , tvos  }
    procedure enumerateByteRangesUsingBlock (block: NSDataEnumerateByteRangesUsingBlockCallback); message 'enumerateByteRangesUsingBlock:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSDataCreation = objccategory external (NSData)
    class function data: id; message 'data';
    class function dataWithBytes_length (bytes_: pointer; length_: NSUInteger): id; message 'dataWithBytes:length:';
    class function dataWithBytesNoCopy_length (bytes_: pointer; length_: NSUInteger): id; message 'dataWithBytesNoCopy:length:';
    class function dataWithBytesNoCopy_length_freeWhenDone (bytes_: pointer; length_: NSUInteger; b: objcbool): id; message 'dataWithBytesNoCopy:length:freeWhenDone:';
    class function dataWithContentsOfFile_options_error (path: NSString; readOptionsMask: NSDataReadingOptions; errorPtr: NSErrorPtr): id; message 'dataWithContentsOfFile:options:error:';
    class function dataWithContentsOfURL_options_error (url: NSURL; readOptionsMask: NSDataReadingOptions; errorPtr: NSErrorPtr): id; message 'dataWithContentsOfURL:options:error:';
    class function dataWithContentsOfFile (path: NSString): id; message 'dataWithContentsOfFile:';
    class function dataWithContentsOfURL (url: NSURL): id; message 'dataWithContentsOfURL:';
    function initWithBytes_length (bytes_: pointer; length_: NSUInteger): id; message 'initWithBytes:length:';
    function initWithBytesNoCopy_length (bytes_: pointer; length_: NSUInteger): id; message 'initWithBytesNoCopy:length:';
    function initWithBytesNoCopy_length_freeWhenDone (bytes_: pointer; length_: NSUInteger; b: objcbool): id; message 'initWithBytesNoCopy:length:freeWhenDone:';
    function initWithBytesNoCopy_length_deallocator (bytes_: pointer; length_: NSUInteger; deallocator: NSDataInitWithBytesNoCopyCallback): id; message 'initWithBytesNoCopy:length:deallocator:'; { available in macos , ios , watchos , tvos  }
    function initWithContentsOfFile_options_error (path: NSString; readOptionsMask: NSDataReadingOptions; errorPtr: NSErrorPtr): id; message 'initWithContentsOfFile:options:error:';
    function initWithContentsOfURL_options_error (url: NSURL; readOptionsMask: NSDataReadingOptions; errorPtr: NSErrorPtr): id; message 'initWithContentsOfURL:options:error:';
    function initWithContentsOfFile (path: NSString): id; message 'initWithContentsOfFile:';
    function initWithContentsOfURL (url: NSURL): id; message 'initWithContentsOfURL:';
    function initWithData (data_: NSData): id; message 'initWithData:';
    class function dataWithData (data_: NSData): id; message 'dataWithData:';
  end;

type
  NSDataBase64Encoding = objccategory external (NSData)
    function initWithBase64EncodedString_options (base64String: NSString; options: NSDataBase64DecodingOptions): id; message 'initWithBase64EncodedString:options:'; { available in macos , ios , watchos , tvos  }
    function base64EncodedStringWithOptions (options: NSDataBase64EncodingOptions): NSString; message 'base64EncodedStringWithOptions:'; { available in macos , ios , watchos , tvos  }
    function initWithBase64EncodedData_options (base64Data: NSData; options: NSDataBase64DecodingOptions): id; message 'initWithBase64EncodedData:options:'; { available in macos , ios , watchos , tvos  }
    function base64EncodedDataWithOptions (options: NSDataBase64EncodingOptions): NSData; message 'base64EncodedDataWithOptions:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$ifdef TYPES}
type
  NSDataCompressionAlgorithm = NSInteger;
  NSDataCompressionAlgorithmPtr = ^NSDataCompressionAlgorithm;

const
  NSDataCompressionAlgorithmLZFSE = 0;
  NSDataCompressionAlgorithmLZ4 = 1;
  NSDataCompressionAlgorithmLZMA = 2;
  NSDataCompressionAlgorithmZlib = 3;
{$endif}

{$ifdef CLASSES}

type
  NSDataCompression = objccategory external (NSData)
    function decompressedDataUsingAlgorithm_error (algorithm: NSDataCompressionAlgorithm; error: NSErrorPtr): id; message 'decompressedDataUsingAlgorithm:error:'; { available in macos , ios , watchos , tvos  }
    function compressedDataUsingAlgorithm_error (algorithm: NSDataCompressionAlgorithm; error: NSErrorPtr): id; message 'compressedDataUsingAlgorithm:error:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSData_NSDeprecated = objccategory external name 'NSDeprecated' (NSData)
    procedure getBytes (buffer: pointer); message 'getBytes:'; deprecated 'This method is unsafe because it could potentially cause buffer overruns. Use -getBytes:length: instead.';
    class function dataWithContentsOfMappedFile (path: NSString): id; message 'dataWithContentsOfMappedFile:'; deprecated 'Use +dataWithContentsOfURL:options:error: and NSDataReadingMappedIfSafe or NSDataReadingMappedAlways instead.';
    function initWithContentsOfMappedFile (path: NSString): id; message 'initWithContentsOfMappedFile:'; deprecated 'Use -initWithContentsOfURL:options:error: and NSDataReadingMappedIfSafe or NSDataReadingMappedAlways instead.';
    function initWithBase64Encoding (base64String: NSString): id; message 'initWithBase64Encoding:'; deprecated 'Use initWithBase64EncodedString:options: instead';
    function base64Encoding: NSString; message 'base64Encoding'; deprecated 'Use base64EncodedStringWithOptions: instead';
  end;


type
  NSMutableData = objcclass external (NSData)
  public
    function mutableBytes: pointer; message 'mutableBytes';
    procedure setLength(newValue: NSUInteger); message 'setLength:';
    function length: NSUInteger; message 'length';
  end;


type
  NSExtendedMutableData = objccategory external (NSMutableData)
    procedure appendBytes_length (bytes_: pointer; length_: NSUInteger); message 'appendBytes:length:';
    procedure appendData (other: NSData); message 'appendData:';
    procedure increaseLengthBy (extraLength: NSUInteger); message 'increaseLengthBy:';
    procedure replaceBytesInRange_withBytes (range: NSRange; bytes_: pointer); message 'replaceBytesInRange:withBytes:';
    procedure resetBytesInRange (range: NSRange); message 'resetBytesInRange:';
    procedure setData (data: NSData); message 'setData:';
    procedure replaceBytesInRange_withBytes_length (range: NSRange; replacementBytes: pointer; replacementLength: NSUInteger); message 'replaceBytesInRange:withBytes:length:';
  end;

type
  NSMutableDataCreation = objccategory external (NSMutableData)
    class function dataWithCapacity (aNumItems: NSUInteger): id; message 'dataWithCapacity:';
    class function dataWithLength (length_: NSUInteger): id; message 'dataWithLength:';
    function initWithCapacity (capacity: NSUInteger): id; message 'initWithCapacity:';
    function initWithLength (length_: NSUInteger): id; message 'initWithLength:';
  end;

type
  NSMutableDataCompression = objccategory external (NSMutableData)
    function decompressUsingAlgorithm_error (algorithm: NSDataCompressionAlgorithm; error: NSErrorPtr): objcbool; message 'decompressUsingAlgorithm:error:'; { available in macos , ios , watchos , tvos  }
    function compressUsingAlgorithm_error (algorithm: NSDataCompressionAlgorithm; error: NSErrorPtr): objcbool; message 'compressUsingAlgorithm:error:'; { available in macos , ios , watchos , tvos  }
  end;


type
  NSPurgeableData = objcclass external (NSMutableData, NSDiscardableContentProtocol)
  private
    _length: NSUInteger;
    _accessCount: cint32;
    _private:array[0..31] of cuint8;
    _reserved: pointer;

    { Adopted protocols }
    function beginContentAccess: objcbool; message 'beginContentAccess';
    procedure discardContentIfPossible; message 'discardContentIfPossible';
    procedure endContentAccess; message 'endContentAccess';
    function isContentDiscarded: objcbool; message 'isContentDiscarded';
  end;
{$endif}

