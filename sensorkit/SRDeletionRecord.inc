{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/SRDeletionRecord.h }

{$ifdef TYPES}
type
  SRDeletionRecordPtr = ^SRDeletionRecord;
{$endif}

{$ifdef TYPES}
type
  SRDeletionReason = NSInteger;
  SRDeletionReasonPtr = ^SRDeletionReason;

const
  SRDeletionReasonUserInitiated = 0;
  SRDeletionReasonLowDiskSpace = 1;
  SRDeletionReasonAgeLimit = 2;
  SRDeletionReasonNoInterestedClients = 3;
  SRDeletionReasonSystemInitiated = 4;
{$endif}

{$ifdef CLASSES}

type
  SRDeletionRecord = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function startTime: SRAbsoluteTime; message 'startTime';
    function endTime: SRAbsoluteTime; message 'endTime';
    function reason: SRDeletionReason; message 'reason';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

