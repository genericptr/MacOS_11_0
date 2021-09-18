{ Parsed from Foundation.framework NSFileWrapper.h }

{$ifdef TYPES}
type
  NSFileWrapperPtr = ^NSFileWrapper;
{$endif}

{$ifdef TYPES}
type
  NSFileWrapperReadingOptions = NSUInteger;
  NSFileWrapperReadingOptionsPtr = ^NSFileWrapperReadingOptions;

const
  NSFileWrapperReadingImmediate = 1 shl 0;
  NSFileWrapperReadingWithoutMapping = 1 shl 1;

type
  NSFileWrapperWritingOptions = NSUInteger;
  NSFileWrapperWritingOptionsPtr = ^NSFileWrapperWritingOptions;

const
  NSFileWrapperWritingAtomic = 1 shl 0;
  NSFileWrapperWritingWithNameUpdating = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  NSFileWrapper = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _fileAttributes: NSDictionary;
    _preferredFileName: NSString;
    _fileName: NSString;
    _contents: id;
    _icon: id;
    _moreVars: id;
  public
    function initWithURL_options_error (url: NSURL; options: NSFileWrapperReadingOptions; outError: NSErrorPtr): id; message 'initWithURL:options:error:'; { available in macos , ios , watchos , tvos  }
    function initDirectoryWithFileWrappers (childrenByPreferredName: NSDictionary): id; message 'initDirectoryWithFileWrappers:'; { NS_DESIGNATED_INITIALIZER }
    function initRegularFileWithContents (contents: NSData): id; message 'initRegularFileWithContents:'; { NS_DESIGNATED_INITIALIZER }
    function initSymbolicLinkWithDestinationURL (url: NSURL): id; message 'initSymbolicLinkWithDestinationURL:'; { available in macos , ios , watchos , tvos  }
    function initWithSerializedRepresentation (serializeRepresentation: NSData): id; message 'initWithSerializedRepresentation:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function isDirectory: objcbool; message 'isDirectory';
    function isRegularFile: objcbool; message 'isRegularFile';
    function isSymbolicLink: objcbool; message 'isSymbolicLink';
    procedure setPreferredFilename(newValue: NSString); message 'setPreferredFilename:';
    function preferredFilename: NSString; message 'preferredFilename';
    procedure setFilename(newValue: NSString); message 'setFilename:';
    function filename: NSString; message 'filename';
    procedure setFileAttributes(newValue: NSDictionary); message 'setFileAttributes:';
    function fileAttributes: NSDictionary; message 'fileAttributes';
    function matchesContentsOfURL (url: NSURL): objcbool; message 'matchesContentsOfURL:'; { available in macos , ios , watchos , tvos  }
    function readFromURL_options_error (url: NSURL; options: NSFileWrapperReadingOptions; outError: NSErrorPtr): objcbool; message 'readFromURL:options:error:'; { available in macos , ios , watchos , tvos  }
    function writeToURL_options_originalContentsURL_error (url: NSURL; options: NSFileWrapperWritingOptions; originalContentsURL: NSURL; outError: NSErrorPtr): objcbool; message 'writeToURL:options:originalContentsURL:error:'; { available in macos , ios , watchos , tvos  }
    function serializedRepresentation: NSData; message 'serializedRepresentation';
    function addFileWrapper (child: NSFileWrapper): NSString; message 'addFileWrapper:';
    function addRegularFileWithContents_preferredFilename (data: NSData; fileName_: NSString): NSString; message 'addRegularFileWithContents:preferredFilename:';
    procedure removeFileWrapper (child: NSFileWrapper); message 'removeFileWrapper:';
    function fileWrappers: NSDictionary; message 'fileWrappers';
    function keyForFileWrapper (child: NSFileWrapper): NSString; message 'keyForFileWrapper:';
    function regularFileContents: NSData; message 'regularFileContents';
    function symbolicLinkDestinationURL: NSURL; message 'symbolicLinkDestinationURL'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  NSFileWrapper_NSDeprecated = objccategory external name 'NSDeprecated' (NSFileWrapper)
    function initWithPath (path: NSString): id; message 'initWithPath:'; { unavailable in ios, watchos, tvos }
    function initSymbolicLinkWithDestination (path: NSString): id; message 'initSymbolicLinkWithDestination:'; { unavailable in ios, watchos, tvos }
    function needsToBeUpdatedFromPath (path: NSString): objcbool; message 'needsToBeUpdatedFromPath:'; { unavailable in ios, watchos, tvos }
    function updateFromPath (path: NSString): objcbool; message 'updateFromPath:'; { unavailable in ios, watchos, tvos }
    function writeToFile_atomically_updateFilenames (path: NSString; atomicFlag: objcbool; updateFilenamesFlag: objcbool): objcbool; message 'writeToFile:atomically:updateFilenames:'; { unavailable in ios, watchos, tvos }
    function addFileWithPath (path: NSString): NSString; message 'addFileWithPath:'; { unavailable in ios, watchos, tvos }
    function addSymbolicLinkWithDestination_preferredFilename (path: NSString; filename_: NSString): NSString; message 'addSymbolicLinkWithDestination:preferredFilename:'; { unavailable in ios, watchos, tvos }
    function symbolicLinkDestination: NSString; message 'symbolicLinkDestination'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

{$endif}
