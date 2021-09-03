{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSURLDownload.h }

{$ifdef TYPES}
type
  NSURLDownloadPtr = ^NSURLDownload;
  NSURLDownloadDelegateProtocolPtr = ^NSURLDownloadDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSURLDownload = objcclass external (NSObject)
  private
    _internal: NSURLDownloadInternal;
  public
    class function canResumeDownloadDecodedWithEncodingMIMEType (MIMEType: NSString): objcbool; message 'canResumeDownloadDecodedWithEncodingMIMEType:';
    function initWithRequest_delegate (request: NSURLRequest; delegate: id): id; message 'initWithRequest:delegate:'; deprecated 'Use NSURLSession downloadTask (see NSURLSession.h)';
    function initWithResumeData_delegate_path (resumeData: NSData; delegate: id; path: NSString): id; message 'initWithResumeData:delegate:path:'; deprecated 'Use NSURLSession downloadTask (see NSURLSession.h)';
    procedure cancel; message 'cancel';
    procedure setDestination_allowOverwrite (path: NSString; allowOverwrite: objcbool); message 'setDestination:allowOverwrite:';
    function request: NSURLRequest; message 'request';
    function resumeData: NSData; message 'resumeData';
    procedure setDeletesFileUponFailure(newValue: objcbool); message 'setDeletesFileUponFailure:';
    function deletesFileUponFailure: objcbool; message 'deletesFileUponFailure';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSURLDownloadDelegateProtocol = objcprotocol external name 'NSURLDownloadDelegate' (NSObjectProtocol)
  optional
    procedure downloadDidBegin (download: NSURLDownload); message 'downloadDidBegin:';
    function download_willSendRequest_redirectResponse (download: NSURLDownload; request: NSURLRequest; redirectResponse: NSURLResponse): NSURLRequest; message 'download:willSendRequest:redirectResponse:';
    function download_canAuthenticateAgainstProtectionSpace (connection: NSURLDownload; protectionSpace: NSURLProtectionSpace): objcbool; message 'download:canAuthenticateAgainstProtectionSpace:';
    procedure download_didReceiveAuthenticationChallenge (download: NSURLDownload; challenge: NSURLAuthenticationChallenge); message 'download:didReceiveAuthenticationChallenge:';
    procedure download_didCancelAuthenticationChallenge (download: NSURLDownload; challenge: NSURLAuthenticationChallenge); message 'download:didCancelAuthenticationChallenge:';
    function downloadShouldUseCredentialStorage (download: NSURLDownload): objcbool; message 'downloadShouldUseCredentialStorage:';
    procedure download_didReceiveResponse (download: NSURLDownload; response: NSURLResponse); message 'download:didReceiveResponse:';
    procedure download_willResumeWithResponse_fromByte (download: NSURLDownload; response: NSURLResponse; startingByte: clonglong); message 'download:willResumeWithResponse:fromByte:';
    procedure download_didReceiveDataOfLength (download: NSURLDownload; length: NSUInteger); message 'download:didReceiveDataOfLength:';
    function download_shouldDecodeSourceDataOfMIMEType (download: NSURLDownload; encodingType: NSString): objcbool; message 'download:shouldDecodeSourceDataOfMIMEType:';
    procedure download_decideDestinationWithSuggestedFilename (download: NSURLDownload; filename: NSString); message 'download:decideDestinationWithSuggestedFilename:';
    procedure download_didCreateDestination (download: NSURLDownload; path: NSString); message 'download:didCreateDestination:';
    procedure downloadDidFinish (download: NSURLDownload); message 'downloadDidFinish:';
    procedure download_didFailWithError (download: NSURLDownload; error: NSError); message 'download:didFailWithError:';
  end;
{$endif}
