{ Parsed from AVFAudio.framework AVAudioBuffer.h }

{$ifdef TYPES}
type
  AVAudioBufferPtr = ^AVAudioBuffer;
  AVAudioPCMBufferPtr = ^AVAudioPCMBuffer;
  AVAudioCompressedBufferPtr = ^AVAudioCompressedBuffer;
{$endif}

{$ifdef CLASSES}

type
  AVAudioBuffer = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _impl: pointer;
  public
    function format: AVAudioFormat; message 'format';
    function audioBufferList: AudioBufferListPtr; message 'audioBufferList';
    function mutableAudioBufferList: AudioBufferListPtr; message 'mutableAudioBufferList';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  AVAudioPCMBuffer = objcclass external (AVAudioBuffer)
  public
    function initWithPCMFormat_frameCapacity (format_: AVAudioFormat; frameCapacity: AVAudioFrameCount): id; message 'initWithPCMFormat:frameCapacity:'; { NS_DESIGNATED_INITIALIZER }
    function frameCapacity: AVAudioFrameCount; message 'frameCapacity';
    procedure setFrameLength(newValue: AVAudioFrameCount); message 'setFrameLength:';
    function frameLength: AVAudioFrameCount; message 'frameLength';
    function stride: NSUInteger; message 'stride';
    function floatChannelData: psingle; message 'floatChannelData';
    function int16ChannelData: pcint16; message 'int16ChannelData';
    function int32ChannelData: pcint32; message 'int32ChannelData';
  end;

type
  AVAudioCompressedBuffer = objcclass external (AVAudioBuffer)
  public
    function initWithFormat_packetCapacity_maximumPacketSize (format_: AVAudioFormat; packetCapacity: AVAudioPacketCount; maximumPacketSize: NSInteger): id; message 'initWithFormat:packetCapacity:maximumPacketSize:';
    function initWithFormat_packetCapacity (format_: AVAudioFormat; packetCapacity: AVAudioPacketCount): id; message 'initWithFormat:packetCapacity:';
    function packetCapacity: AVAudioPacketCount; message 'packetCapacity';
    procedure setPacketCount(newValue: AVAudioPacketCount); message 'setPacketCount:';
    function packetCount: AVAudioPacketCount; message 'packetCount';
    function maximumPacketSize: NSInteger; message 'maximumPacketSize';
    function data: pointer; message 'data';
    function byteCapacity: cuint32; message 'byteCapacity'; { available in macosx , ios , watchos , tvos  }
    procedure setByteLength(newValue: cuint32); message 'setByteLength:'; { available in macosx , ios , watchos , tvos  }
    function byteLength: cuint32; message 'byteLength'; { available in macosx , ios , watchos , tvos  }
    function packetDescriptions: AudioStreamPacketDescriptionPtr; message 'packetDescriptions';
  end;
{$endif}

