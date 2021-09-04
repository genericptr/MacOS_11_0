{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKOperation.h }

{$ifdef CALLBACKS}
type
  CKOperationLongLivedOperationWasPersistedBlockCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKOperationPtr = ^CKOperation;
  CKOperationConfigurationPtr = ^CKOperationConfiguration;
{$endif}

{$ifdef TYPES}
type
  CKOperationID = NSString;
  CKOperationIDPtr = ^CKOperationID;
{$endif}

{$ifdef CLASSES}

type
  CKOperation = objcclass external (NSOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setConfiguration(newValue: CKOperationConfiguration); message 'setConfiguration:'; { available in macos , ios , tvos , watchos  }
    function configuration: CKOperationConfiguration; message 'configuration'; { available in macos , ios , tvos , watchos  }
    procedure setGroup(newValue: CKOperationGroup); message 'setGroup:'; { available in macos , ios , tvos , watchos  }
    function group: CKOperationGroup; message 'group'; { available in macos , ios , tvos , watchos  }
    function operationID: CKOperationID; message 'operationID'; { available in macos , ios , tvos , watchos  }
    procedure setLongLivedOperationWasPersistedBlock(newValue: CKOperationLongLivedOperationWasPersistedBlockCallback); message 'setLongLivedOperationWasPersistedBlock:'; { available in macos , ios , tvos , watchos  }
    function longLivedOperationWasPersistedBlock: CKOperationLongLivedOperationWasPersistedBlockCallback; message 'longLivedOperationWasPersistedBlock'; { available in macos , ios , tvos , watchos  }
  end;

type
  CKOperationConfiguration = objcclass external (NSObject)
  public
    procedure setContainer(newValue: CKContainer); message 'setContainer:';
    function container: CKContainer; message 'container';
    procedure setQualityOfService(newValue: NSQualityOfService); message 'setQualityOfService:';
    function qualityOfService: NSQualityOfService; message 'qualityOfService';
    procedure setAllowsCellularAccess(newValue: objcbool); message 'setAllowsCellularAccess:';
    function allowsCellularAccess: objcbool; message 'allowsCellularAccess';
    procedure setLongLived(newValue: objcbool); message 'setLongLived:';
    function isLongLived: objcbool; message 'isLongLived';
    procedure setTimeoutIntervalForRequest(newValue: NSTimeInterval); message 'setTimeoutIntervalForRequest:';
    function timeoutIntervalForRequest: NSTimeInterval; message 'timeoutIntervalForRequest';
    procedure setTimeoutIntervalForResource(newValue: NSTimeInterval); message 'setTimeoutIntervalForResource:';
    function timeoutIntervalForResource: NSTimeInterval; message 'timeoutIntervalForResource';
  end;


type
  CKOperationDeprecated = objccategory external (CKOperation)
    procedure setContainer(newValue: CKContainer); message 'setContainer:'; deprecated 'Use CKOperationConfiguration';
    function container: CKContainer; message 'container'; deprecated 'Use CKOperationConfiguration';
    procedure setAllowsCellularAccess(newValue: objcbool); message 'setAllowsCellularAccess:'; deprecated 'Use CKOperationConfiguration';
    function allowsCellularAccess: objcbool; message 'allowsCellularAccess'; deprecated 'Use CKOperationConfiguration';
    procedure setLongLived(newValue: objcbool); message 'setLongLived:'; deprecated 'Use CKOperationConfiguration';
    function isLongLived: objcbool; message 'isLongLived'; deprecated 'Use CKOperationConfiguration';
    procedure setTimeoutIntervalForRequest(newValue: NSTimeInterval); message 'setTimeoutIntervalForRequest:'; deprecated 'Use CKOperationConfiguration';
    function timeoutIntervalForRequest: NSTimeInterval; message 'timeoutIntervalForRequest'; deprecated 'Use CKOperationConfiguration';
    procedure setTimeoutIntervalForResource(newValue: NSTimeInterval); message 'setTimeoutIntervalForResource:'; deprecated 'Use CKOperationConfiguration';
    function timeoutIntervalForResource: NSTimeInterval; message 'timeoutIntervalForResource'; deprecated 'Use CKOperationConfiguration';
  end;
{$endif}

