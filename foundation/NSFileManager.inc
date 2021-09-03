{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSFileManager.h }

{ Types from NSFileManager }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  NSFileManagerUnmountVolumeAtURLCallback = reference to function (errorOrNil: NSError): pointer; cblock; cdecl;
  NSFileManagerEnumeratorAtURLCallback = reference to function (url: NSURL; error: NSError): objcbool; cblock; cdecl;
  NSFileManagerGetFileProviderServicesForItemAtURLCallback = reference to function (services: NSDictionary; error: NSError): pointer; cblock; cdecl;
  NSFileManagerGetFileProviderConnectionWithCompletionHandlerCallback = reference to function (connection: NSXPCConnection; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSFileManagerPtr = ^NSFileManager;
  NSDirectoryEnumeratorPtr = ^NSDirectoryEnumerator;
  NSFileProviderServicePtr = ^NSFileProviderService;
  NSFileManagerDelegateProtocolPtr = ^NSFileManagerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSFileAttributeKey = NSString;
  NSFileAttributeKeyPtr = ^NSFileAttributeKey;
  NSFileAttributeType = NSString;
  NSFileAttributeTypePtr = ^NSFileAttributeType;
  NSFileProtectionType = NSString;
  NSFileProtectionTypePtr = ^NSFileProtectionType;
  NSFileProviderServiceName = NSString;
  NSFileProviderServiceNamePtr = ^NSFileProviderServiceName;

const
  NSFoundationVersionWithFileManagerResourceForkSupport = 412;

type
  NSVolumeEnumerationOptions = NSUInteger;
  NSVolumeEnumerationOptionsPtr = ^NSVolumeEnumerationOptions;

const
  NSVolumeEnumerationSkipHiddenVolumes = 1 shl 1;
  NSVolumeEnumerationProduceFileReferenceURLs = 1 shl 2;

type
  NSDirectoryEnumerationOptions = NSUInteger;
  NSDirectoryEnumerationOptionsPtr = ^NSDirectoryEnumerationOptions;

const
  NSDirectoryEnumerationSkipsSubdirectoryDescendants = 1 shl 0;
  NSDirectoryEnumerationSkipsPackageDescendants = 1 shl 1;
  NSDirectoryEnumerationSkipsHiddenFiles = 1 shl 2;
  NSDirectoryEnumerationIncludesDirectoriesPostOrder = 1 shl 3 { available in macos , ios , watchos , tvos  };
  NSDirectoryEnumerationProducesRelativePathURLs = 1 shl 4 { available in macos , ios , watchos , tvos  };

type
  NSFileManagerItemReplacementOptions = NSUInteger;
  NSFileManagerItemReplacementOptionsPtr = ^NSFileManagerItemReplacementOptions;

const
  NSFileManagerItemReplacementUsingNewMetadataOnly = 1 shl 0;
  NSFileManagerItemReplacementWithoutDeletingBackupItem = 1 shl 1;

type
  NSURLRelationship = NSInteger;
  NSURLRelationshipPtr = ^NSURLRelationship;

const
  NSURLRelationshipContains = 0;
  NSURLRelationshipSame = 1;
  NSURLRelationshipOther = 2;

type
  NSFileManagerUnmountOptions = NSUInteger;
  NSFileManagerUnmountOptionsPtr = ^NSFileManagerUnmountOptions;

const
  NSFileManagerUnmountAllPartitionsAndEjectDisk = 1 shl 0;
  NSFileManagerUnmountWithoutUI = 1 shl 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFileManagerUnmountDissentingProcessIdentifierErrorKey: NSString { unavailable in ios, watchos, tvos }; cvar; external;
  NSUbiquityIdentityDidChangeNotification: NSNotificationName { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSFileManager = objcclass external (NSObject)
  public
    class function defaultManager: NSFileManager; message 'defaultManager';
    function mountedVolumeURLsIncludingResourceValuesForKeys_options (propertyKeys: NSArray; options: NSVolumeEnumerationOptions): NSArray; message 'mountedVolumeURLsIncludingResourceValuesForKeys:options:'; { available in macos , ios , watchos , tvos  }
    procedure unmountVolumeAtURL_options_completionHandler (url: NSURL; mask: NSFileManagerUnmountOptions; completionHandler: NSFileManagerUnmountVolumeAtURLCallback); message 'unmountVolumeAtURL:options:completionHandler:'; { unavailable in ios, watchos, tvos }
    function contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error (url: NSURL; keys: NSArray; mask: NSDirectoryEnumerationOptions; error: NSErrorPtr): NSArray; message 'contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:'; { available in macos , ios , watchos , tvos  }
    function URLsForDirectory_inDomains (directory: NSSearchPathDirectory; domainMask: NSSearchPathDomainMask): NSArray; message 'URLsForDirectory:inDomains:'; { available in macos , ios , watchos , tvos  }
    function URLForDirectory_inDomain_appropriateForURL_create_error (directory: NSSearchPathDirectory; domain: NSSearchPathDomainMask; url: NSURL; shouldCreate: objcbool; error: NSErrorPtr): NSURL; message 'URLForDirectory:inDomain:appropriateForURL:create:error:'; { available in macos , ios , watchos , tvos  }
    function getRelationship_ofDirectoryAtURL_toItemAtURL_error (outRelationship: NSURLRelationshipPtr; directoryURL: NSURL; otherURL: NSURL; error: NSErrorPtr): objcbool; message 'getRelationship:ofDirectoryAtURL:toItemAtURL:error:'; { available in macos , ios , watchos , tvos  }
    function getRelationship_ofDirectory_inDomain_toItemAtURL_error (outRelationship: NSURLRelationshipPtr; directory: NSSearchPathDirectory; domainMask: NSSearchPathDomainMask; url: NSURL; error: NSErrorPtr): objcbool; message 'getRelationship:ofDirectory:inDomain:toItemAtURL:error:'; { available in macos , ios , watchos , tvos  }
    function createDirectoryAtURL_withIntermediateDirectories_attributes_error (url: NSURL; createIntermediates: objcbool; attributes: NSDictionary; error: NSErrorPtr): objcbool; message 'createDirectoryAtURL:withIntermediateDirectories:attributes:error:'; { available in macos , ios , watchos , tvos  }
    function createSymbolicLinkAtURL_withDestinationURL_error (url: NSURL; destURL: NSURL; error: NSErrorPtr): objcbool; message 'createSymbolicLinkAtURL:withDestinationURL:error:'; { available in macos , ios , watchos , tvos  }
    procedure setDelegate(newValue: id); message 'setDelegate:'; { available in macos , ios , watchos , tvos  }
    function delegate: id; message 'delegate'; { available in macos , ios , watchos , tvos  }
    function setAttributes_ofItemAtPath_error (attributes: NSDictionary; path: NSString; error: NSErrorPtr): objcbool; message 'setAttributes:ofItemAtPath:error:'; { available in macos , ios , watchos , tvos  }
    function createDirectoryAtPath_withIntermediateDirectories_attributes_error (path: NSString; createIntermediates: objcbool; attributes: NSDictionary; error: NSErrorPtr): objcbool; message 'createDirectoryAtPath:withIntermediateDirectories:attributes:error:'; { available in macos , ios , watchos , tvos  }
    function contentsOfDirectoryAtPath_error (path: NSString; error: NSErrorPtr): NSArray; message 'contentsOfDirectoryAtPath:error:'; { available in macos , ios , watchos , tvos  }
    function subpathsOfDirectoryAtPath_error (path: NSString; error: NSErrorPtr): NSArray; message 'subpathsOfDirectoryAtPath:error:'; { available in macos , ios , watchos , tvos  }
    function attributesOfItemAtPath_error (path: NSString; error: NSErrorPtr): NSDictionary; message 'attributesOfItemAtPath:error:'; { available in macos , ios , watchos , tvos  }
    function attributesOfFileSystemForPath_error (path: NSString; error: NSErrorPtr): NSDictionary; message 'attributesOfFileSystemForPath:error:'; { available in macos , ios , watchos , tvos  }
    function createSymbolicLinkAtPath_withDestinationPath_error (path: NSString; destPath: NSString; error: NSErrorPtr): objcbool; message 'createSymbolicLinkAtPath:withDestinationPath:error:'; { available in macos , ios , watchos , tvos  }
    function destinationOfSymbolicLinkAtPath_error (path: NSString; error: NSErrorPtr): NSString; message 'destinationOfSymbolicLinkAtPath:error:'; { available in macos , ios , watchos , tvos  }
    function copyItemAtPath_toPath_error (srcPath: NSString; dstPath: NSString; error: NSErrorPtr): objcbool; message 'copyItemAtPath:toPath:error:'; { available in macos , ios , watchos , tvos  }
    function moveItemAtPath_toPath_error (srcPath: NSString; dstPath: NSString; error: NSErrorPtr): objcbool; message 'moveItemAtPath:toPath:error:'; { available in macos , ios , watchos , tvos  }
    function linkItemAtPath_toPath_error (srcPath: NSString; dstPath: NSString; error: NSErrorPtr): objcbool; message 'linkItemAtPath:toPath:error:'; { available in macos , ios , watchos , tvos  }
    function removeItemAtPath_error (path: NSString; error: NSErrorPtr): objcbool; message 'removeItemAtPath:error:'; { available in macos , ios , watchos , tvos  }
    function copyItemAtURL_toURL_error (srcURL: NSURL; dstURL: NSURL; error: NSErrorPtr): objcbool; message 'copyItemAtURL:toURL:error:'; { available in macos , ios , watchos , tvos  }
    function moveItemAtURL_toURL_error (srcURL: NSURL; dstURL: NSURL; error: NSErrorPtr): objcbool; message 'moveItemAtURL:toURL:error:'; { available in macos , ios , watchos , tvos  }
    function linkItemAtURL_toURL_error (srcURL: NSURL; dstURL: NSURL; error: NSErrorPtr): objcbool; message 'linkItemAtURL:toURL:error:'; { available in macos , ios , watchos , tvos  }
    function removeItemAtURL_error (URL: NSURL; error: NSErrorPtr): objcbool; message 'removeItemAtURL:error:'; { available in macos , ios , watchos , tvos  }
    function trashItemAtURL_resultingItemURL_error (url: NSURL; outResultingURL: NSURLPtr; error: NSErrorPtr): objcbool; message 'trashItemAtURL:resultingItemURL:error:'; { unavailable in watchos, tvos }
    function fileAttributesAtPath_traverseLink (path: NSString; yorn: objcbool): NSDictionary; message 'fileAttributesAtPath:traverseLink:'; deprecated 'Use -attributesOfItemAtPath:error: instead';
    function changeFileAttributes_atPath (attributes: NSDictionary; path: NSString): objcbool; message 'changeFileAttributes:atPath:'; deprecated 'Use -setAttributes:ofItemAtPath:error: instead';
    function directoryContentsAtPath (path: NSString): NSArray; message 'directoryContentsAtPath:'; deprecated 'Use -contentsOfDirectoryAtPath:error: instead';
    function fileSystemAttributesAtPath (path: NSString): NSDictionary; message 'fileSystemAttributesAtPath:'; deprecated 'Use -attributesOfFileSystemForPath:error: instead';
    function pathContentOfSymbolicLinkAtPath (path: NSString): NSString; message 'pathContentOfSymbolicLinkAtPath:'; deprecated 'Use -destinationOfSymbolicLinkAtPath:error:';
    function createSymbolicLinkAtPath_pathContent (path: NSString; otherpath: NSString): objcbool; message 'createSymbolicLinkAtPath:pathContent:'; deprecated 'Use -createSymbolicLinkAtPath:error: instead';
    function createDirectoryAtPath_attributes (path: NSString; attributes: NSDictionary): objcbool; message 'createDirectoryAtPath:attributes:'; deprecated 'Use -createDirectoryAtPath:withIntermediateDirectories:attributes:error: instead';
    {$if defined(TARGET_OS_OSX) or defined(TARGET_OS_MACCATALYST)}
    function linkPath_toPath_handler (src: NSString; dest: NSString; handler: id): objcbool; message 'linkPath:toPath:handler:'; deprecated 'Not supported';
    function copyPath_toPath_handler (src: NSString; dest: NSString; handler: id): objcbool; message 'copyPath:toPath:handler:'; deprecated 'Not supported';
    function movePath_toPath_handler (src: NSString; dest: NSString; handler: id): objcbool; message 'movePath:toPath:handler:'; deprecated 'Not supported';
    function removeFileAtPath_handler (path: NSString; handler: id): objcbool; message 'removeFileAtPath:handler:'; deprecated 'Not supported';
    {$endif}
    function currentDirectoryPath: NSString; message 'currentDirectoryPath';
    function changeCurrentDirectoryPath (path: NSString): objcbool; message 'changeCurrentDirectoryPath:';
    function fileExistsAtPath (path: NSString): objcbool; message 'fileExistsAtPath:';
    function fileExistsAtPath_isDirectory (path: NSString; isDirectory: objcboolPtr): objcbool; message 'fileExistsAtPath:isDirectory:';
    function isReadableFileAtPath (path: NSString): objcbool; message 'isReadableFileAtPath:';
    function isWritableFileAtPath (path: NSString): objcbool; message 'isWritableFileAtPath:';
    function isExecutableFileAtPath (path: NSString): objcbool; message 'isExecutableFileAtPath:';
    function isDeletableFileAtPath (path: NSString): objcbool; message 'isDeletableFileAtPath:';
    function contentsEqualAtPath_andPath (path1: NSString; path2: NSString): objcbool; message 'contentsEqualAtPath:andPath:';
    function displayNameAtPath (path: NSString): NSString; message 'displayNameAtPath:';
    function componentsToDisplayForPath (path: NSString): NSArray; message 'componentsToDisplayForPath:';
    function enumeratorAtPath (path: NSString): NSDirectoryEnumerator; message 'enumeratorAtPath:';
    function enumeratorAtURL_includingPropertiesForKeys_options_errorHandler (url: NSURL; keys: NSArray; mask: NSDirectoryEnumerationOptions; handler: NSFileManagerEnumeratorAtURLCallback): NSDirectoryEnumerator; message 'enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:'; { available in macos , ios , watchos , tvos  }
    function subpathsAtPath (path: NSString): NSArray; message 'subpathsAtPath:';
    function contentsAtPath (path: NSString): NSData; message 'contentsAtPath:';
    function createFileAtPath_contents_attributes (path: NSString; data: NSData; attr: NSDictionary): objcbool; message 'createFileAtPath:contents:attributes:';
    function fileSystemRepresentationWithPath (path: NSString): PChar; message 'fileSystemRepresentationWithPath:';
    function stringWithFileSystemRepresentation_length (str: PChar; len: NSUInteger): NSString; message 'stringWithFileSystemRepresentation:length:';
    function replaceItemAtURL_withItemAtURL_backupItemName_options_resultingItemURL_error (originalItemURL: NSURL; newItemURL: NSURL; backupItemName: NSString; options: NSFileManagerItemReplacementOptions; resultingURL: NSURLPtr; error: NSErrorPtr): objcbool; message 'replaceItemAtURL:withItemAtURL:backupItemName:options:resultingItemURL:error:'; { available in macos , ios , watchos , tvos  }
    function setUbiquitous_itemAtURL_destinationURL_error (flag: objcbool; url: NSURL; destinationURL: NSURL; error: NSErrorPtr): objcbool; message 'setUbiquitous:itemAtURL:destinationURL:error:'; { available in macos , ios , watchos , tvos  }
    function isUbiquitousItemAtURL (url: NSURL): objcbool; message 'isUbiquitousItemAtURL:'; { available in macos , ios , watchos , tvos  }
    function startDownloadingUbiquitousItemAtURL_error (url: NSURL; error: NSErrorPtr): objcbool; message 'startDownloadingUbiquitousItemAtURL:error:'; { available in macos , ios , watchos , tvos  }
    function evictUbiquitousItemAtURL_error (url: NSURL; error: NSErrorPtr): objcbool; message 'evictUbiquitousItemAtURL:error:'; { available in macos , ios , watchos , tvos  }
    function URLForUbiquityContainerIdentifier (containerIdentifier: NSString): NSURL; message 'URLForUbiquityContainerIdentifier:'; { available in macos , ios , watchos , tvos  }
    function URLForPublishingUbiquitousItemAtURL_expirationDate_error (url: NSURL; outDate: NSDatePtr; error: NSErrorPtr): NSURL; message 'URLForPublishingUbiquitousItemAtURL:expirationDate:error:'; { available in macos , ios , watchos , tvos  }
    function ubiquityIdentityToken: id; message 'ubiquityIdentityToken'; { available in macos , ios , watchos , tvos  }
    procedure getFileProviderServicesForItemAtURL_completionHandler (url: NSURL; completionHandler: NSFileManagerGetFileProviderServicesForItemAtURLCallback); message 'getFileProviderServicesForItemAtURL:completionHandler:'; { unavailable in watchos, tvos }
    function containerURLForSecurityApplicationGroupIdentifier (groupIdentifier: NSString): NSURL; message 'containerURLForSecurityApplicationGroupIdentifier:'; { available in macos , ios , watchos , tvos  }
  end;


type
  NSFileManager_NSUserInformation = objccategory external name 'NSUserInformation' (NSFileManager)
    function homeDirectoryForCurrentUser: NSURL; message 'homeDirectoryForCurrentUser'; { unavailable in ios, watchos, tvos }
    function temporaryDirectory: NSURL; message 'temporaryDirectory'; { available in macosx , ios , watchos , tvos  }
    function homeDirectoryForUser (userName: NSString): NSURL; message 'homeDirectoryForUser:'; { unavailable in ios, watchos, tvos }
  end;

type
  NSCopyLinkMoveHandler = objccategory external (NSObject)
    function fileManager_shouldProceedAfterError (fm: NSFileManager; errorInfo: NSDictionary): objcbool; message 'fileManager:shouldProceedAfterError:'; deprecated ' Handler API no longer supported';
    procedure fileManager_willProcessPath (fm: NSFileManager; path: NSString); message 'fileManager:willProcessPath:'; deprecated 'Handler API no longer supported';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFileManagerDelegateProtocol = objcprotocol external name 'NSFileManagerDelegate' (NSObjectProtocol)
  optional
    function fileManager_shouldCopyItemAtPath_toPath (fileManager: NSFileManager; srcPath: NSString; dstPath: NSString): objcbool; message 'fileManager:shouldCopyItemAtPath:toPath:';
    function fileManager_shouldCopyItemAtURL_toURL (fileManager: NSFileManager; srcURL: NSURL; dstURL: NSURL): objcbool; message 'fileManager:shouldCopyItemAtURL:toURL:'; { available in macos , ios , watchos , tvos  }
    function fileManager_shouldProceedAfterError_copyingItemAtPath_toPath (fileManager: NSFileManager; error: NSError; srcPath: NSString; dstPath: NSString): objcbool; message 'fileManager:shouldProceedAfterError:copyingItemAtPath:toPath:';
    function fileManager_shouldProceedAfterError_copyingItemAtURL_toURL (fileManager: NSFileManager; error: NSError; srcURL: NSURL; dstURL: NSURL): objcbool; message 'fileManager:shouldProceedAfterError:copyingItemAtURL:toURL:'; { available in macos , ios , watchos , tvos  }
    function fileManager_shouldMoveItemAtPath_toPath (fileManager: NSFileManager; srcPath: NSString; dstPath: NSString): objcbool; message 'fileManager:shouldMoveItemAtPath:toPath:';
    function fileManager_shouldMoveItemAtURL_toURL (fileManager: NSFileManager; srcURL: NSURL; dstURL: NSURL): objcbool; message 'fileManager:shouldMoveItemAtURL:toURL:'; { available in macos , ios , watchos , tvos  }
    function fileManager_shouldProceedAfterError_movingItemAtPath_toPath (fileManager: NSFileManager; error: NSError; srcPath: NSString; dstPath: NSString): objcbool; message 'fileManager:shouldProceedAfterError:movingItemAtPath:toPath:';
    function fileManager_shouldProceedAfterError_movingItemAtURL_toURL (fileManager: NSFileManager; error: NSError; srcURL: NSURL; dstURL: NSURL): objcbool; message 'fileManager:shouldProceedAfterError:movingItemAtURL:toURL:'; { available in macos , ios , watchos , tvos  }
    function fileManager_shouldLinkItemAtPath_toPath (fileManager: NSFileManager; srcPath: NSString; dstPath: NSString): objcbool; message 'fileManager:shouldLinkItemAtPath:toPath:';
    function fileManager_shouldLinkItemAtURL_toURL (fileManager: NSFileManager; srcURL: NSURL; dstURL: NSURL): objcbool; message 'fileManager:shouldLinkItemAtURL:toURL:'; { available in macos , ios , watchos , tvos  }
    function fileManager_shouldProceedAfterError_linkingItemAtPath_toPath (fileManager: NSFileManager; error: NSError; srcPath: NSString; dstPath: NSString): objcbool; message 'fileManager:shouldProceedAfterError:linkingItemAtPath:toPath:';
    function fileManager_shouldProceedAfterError_linkingItemAtURL_toURL (fileManager: NSFileManager; error: NSError; srcURL: NSURL; dstURL: NSURL): objcbool; message 'fileManager:shouldProceedAfterError:linkingItemAtURL:toURL:'; { available in macos , ios , watchos , tvos  }
    function fileManager_shouldRemoveItemAtPath (fileManager: NSFileManager; path: NSString): objcbool; message 'fileManager:shouldRemoveItemAtPath:';
    function fileManager_shouldRemoveItemAtURL (fileManager: NSFileManager; URL: NSURL): objcbool; message 'fileManager:shouldRemoveItemAtURL:'; { available in macos , ios , watchos , tvos  }
    function fileManager_shouldProceedAfterError_removingItemAtPath (fileManager: NSFileManager; error: NSError; path: NSString): objcbool; message 'fileManager:shouldProceedAfterError:removingItemAtPath:';
    function fileManager_shouldProceedAfterError_removingItemAtURL (fileManager: NSFileManager; error: NSError; URL: NSURL): objcbool; message 'fileManager:shouldProceedAfterError:removingItemAtURL:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSDirectoryEnumerator = objcclass external (NSEnumerator)
  public
    function fileAttributes: NSDictionary; message 'fileAttributes';
    function directoryAttributes: NSDictionary; message 'directoryAttributes';
    function isEnumeratingDirectoryPostOrder: objcbool; message 'isEnumeratingDirectoryPostOrder'; { available in macos , ios , watchos , tvos  }
    procedure skipDescendents; message 'skipDescendents';
    function level: NSUInteger; message 'level'; { available in macos , ios , watchos , tvos  }
    procedure skipDescendants; message 'skipDescendants'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSFileProviderService = objcclass external (NSObject)
  private
    _name: NSFileProviderServiceName;
    _endpointCreatingProxy: id;
    _requestFinishedGroup: dispatch_group_t;
  public
    procedure getFileProviderConnectionWithCompletionHandler (completionHandler: NSFileManagerGetFileProviderConnectionWithCompletionHandlerCallback); message 'getFileProviderConnectionWithCompletionHandler:';
    function name: NSFileProviderServiceName; message 'name';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFileType: NSFileAttributeKey; cvar; external;
  NSFileTypeDirectory: NSFileAttributeType; cvar; external;
  NSFileTypeRegular: NSFileAttributeType; cvar; external;
  NSFileTypeSymbolicLink: NSFileAttributeType; cvar; external;
  NSFileTypeSocket: NSFileAttributeType; cvar; external;
  NSFileTypeCharacterSpecial: NSFileAttributeType; cvar; external;
  NSFileTypeBlockSpecial: NSFileAttributeType; cvar; external;
  NSFileTypeUnknown: NSFileAttributeType; cvar; external;
  NSFileSize: NSFileAttributeKey; cvar; external;
  NSFileModificationDate: NSFileAttributeKey; cvar; external;
  NSFileReferenceCount: NSFileAttributeKey; cvar; external;
  NSFileDeviceIdentifier: NSFileAttributeKey; cvar; external;
  NSFileOwnerAccountName: NSFileAttributeKey; cvar; external;
  NSFileGroupOwnerAccountName: NSFileAttributeKey; cvar; external;
  NSFilePosixPermissions: NSFileAttributeKey; cvar; external;
  NSFileSystemNumber: NSFileAttributeKey; cvar; external;
  NSFileSystemFileNumber: NSFileAttributeKey; cvar; external;
  NSFileExtensionHidden: NSFileAttributeKey; cvar; external;
  NSFileHFSCreatorCode: NSFileAttributeKey; cvar; external;
  NSFileHFSTypeCode: NSFileAttributeKey; cvar; external;
  NSFileImmutable: NSFileAttributeKey; cvar; external;
  NSFileAppendOnly: NSFileAttributeKey; cvar; external;
  NSFileCreationDate: NSFileAttributeKey; cvar; external;
  NSFileOwnerAccountID: NSFileAttributeKey; cvar; external;
  NSFileGroupOwnerAccountID: NSFileAttributeKey; cvar; external;
  NSFileBusy: NSFileAttributeKey; cvar; external;
  NSFileProtectionKey: NSFileAttributeKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSFileProtectionNone: NSFileProtectionType { available in macos , ios , watchos , tvos  }; cvar; external;
  NSFileProtectionComplete: NSFileProtectionType { available in macos , ios , watchos , tvos  }; cvar; external;
  NSFileProtectionCompleteUnlessOpen: NSFileProtectionType { available in macos , ios , watchos , tvos  }; cvar; external;
  NSFileProtectionCompleteUntilFirstUserAuthentication: NSFileProtectionType { available in macos , ios , watchos , tvos  }; cvar; external;
  NSFileSystemSize: NSFileAttributeKey; cvar; external;
  NSFileSystemFreeSize: NSFileAttributeKey; cvar; external;
  NSFileSystemNodes: NSFileAttributeKey; cvar; external;
  NSFileSystemFreeNodes: NSFileAttributeKey; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSFileAttributes = objccategory external (NSDictionary)
    function fileSize: culonglong; message 'fileSize';
    function fileModificationDate: NSDate; message 'fileModificationDate';
    function fileType: NSString; message 'fileType';
    function filePosixPermissions: NSUInteger; message 'filePosixPermissions';
    function fileOwnerAccountName: NSString; message 'fileOwnerAccountName';
    function fileGroupOwnerAccountName: NSString; message 'fileGroupOwnerAccountName';
    function fileSystemNumber: NSInteger; message 'fileSystemNumber';
    function fileSystemFileNumber: NSUInteger; message 'fileSystemFileNumber';
    function fileExtensionHidden: objcbool; message 'fileExtensionHidden';
    function fileHFSCreatorCode: OSType; message 'fileHFSCreatorCode';
    function fileHFSTypeCode: OSType; message 'fileHFSTypeCode';
    function fileIsImmutable: objcbool; message 'fileIsImmutable';
    function fileIsAppendOnly: objcbool; message 'fileIsAppendOnly';
    function fileCreationDate: NSDate; message 'fileCreationDate';
    function fileOwnerAccountID: NSNumber; message 'fileOwnerAccountID';
    function fileGroupOwnerAccountID: NSNumber; message 'fileGroupOwnerAccountID';
  end;
{$endif}

