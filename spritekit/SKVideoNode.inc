{ Parsed from SpriteKit.framework SKVideoNode.h }

{$ifdef TYPES}
type
  SKVideoNodePtr = ^SKVideoNode;
{$endif}

{$ifdef CLASSES}

type
  SKVideoNode = objcclass external (SKNode)
  public
    class function videoNodeWithAVPlayer (player: AVPlayer): SKVideoNode; message 'videoNodeWithAVPlayer:';
    class function videoNodeWithVideoFileNamed (videoFile: NSString): SKVideoNode; message 'videoNodeWithVideoFileNamed:'; deprecated 'in 10_8, 10_11, 7_0, 9_0';
    class function videoNodeWithFileNamed (videoFile: NSString): SKVideoNode; message 'videoNodeWithFileNamed:'; { available in ios , tvos , watchos , macos  }
    class function videoNodeWithVideoURL (videoURL: NSURL): SKVideoNode; message 'videoNodeWithVideoURL:'; deprecated 'in 10_8, 10_11, 7_0, 9_0';
    class function videoNodeWithURL (videoURL: NSURL): SKVideoNode; message 'videoNodeWithURL:'; { available in ios , tvos , watchos , macos  }
    function initWithAVPlayer (player: AVPlayer): id; message 'initWithAVPlayer:'; { NS_DESIGNATED_INITIALIZER }
    function initWithVideoFileNamed (videoFile: NSString): id; message 'initWithVideoFileNamed:'; deprecated 'in 10_8, 10_10, 7_0, 8_0';
    function initWithFileNamed (videoFile: NSString): id; message 'initWithFileNamed:'; { available in ios , tvos , watchos , macos  }
    function initWithVideoURL (url: NSURL): id; message 'initWithVideoURL:'; deprecated 'in 10_8, 10_10, 7_0, 8_0';
    function initWithURL (url: NSURL): id; message 'initWithURL:'; { available in ios , tvos , watchos , macos  }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure play; message 'play';
    procedure pause; message 'pause';
    procedure setSize(newValue: CGSize); message 'setSize:';
    function size: CGSize; message 'size';
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
  end;
{$endif}

