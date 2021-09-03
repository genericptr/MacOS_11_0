{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebDownload.h }

{$ifdef TYPES}
type
  WebDownloadPtr = ^WebDownload;
  WebDownloadDelegateProtocolPtr = ^WebDownloadDelegateProtocol;
{$endif}

{$ifndef WebDownload_h}

{$ifdef CLASSES}

type
  WebDownload = objcclass external (NSURLDownload)
  private
    _webInternal: WebDownloadInternal;
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  WebDownloadDelegateProtocol = objcprotocol external name 'WebDownloadDelegate' (NSURLDownloadDelegateProtocol)
  optional
    function downloadWindowForAuthenticationSheet (download: WebDownload): NSWindow; message 'downloadWindowForAuthenticationSheet:';
  end;
{$endif}

{$endif}
