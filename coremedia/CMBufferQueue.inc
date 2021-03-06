{ Parsed from CoreMedia.framework CMBufferQueue.h }

{$ifndef CMBUFFERQUEUE_H}

{$ifdef TYPES}
type
  CMBufferQueueRef = OpaqueType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMBufferQueueRefPtr = ^CMBufferQueueRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMBufferRef = CFTypeRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMBufferRefPtr = ^CMBufferRef { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMBufferGetTimeCallback = function (buf: CMBufferRef; refcon: pointer): CMTime; cdecl { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferGetTimeHandler = reference to function (buf: CMBufferRef): CMTime; cblock; cdecl { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 };
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMBufferGetBooleanCallback = function (buf: CMBufferRef; refcon: pointer): Boolean; cdecl { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferGetBooleanHandler = reference to function (buf: CMBufferRef): Boolean; cblock; cdecl { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 };
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMBufferCompareCallback = function (buf1: CMBufferRef; buf2: CMBufferRef; refcon: pointer): CFComparisonResult; cdecl { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferCompareHandler = reference to function (buf1: CMBufferRef; buf2: CMBufferRef): CFComparisonResult; cblock; cdecl { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 };
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMBufferGetSizeCallback = function (buf: CMBufferRef; refcon: pointer): size_t; cdecl { available in macos 10.10, ios 7.1, tvos 9.0, watchos 6.0 };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferGetSizeHandler = reference to function (buf: CMBufferRef): size_t; cblock; cdecl { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 };
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMBufferCallbacks = record
    version: cuint32;
    refcon: pointer;
    getDecodeTimeStamp: CMBufferGetTimeCallback;
    getPresentationTimeStamp: CMBufferGetTimeCallback;
    getDuration: CMBufferGetTimeCallback;
    isDataReady: CMBufferGetBooleanCallback;
    compare: CMBufferCompareCallback;
    dataBecameReadyNotification: CFStringRef;
    getSize: CMBufferGetSizeCallback;
  end;
type
  CMBufferCallbacksPtr = ^CMBufferCallbacks;
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferHandlers = record
    version: culong;
    getDecodeTimeStamp: CMBufferGetTimeHandler;
    getPresentationTimeStamp: CMBufferGetTimeHandler;
    getDuration: CMBufferGetTimeHandler;
    isDataReady: CMBufferGetBooleanHandler;
    compare: CMBufferCompareHandler;
    dataBecameReadyNotification: CFStringRef;
    getSize: CMBufferGetSizeHandler;
  end;
type
  CMBufferHandlersPtr = ^CMBufferHandlers;
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMBufferQueueGetCallbacksForUnsortedSampleBuffers: CMBufferCallbacksPtr; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetCallbacksForSampleBuffersSortedByOutputPTS: CMBufferCallbacksPtr; cdecl; external; { available in macos 10.7, ios 4.3, tvos 9.0, watchos 6.0 }
function CMBufferQueueCreate(allocator: CFAllocatorRef; capacity: CMItemCount; callbacks: CMBufferCallbacksPtr; queueOut: CMBufferQueueRefPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef FUNCTIONS}
function CMBufferQueueCreateWithHandlers(allocator: CFAllocatorRef; capacity: CMItemCount; handlers: CMBufferHandlersPtr; queueOut: CMBufferQueueRefPtr): OSStatus; cdecl; external; { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMBufferQueueGetTypeID: CFTypeID; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueEnqueue(queue: CMBufferQueueRef; buf: CMBufferRef): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueDequeueAndRetain(queue: CMBufferQueueRef): CMBufferRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueDequeueIfDataReadyAndRetain(queue: CMBufferQueueRef): CMBufferRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetHead(queue: CMBufferQueueRef): CMBufferRef; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueIsEmpty(queue: CMBufferQueueRef): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueMarkEndOfData(queue: CMBufferQueueRef): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueContainsEndOfData(queue: CMBufferQueueRef): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueIsAtEndOfData(queue: CMBufferQueueRef): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueReset(queue: CMBufferQueueRef): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetBufferCount(queue: CMBufferQueueRef): CMItemCount; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetDuration(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetMinDecodeTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetFirstDecodeTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetMinPresentationTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetFirstPresentationTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetMaxPresentationTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetEndPresentationTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueGetTotalSize(queue: CMBufferQueueRef): size_t; cdecl; external; { available in macos 10.10, ios 7.1, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef TYPES}
type
  CMBufferQueueTriggerToken = OpaqueType { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMBufferQueueTriggerTokenPtr = ^CMBufferQueueTriggerToken { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMBufferQueueTriggerCallback = procedure (triggerRefcon: pointer; triggerToken: CMBufferQueueTriggerToken); cdecl { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferQueueTriggerHandler = reference to procedure (triggerToken: CMBufferQueueTriggerToken); cblock; cdecl { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 };
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMBufferQueueTriggerCondition = cint32 { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
  CMBufferQueueTriggerConditionPtr = ^CMBufferQueueTriggerCondition { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$ifdef FUNCTIONS}
function CMBufferQueueInstallTrigger(queue: CMBufferQueueRef; callback: CMBufferQueueTriggerCallback; refcon: pointer; condition: CMBufferQueueTriggerCondition; time: CMTime; triggerTokenOut: CMBufferQueueTriggerTokenPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueInstallTriggerWithIntegerThreshold(queue: CMBufferQueueRef; callback: CMBufferQueueTriggerCallback; refcon: pointer; condition: CMBufferQueueTriggerCondition; threshold: CMItemCount; triggerTokenOut: CMBufferQueueTriggerTokenPtr): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef FUNCTIONS}
function CMBufferQueueInstallTriggerHandler(queue: CMBufferQueueRef; condition: CMBufferQueueTriggerCondition; time: CMTime; triggerTokenOut: CMBufferQueueTriggerTokenPtr; handler: CMBufferQueueTriggerHandler): OSStatus; cdecl; external; { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 }
function CMBufferQueueInstallTriggerHandlerWithIntegerThreshold(queue: CMBufferQueueRef; condition: CMBufferQueueTriggerCondition; threshold: CMItemCount; triggerTokenOut: CMBufferQueueTriggerTokenPtr; handler: CMBufferQueueTriggerHandler): OSStatus; cdecl; external; { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMBufferQueueRemoveTrigger(queue: CMBufferQueueRef; triggerToken: CMBufferQueueTriggerToken): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
function CMBufferQueueTestTrigger(queue: CMBufferQueueRef; triggerToken: CMBufferQueueTriggerToken): Boolean; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$ifdef TYPES}
type
  CMBufferValidationCallback = function (queue: CMBufferQueueRef; buf: CMBufferRef; validationRefCon: pointer): OSStatus; cdecl { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferValidationHandler = reference to function (queue: CMBufferQueueRef; buf: CMBufferRef): OSStatus; cblock; cdecl { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 };
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMBufferQueueSetValidationCallback(queue: CMBufferQueueRef; callback: CMBufferValidationCallback; refcon: pointer): OSStatus; cdecl; external; { available in macos 10.7, ios 4.0, tvos 9.0, watchos 6.0 }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef FUNCTIONS}
function CMBufferQueueSetValidationHandler(queue: CMBufferQueueRef; handler: CMBufferValidationHandler): OSStatus; cdecl; external; { available in macos 10.14.4, ios 12.2, tvos 12.2, watchos 6.0 }
{$endif}

{$endif}

{$endif}
