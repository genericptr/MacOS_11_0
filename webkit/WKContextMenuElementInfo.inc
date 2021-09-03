{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKContextMenuElementInfo.h }

{$ifdef TYPES}
type
  WKContextMenuElementInfoPtr = ^WKContextMenuElementInfo;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKContextMenuElementInfo = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function linkURL: NSURL; message 'linkURL';
  end;
{$endif}

{$endif}
