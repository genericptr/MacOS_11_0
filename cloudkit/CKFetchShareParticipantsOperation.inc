{ Parsed from CloudKit.framework CKFetchShareParticipantsOperation.h }

{$ifdef CALLBACKS}
type
  CKFetchShareParticipantsOperationShareParticipantFetchedBlockCallback = reference to procedure (participant: CKShareParticipant); cblock; cdecl;
  CKFetchShareParticipantsOperationFetchShareParticipantsCompletionBlockCallback = reference to procedure (operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKFetchShareParticipantsOperationPtr = ^CKFetchShareParticipantsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchShareParticipantsOperation = objcclass external (CKOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithUserIdentityLookupInfos (userIdentityLookupInfos: NSArray): id; message 'initWithUserIdentityLookupInfos:';
    procedure setUserIdentityLookupInfos(newValue: NSArray); message 'setUserIdentityLookupInfos:';
    function userIdentityLookupInfos: NSArray; message 'userIdentityLookupInfos';
    procedure setShareParticipantFetchedBlock(newValue: CKFetchShareParticipantsOperationShareParticipantFetchedBlockCallback); message 'setShareParticipantFetchedBlock:';
    function shareParticipantFetchedBlock: CKFetchShareParticipantsOperationShareParticipantFetchedBlockCallback; message 'shareParticipantFetchedBlock';
    procedure setFetchShareParticipantsCompletionBlock(newValue: CKFetchShareParticipantsOperationFetchShareParticipantsCompletionBlockCallback); message 'setFetchShareParticipantsCompletionBlock:';
    function fetchShareParticipantsCompletionBlock: CKFetchShareParticipantsOperationFetchShareParticipantsCompletionBlockCallback; message 'fetchShareParticipantsCompletionBlock';
  end;
{$endif}

