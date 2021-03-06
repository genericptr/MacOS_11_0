{ Parsed from CloudKit.framework CKModifyBadgeOperation.h }

{$ifdef CALLBACKS}
type
  CKModifyBadgeOperationModifyBadgeCompletionBlockCallback = reference to procedure (operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKModifyBadgeOperationPtr = ^CKModifyBadgeOperation;
{$endif}

{$ifdef CLASSES}

type
  CKModifyBadgeOperation = objcclass external (CKOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithBadgeValue (badgeValue: NSUInteger): id; message 'initWithBadgeValue:';
    procedure setBadgeValue(newValue: NSUInteger); message 'setBadgeValue:';
    function badgeValue: NSUInteger; message 'badgeValue';
    procedure setModifyBadgeCompletionBlock(newValue: CKModifyBadgeOperationModifyBadgeCompletionBlockCallback); message 'setModifyBadgeCompletionBlock:';
    function modifyBadgeCompletionBlock: CKModifyBadgeOperationModifyBadgeCompletionBlockCallback; message 'modifyBadgeCompletionBlock';
  end;
{$endif}

