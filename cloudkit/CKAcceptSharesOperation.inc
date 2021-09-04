{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKAcceptSharesOperation.h }

{$ifdef CALLBACKS}
type
  CKAcceptSharesOperationPerShareCompletionBlockCallback = reference to procedure (shareMetadata: CKShareMetadata; acceptedShare: CKShare; error: NSError); cblock; cdecl;
  CKAcceptSharesOperationAcceptSharesCompletionBlockCallback = reference to procedure (operationError: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CKAcceptSharesOperationPtr = ^CKAcceptSharesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKAcceptSharesOperation = objcclass external (CKOperation)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithShareMetadatas (shareMetadatas: NSArray): id; message 'initWithShareMetadatas:';
    procedure setShareMetadatas(newValue: NSArray); message 'setShareMetadatas:';
    function shareMetadatas: NSArray; message 'shareMetadatas';
    procedure setPerShareCompletionBlock(newValue: CKAcceptSharesOperationPerShareCompletionBlockCallback); message 'setPerShareCompletionBlock:';
    function perShareCompletionBlock: CKAcceptSharesOperationPerShareCompletionBlockCallback; message 'perShareCompletionBlock';
    procedure setAcceptSharesCompletionBlock(newValue: CKAcceptSharesOperationAcceptSharesCompletionBlockCallback); message 'setAcceptSharesCompletionBlock:';
    function acceptSharesCompletionBlock: CKAcceptSharesOperationAcceptSharesCompletionBlockCallback; message 'acceptSharesCompletionBlock';
  end;
{$endif}

