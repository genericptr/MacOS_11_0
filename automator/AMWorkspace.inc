{ Parsed from Automator.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Automator.framework/Headers/AMWorkspace.h }

{$ifdef TYPES}
type
  AMWorkspacePtr = ^AMWorkspace;
{$endif}

{$ifdef CLASSES}

type
  AMWorkspace = objcclass external (NSObject)
  private
    _reserved: id;
    _reserved2: id;
    _reserved3: id;
    _error: NSError;
    _didStart: objcbool;
    _finishedRunning: objcbool;
  public
    class function sharedWorkspace: AMWorkspace; message 'sharedWorkspace';
    function runWorkflowAtPath_withInput_error (path: NSString; input: id; error: NSErrorPtr): id; message 'runWorkflowAtPath:withInput:error:';
  end;
{$endif}

