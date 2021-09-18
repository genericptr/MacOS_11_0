{ Parsed from Automator.framework AMAppleScriptAction.h }

{$ifdef TYPES}
type
  AMAppleScriptActionPtr = ^AMAppleScriptAction;
{$endif}

{$ifdef CLASSES}

type
  AMAppleScriptAction = objcclass external (AMBundleAction)
  private
    _script: OSAScriptPtr;
  public
    procedure setScript(newValue: OSAScriptPtr); message 'setScript:';
    function script: OSAScriptPtr; message 'script';
  end;
{$endif}

