{ Parsed from AVFAudio.framework AVAudioNode.h }

{ Types from AVAudioNode }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVAudioNodePtr = ^AVAudioNode;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
const
  AVAUDIONODE_HAVE_AUAUDIOUNIT = 1;
{$endif}

{$endif}

{$ifdef TYPES}
type
  AVAudioNodeTapBlock = reference to procedure (buffer: AVAudioPCMBuffer; when: AVAudioTime); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  AVAudioNode = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    procedure reset; message 'reset';
    function inputFormatForBus (bus: AVAudioNodeBus): AVAudioFormat; message 'inputFormatForBus:';
    function outputFormatForBus (bus: AVAudioNodeBus): AVAudioFormat; message 'outputFormatForBus:';
    function nameForInputBus (bus: AVAudioNodeBus): NSString; message 'nameForInputBus:';
    function nameForOutputBus (bus: AVAudioNodeBus): NSString; message 'nameForOutputBus:';
    procedure installTapOnBus_bufferSize_format_block (bus: AVAudioNodeBus; bufferSize: AVAudioFrameCount; format: AVAudioFormat; tapBlock: AVAudioNodeTapBlock); message 'installTapOnBus:bufferSize:format:block:';
    procedure removeTapOnBus (bus: AVAudioNodeBus); message 'removeTapOnBus:';
    function engine: AVAudioEngine; message 'engine';
    function numberOfInputs: NSUInteger; message 'numberOfInputs';
    function numberOfOutputs: NSUInteger; message 'numberOfOutputs';
    function lastRenderTime: AVAudioTime; message 'lastRenderTime';
    {$if defined(AVAUDIONODE_HAVE_AUAUDIOUNIT)}
    function AUAudioUnit_: AUAudioUnit; message 'AUAudioUnit'; { available in macos , ios , watchos , tvos  }
    {$endif}
    function latency: NSTimeInterval; message 'latency'; { available in macos , ios , watchos , tvos  }
    function outputPresentationLatency: NSTimeInterval; message 'outputPresentationLatency'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

