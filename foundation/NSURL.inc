{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSURL.h }

{ Types from NSURL }
{$ifdef TYPES}

type
  NSURLFileResourceType = NSString;
type
  NSURLFileResourceTypePtr = ^NSURLFileResourceType;

type
  NSURLThumbnailDictionaryItem = NSString;
type
  NSURLThumbnailDictionaryItemPtr = ^NSURLThumbnailDictionaryItem;

type
  NSURLFileProtectionType = NSString;
type
  NSURLFileProtectionTypePtr = ^NSURLFileProtectionType;

type
  NSURLUbiquitousItemDownloadingStatus = NSString;
type
  NSURLUbiquitousItemDownloadingStatusPtr = ^NSURLUbiquitousItemDownloadingStatus;

type
  NSURLUbiquitousSharedItemRole = NSString;
type
  NSURLUbiquitousSharedItemRolePtr = ^NSURLUbiquitousSharedItemRole;

type
  NSURLUbiquitousSharedItemPermissions = NSString;
type
  NSURLUbiquitousSharedItemPermissionsPtr = ^NSURLUbiquitousSharedItemPermissions;

type
  NSURLBookmarkCreationOptions = NSUInteger;
type
  NSURLBookmarkCreationOptionsPtr = ^NSURLBookmarkCreationOptions;

const
  NSURLBookmarkCreationPreferFileIDResolution = 1 shl 8 deprecated 'Not supported';
  NSURLBookmarkCreationMinimalBookmark = 1 shl 9;
  NSURLBookmarkCreationSuitableForBookmarkFile = 1 shl 10;
  NSURLBookmarkCreationWithSecurityScope = 1 shl 11 { unavailable in ios, watchos, tvos };
  NSURLBookmarkCreationSecurityScopeAllowOnlyReadAccess = 1 shl 12 { unavailable in ios, watchos, tvos };

type
  NSURLBookmarkResolutionOptions = NSUInteger;
type
  NSURLBookmarkResolutionOptionsPtr = ^NSURLBookmarkResolutionOptions;

const
  NSURLBookmarkResolutionWithoutUI = 1 shl 8;
  NSURLBookmarkResolutionWithoutMounting = 1 shl 9;
  NSURLBookmarkResolutionWithSecurityScope = 1 shl 10 { unavailable in ios, watchos, tvos };

type
  NSURLBookmarkFileCreationOptions = NSUInteger;
type
  NSURLBookmarkFileCreationOptionsPtr = ^NSURLBookmarkFileCreationOptions;
{$endif}


{$ifdef TYPES}
type
  NSURLPtr = ^NSURL;
  NSURLQueryItemPtr = ^NSURLQueryItem;
  NSURLComponentsPtr = ^NSURLComponents;
  NSFileSecurityPtr = ^NSFileSecurity;
{$endif}

{$ifdef TYPES}
type
  NSURLResourceKey = NSString;
  NSURLResourceKeyPtr = ^NSURLResourceKey;
{$endif}

{$ifdef CLASSES}

