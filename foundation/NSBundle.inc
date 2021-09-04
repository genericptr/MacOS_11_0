{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSBundle.h }

{ Types from NSBundle }
{$ifdef TYPES}

const
  NSBundleExecutableArchitectureI386 = $00000007;
  NSBundleExecutableArchitecturePPC = $00000012;
  NSBundleExecutableArchitectureX86_64 = $01000007;
  NSBundleExecutableArchitecturePPC64 = $01000012;
  NSBundleExecutableArchitectureARM64 = $0100000c { available in macos , ios , watchos , tvos  };
{$endif}


{$ifdef CALLBACKS}
type
  NSBundleBeginAccessingResourcesWithCompletionHandlerCallback = reference to procedure (error: NSError); cblock; cdecl;
  NSBundleConditionallyBeginAccessingResourcesWithCompletionHandlerCallback = reference to procedure (resourcesAvailable: objcbool); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSBundlePtr = ^NSBundle;
  NSBundleResourceRequestPtr = ^NSBundleResourceRequest;
{$endif}

{$ifdef CLASSES}

type
  NSBundle = objcclass external (NSObject)
  public
    class function mainBundle: NSBundle; message 'mainBundle';
    class function bundleWithPath (path: NSString): id; message 'bundleWithPath:';
    function initWithPath (path: NSString): id; message 'initWithPath:'; { NS_DESIGNATED_INITIALIZER }
    class function bundleWithURL (url: NSURL): id; message 'bundleWithURL:'; { available in macos , ios , watchos , tvos  }
    function initWithURL (url: NSURL): id; message 'initWithURL:'; { available in macos , ios , watchos , tvos  }
    class function bundleForClass (aClass: pobjc_class): NSBundle; message 'bundleForClass:';
    class function bundleWithIdentifier (identifier: NSString): NSBundle; message 'bundleWithIdentifier:';
    class function allBundles: NSArray; message 'allBundles';
    class function allFrameworks: NSArray; message 'allFrameworks';
    function load: objcbool; message 'load';
    function isLoaded: objcbool; message 'isLoaded';
    function unload: objcbool; message 'unload';
    function preflightAndReturnError (error: NSErrorPtr): objcbool; message 'preflightAndReturnError:'; { available in macos , ios , watchos , tvos  }
    function loadAndReturnError (error: NSErrorPtr): objcbool; message 'loadAndReturnError:'; { available in macos , ios , watchos , tvos  }
    function bundleURL: NSURL; message 'bundleURL'; { available in macos , ios , watchos , tvos  }
    function resourceURL: NSURL; message 'resourceURL'; { available in macos , ios , watchos , tvos  }
    function executableURL: NSURL; message 'executableURL'; { available in macos , ios , watchos , tvos  }
    function URLForAuxiliaryExecutable (executableName: NSString): NSURL; message 'URLForAuxiliaryExecutable:'; { available in macos , ios , watchos , tvos  }
    function privateFrameworksURL: NSURL; message 'privateFrameworksURL'; { available in macos , ios , watchos , tvos  }
    function sharedFrameworksURL: NSURL; message 'sharedFrameworksURL'; { available in macos , ios , watchos , tvos  }
    function sharedSupportURL: NSURL; message 'sharedSupportURL'; { available in macos , ios , watchos , tvos  }
    function builtInPlugInsURL: NSURL; message 'builtInPlugInsURL'; { available in macos , ios , watchos , tvos  }
    function appStoreReceiptURL: NSURL; message 'appStoreReceiptURL'; { available in macos , ios , watchos , tvos  }
    function bundlePath: NSString; message 'bundlePath';
    function resourcePath: NSString; message 'resourcePath';
    function executablePath: NSString; message 'executablePath';
    function pathForAuxiliaryExecutable (executableName: NSString): NSString; message 'pathForAuxiliaryExecutable:';
    function privateFrameworksPath: NSString; message 'privateFrameworksPath';
    function sharedFrameworksPath: NSString; message 'sharedFrameworksPath';
    function sharedSupportPath: NSString; message 'sharedSupportPath';
    function builtInPlugInsPath: NSString; message 'builtInPlugInsPath';
    class function URLForResource_withExtension_subdirectory_inBundleWithURL (name: NSString; ext: NSString; subpath: NSString; bundleURL_: NSURL): NSURL; message 'URLForResource:withExtension:subdirectory:inBundleWithURL:'; { available in macos , ios , watchos , tvos  }
    class function URLsForResourcesWithExtension_subdirectory_inBundleWithURL (ext: NSString; subpath: NSString; bundleURL_: NSURL): NSArray; message 'URLsForResourcesWithExtension:subdirectory:inBundleWithURL:'; { available in macos , ios , watchos , tvos  }
    function URLForResource_withExtension (name: NSString; ext: NSString): NSURL; message 'URLForResource:withExtension:'; { available in macos , ios , watchos , tvos  }
    function URLForResource_withExtension_subdirectory (name: NSString; ext: NSString; subpath: NSString): NSURL; message 'URLForResource:withExtension:subdirectory:'; { available in macos , ios , watchos , tvos  }
    function URLForResource_withExtension_subdirectory_localization (name: NSString; ext: NSString; subpath: NSString; localizationName: NSString): NSURL; message 'URLForResource:withExtension:subdirectory:localization:'; { available in macos , ios , watchos , tvos  }
    function URLsForResourcesWithExtension_subdirectory (ext: NSString; subpath: NSString): NSArray; message 'URLsForResourcesWithExtension:subdirectory:'; { available in macos , ios , watchos , tvos  }
    function URLsForResourcesWithExtension_subdirectory_localization (ext: NSString; subpath: NSString; localizationName: NSString): NSArray; message 'URLsForResourcesWithExtension:subdirectory:localization:'; { available in macos , ios , watchos , tvos  }
    class function classPathForResource_ofType_inDirectory (name: NSString; ext: NSString; bundlePath_: NSString): NSString; message 'pathForResource:ofType:inDirectory:';
    class function classPathsForResourcesOfType_inDirectory (ext: NSString; bundlePath_: NSString): NSArray; message 'pathsForResourcesOfType:inDirectory:';
    function pathForResource_ofType (name: NSString; ext: NSString): NSString; message 'pathForResource:ofType:';
    function pathForResource_ofType_inDirectory (name: NSString; ext: NSString; subpath: NSString): NSString; message 'pathForResource:ofType:inDirectory:';
    function pathForResource_ofType_inDirectory_forLocalization (name: NSString; ext: NSString; subpath: NSString; localizationName: NSString): NSString; message 'pathForResource:ofType:inDirectory:forLocalization:';
    function pathsForResourcesOfType_inDirectory (ext: NSString; subpath: NSString): NSArray; message 'pathsForResourcesOfType:inDirectory:';
    function pathsForResourcesOfType_inDirectory_forLocalization (ext: NSString; subpath: NSString; localizationName: NSString): NSArray; message 'pathsForResourcesOfType:inDirectory:forLocalization:';
    function localizedStringForKey_value_table (key: NSString; value: NSString; tableName: NSString): NSString; message 'localizedStringForKey:value:table:';
    function bundleIdentifier: NSString; message 'bundleIdentifier';
    function infoDictionary: NSDictionary; message 'infoDictionary';
    function localizedInfoDictionary: NSDictionary; message 'localizedInfoDictionary';
    function objectForInfoDictionaryKey (key: NSString): id; message 'objectForInfoDictionaryKey:';
    function classNamed (className: NSString): pobjc_class; message 'classNamed:';
    function principalClass: pobjc_class; message 'principalClass';
    function preferredLocalizations: NSArray; message 'preferredLocalizations';
    function localizations: NSArray; message 'localizations';
    function developmentLocalization: NSString; message 'developmentLocalization';
    class function preferredLocalizationsFromArray (localizationsArray: NSArray): NSArray; message 'preferredLocalizationsFromArray:';
    class function preferredLocalizationsFromArray_forPreferences (localizationsArray: NSArray; preferencesArray: NSArray): NSArray; message 'preferredLocalizationsFromArray:forPreferences:';
    function executableArchitectures: NSArray; message 'executableArchitectures'; { available in macos , ios , watchos , tvos  }
  end;


