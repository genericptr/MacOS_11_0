{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKBackForwardList.h }

{$ifdef TYPES}
type
  WKBackForwardListPtr = ^WKBackForwardList;
{$endif}

{$ifdef CLASSES}

type
  WKBackForwardList = objcclass external (NSObject)
  public
    function currentItem: WKBackForwardListItem; message 'currentItem';
    function backItem: WKBackForwardListItem; message 'backItem';
    function forwardItem: WKBackForwardListItem; message 'forwardItem';
    function itemAtIndex (index: NSInteger): WKBackForwardListItem; message 'itemAtIndex:';
    function backList: NSArray; message 'backList';
    function forwardList: NSArray; message 'forwardList';
  end;
{$endif}

