{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKDiscoverAllUserIdentitiesOperation.h }

{$ifdef CALLBACKS}
type
  CKDiscoverAllUserIdentitiesOperationUserIdentityDiscoveredBlockCallback = reference to procedure (identity: CKUserIdentity); cblock; cdecl;
  CKDiscoverAllUserIdentitiesOperationDiscoverAllUserIdentitiesCompletionBlockCallback = reference to procedure (operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKDiscoverAllUserIdentitiesOperationPtr = ^CKDiscoverAllUserIdentitiesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverAllUserIdentitiesOperation = objcclass external (CKOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setUserIdentityDiscoveredBlock(newValue: CKDiscoverAllUserIdentitiesOperationUserIdentityDiscoveredBlockCallback); message 'setUserIdentityDiscoveredBlock:';
    function userIdentityDiscoveredBlock: CKDiscoverAllUserIdentitiesOperationUserIdentityDiscoveredBlockCallback; message 'userIdentityDiscoveredBlock';
    procedure setDiscoverAllUserIdentitiesCompletionBlock(newValue: CKDiscoverAllUserIdentitiesOperationDiscoverAllUserIdentitiesCompletionBlockCallback); message 'setDiscoverAllUserIdentitiesCompletionBlock:';
    function discoverAllUserIdentitiesCompletionBlock: CKDiscoverAllUserIdentitiesOperationDiscoverAllUserIdentitiesCompletionBlockCallback; message 'discoverAllUserIdentitiesCompletionBlock';
  end;
{$endif}