type
  NSBundleExtensionMethods = objccategory external (NSString)
    function variantFittingPresentationWidth (width: NSInteger): NSString; message 'variantFittingPresentationWidth:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSBundleDidLoadNotification: NSNotificationName; cvar; external;
  NSLoadedClasses: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSBundleResourceRequest = objcclass external (NSObject, NSProgressReportingProtocol)
  public
    function init: id; message 'init'; { unavailable in macos, ios, watchos, tvos }
    function initWithTags (tags: NSSet): id; message 'initWithTags:';
    function initWithTags_bundle (tags: NSSet; bundle: NSBundle): id; message 'initWithTags:bundle:'; { NS_DESIGNATED_INITIALIZER }
    procedure setLoadingPriority(newValue: double); message 'setLoadingPriority:';
    function loadingPriority: double; message 'loadingPriority';
    function tags: NSSet; message 'tags';
    function bundle: NSBundle; message 'bundle';
    procedure beginAccessingResourcesWithCompletionHandler (completionHandler: NSBundleBeginAccessingResourcesWithCompletionHandlerCallback); message 'beginAccessingResourcesWithCompletionHandler:';
    procedure conditionallyBeginAccessingResourcesWithCompletionHandler (completionHandler: NSBundleConditionallyBeginAccessingResourcesWithCompletionHandlerCallback); message 'conditionallyBeginAccessingResourcesWithCompletionHandler:';
    procedure endAccessingResources; message 'endAccessingResources';
    function progress: NSProgress; message 'progress';

    { Adopted protocols }
    function progress_: NSProgress; message 'progress';
  end;


type
  NSBundleResourceRequestAdditions = objccategory external (NSBundle)
    procedure setPreservationPriority_forTags (priority: double; tags: NSSet); message 'setPreservationPriority:forTags:'; { unavailable in macos }
    function preservationPriorityForTag (tag: NSString): double; message 'preservationPriorityForTag:'; { unavailable in macos }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSBundleResourceRequestLowDiskSpaceNotification: NSNotificationName { unavailable in macos }; cvar; external;
  NSBundleResourceRequestLoadingPriorityUrgent: double { unavailable in macos }; cvar; external;
{$endif}

