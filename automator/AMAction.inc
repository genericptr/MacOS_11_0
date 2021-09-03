{ Parsed from Automator.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Automator.framework/Headers/AMAction.h }

{$ifdef TYPES}
type
  AMActionPtr = ^AMAction;
{$endif}

{$ifdef TYPES}
type
  AMLogLevel = NSUInteger;
  AMLogLevelPtr = ^AMLogLevel;

const
  AMLogLevelDebug = 0;
  AMLogLevelInfo = 1;
  AMLogLevelWarn = 2;
  AMLogLevelError = 3;
{$endif}

{$ifdef CLASSES}

type
  AMAction = objcclass external (NSObject)
  private
    _definition: NSMutableDictionary;
    _argumentsWithOutlets: NSDictionary;
    _currentInput: NSString;
    _error: NSString;
    _output: NSString;
    _currentRunner: id;
    _loopParent: AMAction;
    _actionDescription: NSString;
    _icon: NSImage;
    _relevance: NSUInteger;
    _showsRelevance: objcbool;
    _stopped: objcbool;
    _future: id;
    _future2: id;
    _future3: id;
    _future4: id;
  public
    function initWithDefinition_fromArchive (dict: NSDictionary; archived: objcbool): id; message 'initWithDefinition:fromArchive:';
    function initWithContentsOfURL_error (fileURL: NSURL; outError: NSErrorPtr): id; message 'initWithContentsOfURL:error:';
    function name: NSString; message 'name';
    function ignoresInput: objcbool; message 'ignoresInput';
    procedure setSelectedInputType(newValue: NSString); message 'setSelectedInputType:';
    function selectedInputType: NSString; message 'selectedInputType';
    procedure setSelectedOutputType(newValue: NSString); message 'setSelectedOutputType:';
    function selectedOutputType: NSString; message 'selectedOutputType';
    procedure setProgressValue(newValue: CGFloat); message 'setProgressValue:';
    function progressValue: CGFloat; message 'progressValue';
    function runWithInput_fromAction_error_runWithInput_error (input: id; anAction: AMAction; errorInfo: NSDictionaryPtr; input4: id; error: NSErrorPtr): id; message 'runWithInput:fromAction:error:runWithInput:error:';
    procedure runAsynchronouslyWithInput (input: id); message 'runAsynchronouslyWithInput:';
    procedure willFinishRunning; message 'willFinishRunning';
    procedure didFinishRunningWithError_finishRunningWithError (errorInfo: NSDictionary; error: NSError); message 'didFinishRunningWithError:finishRunningWithError:';
    procedure setOutput(newValue: id); message 'setOutput:';
    function output: id; message 'output';
    procedure stop; message 'stop';
    procedure reset; message 'reset';
    procedure writeToDictionary (dictionary: NSMutableDictionary); message 'writeToDictionary:';
    procedure opened; message 'opened';
    procedure activated; message 'activated';
    procedure closed; message 'closed';
    procedure updateParameters; message 'updateParameters';
    procedure parametersUpdated; message 'parametersUpdated';
    procedure logMessageWithLevel_format (level: AMLogLevel; format: NSString); varargs; message 'logMessageWithLevel:format:';
    function isStopped: objcbool; message 'isStopped';
  end;
{$endif}

