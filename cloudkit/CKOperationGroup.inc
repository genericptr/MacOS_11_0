{ Parsed from CloudKit.framework CKOperationGroup.h }

{$ifdef TYPES}
type
  CKOperationGroupPtr = ^CKOperationGroup;
{$endif}

{$ifdef TYPES}
type
  CKOperationGroupTransferSize = NSInteger;
  CKOperationGroupTransferSizePtr = ^CKOperationGroupTransferSize;

const
  CKOperationGroupTransferSizeUnknown = 0;
  CKOperationGroupTransferSizeKilobytes = 1;
  CKOperationGroupTransferSizeMegabytes = 2;
  CKOperationGroupTransferSizeTensOfMegabytes = 3;
  CKOperationGroupTransferSizeHundredsOfMegabytes = 4;
  CKOperationGroupTransferSizeGigabytes = 5;
  CKOperationGroupTransferSizeTensOfGigabytes = 6;
  CKOperationGroupTransferSizeHundredsOfGigabytes = 7;
{$endif}

{$ifdef CLASSES}

type
  CKOperationGroup = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function operationGroupID: NSString; message 'operationGroupID';
    procedure setDefaultConfiguration(newValue: CKOperationConfiguration); message 'setDefaultConfiguration:';
    function defaultConfiguration: CKOperationConfiguration; message 'defaultConfiguration';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setQuantity(newValue: NSUInteger); message 'setQuantity:';
    function quantity: NSUInteger; message 'quantity';
    procedure setExpectedSendSize(newValue: CKOperationGroupTransferSize); message 'setExpectedSendSize:';
    function expectedSendSize: CKOperationGroupTransferSize; message 'expectedSendSize';
    procedure setExpectedReceiveSize(newValue: CKOperationGroupTransferSize); message 'setExpectedReceiveSize:';
    function expectedReceiveSize: CKOperationGroupTransferSize; message 'expectedReceiveSize';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

