{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMProcessingInstruction.h }

{$ifdef TYPES}
type
  DOMProcessingInstructionPtr = ^DOMProcessingInstruction;
{$endif}

{$ifdef CLASSES}

type
  DOMProcessingInstruction = objcclass external (DOMCharacterData)
  public
    function target: NSString; message 'target';
    function sheet: DOMStyleSheet; message 'sheet'; { available in 10_4 }
  end;
{$endif}

