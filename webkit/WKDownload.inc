{ Parsed from WebKit.framework WKDownload.h }

{$ifdef CALLBACKS}
type
  WKDownloadCancelCallback = reference to procedure (resumeData: NSData); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  WKDownloadPtr = ^WKDownload;
{$endif}

{$ifdef CLASSES}

type
  WKDownload = objcclass external (NSObject, NSProgressReportingProtocol)
  public
    function originalRequest: NSURLRequest; message 'originalRequest';
    function webView: WKWebView; message 'webView';
    procedure setDelegate(newValue: WKDownloadDelegateProtocol); message 'setDelegate:';
    function delegate: WKDownloadDelegateProtocol; message 'delegate';
    procedure cancel (completionHandler: WKDownloadCancelCallback); message 'cancel:';

    { Adopted protocols }
    function progress: NSProgress; message 'progress';
  end;
{$endif}

