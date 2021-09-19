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
    class function discreteProgressWithTotalUnitCount (unitCount: cint64): NSProgress; message 'discreteProgressWithTotalUnitCount:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    class function progressWithTotalUnitCount_parent_pendingUnitCount (unitCount: cint64; parent: NSProgress; portionOfParentTotalUnitCount: cint64): NSProgress; message 'progressWithTotalUnitCount:parent:pendingUnitCount:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function initWithParent_userInfo (parentProgressOrNil: NSProgress; userInfoOrNil: NSDictionary): id; message 'initWithParent:userInfo:'; { NS_DESIGNATED_INITIALIZER }
    procedure becomeCurrentWithPendingUnitCount (unitCount: cint64); message 'becomeCurrentWithPendingUnitCount:';
    procedure performAsCurrentWithPendingUnitCount_usingBlock (unitCount: cint64; work: NSProgressPerformAsCurrentWithPendingUnitCountCallback); message 'performAsCurrentWithPendingUnitCount:usingBlock:'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure resignCurrent; message 'resignCurrent';
    procedure addChild_withPendingUnitCount (child: NSProgress; inUnitCount: cint64); message 'addChild:withPendingUnitCount:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
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
    procedure setResumingHandler(newValue: NSProgressResumingHandlerCallback); message 'setResumingHandler:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function resumingHandler: NSProgressResumingHandlerCallback; message 'resumingHandler'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    procedure setUserInfoObject_forKey (objectOrNil: id; key: NSProgressUserInfoKey); message 'setUserInfoObject:forKey:';
    function isIndeterminate: objcbool; message 'isIndeterminate';
    function fractionCompleted: double; message 'fractionCompleted';
    function isFinished: objcbool; message 'isFinished';
    procedure cancel; message 'cancel';
    procedure pause; message 'pause';
    procedure resume; message 'resume'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    function userInfo: NSDictionary; message 'userInfo';
    procedure setKind(newValue: NSProgressKind); message 'setKind:';
    function kind: NSProgressKind; message 'kind';
    procedure setEstimatedTimeRemaining(newValue: NSNumber); message 'setEstimatedTimeRemaining:'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function estimatedTimeRemaining: NSNumber; message 'estimatedTimeRemaining'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setThroughput(newValue: NSNumber); message 'setThroughput:'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function throughput: NSNumber; message 'throughput'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setFileOperationKind(newValue: NSProgressFileOperationKind); message 'setFileOperationKind:'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function fileOperationKind: NSProgressFileOperationKind; message 'fileOperationKind'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setFileURL(newValue: NSURL); message 'setFileURL:'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function fileURL: NSURL; message 'fileURL'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setFileTotalCount(newValue: NSNumber); message 'setFileTotalCount:'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function fileTotalCount: NSNumber; message 'fileTotalCount'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setFileCompletedCount(newValue: NSNumber); message 'setFileCompletedCount:'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function fileCompletedCount: NSNumber; message 'fileCompletedCount'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure publish; message 'publish'; { unavailable in ios, watchos, tvos } { available in macos 10.9 }
    procedure unpublish; message 'unpublish'; { unavailable in ios, watchos, tvos } { available in macos 10.9 }
    class function addSubscriberForFileURL_withPublishingHandler (url: NSURL; publishingHandler: NSProgressPublishingHandler): id; message 'addSubscriberForFileURL:withPublishingHandler:'; { unavailable in ios, watchos, tvos } { available in macos 10.9 }
    class procedure removeSubscriber (subscriber: id); message 'removeSubscriber:'; { unavailable in ios, watchos, tvos } { available in macos 10.9 }
    function isOld: objcbool; message 'isOld'; { unavailable in ios, watchos, tvos } { available in macos 10.9 }
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
  NSProgressEstimatedTimeRemainingKey: NSProgressUserInfoKey { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressThroughputKey: NSProgressUserInfoKey { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressKindFile: NSProgressKind { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileOperationKindKey: NSProgressUserInfoKey { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileOperationKindDownloading: NSProgressFileOperationKind { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileOperationKindDecompressingAfterDownloading: NSProgressFileOperationKind { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileOperationKindReceiving: NSProgressFileOperationKind { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileOperationKindCopying: NSProgressFileOperationKind { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileOperationKindUploading: NSProgressFileOperationKind { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileURLKey: NSProgressUserInfoKey { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileTotalCountKey: NSProgressUserInfoKey { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileCompletedCountKey: NSProgressUserInfoKey { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSProgressFileAnimationImageKey: NSProgressUserInfoKey { unavailable in ios, watchos, tvos } { available in macos 10.9 }; cvar; external;
  NSProgressFileAnimationImageOriginalRectKey: NSProgressUserInfoKey { unavailable in ios, watchos, tvos } { available in macos 10.9 }; cvar; external;
  NSProgressFileIconKey: NSProgressUserInfoKey { unavailable in ios, watchos, tvos } { available in macos 10.9 }; cvar; external;
{$endif}

