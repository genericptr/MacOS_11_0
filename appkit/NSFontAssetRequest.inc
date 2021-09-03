{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSFontAssetRequest.h }

{$ifdef CALLBACKS}
type
  NSFontAssetRequestDownloadFontAssetsWithCompletionHandlerCallback = reference to function (error: NSError): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSFontAssetRequestPtr = ^NSFontAssetRequest;
{$endif}

{$ifdef TYPES}
type
  NSFontAssetRequestOptions = NSUInteger;
  NSFontAssetRequestOptionsPtr = ^NSFontAssetRequestOptions;

const
  NSFontAssetRequestOptionUsesStandardUI = 1 shl 0;
{$endif}

{$ifdef CLASSES}

type
  NSFontAssetRequest = objcclass external (NSObject, NSProgressReportingProtocol)
  public
    function init: id; message 'init';
    function initWithFontDescriptors_options (fontDescriptors: NSArray; options: NSFontAssetRequestOptions): id; message 'initWithFontDescriptors:options:'; { NS_DESIGNATED_INITIALIZER }
    function downloadedFontDescriptors: NSArray; message 'downloadedFontDescriptors';
    function progress: NSProgress; message 'progress';
    procedure downloadFontAssetsWithCompletionHandler (completionHandler: NSFontAssetRequestDownloadFontAssetsWithCompletionHandlerCallback); message 'downloadFontAssetsWithCompletionHandler:';

    { Adopted protocols }
    function progress_: NSProgress; message 'progress';
  end;
{$endif}

