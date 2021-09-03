{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKPreviewElementInfo.h }

{$ifdef TYPES}
type
  WKPreviewElementInfoPtr = ^WKPreviewElementInfo;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKPreviewElementInfo = objcclass external (NSObject, NSCopyingProtocol)
  public
    function linkURL: NSURL; message 'linkURL';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
