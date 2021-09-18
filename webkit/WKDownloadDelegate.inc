{ Parsed from WebKit.framework WKDownloadDelegate.h }

{$ifdef CALLBACKS}
type
  WKDownloadDelegateDownloadCallback = reference to procedure (destination: NSURL); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKDownloadDelegateProtocolPtr = ^WKDownloadDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  WKDownloadRedirectPolicy = NSInteger;
  WKDownloadRedirectPolicyPtr = ^WKDownloadRedirectPolicy;

const
  WKDownloadRedirectPolicyCancel = 0;
  WKDownloadRedirectPolicyAllow = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  WKDownloadDelegateProtocol = objcprotocol external name 'WKDownloadDelegate' (NSObjectProtocol)
  required
    procedure download_decideDestinationUsingResponse_suggestedFilename_completionHandler (download: WKDownload; response: NSURLResponse; suggestedFilename: NSString; completionHandler: WKDownloadDelegateDownloadCallback); message 'download:decideDestinationUsingResponse:suggestedFilename:completionHandler:';
  optional
    procedure download_willPerformHTTPRedirection_newRequest_decisionHandler (download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest; decisionHandler: WKDownloadDelegateDownloadCallback); message 'download:willPerformHTTPRedirection:newRequest:decisionHandler:';
    procedure download_didReceiveAuthenticationChallenge_completionHandler (download: WKDownload; challenge: NSURLAuthenticationChallenge; completionHandler: WKDownloadDelegateDownloadCallback); message 'download:didReceiveAuthenticationChallenge:completionHandler:';
    procedure downloadDidFinish (download: WKDownload); message 'downloadDidFinish:';
    procedure download_didFailWithError_resumeData (download: WKDownload; error: NSError; resumeData: NSData); message 'download:didFailWithError:resumeData:';
  end;
{$endif}

