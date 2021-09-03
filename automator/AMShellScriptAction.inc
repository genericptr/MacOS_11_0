{ Parsed from Automator.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Automator.framework/Headers/AMShellScriptAction.h }

{$ifdef TYPES}
type
  AMShellScriptActionPtr = ^AMShellScriptAction;
{$endif}

{$ifdef CLASSES}

type
  AMShellScriptAction = objcclass external (AMBundleAction)
  public
    function remapLineEndings: objcbool; message 'remapLineEndings';
    function inputFieldSeparator: NSString; message 'inputFieldSeparator';
    function outputFieldSeparator: NSString; message 'outputFieldSeparator';
  end;
{$endif}

