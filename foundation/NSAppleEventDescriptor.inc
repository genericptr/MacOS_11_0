{ Parsed from Foundation.framework NSAppleEventDescriptor.h }

{$ifdef TYPES}
type
  NSAppleEventDescriptorPtr = ^NSAppleEventDescriptor;
{$endif}

{$ifdef TYPES}
type
  NSAppleEventSendOptions = NSUInteger;
  NSAppleEventSendOptionsPtr = ^NSAppleEventSendOptions;

const
  NSAppleEventSendNoReply = kAENoReply;
  NSAppleEventSendQueueReply = kAEQueueReply;
  NSAppleEventSendWaitForReply = kAEWaitReply;
  NSAppleEventSendNeverInteract = kAENeverInteract;
  NSAppleEventSendCanInteract = kAECanInteract;
  NSAppleEventSendAlwaysInteract = kAEAlwaysInteract;
  NSAppleEventSendCanSwitchLayer = kAECanSwitchLayer;
  NSAppleEventSendDontRecord = kAEDontRecord;
  NSAppleEventSendDontExecute = kAEDontExecute;
  NSAppleEventSendDontAnnotate = kAEDoNotAutomaticallyAddAnnotationsToEvent;
  NSAppleEventSendDefaultOptions = NSAppleEventSendWaitForReply + NSAppleEventSendCanInteract;
{$endif}

{$ifdef CLASSES}

