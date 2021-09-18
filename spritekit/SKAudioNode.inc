{ Parsed from SpriteKit.framework SKAudioNode.h }

{$ifdef TYPES}
type
  SKAudioNodePtr = ^SKAudioNode;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  SKAudioNode = objcclass external (SKNode, NSSecureCodingProtocol)
  public
    function initWithAVAudioNode (node_: AVAudioNode): id; message 'initWithAVAudioNode:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithFileNamed (name_: NSString): id; message 'initWithFileNamed:';
    function initWithURL (url: NSURL): id; message 'initWithURL:';
    procedure setAvAudioNode(newValue: AVAudioNode); message 'setAvAudioNode:';
    function avAudioNode: AVAudioNode; message 'avAudioNode';
    procedure setAutoplayLooped(newValue: objcbool); message 'setAutoplayLooped:';
    function autoplayLooped: objcbool; message 'autoplayLooped';
    procedure setPositional(newValue: objcbool); message 'setPositional:';
    function isPositional: objcbool; message 'isPositional';
  end;


type
  SKAction_SKAudioNode = objccategory external name 'SKAudioNode' (SKAction)
    class function stereoPanTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'stereoPanTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function stereoPanBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'stereoPanBy:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeReverbTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeReverbTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeReverbBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeReverbBy:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeObstructionTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeObstructionTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeObstructionBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeObstructionBy:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeOcclusionTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeOcclusionTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeOcclusionBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeOcclusionBy:duration:'; { available in ios , tvos , watchos , macos  }
  end;
{$endif}

{$endif}
