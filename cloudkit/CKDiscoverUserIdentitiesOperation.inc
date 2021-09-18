{ Parsed from CloudKit.framework CKDiscoverUserIdentitiesOperation.h }

{$ifdef CALLBACKS}
type
  CKDiscoverUserIdentitiesOperationUserIdentityDiscoveredBlockCallback = reference to procedure (identity: CKUserIdentity; lookupInfo: CKUserIdentityLookupInfo); cblock; cdecl;
  CKDiscoverUserIdentitiesOperationDiscoverUserIdentitiesCompletionBlockCallback = reference to procedure (operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKDiscoverUserIdentitiesOperationPtr = ^CKDiscoverUserIdentitiesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverUserIdentitiesOperation = objcclass external (CKOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithUserIdentityLookupInfos (userIdentityLookupInfos: NSArray): id; message 'initWithUserIdentityLookupInfos:';
    procedure setUserIdentityLookupInfos(newValue: NSArray); message 'setUserIdentityLookupInfos:';
    function userIdentityLookupInfos: NSArray; message 'userIdentityLookupInfos';
    procedure setUserIdentityDiscoveredBlock(newValue: CKDiscoverUserIdentitiesOperationUserIdentityDiscoveredBlockCallback); message 'setUserIdentityDiscoveredBlock:';
    function userIdentityDiscoveredBlock: CKDiscoverUserIdentitiesOperationUserIdentityDiscoveredBlockCallback; message 'userIdentityDiscoveredBlock';
    procedure setDiscoverUserIdentitiesCompletionBlock(newValue: CKDiscoverUserIdentitiesOperationDiscoverUserIdentitiesCompletionBlockCallback); message 'setDiscoverUserIdentitiesCompletionBlock:';
    function discoverUserIdentitiesCompletionBlock: CKDiscoverUserIdentitiesOperationDiscoverUserIdentitiesCompletionBlockCallback; message 'discoverUserIdentitiesCompletionBlock';
  end;
{$endif}

