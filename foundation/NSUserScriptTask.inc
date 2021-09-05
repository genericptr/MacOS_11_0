{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSUserScriptTask.h }

{ Types from NSUserScriptTask }
{$ifdef TYPES}

type
  NSUserScriptTaskCompletionHandler = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{ Types from NSUserUnixTask }
{$ifdef TYPES}

type
  NSUserUnixTaskCompletionHandler = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{ Types from NSUserAppleScriptTask }
{$ifdef TYPES}

type
  NSUserAppleScriptTaskCompletionHandler = reference to procedure (result_: NSAppleEventDescriptor; error: NSError); cblock; cdecl;
{$endif}


{ Types from NSUserAutomatorTask }
{$ifdef TYPES}

type
  NSUserAutomatorTaskCompletionHandler = reference to procedure (result_: id; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSUserScriptTaskPtr = ^NSUserScriptTask;
  NSUserUnixTaskPtr = ^NSUserUnixTask;
  NSUserAppleScriptTaskPtr = ^NSUserAppleScriptTask;
  NSUserAutomatorTaskPtr = ^NSUserAutomatorTask;
{$endif}

{$ifdef CLASSES}

type
  NSUserScriptTask = objcclass external (NSObject)
  private
    _scriptURL: NSURL;
    _connection: NSXPCConnection;
    _hasExeced: objcbool;
    _hasTerminated: objcbool;
    _stdin: NSFileHandle;
    _stdout: NSFileHandle;
    _stderr: NSFileHandle;
  public
    function initWithURL_error (url: NSURL; error: NSErrorPtr): id; message 'initWithURL:error:'; { NS_DESIGNATED_INITIALIZER }
    function scriptURL: NSURL; message 'scriptURL';
    procedure executeWithCompletionHandler (handler: NSUserScriptTaskCompletionHandler); message 'executeWithCompletionHandler:';
  end;

type
  NSUserUnixTask = objcclass external (NSUserScriptTask)
  public
    procedure setStandardInput(newValue: NSFileHandle); message 'setStandardInput:';
    function standardInput: NSFileHandle; message 'standardInput';
    procedure setStandardOutput(newValue: NSFileHandle); message 'setStandardOutput:';
    function standardOutput: NSFileHandle; message 'standardOutput';
    procedure setStandardError(newValue: NSFileHandle); message 'setStandardError:';
    function standardError: NSFileHandle; message 'standardError';
    procedure executeWithArguments_completionHandler (arguments: NSArray; handler: NSUserUnixTaskCompletionHandler); message 'executeWithArguments:completionHandler:';
  end;

type
  NSUserAppleScriptTask = objcclass external (NSUserScriptTask)
  private
    _isParentDefaultTarget: objcbool;
  public
    procedure executeWithAppleEvent_completionHandler (event: NSAppleEventDescriptor; handler: NSUserAppleScriptTaskCompletionHandler); message 'executeWithAppleEvent:completionHandler:';
  end;

type
  NSUserAutomatorTask = objcclass external (NSUserScriptTask)
  private
    _variables: NSDictionary;
  public
    procedure setVariables(newValue: NSDictionary); message 'setVariables:';
    function variables: NSDictionary; message 'variables';
    procedure executeWithInput_completionHandler (input: NSSecureCodingProtocol; handler: NSUserAutomatorTaskCompletionHandler); message 'executeWithInput:completionHandler:';
  end;
{$endif}

