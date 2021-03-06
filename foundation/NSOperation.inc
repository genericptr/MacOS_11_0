{ Parsed from Foundation.framework NSOperation.h }

{ Types from NSOperation }
{$ifdef TYPES}

type
  NSOperationQueuePriority = NSInteger;
type
  NSOperationQueuePriorityPtr = ^NSOperationQueuePriority;

const
  NSOperationQueuePriorityVeryLow = -8;
  NSOperationQueuePriorityLow = -4;
  NSOperationQueuePriorityNormal = 0;
  NSOperationQueuePriorityHigh = 4;
  NSOperationQueuePriorityVeryHigh = 8;
{$endif}


{$ifdef CALLBACKS}
type
  NSOperationCompletionBlockCallback = reference to procedure; cblock; cdecl;
  NSOperationBlockOperationWithBlockCallback = reference to procedure; cblock; cdecl;
  NSOperationAddExecutionBlockCallback = reference to procedure; cblock; cdecl;
  NSOperationAddOperationWithBlockCallback = reference to procedure; cblock; cdecl;
  NSOperationAddBarrierBlockCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSOperationPtr = ^NSOperation;
  NSBlockOperationPtr = ^NSBlockOperation;
  NSInvocationOperationPtr = ^NSInvocationOperation;
  NSOperationQueuePtr = ^NSOperationQueue;
{$endif}

{$ifdef TYPES}
const
  NSOperationQualityOfServiceUserInteractive = NSQualityOfServiceUserInteractive;
  NSOperationQualityOfServiceUserInitiated = NSQualityOfServiceUserInitiated;
  NSOperationQualityOfServiceUtility = NSQualityOfServiceUtility;
  NSOperationQualityOfServiceBackground = NSQualityOfServiceBackground;
{$endif}

{$ifdef CLASSES}

type
  NSOperation = objcclass external (NSObject)
  private
    _private: id;
    _private1: cint32;
    {$if defined(__LP64__)}
    _private1b: cint32;
    {$endif}
  public
    procedure start; message 'start';
    procedure main; message 'main';
    function isCancelled: objcbool; message 'isCancelled';
    procedure cancel; message 'cancel';
    function isExecuting: objcbool; message 'isExecuting';
    function isFinished: objcbool; message 'isFinished';
    function isConcurrent: objcbool; message 'isConcurrent';
    function isAsynchronous: objcbool; message 'isAsynchronous'; { available in macos 10.8, ios 7.0, watchos 2.0, tvos 9.0 }
    function isReady: objcbool; message 'isReady';
    procedure addDependency (op: NSOperation); message 'addDependency:';
    procedure removeDependency (op: NSOperation); message 'removeDependency:';
    function dependencies: NSArray; message 'dependencies';
    procedure setQueuePriority(newValue: NSOperationQueuePriority); message 'setQueuePriority:';
    function queuePriority: NSOperationQueuePriority; message 'queuePriority';
    procedure setCompletionBlock(newValue: NSOperationCompletionBlockCallback); message 'setCompletionBlock:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function completionBlock: NSOperationCompletionBlockCallback; message 'completionBlock'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure waitUntilFinished; message 'waitUntilFinished'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure setThreadPriority(newValue: double); message 'setThreadPriority:'; deprecated 'Not supported';
    function threadPriority: double; message 'threadPriority'; deprecated 'Not supported';
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function qualityOfService: NSQualityOfService; message 'qualityOfService'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure setName(newValue: NSString); message 'setName:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function name: NSString; message 'name'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSBlockOperation = objcclass external (NSOperation)
  private
    _private2: id;
    _reserved2: pointer;
  public
    class function blockOperationWithBlock (block: NSOperationBlockOperationWithBlockCallback): id; message 'blockOperationWithBlock:';
    procedure addExecutionBlock (block: NSOperationAddExecutionBlockCallback); message 'addExecutionBlock:';
    function executionBlocks: NSArray; message 'executionBlocks';
  end;

type
  NSInvocationOperation = objcclass external (NSOperation)
  private
    _inv: id;
    _exception: id;
    _reserved2: pointer;
  public
    function initWithTarget_selector_object (target: id; sel_: SEL; arg: id): id; message 'initWithTarget:selector:object:';
    function initWithInvocation (inv: NSInvocation): id; message 'initWithInvocation:'; { NS_DESIGNATED_INITIALIZER }
    function invocation: NSInvocation; message 'invocation';
    function result_: id; message 'result';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSInvocationOperationVoidResultException: NSExceptionName { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSInvocationOperationCancelledException: NSExceptionName { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
const
  NSOperationQueueDefaultMaxConcurrentOperationCount = -1;
{$endif}

{$ifdef CLASSES}

type
  NSOperationQueue = objcclass external (NSObject, NSProgressReportingProtocol)
  private
    _private: id;
    _reserved: pointer;
  public
    function progress: NSProgress; message 'progress'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure addOperation (op: NSOperation); message 'addOperation:';
    procedure addOperations_waitUntilFinished (ops: NSArray; wait: objcbool); message 'addOperations:waitUntilFinished:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure addOperationWithBlock (block: NSOperationAddOperationWithBlockCallback); message 'addOperationWithBlock:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure addBarrierBlock (barrier: NSOperationAddBarrierBlockCallback); message 'addBarrierBlock:'; { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 }
    procedure setMaxConcurrentOperationCount(newValue: NSInteger); message 'setMaxConcurrentOperationCount:';
    function maxConcurrentOperationCount: NSInteger; message 'maxConcurrentOperationCount';
    procedure setSuspended(newValue: objcbool); message 'setSuspended:';
    function isSuspended: objcbool; message 'isSuspended';
    procedure setName(newValue: NSString); message 'setName:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function name: NSString; message 'name'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function qualityOfService: NSQualityOfService; message 'qualityOfService'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure setUnderlyingQueue(newValue: dispatch_queue_t); message 'setUnderlyingQueue:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function underlyingQueue: dispatch_queue_t; message 'underlyingQueue'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    procedure cancelAllOperations; message 'cancelAllOperations';
    procedure waitUntilAllOperationsAreFinished; message 'waitUntilAllOperationsAreFinished';
    class function currentQueue: NSOperationQueue; message 'currentQueue'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    class function mainQueue: NSOperationQueue; message 'mainQueue'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }

    { Adopted protocols }
    function progress_: NSProgress; message 'progress';
  end;


type
  NSOperationQueue_NSDeprecated = objccategory external name 'NSDeprecated' (NSOperationQueue)
    function operations: NSArray; message 'operations'; deprecated 'access to operations is inherently a race condition, it should not be used. For barrier style behaviors please use addBarrierBlock: instead';
    function operationCount: NSUInteger; message 'operationCount'; deprecated 'replace with progress.completedUnitCount';
  end;
{$endif}

