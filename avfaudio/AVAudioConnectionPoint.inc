{ Parsed from AVFAudio.framework AVAudioConnectionPoint.h }

{$ifdef TYPES}
type
  AVAudioConnectionPointPtr = ^AVAudioConnectionPoint;
{$endif}

{$ifdef CLASSES}

type
  AVAudioConnectionPoint = objcclass external (NSObject)
  private
    _node: AVAudioNode;
    _bus: AVAudioNodeBus;
    _reserved: pointer;
  public
    function initWithNode_bus (node: AVAudioNode; bus: AVAudioNodeBus): id; message 'initWithNode:bus:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function node: AVAudioNode; message 'node';
    function bus: AVAudioNodeBus; message 'bus';
  end;
{$endif}