type
  NSURL = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _urlString: NSString;
    _baseURL: NSURL;
    _clients: pointer;
    _reserved: pointer;
  public
    function initWithScheme_host_path (scheme: NSString; host: NSString; path: NSString): id; message 'initWithScheme:host:path:'; deprecated 'Use NSURLComponents instead, which lets you create a valid URL with any valid combination of URL components and subcomponents (not just scheme, host and path), and lets you set components and subcomponents with either percent-encoded or un-percent-encoded strings.';
    function initFileURLWithPath_isDirectory_relativeToURL (path: NSString; isDir: objcbool; baseURL: NSURL): id; message 'initFileURLWithPath:isDirectory:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    function initFileURLWithPath_relativeToURL (path: NSString; baseURL: NSURL): id; message 'initFileURLWithPath:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    function initFileURLWithPath_isDirectory (path: NSString; isDir: objcbool): id; message 'initFileURLWithPath:isDirectory:'; { available in macos , ios , watchos , tvos  }
    function initFileURLWithPath (path: NSString): id; message 'initFileURLWithPath:'; { NS_DESIGNATED_INITIALIZER }
    class function fileURLWithPath_isDirectory_relativeToURL (path: NSString; isDir: objcbool; baseURL: NSURL): NSURL; message 'fileURLWithPath:isDirectory:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    class function fileURLWithPath_relativeToURL (path: NSString; baseURL: NSURL): NSURL; message 'fileURLWithPath:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    class function fileURLWithPath_isDirectory (path: NSString; isDir: objcbool): NSURL; message 'fileURLWithPath:isDirectory:'; { available in macos , ios , watchos , tvos  }
    class function fileURLWithPath (path: NSString): NSURL; message 'fileURLWithPath:';
    function initFileURLWithFileSystemRepresentation_isDirectory_relativeToURL (path: PChar; isDir: objcbool; baseURL: NSURL): id; message 'initFileURLWithFileSystemRepresentation:isDirectory:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    class function fileURLWithFileSystemRepresentation_isDirectory_relativeToURL (path: PChar; isDir: objcbool; baseURL: NSURL): NSURL; message 'fileURLWithFileSystemRepresentation:isDirectory:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    function initWithString (URLString: NSString): id; message 'initWithString:';
    function initWithString_relativeToURL (URLString: NSString; baseURL: NSURL): id; message 'initWithString:relativeToURL:'; { NS_DESIGNATED_INITIALIZER }
    class function URLWithString (URLString: NSString): id; message 'URLWithString:';
    class function URLWithString_relativeToURL (URLString: NSString; baseURL: NSURL): id; message 'URLWithString:relativeToURL:';
    function initWithDataRepresentation_relativeToURL (data: NSData; baseURL: NSURL): id; message 'initWithDataRepresentation:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    class function URLWithDataRepresentation_relativeToURL (data: NSData; baseURL: NSURL): NSURL; message 'URLWithDataRepresentation:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    function initAbsoluteURLWithDataRepresentation_relativeToURL (data: NSData; baseURL: NSURL): id; message 'initAbsoluteURLWithDataRepresentation:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    class function absoluteURLWithDataRepresentation_relativeToURL (data: NSData; baseURL: NSURL): NSURL; message 'absoluteURLWithDataRepresentation:relativeToURL:'; { available in macos , ios , watchos , tvos  }
    function dataRepresentation: NSData; message 'dataRepresentation'; { available in macos , ios , watchos , tvos  }
    function absoluteString: NSString; message 'absoluteString';
    function relativeString: NSString; message 'relativeString';
    function baseURL: NSURL; message 'baseURL';
    function absoluteURL: NSURL; message 'absoluteURL';
    function scheme: NSString; message 'scheme';
    function resourceSpecifier: NSString; message 'resourceSpecifier';
    function host: NSString; message 'host';
    function port: NSNumber; message 'port';
    function user: NSString; message 'user';
    function password: NSString; message 'password';
    function path: NSString; message 'path';
    function fragment: NSString; message 'fragment';
    function parameterString: NSString; message 'parameterString'; deprecated 'The parameterString method is deprecated. Post deprecation for applications linked with or after the macOS 10.15, and for all iOS, watchOS, and tvOS applications, parameterString will always return nil, and the path method will return the complete path including the semicolon separator and params component if the URL string contains them.';
    function query: NSString; message 'query';
    function relativePath: NSString; message 'relativePath';
    function hasDirectoryPath: objcbool; message 'hasDirectoryPath'; { available in macos , ios , watchos , tvos  }
    function getFileSystemRepresentation_maxLength (buffer: PChar; maxBufferLength: NSUInteger): objcbool; message 'getFileSystemRepresentation:maxLength:'; { available in macos , ios , watchos , tvos  }
    function fileSystemRepresentation: PChar; message 'fileSystemRepresentation'; { available in macos , ios , watchos , tvos  }
    function isFileURL: objcbool; message 'isFileURL';
    function standardizedURL: NSURL; message 'standardizedURL';
    function checkResourceIsReachableAndReturnError (error: NSErrorPtr): objcbool; message 'checkResourceIsReachableAndReturnError:'; { available in macos , ios , watchos , tvos  }
    function isFileReferenceURL: objcbool; message 'isFileReferenceURL'; { available in macos , ios , watchos , tvos  }
    function fileReferenceURL: NSURL; message 'fileReferenceURL'; { available in macos , ios , watchos , tvos  }
    function filePathURL: NSURL; message 'filePathURL'; { available in macos , ios , watchos , tvos  }
    function getResourceValue_forKey_error (value: idPtr; key: NSURLResourceKey; error: NSErrorPtr): objcbool; message 'getResourceValue:forKey:error:'; { available in macos , ios , watchos , tvos  }
    function resourceValuesForKeys_error (keys: NSArray; error: NSErrorPtr): NSDictionary; message 'resourceValuesForKeys:error:'; { available in macos , ios , watchos , tvos  }
    function setResourceValue_forKey_error (value: id; key: NSURLResourceKey; error: NSErrorPtr): objcbool; message 'setResourceValue:forKey:error:'; { available in macos , ios , watchos , tvos  }
    function setResourceValues_error (keyedValues: NSDictionary; error: NSErrorPtr): objcbool; message 'setResourceValues:error:'; { available in macos , ios , watchos , tvos  }
    procedure removeCachedResourceValueForKey (key: NSURLResourceKey); message 'removeCachedResourceValueForKey:'; { available in macos , ios , watchos , tvos  }
    procedure removeAllCachedResourceValues; message 'removeAllCachedResourceValues'; { available in macos , ios , watchos , tvos  }
    procedure setTemporaryResourceValue_forKey (value: id; key: NSURLResourceKey); message 'setTemporaryResourceValue:forKey:'; { available in macos , ios , watchos , tvos  }
    function bookmarkDataWithOptions_includingResourceValuesForKeys_relativeToURL_error (options: NSURLBookmarkCreationOptions; keys: NSArray; relativeURL: NSURL; error: NSErrorPtr): NSData; message 'bookmarkDataWithOptions:includingResourceValuesForKeys:relativeToURL:error:'; { available in macos , ios , watchos , tvos  }
    function initByResolvingBookmarkData_options_relativeToURL_bookmarkDataIsStale_error (bookmarkData: NSData; options: NSURLBookmarkResolutionOptions; relativeURL: NSURL; isStale: objcboolPtr; error: NSErrorPtr): id; message 'initByResolvingBookmarkData:options:relativeToURL:bookmarkDataIsStale:error:'; { available in macos , ios , watchos , tvos  }
    class function URLByResolvingBookmarkData_options_relativeToURL_bookmarkDataIsStale_error (bookmarkData: NSData; options: NSURLBookmarkResolutionOptions; relativeURL: NSURL; isStale: objcboolPtr; error: NSErrorPtr): id; message 'URLByResolvingBookmarkData:options:relativeToURL:bookmarkDataIsStale:error:'; { available in macos , ios , watchos , tvos  }
    class function resourceValuesForKeys_fromBookmarkData (keys: NSArray; bookmarkData: NSData): NSDictionary; message 'resourceValuesForKeys:fromBookmarkData:'; { available in macos , ios , watchos , tvos  }
    class function writeBookmarkData_toURL_options_error (bookmarkData: NSData; bookmarkFileURL: NSURL; options: NSURLBookmarkFileCreationOptions; error: NSErrorPtr): objcbool; message 'writeBookmarkData:toURL:options:error:'; { available in macos , ios , watchos , tvos  }
    class function bookmarkDataWithContentsOfURL_error (bookmarkFileURL: NSURL; error: NSErrorPtr): NSData; message 'bookmarkDataWithContentsOfURL:error:'; { available in macos , ios , watchos , tvos  }
    class function URLByResolvingAliasFileAtURL_options_error (url: NSURL; options: NSURLBookmarkResolutionOptions; error: NSErrorPtr): id; message 'URLByResolvingAliasFileAtURL:options:error:'; { available in macos , ios , watchos , tvos  }
    function startAccessingSecurityScopedResource: objcbool; message 'startAccessingSecurityScopedResource'; { available in macos , ios , watchos , tvos  }
    procedure stopAccessingSecurityScopedResource; message 'stopAccessingSecurityScopedResource'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSPromisedItems = objccategory external (NSURL)
    function getPromisedItemResourceValue_forKey_error (value: idPtr; key: NSURLResourceKey; error: NSErrorPtr): objcbool; message 'getPromisedItemResourceValue:forKey:error:'; { available in macos , ios , watchos , tvos  }
    function promisedItemResourceValuesForKeys_error (keys: NSArray; error: NSErrorPtr): NSDictionary; message 'promisedItemResourceValuesForKeys:error:'; { available in macos , ios , watchos , tvos  }
    function checkPromisedItemIsReachableAndReturnError (error: NSErrorPtr): objcbool; message 'checkPromisedItemIsReachableAndReturnError:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSURL_NSItemProvider = objccategory external name 'NSItemProvider' (NSURL)
  end;


