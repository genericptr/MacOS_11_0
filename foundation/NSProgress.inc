{ Parsed from Foundation.framework NSProgress.h }

{ Types from NSProgress }
{$ifdef TYPES}

type
  NSProgressUnpublishingHandler = reference to procedure; cblock; cdecl;

type
  NSProgressPublishingHandler = reference to function (progress: NSProgress): NSProgressUnpublishingHandler; cblock; cdecl;
{$endif}


{$ifdef CALLBACKS}
type
  NSProgressPerformAsCurrentWithPendingUnitCountCallback = reference to procedure; cblock; cdecl;
  NSProgressCancellationHandlerCallback = reference to procedure; cblock; cdecl;
  NSProgressPausingHandlerCallback = reference to procedure; cblock; cdecl;
  NSProgressResumingHandlerCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSProgressPtr = ^NSProgress;
  NSProgressReportingProtocolPtr = ^NSProgressReportingProtocol;
{$endif}

{$ifdef TYPES}
type
  NSProgressKind = NSString;
  NSProgressKindPtr = ^NSProgressKind;
  NSProgressUserInfoKey = NSString;
  NSProgressUserInfoKeyPtr = ^NSProgressUserInfoKey;
  NSProgressFileOperationKind = NSString;
  NSProgressFileOperationKindPtr = ^NSProgressFileOperationKind;
{$endif}

{$ifdef CLASSES}

