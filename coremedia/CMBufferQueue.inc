{ Parsed from CoreMedia.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreMedia.framework/Headers/CMBufferQueue.h }

{$ifndef CMBUFFERQUEUE_H}

{$ifdef TYPES}
type
  CMBufferQueueRef = OpaqueType { available in macos , ios , tvos , watchos  };
  CMBufferQueueRefPtr = ^CMBufferQueueRef { available in macos , ios , tvos , watchos  };
  CMBufferRef = CFTypeRef { available in macos , ios , tvos , watchos  };
  CMBufferRefPtr = ^CMBufferRef { available in macos , ios , tvos , watchos  };
  CMBufferGetTimeCallback = function (buf: CMBufferRef; refcon: pointer): CMTime; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferGetTimeHandler = reference to function (buf: CMBufferRef): CMTime; cblock; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMBufferGetBooleanCallback = function (buf: CMBufferRef; refcon: pointer): Boolean; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferGetBooleanHandler = reference to function (buf: CMBufferRef): Boolean; cblock; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMBufferCompareCallback = function (buf1: CMBufferRef; buf2: CMBufferRef; refcon: pointer): CFComparisonResult; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferCompareHandler = reference to function (buf1: CMBufferRef; buf2: CMBufferRef): CFComparisonResult; cblock; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMBufferGetSizeCallback = function (buf: CMBufferRef; refcon: pointer): size_t; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferGetSizeHandler = reference to function (buf: CMBufferRef): size_t; cblock; cdecl { available in macos , ios , tvos , watchos  };
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
function CMBufferQueueGetCallbacksForUnsortedSampleBuffers: CMBufferCallbacksPtr; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetCallbacksForSampleBuffersSortedByOutputPTS: CMBufferCallbacksPtr; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueCreate(allocator: CFAllocatorRef; capacity: CMItemCount; callbacks: CMBufferCallbacksPtr; queueOut: CMBufferQueueRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef FUNCTIONS}
function CMBufferQueueCreateWithHandlers(allocator: CFAllocatorRef; capacity: CMItemCount; handlers: CMBufferHandlersPtr; queueOut: CMBufferQueueRefPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMBufferQueueGetTypeID: CFTypeID; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueEnqueue(queue: CMBufferQueueRef; buf: CMBufferRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueDequeueAndRetain(queue: CMBufferQueueRef): CMBufferRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueDequeueIfDataReadyAndRetain(queue: CMBufferQueueRef): CMBufferRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetHead(queue: CMBufferQueueRef): CMBufferRef; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueIsEmpty(queue: CMBufferQueueRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueMarkEndOfData(queue: CMBufferQueueRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueContainsEndOfData(queue: CMBufferQueueRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueIsAtEndOfData(queue: CMBufferQueueRef): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueReset(queue: CMBufferQueueRef): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetBufferCount(queue: CMBufferQueueRef): CMItemCount; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetDuration(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetMinDecodeTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetFirstDecodeTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetMinPresentationTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetFirstPresentationTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetMaxPresentationTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetEndPresentationTimeStamp(queue: CMBufferQueueRef): CMTime; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueGetTotalSize(queue: CMBufferQueueRef): size_t; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef TYPES}
type
  CMBufferQueueTriggerToken = OpaqueType { available in macos , ios , tvos , watchos  };
  CMBufferQueueTriggerTokenPtr = ^CMBufferQueueTriggerToken { available in macos , ios , tvos , watchos  };
  CMBufferQueueTriggerCallback = function (triggerRefcon: pointer; triggerToken: CMBufferQueueTriggerToken): pointer; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferQueueTriggerHandler = reference to procedure (triggerToken: CMBufferQueueTriggerToken); cblock; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMBufferQueueTriggerCondition = cint32 { available in macos , ios , tvos , watchos  };
  CMBufferQueueTriggerConditionPtr = ^CMBufferQueueTriggerCondition { available in macos , ios , tvos , watchos  };
{$endif}

{$ifdef FUNCTIONS}
function CMBufferQueueInstallTrigger(queue: CMBufferQueueRef; callback: CMBufferQueueTriggerCallback; refcon: pointer; condition: CMBufferQueueTriggerCondition; time: CMTime; triggerTokenOut: CMBufferQueueTriggerTokenPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueInstallTriggerWithIntegerThreshold(queue: CMBufferQueueRef; callback: CMBufferQueueTriggerCallback; refcon: pointer; condition: CMBufferQueueTriggerCondition; threshold: CMItemCount; triggerTokenOut: CMBufferQueueTriggerTokenPtr): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef FUNCTIONS}
function CMBufferQueueInstallTriggerHandler(queue: CMBufferQueueRef; condition: CMBufferQueueTriggerCondition; time: CMTime; triggerTokenOut: CMBufferQueueTriggerTokenPtr; handler: CMBufferQueueTriggerHandler): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueInstallTriggerHandlerWithIntegerThreshold(queue: CMBufferQueueRef; condition: CMBufferQueueTriggerCondition; threshold: CMItemCount; triggerTokenOut: CMBufferQueueTriggerTokenPtr; handler: CMBufferQueueTriggerHandler): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMBufferQueueRemoveTrigger(queue: CMBufferQueueRef; triggerToken: CMBufferQueueTriggerToken): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
function CMBufferQueueTestTrigger(queue: CMBufferQueueRef; triggerToken: CMBufferQueueTriggerToken): Boolean; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$ifdef TYPES}
type
  CMBufferValidationCallback = function (queue: CMBufferQueueRef; buf: CMBufferRef; validationRefCon: pointer): OSStatus; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef TYPES}
type
  CMBufferValidationHandler = reference to function (queue: CMBufferQueueRef; buf: CMBufferRef): OSStatus; cblock; cdecl { available in macos , ios , tvos , watchos  };
{$endif}

{$endif}
{$ifdef FUNCTIONS}
function CMBufferQueueSetValidationCallback(queue: CMBufferQueueRef; callback: CMBufferValidationCallback; refcon: pointer): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$if defined(__BLOCKS__)}
{$ifdef FUNCTIONS}
function CMBufferQueueSetValidationHandler(queue: CMBufferQueueRef; handler: CMBufferValidationHandler): OSStatus; cdecl; external; { available in macos , ios , tvos , watchos  }
{$endif}

{$endif}

{$endif}
