{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMText.h }

{$ifdef TYPES}
type
  DOMTextPtr = ^DOMText;
{$endif}

{$ifdef CLASSES}

type
  DOMText = objcclass external (DOMCharacterData)
  public
    function wholeText: NSString; message 'wholeText'; { available in 10_6 }
    function splitText (offset: cuint): DOMText; message 'splitText:';
    function replaceWholeText (content: NSString): DOMText; message 'replaceWholeText:'; { available in 10_6 }
  end;
{$endif}

