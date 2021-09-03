{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioSinkNode.h }

{$ifdef TYPES}
type
  AVAudioSinkNodePtr = ^AVAudioSinkNode;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
type
  AVAudioSinkNodeReceiverBlock = reference to function (timestamp: AudioTimeStampPtr; frameCount: AVAudioFrameCount; inputData: AudioBufferListPtr): OSStatus; cblock; cdecl { available in macos , ios , tvos , watchos  };
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
