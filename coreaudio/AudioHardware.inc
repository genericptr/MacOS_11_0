{ Parsed from CoreAudio.framework AudioHardware.h }

{$if  not (defined(CoreAudio_AudioHardware_h))}

{$ifdef TYPES}
type
  AudioObjectPropertyListenerProc = function (inObjectID: AudioObjectID; inNumberAddresses: UInt32; inAddresses: AudioObjectPropertyAddressPtr; inClientData: pointer): OSStatus; cdecl;
  AudioObjectPropertyListenerBlock = reference to procedure (inNumberAddresses: UInt32; inAddresses: AudioObjectPropertyAddressPtr); cblock; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function AudioObjectShow(inObjectID: AudioObjectID): pointer; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function AudioObjectHasProperty(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr): Boolean; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function AudioObjectIsPropertySettable(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; var outIsSettable: pobjcbool): OSStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function AudioObjectGetPropertyDataSize(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inQualifierDataSize: UInt32; inQualifierData: pointer; var outDataSize: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function AudioObjectGetPropertyData(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inQualifierDataSize: UInt32; inQualifierData: pointer; var ioDataSize: UInt32; outData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function AudioObjectSetPropertyData(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inQualifierDataSize: UInt32; inQualifierData: pointer; inDataSize: UInt32; inData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function AudioObjectAddPropertyListener(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inListener: AudioObjectPropertyListenerProc; inClientData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function AudioObjectRemovePropertyListener(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inListener: AudioObjectPropertyListenerProc; inClientData: pointer): OSStatus; cdecl; external; { available starting in __MAC_10_4, __IPHONE_2_0 }
function AudioObjectAddPropertyListenerBlock(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inDispatchQueue: dispatch_queue_t; inListener: AudioObjectPropertyListenerBlock): OSStatus; cdecl; external; { available starting in __MAC_10_7, __IPHONE_7_0 }
function AudioObjectRemovePropertyListenerBlock(inObjectID: AudioObjectID; inAddress: AudioObjectPropertyAddressPtr; inDispatchQueue: dispatch_queue_t; inListener: AudioObjectPropertyListenerBlock): OSStatus; cdecl; external; { available starting in __MAC_10_7, __IPHONE_7_0 }
{$endif}

{$ifdef TYPES}
type
  AudioHardwarePowerHint = UInt32;
  AudioHardwarePowerHintPtr = ^AudioHardwarePowerHint;

const
  kAudioHardwarePowerHintNone = 0;
  kAudioHardwarePowerHintFavorSavingPower = 1;
{$endif}

{$ifdef FUNCTIONS}
function AudioHardwareUnload: OSStatus; cdecl; external; { available starting in __MAC_10_1, __IPHONE_2_0 }
function AudioHardwareCreateAggregateDevice(inDescription: CFDictionaryRef; outDeviceID: AudioObjectIDPtr): OSStatus; cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
function AudioHardwareDestroyAggregateDevice(inDeviceID: AudioObjectID): OSStatus; cdecl; external; { available starting in __MAC_10_9, __IPHONE_7_0 }
{$endif}

{$ifdef TYPES}
type
  AudioDeviceIOProc = function (inDevice: AudioObjectID; inNow: AudioTimeStampPtr; inInputData: AudioBufferListPtr; inInputTime: AudioTimeStampPtr; var outOutputData: AudioBufferList; inOutputTime: AudioTimeStampPtr; inClientData: pointer): OSStatus; cdecl;
  AudioDeviceIOBlock = reference to procedure (inNow: AudioTimeStampPtr; inInputData: AudioBufferListPtr; inInputTime: AudioTimeStampPtr; outOutputData: AudioBufferListPtr; inOutputTime: AudioTimeStampPtr); cblock; cdecl;
  AudioDeviceIOProcID = AudioDeviceIOProc;
  AudioDeviceIOProcIDPtr = ^AudioDeviceIOProcID;

type
  AudioHardwareIOProcStreamUsage = record
    mIOProc: pointer;
    mNumberStreams: UInt32;
    mStreamIsOn:array[0..0] of UInt32;
  end;
type
  AudioHardwareIOProcStreamUsagePtr = ^AudioHardwareIOProcStreamUsage;
{$endif}

{$ifdef FUNCTIONS}
function AudioDeviceCreateIOProcID(inDevice: AudioObjectID; inProc: AudioDeviceIOProc; inClientData: pointer; var outIOProcID: AudioDeviceIOProcID): OSStatus; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function AudioDeviceCreateIOProcIDWithBlock(outIOProcID: AudioDeviceIOProcIDPtr; inDevice: AudioObjectID; inDispatchQueue: dispatch_queue_t; inIOBlock: AudioDeviceIOBlock): OSStatus; cdecl; external; { available starting in __MAC_10_7, __IPHONE_7_0 }
function AudioDeviceDestroyIOProcID(inDevice: AudioObjectID; inIOProcID: AudioDeviceIOProcID): OSStatus; cdecl; external; { available starting in __MAC_10_5, __IPHONE_2_0 }
function AudioDeviceStart(inDevice: AudioObjectID; inProcID: AudioDeviceIOProcID): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function AudioDeviceStartAtTime(inDevice: AudioObjectID; inProcID: AudioDeviceIOProcID; ioRequestedStartTime: AudioTimeStampPtr; inFlags: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
function AudioDeviceStop(inDevice: AudioObjectID; inProcID: AudioDeviceIOProcID): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function AudioDeviceGetCurrentTime(inDevice: AudioObjectID; var outTime: AudioTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function AudioDeviceTranslateTime(inDevice: AudioObjectID; inTime: AudioTimeStampPtr; var outTime: AudioTimeStamp): OSStatus; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function AudioDeviceGetNearestStartTime(inDevice: AudioObjectID; var ioRequestedStartTime: AudioTimeStamp; inFlags: UInt32): OSStatus; cdecl; external; { available starting in __MAC_10_3, __IPHONE_2_0 }
{$endif}

{$ifdef TYPES}
const
  kAudioAggregateDeviceUIDKey = 'uid';
  kAudioAggregateDeviceNameKey = 'name';
  kAudioAggregateDeviceSubDeviceListKey = 'subdevices';
  kAudioAggregateDeviceMasterSubDeviceKey = 'master';
  kAudioAggregateDeviceClockDeviceKey = 'clock';
  kAudioAggregateDeviceIsPrivateKey = 'private';
  kAudioAggregateDeviceIsStackedKey = 'stacked';
  kAudioSubDeviceUIDKey = 'uid';
  kAudioSubDeviceNameKey = 'name';
  kAudioSubDeviceInputChannelsKey = 'channels-in';
  kAudioSubDeviceOutputChannelsKey = 'channels-out';
  kAudioSubDeviceExtraInputLatencyKey = 'latency-in';
  kAudioSubDeviceExtraOutputLatencyKey = 'latency-out';
  kAudioSubDeviceDriftCompensationKey = 'drift';
  kAudioSubDeviceDriftCompensationQualityKey = 'drift quality';
{$endif}

{$endif}
