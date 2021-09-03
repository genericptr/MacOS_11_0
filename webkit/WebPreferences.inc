{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebPreferences.h }

{$ifdef TYPES}
type
  WebPreferencesPtr = ^WebPreferences;
{$endif}

{$ifdef TYPES}
type
  WebCacheModel = NSUInteger;
  WebCacheModelPtr = ^WebCacheModel;

const
  WebCacheModelDocumentViewer = 0;
  WebCacheModelDocumentBrowser = 1;
  WebCacheModelPrimaryWebBrowser = 2;

type
  WebPreferencesPrivate = OpaqueType;
  WebPreferencesPrivatePtr = ^WebPreferencesPrivate;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebPreferencesChangedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  WebPreferences = objcclass external (NSObject, NSCodingProtocol)
  private
    _private: WebPreferencesPrivatePtr;
  public
    class function standardPreferences: WebPreferences; message 'standardPreferences';
    function initWithIdentifier (anIdentifier: NSString): id; message 'initWithIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setStandardFontFamily(newValue: NSString); message 'setStandardFontFamily:';
    function standardFontFamily: NSString; message 'standardFontFamily';
    procedure setFixedFontFamily(newValue: NSString); message 'setFixedFontFamily:';
    function fixedFontFamily: NSString; message 'fixedFontFamily';
    procedure setSerifFontFamily(newValue: NSString); message 'setSerifFontFamily:';
    function serifFontFamily: NSString; message 'serifFontFamily';
    procedure setSansSerifFontFamily(newValue: NSString); message 'setSansSerifFontFamily:';
    function sansSerifFontFamily: NSString; message 'sansSerifFontFamily';
    procedure setCursiveFontFamily(newValue: NSString); message 'setCursiveFontFamily:';
    function cursiveFontFamily: NSString; message 'cursiveFontFamily';
    procedure setFantasyFontFamily(newValue: NSString); message 'setFantasyFontFamily:';
    function fantasyFontFamily: NSString; message 'fantasyFontFamily';
    procedure setDefaultFontSize(newValue: cint); message 'setDefaultFontSize:';
    function defaultFontSize: cint; message 'defaultFontSize';
    procedure setDefaultFixedFontSize(newValue: cint); message 'setDefaultFixedFontSize:';
    function defaultFixedFontSize: cint; message 'defaultFixedFontSize';
    procedure setMinimumFontSize(newValue: cint); message 'setMinimumFontSize:';
    function minimumFontSize: cint; message 'minimumFontSize';
    procedure setMinimumLogicalFontSize(newValue: cint); message 'setMinimumLogicalFontSize:';
    function minimumLogicalFontSize: cint; message 'minimumLogicalFontSize';
    procedure setDefaultTextEncodingName(newValue: NSString); message 'setDefaultTextEncodingName:';
    function defaultTextEncodingName: NSString; message 'defaultTextEncodingName';
    procedure setUserStyleSheetEnabled(newValue: objcbool); message 'setUserStyleSheetEnabled:';
    function userStyleSheetEnabled: objcbool; message 'userStyleSheetEnabled';
    procedure setUserStyleSheetLocation(newValue: NSURL); message 'setUserStyleSheetLocation:';
    function userStyleSheetLocation: NSURL; message 'userStyleSheetLocation';
    procedure setJavaEnabled(newValue: objcbool); message 'setJavaEnabled:';
    function isJavaEnabled: objcbool; message 'isJavaEnabled';
    procedure setJavaScriptEnabled(newValue: objcbool); message 'setJavaScriptEnabled:';
    function isJavaScriptEnabled: objcbool; message 'isJavaScriptEnabled';
    procedure setJavaScriptCanOpenWindowsAutomatically(newValue: objcbool); message 'setJavaScriptCanOpenWindowsAutomatically:';
    function javaScriptCanOpenWindowsAutomatically: objcbool; message 'javaScriptCanOpenWindowsAutomatically';
    procedure setPlugInsEnabled(newValue: objcbool); message 'setPlugInsEnabled:';
    function arePlugInsEnabled: objcbool; message 'arePlugInsEnabled';
    procedure setAllowsAnimatedImages(newValue: objcbool); message 'setAllowsAnimatedImages:';
    function allowsAnimatedImages: objcbool; message 'allowsAnimatedImages';
    procedure setAllowsAnimatedImageLooping(newValue: objcbool); message 'setAllowsAnimatedImageLooping:';
    function allowsAnimatedImageLooping: objcbool; message 'allowsAnimatedImageLooping';
    procedure setLoadsImagesAutomatically(newValue: objcbool); message 'setLoadsImagesAutomatically:';
    function loadsImagesAutomatically: objcbool; message 'loadsImagesAutomatically';
    procedure setAutosaves(newValue: objcbool); message 'setAutosaves:';
    function autosaves: objcbool; message 'autosaves';
    procedure setShouldPrintBackgrounds(newValue: objcbool); message 'setShouldPrintBackgrounds:';
    function shouldPrintBackgrounds: objcbool; message 'shouldPrintBackgrounds';
    procedure setPrivateBrowsingEnabled(newValue: objcbool); message 'setPrivateBrowsingEnabled:';
    function privateBrowsingEnabled: objcbool; message 'privateBrowsingEnabled';
    procedure setTabsToLinks(newValue: objcbool); message 'setTabsToLinks:';
    function tabsToLinks: objcbool; message 'tabsToLinks';
    procedure setUsesPageCache(newValue: objcbool); message 'setUsesPageCache:';
    function usesPageCache: objcbool; message 'usesPageCache';
    procedure setCacheModel(newValue: WebCacheModel); message 'setCacheModel:';
    function cacheModel: WebCacheModel; message 'cacheModel';
    procedure setSuppressesIncrementalRendering(newValue: objcbool); message 'setSuppressesIncrementalRendering:';
    function suppressesIncrementalRendering: objcbool; message 'suppressesIncrementalRendering';
    procedure setAllowsAirPlayForMediaPlayback(newValue: objcbool); message 'setAllowsAirPlayForMediaPlayback:';
    function allowsAirPlayForMediaPlayback: objcbool; message 'allowsAirPlayForMediaPlayback';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

