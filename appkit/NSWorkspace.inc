{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSWorkspace.h }

{$ifdef CALLBACKS}
type
  NSWorkspaceOpenURLCallback = reference to function (app: NSRunningApplication; error: NSError): pointer; cblock; cdecl;
  NSWorkspaceOpenURLsCallback = reference to function (app: NSRunningApplication; error: NSError): pointer; cblock; cdecl;
  NSWorkspaceOpenApplicationAtURLCallback = reference to function (app: NSRunningApplication; error: NSError): pointer; cblock; cdecl;
  NSWorkspaceRecycleURLsCallback = reference to function (newURLs: NSDictionary; error: NSError): pointer; cblock; cdecl;
  NSWorkspaceDuplicateURLsCallback = reference to function (newURLs: NSDictionary; error: NSError): pointer; cblock; cdecl;
  NSWorkspaceRequestAuthorizationOfTypeCallback = reference to function (authorization: NSWorkspaceAuthorization; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSWorkspacePtr = ^NSWorkspace;
  NSWorkspaceOpenConfigurationPtr = ^NSWorkspaceOpenConfiguration;
  NSWorkspaceAuthorizationPtr = ^NSWorkspaceAuthorization;
{$endif}

{$ifdef TYPES}
type
  NSWorkspaceIconCreationOptions = NSUInteger;
  NSWorkspaceIconCreationOptionsPtr = ^NSWorkspaceIconCreationOptions;

const
  NSExcludeQuickDrawElementsIconCreationOption = 1 shl 1;
  NSExclude10_4ElementsIconCreationOption = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  NSWorkspace = objcclass external (NSObject)
  public
    class function sharedWorkspace: NSWorkspace; message 'sharedWorkspace';
    function notificationCenter: NSNotificationCenter; message 'notificationCenter';
    function openURL (url: NSURL): objcbool; message 'openURL:';
    procedure openURL_configuration_completionHandler (url: NSURL; configuration: NSWorkspaceOpenConfiguration; completionHandler: NSWorkspaceOpenURLCallback); message 'openURL:configuration:completionHandler:'; { available in macos  }
    procedure openURLs_withApplicationAtURL_configuration_completionHandler (urls: NSArray; applicationURL: NSURL; configuration: NSWorkspaceOpenConfiguration; completionHandler: NSWorkspaceOpenURLsCallback); message 'openURLs:withApplicationAtURL:configuration:completionHandler:'; { available in macos  }
    procedure openApplicationAtURL_configuration_completionHandler (applicationURL: NSURL; configuration: NSWorkspaceOpenConfiguration; completionHandler: NSWorkspaceOpenApplicationAtURLCallback); message 'openApplicationAtURL:configuration:completionHandler:'; { available in macos  }
    function selectFile_inFileViewerRootedAtPath (fullPath: NSString; rootFullPath: NSString): objcbool; message 'selectFile:inFileViewerRootedAtPath:';
    procedure activateFileViewerSelectingURLs (fileURLs: NSArray); message 'activateFileViewerSelectingURLs:'; { available in macos  }
    function showSearchResultsForQueryString (queryString: NSString): objcbool; message 'showSearchResultsForQueryString:'; { available in macos  }
    procedure noteFileSystemChanged (path: NSString); message 'noteFileSystemChanged:';
    function isFilePackageAtPath (fullPath: NSString): objcbool; message 'isFilePackageAtPath:';
    function iconForFile (fullPath: NSString): NSImage; message 'iconForFile:';
    function iconForFiles (fullPaths: NSArray): NSImage; message 'iconForFiles:';
    function iconForContentType (contentType: UTType): NSImage; message 'iconForContentType:'; { available in macos  }
    function setIcon_forFile_options (image: NSImage; fullPath: NSString; options: NSWorkspaceIconCreationOptions): objcbool; message 'setIcon:forFile:options:';
    function fileLabels: NSArray; message 'fileLabels'; { available in macos  }
    function fileLabelColors: NSArray; message 'fileLabelColors'; { available in macos  }
    procedure recycleURLs_completionHandler (URLs: NSArray; handler: NSWorkspaceRecycleURLsCallback); message 'recycleURLs:completionHandler:'; { available in macos  }
    procedure duplicateURLs_completionHandler (URLs: NSArray; handler: NSWorkspaceDuplicateURLsCallback); message 'duplicateURLs:completionHandler:'; { available in macos  }
    function getFileSystemInfoForPath_isRemovable_isWritable_isUnmountable_description_type (fullPath: NSString; removableFlag: objcboolPtr; writableFlag: objcboolPtr; unmountableFlag: objcboolPtr; description: NSStringPtr; fileSystemType: NSStringPtr): objcbool; message 'getFileSystemInfoForPath:isRemovable:isWritable:isUnmountable:description:type:';
    function unmountAndEjectDeviceAtPath (path: NSString): objcbool; message 'unmountAndEjectDeviceAtPath:';
    function unmountAndEjectDeviceAtURL_error (url: NSURL; error: NSErrorPtr): objcbool; message 'unmountAndEjectDeviceAtURL:error:'; { available in macos  }
    function extendPowerOffBy (requested: NSInteger): NSInteger; message 'extendPowerOffBy:';
    procedure hideOtherApplications; message 'hideOtherApplications';
    function URLForApplicationWithBundleIdentifier (bundleIdentifier: NSString): NSURL; message 'URLForApplicationWithBundleIdentifier:'; { available in macos  }
    function URLForApplicationToOpenURL (url: NSURL): NSURL; message 'URLForApplicationToOpenURL:'; { available in macos  }
    function frontmostApplication: NSRunningApplication; message 'frontmostApplication'; { available in macos  }
    function menuBarOwningApplication: NSRunningApplication; message 'menuBarOwningApplication'; { available in macos  }
  end;

type
  NSWorkspaceOpenConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function configuration: id; message 'configuration';
    procedure setPromptsUserIfNeeded(newValue: objcbool); message 'setPromptsUserIfNeeded:';
    function promptsUserIfNeeded: objcbool; message 'promptsUserIfNeeded';
    procedure setAddsToRecentItems(newValue: objcbool); message 'setAddsToRecentItems:';
    function addsToRecentItems: objcbool; message 'addsToRecentItems';
    procedure setActivates(newValue: objcbool); message 'setActivates:';
    function activates: objcbool; message 'activates';
    procedure setHides(newValue: objcbool); message 'setHides:';
    function hides: objcbool; message 'hides';
    procedure setHidesOthers(newValue: objcbool); message 'setHidesOthers:';
    function hidesOthers: objcbool; message 'hidesOthers';
    procedure setForPrinting(newValue: objcbool); message 'setForPrinting:';
    function isForPrinting: objcbool; message 'isForPrinting';
    procedure setCreatesNewApplicationInstance(newValue: objcbool); message 'setCreatesNewApplicationInstance:';
    function createsNewApplicationInstance: objcbool; message 'createsNewApplicationInstance';
    procedure setAllowsRunningApplicationSubstitution(newValue: objcbool); message 'setAllowsRunningApplicationSubstitution:';
    function allowsRunningApplicationSubstitution: objcbool; message 'allowsRunningApplicationSubstitution';
    procedure setArguments(newValue: NSArray); message 'setArguments:';
    function arguments: NSArray; message 'arguments';
    procedure setEnvironment(newValue: NSDictionary); message 'setEnvironment:';
    function environment: NSDictionary; message 'environment';
    procedure setAppleEvent(newValue: NSAppleEventDescriptor); message 'setAppleEvent:';
    function appleEvent: NSAppleEventDescriptor; message 'appleEvent';
    procedure setArchitecture(newValue: cpu_type_t); message 'setArchitecture:';
    function architecture: cpu_type_t; message 'architecture';
    procedure setRequiresUniversalLinks(newValue: objcbool); message 'setRequiresUniversalLinks:';
    function requiresUniversalLinks: objcbool; message 'requiresUniversalLinks';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSWorkspaceDesktopImageOptionKey = NSString;
  NSWorkspaceDesktopImageOptionKeyPtr = ^NSWorkspaceDesktopImageOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSWorkspaceDesktopImageScalingKey: NSWorkspaceDesktopImageOptionKey { available in macos  }; cvar; external;
  NSWorkspaceDesktopImageAllowClippingKey: NSWorkspaceDesktopImageOptionKey { available in macos  }; cvar; external;
  NSWorkspaceDesktopImageFillColorKey: NSWorkspaceDesktopImageOptionKey { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSDesktopImages = objccategory external (NSWorkspace)
    function setDesktopImageURL_forScreen_options_error (url: NSURL; screen: NSScreen; options: NSDictionary; error: NSErrorPtr): objcbool; message 'setDesktopImageURL:forScreen:options:error:'; { available in macos  }
    function desktopImageURLForScreen (screen: NSScreen): NSURL; message 'desktopImageURLForScreen:'; { available in macos  }
    function desktopImageOptionsForScreen (screen: NSScreen): NSDictionary; message 'desktopImageOptionsForScreen:'; { available in macos  }
  end;
{$endif}

{$ifdef TYPES}
type
  NSWorkspaceAuthorizationType = NSInteger;
  NSWorkspaceAuthorizationTypePtr = ^NSWorkspaceAuthorizationType;

const
  NSWorkspaceAuthorizationTypeCreateSymbolicLink = 0;
  NSWorkspaceAuthorizationTypeSetAttributes = 1;
  NSWorkspaceAuthorizationTypeReplaceFile = 2;
{$endif}

{$ifdef CLASSES}

type
  NSWorkspaceAuthorization = objcclass external (NSObject)
  end;


type
  NSWorkspace_NSWorkspaceAuthorization = objccategory external name 'NSWorkspaceAuthorization' (NSWorkspace)
    procedure requestAuthorizationOfType_completionHandler (type_: NSWorkspaceAuthorizationType; completionHandler: NSWorkspaceRequestAuthorizationOfTypeCallback); message 'requestAuthorizationOfType:completionHandler:'; { available in macos  }
  end;

type
  NSFileManager_NSWorkspaceAuthorization = objccategory external name 'NSWorkspaceAuthorization' (NSFileManager)
    class function fileManagerWithAuthorization (authorization: NSWorkspaceAuthorization): id; message 'fileManagerWithAuthorization:'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSWorkspaceApplicationKey: NSString { available in macos  }; cvar; external;
  NSWorkspaceWillLaunchApplicationNotification: NSNotificationName; cvar; external;
  NSWorkspaceDidLaunchApplicationNotification: NSNotificationName; cvar; external;
  NSWorkspaceDidTerminateApplicationNotification: NSNotificationName; cvar; external;
  NSWorkspaceDidHideApplicationNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWorkspaceDidUnhideApplicationNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWorkspaceDidActivateApplicationNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWorkspaceDidDeactivateApplicationNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWorkspaceVolumeLocalizedNameKey: NSString { available in macos  }; cvar; external;
  NSWorkspaceVolumeURLKey: NSString { available in macos  }; cvar; external;
  NSWorkspaceVolumeOldLocalizedNameKey: NSString { available in macos  }; cvar; external;
  NSWorkspaceVolumeOldURLKey: NSString { available in macos  }; cvar; external;
  NSWorkspaceDidMountNotification: NSNotificationName; cvar; external;
  NSWorkspaceDidUnmountNotification: NSNotificationName; cvar; external;
  NSWorkspaceWillUnmountNotification: NSNotificationName; cvar; external;
  NSWorkspaceDidRenameVolumeNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWorkspaceWillPowerOffNotification: NSNotificationName; cvar; external;
  NSWorkspaceWillSleepNotification: NSNotificationName; cvar; external;
  NSWorkspaceDidWakeNotification: NSNotificationName; cvar; external;
  NSWorkspaceScreensDidSleepNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWorkspaceScreensDidWakeNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWorkspaceSessionDidBecomeActiveNotification: NSNotificationName; cvar; external;
  NSWorkspaceSessionDidResignActiveNotification: NSNotificationName; cvar; external;
  NSWorkspaceDidChangeFileLabelsNotification: NSNotificationName { available in macos  }; cvar; external;
  NSWorkspaceActiveSpaceDidChangeNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSWorkspaceFileOperationName = NSString deprecated;
  NSWorkspaceFileOperationNamePtr = ^NSWorkspaceFileOperationName deprecated;
  NSWorkspaceLaunchOptions = NSUInteger;
  NSWorkspaceLaunchOptionsPtr = ^NSWorkspaceLaunchOptions;

const
  NSWorkspaceLaunchAndPrint = $00000002 deprecated 'Use -[NSWorkspaceOpenConfiguration setForPrinting:YES] instead.';
  NSWorkspaceLaunchWithErrorPresentation = $00000040 deprecated 'Use -[NSWorkspaceOpenConfiguration setPromptsUserIfNeeded:YES] instead.';
  NSWorkspaceLaunchInhibitingBackgroundOnly = $00000080 deprecated 'This option does nothing.';
  NSWorkspaceLaunchWithoutAddingToRecents = $00000100 deprecated 'Use -[NSWorkspaceOpenConfiguration setAddsToRecentItems:YES] instead.';
  NSWorkspaceLaunchWithoutActivation = $00000200 deprecated 'Use -[NSWorkspaceOpenConfiguration setActivates:NO] instead.';
  NSWorkspaceLaunchAsync = $00010000 deprecated 'When using NSWorkspaceOpenConfiguration, all launches are asynchronous.';
  NSWorkspaceLaunchNewInstance = $00080000 deprecated 'Use -[NSWorkspaceOpenConfiguration setCreatesNewApplicationInstance:YES] instead.';
  NSWorkspaceLaunchAndHide = $00100000 deprecated 'Use -[NSWorkspaceOpenConfiguration setHides:YES] instead.';
  NSWorkspaceLaunchAndHideOthers = $00200000 deprecated 'Use -[NSWorkspaceOpenConfiguration setHidesOthers:YES] instead.';
  NSWorkspaceLaunchDefault = NSWorkspaceLaunchAsync deprecated 'Use NSWorkspaceOpenConfiguration instead.';
  NSWorkspaceLaunchAllowingClassicStartup = $00020000 deprecated 'The Classic environment is no longer supported.';
  NSWorkspaceLaunchPreferringClassic = $00040000 deprecated 'The Classic environment is no longer supported.';

type
  NSWorkspaceLaunchConfigurationKey = NSString deprecated 'Use NSWorkspaceOpenConfiguration instead.';
  NSWorkspaceLaunchConfigurationKeyPtr = ^NSWorkspaceLaunchConfigurationKey deprecated 'Use NSWorkspaceOpenConfiguration instead.';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSWorkspaceLaunchConfigurationAppleEvent: NSWorkspaceLaunchConfigurationKey deprecated 'Use -[NSWorkspaceOpenConfiguration setAppleEvent:] instead.'; cvar; external;
  NSWorkspaceLaunchConfigurationArguments: NSWorkspaceLaunchConfigurationKey deprecated 'Use -[NSWorkspaceOpenConfiguration setArguments:] instead.'; cvar; external;
  NSWorkspaceLaunchConfigurationEnvironment: NSWorkspaceLaunchConfigurationKey deprecated 'Use -[NSWorkspaceOpenConfiguration setEnvironment:] instead.'; cvar; external;
  NSWorkspaceLaunchConfigurationArchitecture: NSWorkspaceLaunchConfigurationKey deprecated 'Do not specify an architecutre. When unspecified, the architecture for a new application instance will be determined based on the available architectures in its executable.'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSWorkspace_NSDeprecated = objccategory external name 'NSDeprecated' (NSWorkspace)
    function openFile (fullPath: NSString): objcbool; message 'openFile:'; deprecated 'Use -[NSWorkspace openURL:] instead.';
    function openFile_withApplication (fullPath: NSString; appName: NSString): objcbool; message 'openFile:withApplication:'; deprecated 'Use -[NSWorkspace openURLs:withApplicationAtURL:configuration:completionHandler:] instead.';
    function openFile_withApplication_andDeactivate (fullPath: NSString; appName: NSString; flag: objcbool): objcbool; message 'openFile:withApplication:andDeactivate:'; deprecated 'Use -[NSWorkspace openURLs:withApplicationAtURL:configuration:completionHandler:] instead.';
    function launchApplication (appName: NSString): objcbool; message 'launchApplication:'; deprecated 'Use -[NSWorkspace openApplicationAtURL:configuration:completionHandler:] instead.';
    function launchApplicationAtURL_options_configuration_error (url: NSURL; options: NSWorkspaceLaunchOptions; configuration: NSDictionary; error: NSErrorPtr): NSRunningApplication; message 'launchApplicationAtURL:options:configuration:error:'; deprecated 'Use -[NSWorkspace openApplicationAtURL:configuration:completionHandler:] instead.';
    function openURL_options_configuration_error (url: NSURL; options: NSWorkspaceLaunchOptions; configuration: NSDictionary; error: NSErrorPtr): NSRunningApplication; message 'openURL:options:configuration:error:'; deprecated 'Use -[NSWorkspace openURL:configuration:completionHandler:] instead.';
    function openURLs_withApplicationAtURL_options_configuration_error (urls: NSArray; applicationURL: NSURL; options: NSWorkspaceLaunchOptions; configuration: NSDictionary; error: NSErrorPtr): NSRunningApplication; message 'openURLs:withApplicationAtURL:options:configuration:error:'; deprecated 'Use -[NSWorkspace openURLs:withApplicationAtURL:configuration:completionHandler:] instead.';
    function launchApplication_showIcon_autolaunch (appName: NSString; showIcon: objcbool; autolaunch: objcbool): objcbool; message 'launchApplication:showIcon:autolaunch:'; deprecated 'Use -[NSWorkspace openApplicationAtURL:configuration:completionHandler:] instead.';
    function fullPathForApplication (appName: NSString): NSString; message 'fullPathForApplication:'; deprecated 'Use -[NSWorkspace URLForApplicationWithBundleIdentifier:] instead.';
    function absolutePathForAppBundleWithIdentifier (bundleIdentifier: NSString): NSString; message 'absolutePathForAppBundleWithIdentifier:'; deprecated 'Use -[NSWorkspace URLForApplicationWithBundleIdentifier:] instead.';
    function launchAppWithBundleIdentifier_options_additionalEventParamDescriptor_launchIdentifier (bundleIdentifier: NSString; options: NSWorkspaceLaunchOptions; descriptor: NSAppleEventDescriptor; identifier: NSNumberPtr): objcbool; message 'launchAppWithBundleIdentifier:options:additionalEventParamDescriptor:launchIdentifier:'; deprecated 'Use -[NSWorkspace openApplicationAtURL:configuration:completionHandler:] instead.';
    function openURLs_withAppBundleIdentifier_options_additionalEventParamDescriptor_launchIdentifiers (urls: NSArray; bundleIdentifier: NSString; options: NSWorkspaceLaunchOptions; descriptor: NSAppleEventDescriptor; identifiers: NSArrayPtr): objcbool; message 'openURLs:withAppBundleIdentifier:options:additionalEventParamDescriptor:launchIdentifiers:'; deprecated 'Use -[NSWorkspace openURLs:withApplicationAtURL:configuration:completionHandler:] instead.';
    function openTempFile (fullPath: NSString): objcbool; message 'openTempFile:'; deprecated;
    procedure findApplications; message 'findApplications'; deprecated;
    procedure noteUserDefaultsChanged; message 'noteUserDefaultsChanged'; deprecated;
    procedure slideImage_from_to (image: NSImage; fromPoint: NSPoint; toPoint: NSPoint); message 'slideImage:from:to:'; deprecated;
    procedure checkForRemovableMedia; message 'checkForRemovableMedia'; deprecated;
    procedure noteFileSystemChanged_; message 'noteFileSystemChanged'; deprecated;
    function fileSystemChanged: objcbool; message 'fileSystemChanged'; deprecated;
    function userDefaultsChanged: objcbool; message 'userDefaultsChanged'; deprecated;
    function mountNewRemovableMedia: NSArray; message 'mountNewRemovableMedia'; deprecated;
    function activeApplication: NSDictionary; message 'activeApplication'; deprecated 'Use -[NSWorkspace frontmostApplication] instead.';
    function mountedLocalVolumePaths: NSArray; message 'mountedLocalVolumePaths'; deprecated 'Use -[NSFileManager mountedVolumeURLsIncludingResourceValuesForKeys:options:] instead.';
    function mountedRemovableMedia: NSArray; message 'mountedRemovableMedia'; deprecated 'Use -[NSFileManager mountedVolumeURLsIncludingResourceValuesForKeys:options:] instead.';
    function launchedApplications: NSArray; message 'launchedApplications'; deprecated 'Use -[NSWorkspace runningApplications] instead.';
    function openFile_fromImage_at_inView (fullPath: NSString; image: NSImage; point: NSPoint; view: NSView): objcbool; message 'openFile:fromImage:at:inView:'; deprecated 'Use -[NSWorkspace openURL:] instead.';
    function performFileOperation_source_destination_files_tag (operation: NSWorkspaceFileOperationName; source: NSString; destination: NSString; files: NSArray; tag: NSIntegerPtr): objcbool; message 'performFileOperation:source:destination:files:tag:'; deprecated;
    function getInfoForFile_application_type (fullPath: NSString; appName: NSStringPtr; type_: NSStringPtr): objcbool; message 'getInfoForFile:application:type:'; deprecated 'Use -[NSWorkspace URLForApplicationToOpenURL:] to get the URL of an application that will open a given item, or -[NSURL getResourceValue:forKey:error:] with NSURLContentTypeKey to get the type of the given item.';
    function iconForFileType (fileType: NSString): NSImage; message 'iconForFileType:'; deprecated 'Use -[NSWorkspace iconForContentType:] instead.';
    function typeOfFile_error (absoluteFilePath: NSString; outError: NSErrorPtr): NSString; message 'typeOfFile:error:'; deprecated 'Use -[NSURL getResourceValue:forKey:error:] with NSURLContentTypeKey instead.';
    function localizedDescriptionForType (typeName: NSString): NSString; message 'localizedDescriptionForType:'; deprecated 'Use UTType.localizedDescription instead.';
    function preferredFilenameExtensionForType (typeName: NSString): NSString; message 'preferredFilenameExtensionForType:'; deprecated 'Use UTType.preferredFilenameExtension instead.';
    function filenameExtension_isValidForType (filenameExtension: NSString; typeName: NSString): objcbool; message 'filenameExtension:isValidForType:'; deprecated 'Use +[UTType typesWithTag:tagClass:conformingToType:] to get a list of candidate types, then check if the input type conforms to any of them.';
    function type_conformsToType (firstTypeName: NSString; secondTypeName: NSString): objcbool; message 'type:conformsToType:'; deprecated 'Use -[UTType conformsToType:] instead.';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSWorkspaceMoveOperation: NSWorkspaceFileOperationName deprecated 'Use -[NSFileManager moveItemAtURL:toURL:error:] instead.'; cvar; external;
  NSWorkspaceCopyOperation: NSWorkspaceFileOperationName deprecated 'Use -[NSFileManager copyItemAtURL:toURL:error:] instead.'; cvar; external;
  NSWorkspaceLinkOperation: NSWorkspaceFileOperationName deprecated 'Use -[NSFileManager linkItemAtURL:toURL:error:] instead.'; cvar; external;
  NSWorkspaceCompressOperation: NSWorkspaceFileOperationName deprecated 'This operation is unimplemented.'; cvar; external;
  NSWorkspaceDecompressOperation: NSWorkspaceFileOperationName deprecated 'This operation is unimplemented.'; cvar; external;
  NSWorkspaceEncryptOperation: NSWorkspaceFileOperationName deprecated 'This operation is unimplemented.'; cvar; external;
  NSWorkspaceDecryptOperation: NSWorkspaceFileOperationName deprecated 'This operation is unimplemented.'; cvar; external;
  NSWorkspaceDestroyOperation: NSWorkspaceFileOperationName deprecated 'Use -[NSFileManager removeItemAtURL:error:] instead.'; cvar; external;
  NSWorkspaceRecycleOperation: NSWorkspaceFileOperationName deprecated 'Use -[NSWorkspace recycleURLs:completionHandler:] instead.'; cvar; external;
  NSWorkspaceDuplicateOperation: NSWorkspaceFileOperationName deprecated 'Use -[NSWorkspace duplicateURLs:completionHandler:] instead.'; cvar; external;
  NSWorkspaceDidPerformFileOperationNotification: NSNotificationName deprecated; cvar; external;
  NSPlainFileType: NSString deprecated; cvar; external;
  NSDirectoryFileType: NSString deprecated; cvar; external;
  NSApplicationFileType: NSString deprecated; cvar; external;
  NSFilesystemFileType: NSString deprecated; cvar; external;
  NSShellCommandFileType: NSString deprecated; cvar; external;
{$endif}

