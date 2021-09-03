{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKContentWorld.h }

{$ifdef TYPES}
type
  WKContentWorldPtr = ^WKContentWorld;
{$endif}

{$ifdef CLASSES}

type
  WKContentWorld = objcclass external (NSObject)
  public
    class function new_: id; message 'new';
    function init: id; message 'init';
    class function pageWorld: WKContentWorld; message 'pageWorld';
    class function defaultClientWorld: WKContentWorld; message 'defaultClientWorld';
    class function worldWithName (name: NSString): WKContentWorld; message 'worldWithName:';
    function name: NSString; message 'name';
  end;
{$endif}

