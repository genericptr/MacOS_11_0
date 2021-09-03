{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSPathUtilities.h }
{$ifdef CLASSES}

type
  NSStringPathExtensions = objccategory external (NSString)
    class function pathWithComponents (components: NSArray): NSString; message 'pathWithComponents:';
    function pathComponents: NSArray; message 'pathComponents';
    function isAbsolutePath: objcbool; message 'isAbsolutePath';
    function lastPathComponent: NSString; message 'lastPathComponent';
    function stringByDeletingLastPathComponent: NSString; message 'stringByDeletingLastPathComponent';
    function stringByAppendingPathComponent (str: NSString): NSString; message 'stringByAppendingPathComponent:';
    function pathExtension: NSString; message 'pathExtension';
    function stringByDeletingPathExtension: NSString; message 'stringByDeletingPathExtension';
    function stringByAppendingPathExtension (str: NSString): NSString; message 'stringByAppendingPathExtension:';
    function stringByAbbreviatingWithTildeInPath: NSString; message 'stringByAbbreviatingWithTildeInPath';
    function stringByExpandingTildeInPath: NSString; message 'stringByExpandingTildeInPath';
    function stringByStandardizingPath: NSString; message 'stringByStandardizingPath';
    function stringByResolvingSymlinksInPath: NSString; message 'stringByResolvingSymlinksInPath';
    function stringsByAppendingPaths (paths: NSArray): NSArray; message 'stringsByAppendingPaths:';
    function completePathIntoString_caseSensitive_matchesIntoArray_filterTypes (outputName: NSStringPtr; flag: objcbool; outputArray: NSArrayPtr; filterTypes: NSArray): NSUInteger; message 'completePathIntoString:caseSensitive:matchesIntoArray:filterTypes:';
    function fileSystemRepresentation: PChar; message 'fileSystemRepresentation';
    function getFileSystemRepresentation_maxLength (cname: PChar; max: NSUInteger): objcbool; message 'getFileSystemRepresentation:maxLength:';
  end;

type
  NSArrayPathExtensions = objccategory external (NSArray)
    function pathsMatchingExtensions (filterTypes: NSArray): NSArray; message 'pathsMatchingExtensions:';
  end;
{$endif}

{$ifdef FUNCTIONS}
function NSUserName: NSString; cdecl; external;
function NSFullUserName: NSString; cdecl; external;
function NSHomeDirectory: NSString; cdecl; external;
function NSHomeDirectoryForUser(userName: NSString): NSString; cdecl; external;
function NSTemporaryDirectory: NSString; cdecl; external;
function NSOpenStepRootDirectory: NSString; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  NSSearchPathDirectory = NSUInteger;
  NSSearchPathDirectoryPtr = ^NSSearchPathDirectory;

const
  NSApplicationDirectory = 1;
  NSDemoApplicationDirectory = 2;
  NSDeveloperApplicationDirectory = 3;
  NSAdminApplicationDirectory = 4;
  NSLibraryDirectory = 5;
  NSDeveloperDirectory = 6;
  NSUserDirectory = 7;
  NSDocumentationDirectory = 8;
  NSDocumentDirectory = 9;
  NSCoreServiceDirectory = 10;
  NSAutosavedInformationDirectory = 11 { available in macos , ios , watchos , tvos  };
  NSDesktopDirectory = 12;
  NSCachesDirectory = 13;
  NSApplicationSupportDirectory = 14;
  NSDownloadsDirectory = 15 { available in macos , ios , watchos , tvos  };
  NSInputMethodsDirectory = 16 { available in macos , ios , watchos , tvos  };
  NSMoviesDirectory = 17 { available in macos , ios , watchos , tvos  };
  NSMusicDirectory = 18 { available in macos , ios , watchos , tvos  };
  NSPicturesDirectory = 19 { available in macos , ios , watchos , tvos  };
  NSPrinterDescriptionDirectory = 20 { available in macos , ios , watchos , tvos  };
  NSSharedPublicDirectory = 21 { available in macos , ios , watchos , tvos  };
  NSPreferencePanesDirectory = 22 { available in macos , ios , watchos , tvos  };
  NSApplicationScriptsDirectory = 23 { unavailable in ios, watchos, tvos };
  NSItemReplacementDirectory = 99 { available in macos , ios , watchos , tvos  };
  NSAllApplicationsDirectory = 100;
  NSAllLibrariesDirectory = 101;
  NSTrashDirectory = 102 { unavailable in watchos, tvos };

type
  NSSearchPathDomainMask = NSUInteger;
  NSSearchPathDomainMaskPtr = ^NSSearchPathDomainMask;

const
  NSUserDomainMask = 1;
  NSLocalDomainMask = 2;
  NSNetworkDomainMask = 4;
  NSSystemDomainMask = 8;
  NSAllDomainsMask = $0ffff;
{$endif}

{$ifdef FUNCTIONS}
function NSSearchPathForDirectoriesInDomains(directory: NSSearchPathDirectory; domainMask: NSSearchPathDomainMask; expandTilde: objcbool): NSArray; cdecl; external;
{$endif}

