{ Parsed from AVFAudio.framework AVAudioSinkNode.h }

{$ifdef TYPES}
type
  AVAudioSinkNodePtr = ^AVAudioSinkNode;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
type
  AVAudioSinkNodeReceiverBlock = reference to function (timestamp: AudioTimeStampPtr; frameCount: AVAudioFrameCount; inputData: AudioBufferListPtr): OSStatus; cblock; cdecl { available in macos 10.15, ios 13.0, tvos 13.0, watchos 6.0 };
{$endif}

{$ifdef CLASSES}

type
  AVAudioSinkNode = objcclass external (AVAudioNode)
  public
    function init: id; message 'init';
    function initWithReceiverBlock (block: AVAudioSinkNodeReceiverBlock): id; message 'initWithReceiverBlock:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

{$endif}
