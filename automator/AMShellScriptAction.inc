{ Parsed from Automator.framework AMShellScriptAction.h }

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

