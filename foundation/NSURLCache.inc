{ Parsed from Foundation.framework NSURLCache.h }

{$ifdef CALLBACKS}
type
  NSURLCacheGetCachedResponseForDataTaskCallback = reference to procedure (cachedResponse: NSCachedURLResponse); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSCachedURLResponsePtr = ^NSCachedURLResponse;
  NSURLCachePtr = ^NSURLCache;
{$endif}

{$ifdef TYPES}
type
  NSURLCacheStoragePolicy = NSUInteger;
  NSURLCacheStoragePolicyPtr = ^NSURLCacheStoragePolicy;

const
  NSURLCacheStorageAllowed = 0;
  NSURLCacheStorageAllowedInMemoryOnly = 1;
  NSURLCacheStorageNotAllowed = 2;
{$endif}

{$ifdef CLASSES}

type
  NSCachedURLResponse = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _internal: NSCachedURLResponseInternal;
  public
    function initWithResponse_data (response: NSURLResponse; data: NSData): id; message 'initWithResponse:data:';
    function initWithResponse_data_userInfo_storagePolicy (response: NSURLResponse; data: NSData; userInfo: NSDictionary; storagePolicy: NSURLCacheStoragePolicy): id; message 'initWithResponse:data:userInfo:storagePolicy:';
    function response: NSURLResponse; message 'response';
    function data: NSData; message 'data';
    function userInfo: NSDictionary; message 'userInfo';
    function storagePolicy: NSURLCacheStoragePolicy; message 'storagePolicy';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSURLCache = objcclass external (NSObject)
  private
    _internal: NSURLCacheInternal;
  public
    class procedure setSharedURLCache(newValue: NSURLCache); message 'setSharedURLCache:';
    class function sharedURLCache: NSURLCache; message 'sharedURLCache';
    function initWithMemoryCapacity_diskCapacity_diskPath (memoryCapacity: NSUInteger; diskCapacity: NSUInteger; path: NSString): id; message 'initWithMemoryCapacity:diskCapacity:diskPath:'; deprecated 'replace with initWithMemoryCapacity:diskCapacity:directoryURL:';
    function initWithMemoryCapacity_diskCapacity_directoryURL (memoryCapacity: NSUInteger; diskCapacity: NSUInteger; directoryURL: NSURL): id; message 'initWithMemoryCapacity:diskCapacity:directoryURL:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function cachedResponseForRequest (request: NSURLRequest): NSCachedURLResponse; message 'cachedResponseForRequest:';
    procedure storeCachedResponse_forRequest (cachedResponse: NSCachedURLResponse; request: NSURLRequest); message 'storeCachedResponse:forRequest:';
    procedure removeCachedResponseForRequest (request: NSURLRequest); message 'removeCachedResponseForRequest:';
    procedure removeAllCachedResponses; message 'removeAllCachedResponses';
    procedure removeCachedResponsesSinceDate (date: NSDate); message 'removeCachedResponsesSinceDate:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure setMemoryCapacity(newValue: NSUInteger); message 'setMemoryCapacity:';
    function memoryCapacity: NSUInteger; message 'memoryCapacity';
    procedure setDiskCapacity(newValue: NSUInteger); message 'setDiskCapacity:';
    function diskCapacity: NSUInteger; message 'diskCapacity';
    function currentMemoryUsage: NSUInteger; message 'currentMemoryUsage';
    function currentDiskUsage: NSUInteger; message 'currentDiskUsage';
  end;


type
  NSURLCache_NSURLSessionTaskAdditions = objccategory external name 'NSURLSessionTaskAdditions' (NSURLCache)
    procedure storeCachedResponse_forDataTask (cachedResponse: NSCachedURLResponse; dataTask: NSURLSessionDataTask); message 'storeCachedResponse:forDataTask:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure getCachedResponseForDataTask_completionHandler (dataTask: NSURLSessionDataTask; completionHandler: NSURLCacheGetCachedResponseForDataTaskCallback); message 'getCachedResponseForDataTask:completionHandler:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure removeCachedResponseForDataTask (dataTask: NSURLSessionDataTask); message 'removeCachedResponseForDataTask:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

