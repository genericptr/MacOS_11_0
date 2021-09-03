{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMEntity.h }

{$ifdef TYPES}
type
  DOMEntityPtr = ^DOMEntity;
{$endif}

{$ifdef CLASSES}

type
  DOMEntity = objcclass external (DOMNode)
  public
    function publicId: NSString; message 'publicId';
    function systemId: NSString; message 'systemId';
    function notationName: NSString; message 'notationName';
  end;
{$endif}

