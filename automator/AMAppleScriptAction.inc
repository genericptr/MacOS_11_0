{ Parsed from Automator.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Automator.framework/Headers/AMAppleScriptAction.h }

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

