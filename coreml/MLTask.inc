{ Parsed from CoreML.framework MLTask.h }

{$ifdef TYPES}
type
  MLTaskPtr = ^MLTask;
{$endif}

{$ifdef TYPES}
type
  MLTaskState = NSInteger;
  MLTaskStatePtr = ^MLTaskState;

const
  MLTaskStateSuspended = 1;
  MLTaskStateRunning = 2;
  MLTaskStateCancelling = 3;
  MLTaskStateCompleted = 4;
  MLTaskStateFailed = 5;
{$endif}

{$ifdef CLASSES}

type
  MLTask = objcclass external (NSObject)
  public
    function taskIdentifier: NSString; message 'taskIdentifier';
    function state: MLTaskState; message 'state';
    function error: NSError; message 'error';
    procedure resume; message 'resume';
    procedure cancel; message 'cancel';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

