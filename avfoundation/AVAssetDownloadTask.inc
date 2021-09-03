{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVAssetDownloadTask.h }

{$ifdef CALLBACKS}
type
  AVAssetDownloadTaskDataTaskWithRequestCallback = reference to function (data: NSData; response: NSURLResponse; error: NSError): pointer; cblock; cdecl;
  AVAssetDownloadTaskDataTaskWithURLCallback = reference to function (data: NSData; response: NSURLResponse; error: NSError): pointer; cblock; cdecl;
  AVAssetDownloadTaskUploadTaskWithRequestCallback = reference to function (data: NSData; response: NSURLResponse; error: NSError): pointer; cblock; cdecl;
  AVAssetDownloadTaskDownloadTaskWithRequestCallback = reference to function (location: NSURL; response: NSURLResponse; error: NSError): pointer; cblock; cdecl;
  AVAssetDownloadTaskDownloadTaskWithURLCallback = reference to function (location: NSURL; response: NSURLResponse; error: NSError): pointer; cblock; cdecl;
  AVAssetDownloadTaskDownloadTaskWithResumeDataCallback = reference to function (location: NSURL; response: NSURLResponse; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVAssetDownloadTaskPtr = ^AVAssetDownloadTask;
  AVAggregateAssetDownloadTaskPtr = ^AVAggregateAssetDownloadTask;
  AVAssetDownloadURLSessionPtr = ^AVAssetDownloadURLSession;
  AVAssetDownloadDelegateProtocolPtr = ^AVAssetDownloadDelegateProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetDownloadTaskMinimumRequiredMediaBitrateKey: NSString { unavailable in tvos, watchos }; cvar; external;
  AVAssetDownloadTaskMinimumRequiredPresentationSizeKey: NSString { unavailable in tvos, watchos }; cvar; external;
  AVAssetDownloadTaskMediaSelectionKey: NSString { unavailable in tvos, watchos }; cvar; external;
  AVAssetDownloadTaskMediaSelectionPrefersMultichannelKey: NSString { unavailable in tvos, watchos }; cvar; external;
  AVAssetDownloadTaskPrefersLosslessAudioKey: NSString { unavailable in tvos, watchos }; cvar; external;
  AVAssetDownloadTaskPrefersHDRKey: NSString { unavailable in tvos, watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAssetDownloadTask = objcclass external (NSURLSessionTask)
  public
    function URLAsset: AVURLAsset; message 'URLAsset';
    function destinationURL: NSURL; message 'destinationURL'; { unavailable in tvos, watchos }
    function options: NSDictionary; message 'options';
    function loadedTimeRanges: NSArray; message 'loadedTimeRanges';
    function originalRequest: NSURLRequest; message 'originalRequest';
    function currentRequest: NSURLRequest; message 'currentRequest';
    function response: NSURLResponse; message 'response';
  end;

type
  AVAggregateAssetDownloadTask = objcclass external (NSURLSessionTask)
  public
    function URLAsset: AVURLAsset; message 'URLAsset';
    function originalRequest: NSURLRequest; message 'originalRequest';
    function currentRequest: NSURLRequest; message 'currentRequest';
    function response: NSURLResponse; message 'response';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVAssetDownloadDelegateProtocol = objcprotocol external name 'AVAssetDownloadDelegate' (NSURLSessionTaskDelegateProtocol)
  optional
    procedure URLSession_assetDownloadTask_didFinishDownloadingToURL (session: NSURLSession; assetDownloadTask: AVAssetDownloadTask; location: NSURL); message 'URLSession:assetDownloadTask:didFinishDownloadingToURL:'; { unavailable in tvos, watchos }
    procedure URLSession_assetDownloadTask_didLoadTimeRange_totalTimeRangesLoaded_timeRangeExpectedToLoad (session: NSURLSession; assetDownloadTask: AVAssetDownloadTask; timeRange: CMTimeRange; loadedTimeRanges: NSArray; timeRangeExpectedToLoad: CMTimeRange); message 'URLSession:assetDownloadTask:didLoadTimeRange:totalTimeRangesLoaded:timeRangeExpectedToLoad:'; { unavailable in tvos, watchos }
    procedure URLSession_assetDownloadTask_didResolveMediaSelection (session: NSURLSession; assetDownloadTask: AVAssetDownloadTask; resolvedMediaSelection: AVMediaSelection); message 'URLSession:assetDownloadTask:didResolveMediaSelection:'; { unavailable in tvos, watchos }
    procedure URLSession_aggregateAssetDownloadTask_willDownloadToURL (session: NSURLSession; aggregateAssetDownloadTask: AVAggregateAssetDownloadTask; location: NSURL); message 'URLSession:aggregateAssetDownloadTask:willDownloadToURL:'; { unavailable in tvos, watchos }
    procedure URLSession_aggregateAssetDownloadTask_didCompleteForMediaSelection (session: NSURLSession; aggregateAssetDownloadTask: AVAggregateAssetDownloadTask; mediaSelection: AVMediaSelection); message 'URLSession:aggregateAssetDownloadTask:didCompleteForMediaSelection:'; { unavailable in tvos, watchos }
    procedure URLSession_aggregateAssetDownloadTask_didLoadTimeRange_totalTimeRangesLoaded_timeRangeExpectedToLoad_forMediaSelection (session: NSURLSession; aggregateAssetDownloadTask: AVAggregateAssetDownloadTask; timeRange: CMTimeRange; loadedTimeRanges: NSArray; timeRangeExpectedToLoad: CMTimeRange; mediaSelection: AVMediaSelection); message 'URLSession:aggregateAssetDownloadTask:didLoadTimeRange:totalTimeRangesLoaded:timeRangeExpectedToLoad:forMediaSelection:'; { unavailable in tvos, watchos }
  end;
{$endif}

{$ifdef CLASSES}

type
  AVAssetDownloadURLSession = objcclass external (NSURLSession)
  public
    class function sessionWithConfiguration_assetDownloadDelegate_delegateQueue (configuration: NSURLSessionConfiguration; delegate: id; delegateQueue: NSOperationQueue): AVAssetDownloadURLSession; message 'sessionWithConfiguration:assetDownloadDelegate:delegateQueue:';
    function assetDownloadTaskWithURLAsset_destinationURL_options (URLAsset: AVURLAsset; destinationURL: NSURL; options: NSDictionary): AVAssetDownloadTask; message 'assetDownloadTaskWithURLAsset:destinationURL:options:'; { unavailable in tvos, watchos }
    function assetDownloadTaskWithURLAsset_assetTitle_assetArtworkData_options (URLAsset: AVURLAsset; title: NSString; artworkData: NSData; options: NSDictionary): AVAssetDownloadTask; message 'assetDownloadTaskWithURLAsset:assetTitle:assetArtworkData:options:'; { unavailable in tvos, watchos }
    function aggregateAssetDownloadTaskWithURLAsset_mediaSelections_assetTitle_assetArtworkData_options (URLAsset: AVURLAsset; mediaSelections: NSArray; title: NSString; artworkData: NSData; options: NSDictionary): AVAggregateAssetDownloadTask; message 'aggregateAssetDownloadTaskWithURLAsset:mediaSelections:assetTitle:assetArtworkData:options:'; { unavailable in tvos, watchos }
    class function sharedSession_: NSURLSession; message 'sharedSession';
    class function sessionWithConfiguration (configuration: NSURLSessionConfiguration): NSURLSession; message 'sessionWithConfiguration:';
    class function sessionWithConfiguration_delegate_delegateQueue (configuration: NSURLSessionConfiguration; delegate: id; queue: NSOperationQueue): NSURLSession; message 'sessionWithConfiguration:delegate:delegateQueue:';
    function dataTaskWithRequest (request: NSURLRequest): NSURLSessionDataTask; message 'dataTaskWithRequest:';
    function dataTaskWithURL (url: NSURL): NSURLSessionDataTask; message 'dataTaskWithURL:';
    function uploadTaskWithRequest_fromFile (request: NSURLRequest; fileURL: NSURL): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromFile:';
    function uploadTaskWithRequest_fromData (request: NSURLRequest; bodyData: NSData): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromData:';
    function uploadTaskWithStreamedRequest (request: NSURLRequest): NSURLSessionUploadTask; message 'uploadTaskWithStreamedRequest:';
    function downloadTaskWithRequest (request: NSURLRequest): NSURLSessionDownloadTask; message 'downloadTaskWithRequest:';
    function downloadTaskWithURL (url: NSURL): NSURLSessionDownloadTask; message 'downloadTaskWithURL:';
    function downloadTaskWithResumeData (resumeData: NSData): NSURLSessionDownloadTask; message 'downloadTaskWithResumeData:';
    function dataTaskWithRequest_completionHandler (request: NSURLRequest; completionHandler: AVAssetDownloadTaskDataTaskWithRequestCallback): NSURLSessionDataTask; message 'dataTaskWithRequest:completionHandler:';
    function dataTaskWithURL_completionHandler (url: NSURL; completionHandler: AVAssetDownloadTaskDataTaskWithURLCallback): NSURLSessionDataTask; message 'dataTaskWithURL:completionHandler:';
    function uploadTaskWithRequest_fromFile_completionHandler (request: NSURLRequest; fileURL: NSURL; completionHandler: AVAssetDownloadTaskUploadTaskWithRequestCallback): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromFile:completionHandler:';
    function uploadTaskWithRequest_fromData_completionHandler (request: NSURLRequest; bodyData: NSData; completionHandler: AVAssetDownloadTaskUploadTaskWithRequestCallback): NSURLSessionUploadTask; message 'uploadTaskWithRequest:fromData:completionHandler:';
    function downloadTaskWithRequest_completionHandler (request: NSURLRequest; completionHandler: AVAssetDownloadTaskDownloadTaskWithRequestCallback): NSURLSessionDownloadTask; message 'downloadTaskWithRequest:completionHandler:';
    function downloadTaskWithURL_completionHandler (url: NSURL; completionHandler: AVAssetDownloadTaskDownloadTaskWithURLCallback): NSURLSessionDownloadTask; message 'downloadTaskWithURL:completionHandler:';
    function downloadTaskWithResumeData_completionHandler (resumeData: NSData; completionHandler: AVAssetDownloadTaskDownloadTaskWithResumeDataCallback): NSURLSessionDownloadTask; message 'downloadTaskWithResumeData:completionHandler:';
  end;
{$endif}

{$else}
{$endif}