type
  NSProgress = objcclass external (NSObject)
  public
    class function currentProgress: NSProgress; message 'currentProgress';
    class function progressWithTotalUnitCount (unitCount: cint64): NSProgress; message 'progressWithTotalUnitCount:';
    class function discreteProgressWithTotalUnitCount (unitCount: cint64): NSProgress; message 'discreteProgressWithTotalUnitCount:'; { available in macos , ios , watchos , tvos  }
    class function progressWithTotalUnitCount_parent_pendingUnitCount (unitCount: cint64; parent: NSProgress; portionOfParentTotalUnitCount: cint64): NSProgress; message 'progressWithTotalUnitCount:parent:pendingUnitCount:'; { available in macos , ios , watchos , tvos  }
    function initWithParent_userInfo (parentProgressOrNil: NSProgress; userInfoOrNil: NSDictionary): id; message 'initWithParent:userInfo:'; { NS_DESIGNATED_INITIALIZER }
    procedure becomeCurrentWithPendingUnitCount (unitCount: cint64); message 'becomeCurrentWithPendingUnitCount:';
    procedure performAsCurrentWithPendingUnitCount_usingBlock (unitCount: cint64; work: NSProgressPerformAsCurrentWithPendingUnitCountCallback); message 'performAsCurrentWithPendingUnitCount:usingBlock:'; { available in macosx , ios , watchos , tvos  }
    procedure resignCurrent; message 'resignCurrent';
    procedure addChild_withPendingUnitCount (child: NSProgress; inUnitCount: cint64); message 'addChild:withPendingUnitCount:'; { available in macos , ios , watchos , tvos  }
    procedure setTotalUnitCount(newValue: cint64); message 'setTotalUnitCount:';
    function totalUnitCount: cint64; message 'totalUnitCount';
    procedure setCompletedUnitCount(newValue: cint64); message 'setCompletedUnitCount:';
    function completedUnitCount: cint64; message 'completedUnitCount';
    procedure setLocalizedDescription(newValue: NSString); message 'setLocalizedDescription:';
    function localizedDescription: NSString; message 'localizedDescription';
    procedure setLocalizedAdditionalDescription(newValue: NSString); message 'setLocalizedAdditionalDescription:';
    function localizedAdditionalDescription: NSString; message 'localizedAdditionalDescription';
    procedure setCancellable(newValue: objcbool); message 'setCancellable:';
    function isCancellable: objcbool; message 'isCancellable';
    procedure setPausable(newValue: objcbool); message 'setPausable:';
    function isPausable: objcbool; message 'isPausable';
    function isCancelled: objcbool; message 'isCancelled';
    function isPaused: objcbool; message 'isPaused';
    procedure setCancellationHandler(newValue: NSProgressCancellationHandlerCallback); message 'setCancellationHandler:';
    function cancellationHandler: NSProgressCancellationHandlerCallback; message 'cancellationHandler';
    procedure setPausingHandler(newValue: NSProgressPausingHandlerCallback); message 'setPausingHandler:';
    function pausingHandler: NSProgressPausingHandlerCallback; message 'pausingHandler';
    procedure setResumingHandler(newValue: NSProgressResumingHandlerCallback); message 'setResumingHandler:'; { available in macos , ios , watchos , tvos  }
    function resumingHandler: NSProgressResumingHandlerCallback; message 'resumingHandler'; { available in macos , ios , watchos , tvos  }
    procedure setUserInfoObject_forKey (objectOrNil: id; key: NSProgressUserInfoKey); message 'setUserInfoObject:forKey:';
    function isIndeterminate: objcbool; message 'isIndeterminate';
    function fractionCompleted: double; message 'fractionCompleted';
    function isFinished: objcbool; message 'isFinished';
    procedure cancel; message 'cancel';
    procedure pause; message 'pause';
    procedure resume; message 'resume'; { available in macos , ios , watchos , tvos  }
    function userInfo: NSDictionary; message 'userInfo';
    procedure setKind(newValue: NSProgressKind); message 'setKind:';
    function kind: NSProgressKind; message 'kind';
    procedure setEstimatedTimeRemaining(newValue: NSNumber); message 'setEstimatedTimeRemaining:'; { available in macosx , ios , watchos , tvos  }
    function estimatedTimeRemaining: NSNumber; message 'estimatedTimeRemaining'; { available in macosx , ios , watchos , tvos  }
    procedure setThroughput(newValue: NSNumber); message 'setThroughput:'; { available in macosx , ios , watchos , tvos  }
    function throughput: NSNumber; message 'throughput'; { available in macosx , ios , watchos , tvos  }
    procedure setFileOperationKind(newValue: NSProgressFileOperationKind); message 'setFileOperationKind:'; { available in macosx , ios , watchos , tvos  }
    function fileOperationKind: NSProgressFileOperationKind; message 'fileOperationKind'; { available in macosx , ios , watchos , tvos  }
    procedure setFileURL(newValue: NSURL); message 'setFileURL:'; { available in macosx , ios , watchos , tvos  }
    function fileURL: NSURL; message 'fileURL'; { available in macosx , ios , watchos , tvos  }
    procedure setFileTotalCount(newValue: NSNumber); message 'setFileTotalCount:'; { available in macosx , ios , watchos , tvos  }
    function fileTotalCount: NSNumber; message 'fileTotalCount'; { available in macosx , ios , watchos , tvos  }
    procedure setFileCompletedCount(newValue: NSNumber); message 'setFileCompletedCount:'; { available in macosx , ios , watchos , tvos  }
    function fileCompletedCount: NSNumber; message 'fileCompletedCount'; { available in macosx , ios , watchos , tvos  }
    procedure publish; message 'publish'; { unavailable in ios, watchos, tvos }
    procedure unpublish; message 'unpublish'; { unavailable in ios, watchos, tvos }
    class function addSubscriberForFileURL_withPublishingHandler (url: NSURL; publishingHandler: NSProgressPublishingHandler): id; message 'addSubscriberForFileURL:withPublishingHandler:'; { unavailable in ios, watchos, tvos }
    class procedure removeSubscriber (subscriber: id); message 'removeSubscriber:'; { unavailable in ios, watchos, tvos }
    function isOld: objcbool; message 'isOld'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSProgressReportingProtocol = objcprotocol external name 'NSProgressReporting' (NSObjectProtocol)
    function progress: NSProgress; message 'progress';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSProgressEstimatedTimeRemainingKey: NSProgressUserInfoKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressThroughputKey: NSProgressUserInfoKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressKindFile: NSProgressKind { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileOperationKindKey: NSProgressUserInfoKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileOperationKindDownloading: NSProgressFileOperationKind { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileOperationKindDecompressingAfterDownloading: NSProgressFileOperationKind { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileOperationKindReceiving: NSProgressFileOperationKind { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileOperationKindCopying: NSProgressFileOperationKind { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileOperationKindUploading: NSProgressFileOperationKind { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileURLKey: NSProgressUserInfoKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileTotalCountKey: NSProgressUserInfoKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileCompletedCountKey: NSProgressUserInfoKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSProgressFileAnimationImageKey: NSProgressUserInfoKey { unavailable in ios, watchos, tvos }; cvar; external;
  NSProgressFileAnimationImageOriginalRectKey: NSProgressUserInfoKey { unavailable in ios, watchos, tvos }; cvar; external;
  NSProgressFileIconKey: NSProgressUserInfoKey { unavailable in ios, watchos, tvos }; cvar; external;
{$endif}

