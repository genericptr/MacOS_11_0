{ Parsed from WebKit.framework WebDownload.h }

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
