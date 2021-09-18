{ Parsed from CoreVideo.framework CVBase.h }

{$ifdef TYPES}
type
  CVOptionFlags = cuint64;
  CVOptionFlagsPtr = ^CVOptionFlags;

type
  CVSMPTETime = record
    subframes: SInt16;
    subframeDivisor: SInt16;
    counter: UInt32;
    type_: UInt32;
    flags: UInt32;
    hours: SInt16;
    minutes: SInt16;
    seconds: SInt16;
    frames: SInt16;
  end;
type
  CVSMPTETimePtr = ^CVSMPTETime;

type
  CVSMPTETimeType = cuint32;
  CVSMPTETimeTypePtr = ^CVSMPTETimeType;

const
  kCVSMPTETimeType24 = 0;
  kCVSMPTETimeType25 = 1;
  kCVSMPTETimeType30Drop = 2;
  kCVSMPTETimeType30 = 3;
  kCVSMPTETimeType2997 = 4;
  kCVSMPTETimeType2997Drop = 5;
  kCVSMPTETimeType60 = 6;
  kCVSMPTETimeType5994 = 7;

type
  CVSMPTETimeFlags = cuint32;
  CVSMPTETimeFlagsPtr = ^CVSMPTETimeFlags;

const
  kCVSMPTETimeValid = 1 shl 0;
  kCVSMPTETimeRunning = 1 shl 1;

type
  CVTimeFlags = cint32;
  CVTimeFlagsPtr = ^CVTimeFlags;

const
  kCVTimeIsIndefinite = 1 shl 0;

type
  CVTime = record
    timeValue: cint64;
    timeScale: cint32;
    flags: cint32;
  end;
type
  CVTimePtr = ^CVTime;
type
  CVTimeStamp = record
    version: cuint32;
    videoTimeScale: cint32;
    videoTime: cint64;
    hostTime: cuint64;
    rateScalar: double;
    videoRefreshPeriod: cint64;
    smpteTime: CVSMPTETime;
    flags: cuint64;
    reserved: cuint64;
  end;
type
  CVTimeStampPtr = ^CVTimeStamp;

type
  CVTimeStampFlags = cuint64;
  CVTimeStampFlagsPtr = ^CVTimeStampFlags;

const
  kCVTimeStampVideoTimeValid = 1 shl 0;
  kCVTimeStampHostTimeValid = 1 shl 1;
  kCVTimeStampSMPTETimeValid = 1 shl 2;
  kCVTimeStampVideoRefreshPeriodValid = 1 shl 3;
  kCVTimeStampRateScalarValid = 1 shl 4;
  kCVTimeStampTopField = 1 shl 16;
  kCVTimeStampBottomField = 1 shl 17;
  kCVTimeStampVideoHostTimeValid = kCVTimeStampVideoTimeValid + kCVTimeStampHostTimeValid;
  kCVTimeStampIsInterlaced = kCVTimeStampTopField + kCVTimeStampBottomField;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCVZeroTime: CVTime; cvar; external;
  kCVIndefiniteTime: CVTime; cvar; external;
{$endif}