{ Parsed from SceneKit.framework SCNSceneSource.h }

{$ifdef CALLBACKS}
type
  SCNSceneSourceEntriesPassingTestCallback = reference to function (entry: id; identifier: NSString; stop: objcboolPtr): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SCNSceneSourcePtr = ^SCNSceneSource;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNSceneSourceAssetContributorsKey: NSString; cvar; external;
  SCNSceneSourceAssetCreatedDateKey: NSString; cvar; external;
  SCNSceneSourceAssetModifiedDateKey: NSString; cvar; external;
  SCNSceneSourceAssetUpAxisKey: NSString; cvar; external;
  SCNSceneSourceAssetUnitKey: NSString; cvar; external;
  SCNSceneSourceAssetAuthoringToolKey: NSString; cvar; external;
  SCNSceneSourceAssetAuthorKey: NSString; cvar; external;
  SCNSceneSourceAssetUnitNameKey: NSString; cvar; external;
  SCNSceneSourceAssetUnitMeterKey: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNSceneSourceLoadingOption = NSString;
  SCNSceneSourceLoadingOptionPtr = ^SCNSceneSourceLoadingOption;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNSceneSourceCreateNormalsIfAbsentKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceCheckConsistencyKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceFlattenSceneKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceUseSafeModeKey: SCNSceneSourceLoadingOption deprecated 'No longer supported'; cvar; external;
  SCNSceneSourceAssetDirectoryURLsKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceOverrideAssetURLsKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceStrictConformanceKey: SCNSceneSourceLoadingOption; cvar; external;
  SCNSceneSourceConvertUnitsToMetersKey: SCNSceneSourceLoadingOption { available in macos 10.10, ios 11.0, tvos 11.0, watchos 4.0 }; cvar; external;
  SCNSceneSourceConvertToYUpKey: SCNSceneSourceLoadingOption { available in macos 10.10, ios 11.0, tvos 11.0, watchos 4.0 }; cvar; external;
  SCNSceneSourceAnimationImportPolicyKey: SCNSceneSourceLoadingOption { available in macos 10.10 }; cvar; external;
  SCNSceneSourceLoadingOptionPreserveOriginalTopology: SCNSceneSourceLoadingOption { available in macos 10.12, ios 10.0, tvos 10.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNSceneSourceAnimationImportPolicy = NSString;
  SCNSceneSourceAnimationImportPolicyPtr = ^SCNSceneSourceAnimationImportPolicy;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNSceneSourceAnimationImportPolicyPlay: SCNSceneSourceAnimationImportPolicy { available in macos 10.10 }; cvar; external;
  SCNSceneSourceAnimationImportPolicyPlayRepeatedly: SCNSceneSourceAnimationImportPolicy { available in macos 10.10 }; cvar; external;
  SCNSceneSourceAnimationImportPolicyDoNotPlay: SCNSceneSourceAnimationImportPolicy { available in macos 10.10 }; cvar; external;
  SCNSceneSourceAnimationImportPolicyPlayUsingSceneTimeBase: SCNSceneSourceAnimationImportPolicy { available in macos 10.10 }; cvar; external;
  SCNDetailedErrorsKey: NSString; cvar; external;
  SCNConsistencyElementIDErrorKey: NSString; cvar; external;
  SCNConsistencyElementTypeErrorKey: NSString; cvar; external;
  SCNConsistencyLineNumberErrorKey: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
const
  SCNConsistencyInvalidURIError = 1000;
  SCNConsistencyInvalidCountError = 1001;
  SCNConsistencyInvalidArgumentError = 1002;
  SCNConsistencyMissingElementError = 1003;
  SCNConsistencyMissingAttributeError = 1004;
  SCNConsistencyXMLSchemaValidationError = 1005;

type
  SCNSceneSourceStatus = NSInteger;
  SCNSceneSourceStatusPtr = ^SCNSceneSourceStatus;

const
  SCNSceneSourceStatusError = -1;
  SCNSceneSourceStatusParsing = 4;
  SCNSceneSourceStatusValidating = 8;
  SCNSceneSourceStatusProcessing = 12;
  SCNSceneSourceStatusComplete = 16;

type
  SCNSceneSourceStatusHandler = reference to procedure (totalProgress: single; status: SCNSceneSourceStatus; error: NSError; stop: objcboolPtr); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  SCNSceneSource = objcclass external (NSObject)
  public
    class function sceneSourceWithURL_options (url: NSURL; options: NSDictionary): id; message 'sceneSourceWithURL:options:';
    class function sceneSourceWithData_options (data: NSData; options: NSDictionary): id; message 'sceneSourceWithData:options:';
    function initWithURL_options (url: NSURL; options: NSDictionary): id; message 'initWithURL:options:';
    function initWithData_options (data: NSData; options: NSDictionary): id; message 'initWithData:options:';
    function url: NSURL; message 'url';
    function data: NSData; message 'data';
    function sceneWithOptions_statusHandler (options: NSDictionary; statusHandler: SCNSceneSourceStatusHandler): SCNScene; message 'sceneWithOptions:statusHandler:';
    function sceneWithOptions_error (options: NSDictionary; error: NSErrorPtr): SCNScene; message 'sceneWithOptions:error:';
    function propertyForKey (key: NSString): id; message 'propertyForKey:';
    function entryWithIdentifier_withClass (uid: NSString; entryClass: pobjc_class): id; message 'entryWithIdentifier:withClass:';
    function identifiersOfEntriesWithClass (entryClass: pobjc_class): NSArray; message 'identifiersOfEntriesWithClass:';
    function entriesPassingTest (predicate: SCNSceneSourceEntriesPassingTestCallback): NSArray; message 'entriesPassingTest:'; { available in macos 10.9 }
  end;
{$endif}

