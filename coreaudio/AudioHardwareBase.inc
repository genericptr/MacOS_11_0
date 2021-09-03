{ Parsed from CoreAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreAudio.framework/Headers/AudioHardwareBase.h }

{$if  not (defined(CoreAudio_AudioHardwareBase_h))}

{$ifdef TYPES}
type
  AudioObjectID = UInt32;
  AudioObjectIDPtr = ^AudioObjectID;
  AudioClassID = UInt32;
  AudioClassIDPtr = ^AudioClassID;
  AudioObjectPropertySelector = UInt32;
  AudioObjectPropertySelectorPtr = ^AudioObjectPropertySelector;
  AudioObjectPropertyScope = UInt32;
  AudioObjectPropertyScopePtr = ^AudioObjectPropertyScope;
  AudioObjectPropertyElement = UInt32;
  AudioObjectPropertyElementPtr = ^AudioObjectPropertyElement;

type
  AudioObjectPropertyAddress = record
    mSelector: AudioObjectPropertySelector;
    mScope: AudioObjectPropertyScope;
    mElement: AudioObjectPropertyElement;
  end;
type
  AudioObjectPropertyAddressPtr = ^AudioObjectPropertyAddress;

const
  kAudioEndPointDeviceUIDKey = 'uid';
  kAudioEndPointDeviceNameKey = 'name';
  kAudioEndPointDeviceEndPointListKey = 'endpoints';
  kAudioEndPointDeviceMasterEndPointKey = 'master';
  kAudioEndPointDeviceIsPrivateKey = 'private';
  kAudioEndPointUIDKey = 'uid';
  kAudioEndPointNameKey = 'name';
  kAudioEndPointInputChannelsKey = 'channels-in';
  kAudioEndPointOutputChannelsKey = 'channels-out';

type
  AudioStreamRangedDescription = record
    mFormat: AudioStreamBasicDescription;
    mSampleRateRange: AudioValueRange;
  end;
type
  AudioStreamRangedDescriptionPtr = ^AudioStreamRangedDescription;
{$endif}

{$endif}
