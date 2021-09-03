{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKDownload.h }

{$ifdef CALLBACKS}
type
  WKDownloadCancelCallback = reference to function (resumeData: NSData): pointer; cblock; cdecl;
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
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure cancel (completionHandler: WKDownloadCancelCallback); message 'cancel:';

    { Adopted protocols }
    function progress: NSProgress; message 'progress';
  end;
{$endif}