type
  NSURLQueryItem = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _name: NSString;
    _value: NSString;
  public
    function initWithName_value (name: NSString; value: NSString): id; message 'initWithName:value:'; { NS_DESIGNATED_INITIALIZER }
    class function queryItemWithName_value (name: NSString; value: NSString): id; message 'queryItemWithName:value:';
    function name: NSString; message 'name';
    function value: NSString; message 'value';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSURLComponents = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: id; message 'init';
    function initWithURL_resolvingAgainstBaseURL (url: NSURL; resolve: objcbool): id; message 'initWithURL:resolvingAgainstBaseURL:';
    class function componentsWithURL_resolvingAgainstBaseURL (url: NSURL; resolve: objcbool): id; message 'componentsWithURL:resolvingAgainstBaseURL:';
    function initWithString (URLString: NSString): id; message 'initWithString:';
    class function componentsWithString (URLString: NSString): id; message 'componentsWithString:';
    function URL: NSURL; message 'URL';
    function URLRelativeToURL (baseURL: NSURL): NSURL; message 'URLRelativeToURL:';
    function string_: NSString; message 'string'; { available in macos , ios , watchos , tvos  }
    procedure setScheme(newValue: NSString); message 'setScheme:';
    function scheme: NSString; message 'scheme';
    procedure setUser(newValue: NSString); message 'setUser:';
    function user: NSString; message 'user';
    procedure setPassword(newValue: NSString); message 'setPassword:';
    function password: NSString; message 'password';
    procedure setHost(newValue: NSString); message 'setHost:';
    function host: NSString; message 'host';
    procedure setPort(newValue: NSNumber); message 'setPort:';
    function port: NSNumber; message 'port';
    procedure setPath(newValue: NSString); message 'setPath:';
    function path: NSString; message 'path';
    procedure setQuery(newValue: NSString); message 'setQuery:';
    function query: NSString; message 'query';
    procedure setFragment(newValue: NSString); message 'setFragment:';
    function fragment: NSString; message 'fragment';
    procedure setPercentEncodedUser(newValue: NSString); message 'setPercentEncodedUser:';
    function percentEncodedUser: NSString; message 'percentEncodedUser';
    procedure setPercentEncodedPassword(newValue: NSString); message 'setPercentEncodedPassword:';
    function percentEncodedPassword: NSString; message 'percentEncodedPassword';
    procedure setPercentEncodedHost(newValue: NSString); message 'setPercentEncodedHost:';
    function percentEncodedHost: NSString; message 'percentEncodedHost';
    procedure setPercentEncodedPath(newValue: NSString); message 'setPercentEncodedPath:';
    function percentEncodedPath: NSString; message 'percentEncodedPath';
    procedure setPercentEncodedQuery(newValue: NSString); message 'setPercentEncodedQuery:';
    function percentEncodedQuery: NSString; message 'percentEncodedQuery';
    procedure setPercentEncodedFragment(newValue: NSString); message 'setPercentEncodedFragment:';
    function percentEncodedFragment: NSString; message 'percentEncodedFragment';
    function rangeOfScheme: NSRange; message 'rangeOfScheme'; { available in macos , ios , watchos , tvos  }
    function rangeOfUser: NSRange; message 'rangeOfUser'; { available in macos , ios , watchos , tvos  }
    function rangeOfPassword: NSRange; message 'rangeOfPassword'; { available in macos , ios , watchos , tvos  }
    function rangeOfHost: NSRange; message 'rangeOfHost'; { available in macos , ios , watchos , tvos  }
    function rangeOfPort: NSRange; message 'rangeOfPort'; { available in macos , ios , watchos , tvos  }
    function rangeOfPath: NSRange; message 'rangeOfPath'; { available in macos , ios , watchos , tvos  }
    function rangeOfQuery: NSRange; message 'rangeOfQuery'; { available in macos , ios , watchos , tvos  }
    function rangeOfFragment: NSRange; message 'rangeOfFragment'; { available in macos , ios , watchos , tvos  }
    procedure setQueryItems(newValue: NSArray); message 'setQueryItems:'; { available in macos , ios , watchos , tvos  }
    function queryItems: NSArray; message 'queryItems'; { available in macos , ios , watchos , tvos  }
    procedure setPercentEncodedQueryItems(newValue: NSArray); message 'setPercentEncodedQueryItems:'; { available in macosx , ios , watchos , tvos  }
    function percentEncodedQueryItems: NSArray; message 'percentEncodedQueryItems'; { available in macosx , ios , watchos , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  NSCharacterSet_NSURLUtilities = objccategory external name 'NSURLUtilities' (NSCharacterSet)
    class function URLUserAllowedCharacterSet: NSCharacterSet; message 'URLUserAllowedCharacterSet'; { available in macos , ios , watchos , tvos  }
    class function URLPasswordAllowedCharacterSet: NSCharacterSet; message 'URLPasswordAllowedCharacterSet'; { available in macos , ios , watchos , tvos  }
    class function URLHostAllowedCharacterSet: NSCharacterSet; message 'URLHostAllowedCharacterSet'; { available in macos , ios , watchos , tvos  }
    class function URLPathAllowedCharacterSet: NSCharacterSet; message 'URLPathAllowedCharacterSet'; { available in macos , ios , watchos , tvos  }
    class function URLQueryAllowedCharacterSet: NSCharacterSet; message 'URLQueryAllowedCharacterSet'; { available in macos , ios , watchos , tvos  }
    class function URLFragmentAllowedCharacterSet: NSCharacterSet; message 'URLFragmentAllowedCharacterSet'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSURLUtilities = objccategory external (NSString)
    function stringByAddingPercentEncodingWithAllowedCharacters (allowedCharacters: NSCharacterSet): NSString; message 'stringByAddingPercentEncodingWithAllowedCharacters:'; { available in macos , ios , watchos , tvos  }
    function stringByRemovingPercentEncoding: NSString; message 'stringByRemovingPercentEncoding'; { available in macos , ios , watchos , tvos  }
    function stringByAddingPercentEscapesUsingEncoding (enc: NSStringEncoding): NSString; message 'stringByAddingPercentEscapesUsingEncoding:'; deprecated 'Use -stringByAddingPercentEncodingWithAllowedCharacters: instead, which always uses the recommended UTF-8 encoding, and which encodes for a specific URL component or subcomponent since each URL component or subcomponent has different rules for what characters are valid.';
    function stringByReplacingPercentEscapesUsingEncoding (enc: NSStringEncoding): NSString; message 'stringByReplacingPercentEscapesUsingEncoding:'; deprecated 'Use -stringByRemovingPercentEncoding instead, which always uses the recommended UTF-8 encoding.';
  end;

type
  NSURLPathUtilities = objccategory external (NSURL)
    class function fileURLWithPathComponents (components: NSArray): NSURL; message 'fileURLWithPathComponents:'; { available in macos , ios , watchos , tvos  }
    function pathComponents: NSArray; message 'pathComponents'; { available in macos , ios , watchos , tvos  }
    function lastPathComponent: NSString; message 'lastPathComponent'; { available in macos , ios , watchos , tvos  }
    function pathExtension: NSString; message 'pathExtension'; { available in macos , ios , watchos , tvos  }
    function URLByAppendingPathComponent (pathComponent: NSString): NSURL; message 'URLByAppendingPathComponent:'; { available in macos , ios , watchos , tvos  }
    function URLByAppendingPathComponent_isDirectory (pathComponent: NSString; isDirectory: objcbool): NSURL; message 'URLByAppendingPathComponent:isDirectory:'; { available in macos , ios , watchos , tvos  }
    function URLByDeletingLastPathComponent: NSURL; message 'URLByDeletingLastPathComponent'; { available in macos , ios , watchos , tvos  }
    function URLByAppendingPathExtension (pathExtension_: NSString): NSURL; message 'URLByAppendingPathExtension:'; { available in macos , ios , watchos , tvos  }
    function URLByDeletingPathExtension: NSURL; message 'URLByDeletingPathExtension'; { available in macos , ios , watchos , tvos  }
    function URLByStandardizingPath: NSURL; message 'URLByStandardizingPath'; { available in macos , ios , watchos , tvos  }
    function URLByResolvingSymlinksInPath: NSURL; message 'URLByResolvingSymlinksInPath'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$if (defined(TARGET_OS_MAC) or defined(TARGET_OS_IPHONE))}
{$ifdef CLASSES}

