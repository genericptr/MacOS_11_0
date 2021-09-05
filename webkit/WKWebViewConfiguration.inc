{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKWebViewConfiguration.h }

{ Types from WKWebViewConfiguration }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  WKWebViewConfigurationPtr = ^WKWebViewConfiguration;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  WKSelectionGranularity = NSInteger;
  WKSelectionGranularityPtr = ^WKSelectionGranularity;

const
  WKSelectionGranularityDynamic = 0;
  WKSelectionGranularityCharacter = 1;
{$endif}

{$else}
{$ifdef TYPES}
type
  WKUserInterfaceDirectionPolicy = NSInteger;
  WKUserInterfaceDirectionPolicyPtr = ^WKUserInterfaceDirectionPolicy;

const
  WKUserInterfaceDirectionPolicyContent = 0;
  WKUserInterfaceDirectionPolicySystem = 1;
{$endif}

{$endif}
{$ifdef TYPES}
type
  WKAudiovisualMediaTypes = NSUInteger;
  WKAudiovisualMediaTypesPtr = ^WKAudiovisualMediaTypes;

const
  WKAudiovisualMediaTypeNone = 0;
  WKAudiovisualMediaTypeAudio = 1 shl 0;
  WKAudiovisualMediaTypeVideo = 1 shl 1;
  WKAudiovisualMediaTypeAll = NSUIntegerMax;
{$endif}

{$ifdef CLASSES}

type
  WKWebViewConfiguration = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setProcessPool(newValue: WKProcessPool); message 'setProcessPool:';
    function processPool: WKProcessPool; message 'processPool';
    procedure setPreferences(newValue: WKPreferences); message 'setPreferences:';
    function preferences: WKPreferences; message 'preferences';
    procedure setUserContentController(newValue: WKUserContentController); message 'setUserContentController:';
    function userContentController: WKUserContentController; message 'userContentController';
    procedure setWebsiteDataStore(newValue: WKWebsiteDataStore); message 'setWebsiteDataStore:'; { available in macos , ios  }
    function websiteDataStore: WKWebsiteDataStore; message 'websiteDataStore'; { available in macos , ios  }
    procedure setSuppressesIncrementalRendering(newValue: objcbool); message 'setSuppressesIncrementalRendering:';
    function suppressesIncrementalRendering: objcbool; message 'suppressesIncrementalRendering';
    procedure setApplicationNameForUserAgent(newValue: NSString); message 'setApplicationNameForUserAgent:'; { available in macos , ios  }
    function applicationNameForUserAgent: NSString; message 'applicationNameForUserAgent'; { available in macos , ios  }
    procedure setAllowsAirPlayForMediaPlayback(newValue: objcbool); message 'setAllowsAirPlayForMediaPlayback:'; { available in macos , ios  }
    function allowsAirPlayForMediaPlayback: objcbool; message 'allowsAirPlayForMediaPlayback'; { available in macos , ios  }
    procedure setMediaTypesRequiringUserActionForPlayback(newValue: WKAudiovisualMediaTypes); message 'setMediaTypesRequiringUserActionForPlayback:'; { available in macos , ios  }
    function mediaTypesRequiringUserActionForPlayback: WKAudiovisualMediaTypes; message 'mediaTypesRequiringUserActionForPlayback'; { available in macos , ios  }
    procedure setDefaultWebpagePreferences(newValue: WKWebpagePreferences); message 'setDefaultWebpagePreferences:'; { available in macos , ios  }
    function defaultWebpagePreferences: WKWebpagePreferences; message 'defaultWebpagePreferences'; { available in macos , ios  }
    procedure setLimitsNavigationsToAppBoundDomains(newValue: objcbool); message 'setLimitsNavigationsToAppBoundDomains:'; { available in macos , ios  }
    function limitsNavigationsToAppBoundDomains: objcbool; message 'limitsNavigationsToAppBoundDomains'; { available in macos , ios  }
    {$if defined(TARGET_OS_IPHONE)}
    procedure setAllowsInlineMediaPlayback(newValue: objcbool); message 'setAllowsInlineMediaPlayback:';
    function allowsInlineMediaPlayback: objcbool; message 'allowsInlineMediaPlayback';
    procedure setSelectionGranularity(newValue: WKSelectionGranularity); message 'setSelectionGranularity:';
    function selectionGranularity: WKSelectionGranularity; message 'selectionGranularity';
    procedure set)(newValue: BOOL allowsPictureInPictureMediaPlayback); message 'set):'; { available in ios(9_0 }
    function ): BOOL allowsPictureInPictureMediaPlayback; message ')'; { available in ios(9_0 }
    procedure setDataDetectorTypes(newValue: WKDataDetectorTypes); message 'setDataDetectorTypes:'; { available in ios  }
    function dataDetectorTypes: WKDataDetectorTypes; message 'dataDetectorTypes'; { available in ios  }
    procedure setIgnoresViewportScaleLimits(newValue: objcbool); message 'setIgnoresViewportScaleLimits:'; { available in ios  }
    function ignoresViewportScaleLimits: objcbool; message 'ignoresViewportScaleLimits'; { available in ios  }
    {$else}
    procedure setUserInterfaceDirectionPolicy(newValue: WKUserInterfaceDirectionPolicy); message 'setUserInterfaceDirectionPolicy:'; { available in macos  }
    function userInterfaceDirectionPolicy: WKUserInterfaceDirectionPolicy; message 'userInterfaceDirectionPolicy'; { available in macos  }
    {$endif}
    procedure setURLSchemeHandler_forURLScheme (urlSchemeHandler: WKURLSchemeHandlerProtocol; urlScheme: NSString); message 'setURLSchemeHandler:forURLScheme:'; { available in macos , ios  }
    function urlSchemeHandlerForURLScheme (urlScheme: NSString): id; message 'urlSchemeHandlerForURLScheme:'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKDeprecated = objccategory external (WKWebViewConfiguration)
    procedure setMediaPlaybackRequiresUserAction(newValue: objcbool); message 'setMediaPlaybackRequiresUserAction:'; deprecated 'replace with mediaTypesRequiringUserActionForPlayback';
    function mediaPlaybackRequiresUserAction: objcbool; message 'mediaPlaybackRequiresUserAction'; deprecated 'replace with mediaTypesRequiringUserActionForPlayback';
    procedure setMediaPlaybackAllowsAirPlay(newValue: objcbool); message 'setMediaPlaybackAllowsAirPlay:'; deprecated 'replace with allowsAirPlayForMediaPlayback';
    function mediaPlaybackAllowsAirPlay: objcbool; message 'mediaPlaybackAllowsAirPlay'; deprecated 'replace with allowsAirPlayForMediaPlayback';
    procedure setRequiresUserActionForMediaPlayback(newValue: objcbool); message 'setRequiresUserActionForMediaPlayback:'; deprecated 'replace with mediaTypesRequiringUserActionForPlayback';
    function requiresUserActionForMediaPlayback: objcbool; message 'requiresUserActionForMediaPlayback'; deprecated 'replace with mediaTypesRequiringUserActionForPlayback';
  end;
{$endif}

{$endif}
