{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMAbstractView.h }

{$ifdef TYPES}
type
  DOMAbstractViewPtr = ^DOMAbstractView;
{$endif}

{$ifdef CLASSES}

type
  DOMAbstractView = objcclass external (DOMObject)
  public
    function document: DOMDocument; message 'document';
  end;
{$endif}