type
  NSFileSecurity = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}

{$if defined(TARGET_OS_OSX)}

{$if  not (defined(SWIFT_CLASS_EXTRA))}
{$ifdef CLASSES}

type
  NSURLClient = objccategory external (NSObject)
    procedure URL_resourceDataDidBecomeAvailable (sender: NSURL; newBytes: NSData); message 'URL:resourceDataDidBecomeAvailable:'; deprecated 'Use NSURLConnection instead';
    procedure URLResourceDidFinishLoading (sender: NSURL); message 'URLResourceDidFinishLoading:'; deprecated 'Use NSURLConnection instead';
    procedure URLResourceDidCancelLoading (sender: NSURL); message 'URLResourceDidCancelLoading:'; deprecated 'Use NSURLConnection instead';
    procedure URL_resourceDidFailLoadingWithReason (sender: NSURL; reason: NSString); message 'URL:resourceDidFailLoadingWithReason:'; deprecated 'Use NSURLConnection instead';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSURLLoading = objccategory external (NSURL)
    function resourceDataUsingCache (shouldUseCache: objcbool): NSData; message 'resourceDataUsingCache:'; deprecated 'Use NSURLConnection instead';
    procedure loadResourceDataNotifyingClient_usingCache (client: id; shouldUseCache: objcbool); message 'loadResourceDataNotifyingClient:usingCache:'; deprecated 'Use NSURLConnection instead';
    function propertyForKey (propertyKey: NSString): id; message 'propertyForKey:'; deprecated 'Use NSURLConnection instead';
    function setResourceData (data: NSData): objcbool; message 'setResourceData:'; deprecated 'Use NSURLConnection instead';
    function setProperty_forKey (property_: id; propertyKey: NSString): objcbool; message 'setProperty:forKey:'; deprecated 'Use NSURLConnection instead';
    function URLHandleUsingCache (shouldUseCache: objcbool): NSURLHandle; message 'URLHandleUsingCache:'; deprecated 'Use NSURLConnection instead';
  end;
{$endif}

{$endif}
