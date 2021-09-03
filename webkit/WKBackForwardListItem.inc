{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKBackForwardListItem.h }

{$ifdef TYPES}
type
  WKBackForwardListItemPtr = ^WKBackForwardListItem;
{$endif}

{$ifdef CLASSES}

type
  WKBackForwardListItem = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function URL: NSURL; message 'URL';
    function title: NSString; message 'title';
    function initialURL: NSURL; message 'initialURL';
  end;
{$endif}