type
  NSAppleEventDescriptor = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _desc: AEDesc;
    _hasValidDesc: objcbool;
    _padding:array[0..2] of char;
  public
    class function nullDescriptor: NSAppleEventDescriptor; message 'nullDescriptor';
    class function descriptorWithDescriptorType_bytes_length (descriptorType: DescType; bytes: pointer; byteCount: NSUInteger): NSAppleEventDescriptor; message 'descriptorWithDescriptorType:bytes:length:';
    class function descriptorWithDescriptorType_data (descriptorType: DescType; data: NSData): NSAppleEventDescriptor; message 'descriptorWithDescriptorType:data:';
    class function descriptorWithBoolean (boolean_: Boolean): NSAppleEventDescriptor; message 'descriptorWithBoolean:';
    class function descriptorWithEnumCode (enumerator: OSType): NSAppleEventDescriptor; message 'descriptorWithEnumCode:';
    class function descriptorWithInt32 (signedInt: SInt32): NSAppleEventDescriptor; message 'descriptorWithInt32:';
    class function descriptorWithDouble (doubleValue: double): NSAppleEventDescriptor; message 'descriptorWithDouble:'; { unavailable in ios, watchos, tvos }
    class function descriptorWithTypeCode (typeCode: OSType): NSAppleEventDescriptor; message 'descriptorWithTypeCode:';
    class function descriptorWithString (string_: NSString): NSAppleEventDescriptor; message 'descriptorWithString:';
    class function descriptorWithDate (date: NSDate): NSAppleEventDescriptor; message 'descriptorWithDate:'; { unavailable in ios, watchos, tvos }
    class function descriptorWithFileURL (fileURL: NSURL): NSAppleEventDescriptor; message 'descriptorWithFileURL:'; { unavailable in ios, watchos, tvos }
    class function appleEventWithEventClass_eventID_targetDescriptor_returnID_transactionID (eventClass: AEEventClass; eventID: AEEventID; targetDescriptor: NSAppleEventDescriptor; returnID: AEReturnID; transactionID: AETransactionID): NSAppleEventDescriptor; message 'appleEventWithEventClass:eventID:targetDescriptor:returnID:transactionID:';
    class function listDescriptor: NSAppleEventDescriptor; message 'listDescriptor';
    class function recordDescriptor: NSAppleEventDescriptor; message 'recordDescriptor';
    class function currentProcessDescriptor: NSAppleEventDescriptor; message 'currentProcessDescriptor'; { unavailable in ios, watchos, tvos }
    class function descriptorWithProcessIdentifier (processIdentifier: pid_t): NSAppleEventDescriptor; message 'descriptorWithProcessIdentifier:'; { unavailable in ios, watchos, tvos }
    class function descriptorWithBundleIdentifier (bundleIdentifier: NSString): NSAppleEventDescriptor; message 'descriptorWithBundleIdentifier:'; { unavailable in ios, watchos, tvos }
    class function descriptorWithApplicationURL (applicationURL: NSURL): NSAppleEventDescriptor; message 'descriptorWithApplicationURL:'; { unavailable in ios, watchos, tvos }
    function initWithAEDescNoCopy (aeDesc: AEDescPtr): id; message 'initWithAEDescNoCopy:'; { NS_DESIGNATED_INITIALIZER }
    function initWithDescriptorType_bytes_length (descriptorType: DescType; bytes: pointer; byteCount: NSUInteger): id; message 'initWithDescriptorType:bytes:length:';
    function initWithDescriptorType_data (descriptorType: DescType; data: NSData): id; message 'initWithDescriptorType:data:';
    function initWithEventClass_eventID_targetDescriptor_returnID_transactionID (eventClass: AEEventClass; eventID: AEEventID; targetDescriptor: NSAppleEventDescriptor; returnID: AEReturnID; transactionID: AETransactionID): id; message 'initWithEventClass:eventID:targetDescriptor:returnID:transactionID:';
    function initListDescriptor: id; message 'initListDescriptor';
    function initRecordDescriptor: id; message 'initRecordDescriptor';
    function aeDesc: AEDescPtr; message 'aeDesc';
    function descriptorType: DescType; message 'descriptorType';
    function data: NSData; message 'data';
    function booleanValue: Boolean; message 'booleanValue';
    function enumCodeValue: OSType; message 'enumCodeValue';
    function int32Value: SInt32; message 'int32Value';
    function doubleValue: double; message 'doubleValue'; { unavailable in ios, watchos, tvos }
    function typeCodeValue: OSType; message 'typeCodeValue';
    function stringValue: NSString; message 'stringValue';
    function dateValue: NSDate; message 'dateValue'; { unavailable in ios, watchos, tvos }
    function fileURLValue: NSURL; message 'fileURLValue'; { unavailable in ios, watchos, tvos }
    function eventClass: AEEventClass; message 'eventClass';
    function eventID: AEEventID; message 'eventID';
    function returnID: AEReturnID; message 'returnID';
    function transactionID: AETransactionID; message 'transactionID';
    procedure setParamDescriptor_forKeyword (descriptor: NSAppleEventDescriptor; keyword: AEKeyword); message 'setParamDescriptor:forKeyword:';
    function paramDescriptorForKeyword (keyword: AEKeyword): NSAppleEventDescriptor; message 'paramDescriptorForKeyword:';
    procedure removeParamDescriptorWithKeyword (keyword: AEKeyword); message 'removeParamDescriptorWithKeyword:';
    procedure setAttributeDescriptor_forKeyword (descriptor: NSAppleEventDescriptor; keyword: AEKeyword); message 'setAttributeDescriptor:forKeyword:';
    function attributeDescriptorForKeyword (keyword: AEKeyword): NSAppleEventDescriptor; message 'attributeDescriptorForKeyword:';
    function sendEventWithOptions_timeout_error (sendOptions: NSAppleEventSendOptions; timeoutInSeconds: NSTimeInterval; error: NSErrorPtr): NSAppleEventDescriptor; message 'sendEventWithOptions:timeout:error:'; { unavailable in ios, watchos, tvos }
    function isRecordDescriptor: objcbool; message 'isRecordDescriptor'; { unavailable in ios, watchos, tvos }
    function numberOfItems: NSInteger; message 'numberOfItems';
    procedure insertDescriptor_atIndex (descriptor: NSAppleEventDescriptor; index: NSInteger); message 'insertDescriptor:atIndex:';
    function descriptorAtIndex (index: NSInteger): NSAppleEventDescriptor; message 'descriptorAtIndex:';
    procedure removeDescriptorAtIndex (index: NSInteger); message 'removeDescriptorAtIndex:';
    procedure setDescriptor_forKeyword (descriptor: NSAppleEventDescriptor; keyword: AEKeyword); message 'setDescriptor:forKeyword:';
    function descriptorForKeyword (keyword: AEKeyword): NSAppleEventDescriptor; message 'descriptorForKeyword:';
    procedure removeDescriptorWithKeyword (keyword: AEKeyword); message 'removeDescriptorWithKeyword:';
    function keywordForDescriptorAtIndex (index: NSInteger): AEKeyword; message 'keywordForDescriptorAtIndex:';
    function coerceToDescriptorType (descriptorType_: DescType): NSAppleEventDescriptor; message 'coerceToDescriptorType:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

