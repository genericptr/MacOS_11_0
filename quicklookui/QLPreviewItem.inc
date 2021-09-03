{ Parsed from QuickLookUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Headers/QLPreviewItem.h }

{$ifdef TYPES}
type
  QLPreviewItemProtocolPtr = ^QLPreviewItemProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  QLPreviewItemProtocol = objcprotocol external name 'QLPreviewItem' (NSObjectProtocol)
  required
    function previewItemURL: NSURL; message 'previewItemURL';
  optional
    function previewItemTitle: NSString; message 'previewItemTitle';
    function previewItemDisplayState: id; message 'previewItemDisplayState';
  end;
{$endif}

{$ifdef CLASSES}

type
  QLPreviewConvenienceAdditions = objccategory external (NSURL)
  end;
{$endif}

