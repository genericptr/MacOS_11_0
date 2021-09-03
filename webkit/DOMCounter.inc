{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMCounter.h }

{$ifdef TYPES}
type
  DOMCounterPtr = ^DOMCounter;
{$endif}

{$ifdef CLASSES}

type
  DOMCounter = objcclass external (DOMObject)
  public
    function identifier: NSString; message 'identifier';
    function listStyle: NSString; message 'listStyle';
    function separator: NSString; message 'separator';
  end;
{$endif}

