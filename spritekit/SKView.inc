{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKView.h }

{ Types from SKView }
{$ifdef TYPES}
{$else}
{$endif}


{$ifdef TYPES}
type
  SKViewPtr = ^SKView;
  SKViewDelegateProtocolPtr = ^SKViewDelegateProtocol;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  SKView = objcclass external (UIView)
  public
    {$else}
    procedure setPaused(newValue: objcbool); message 'setPaused:';
    function isPaused: objcbool; message 'isPaused';
    procedure setShowsFPS(newValue: objcbool); message 'setShowsFPS:';
    function showsFPS: objcbool; message 'showsFPS';
    procedure setShowsDrawCount(newValue: objcbool); message 'setShowsDrawCount:';
    function showsDrawCount: objcbool; message 'showsDrawCount';
    procedure setShowsNodeCount(newValue: objcbool); message 'setShowsNodeCount:';
    function showsNodeCount: objcbool; message 'showsNodeCount';
    procedure setShowsQuadCount(newValue: objcbool); message 'setShowsQuadCount:'; { available in ios , tvos , watchos , macos  }
    function showsQuadCount: objcbool; message 'showsQuadCount'; { available in ios , tvos , watchos , macos  }
    procedure setShowsPhysics(newValue: objcbool); message 'setShowsPhysics:'; { available in ios , tvos , watchos , macos  }
    function showsPhysics: objcbool; message 'showsPhysics'; { available in ios , tvos , watchos , macos  }
    procedure setShowsFields(newValue: objcbool); message 'setShowsFields:'; { available in ios , tvos , watchos , macos  }
    function showsFields: objcbool; message 'showsFields'; { available in ios , tvos , watchos , macos  }
    procedure setAsynchronous(newValue: objcbool); message 'setAsynchronous:';
    function isAsynchronous: objcbool; message 'isAsynchronous';
    procedure setAllowsTransparency(newValue: objcbool); message 'setAllowsTransparency:'; { available in ios , tvos , watchos , macos  }
    function allowsTransparency: objcbool; message 'allowsTransparency'; { available in ios , tvos , watchos , macos  }
    procedure setIgnoresSiblingOrder(newValue: objcbool); message 'setIgnoresSiblingOrder:';
    function ignoresSiblingOrder: objcbool; message 'ignoresSiblingOrder';
    procedure setShouldCullNonVisibleNodes(newValue: objcbool); message 'setShouldCullNonVisibleNodes:'; { available in ios , tvos , watchos , macos  }
    function shouldCullNonVisibleNodes: objcbool; message 'shouldCullNonVisibleNodes'; { available in ios , tvos , watchos , macos  }
    procedure setPreferredFramesPerSecond(newValue: NSInteger); message 'setPreferredFramesPerSecond:'; { available in ios , tvos , watchos , macos  }
    function preferredFramesPerSecond: NSInteger; message 'preferredFramesPerSecond'; { available in ios , tvos , watchos , macos  }
    procedure setDisableDepthStencilBuffer(newValue: objcbool); message 'setDisableDepthStencilBuffer:';
    function disableDepthStencilBuffer: objcbool; message 'disableDepthStencilBuffer';
    procedure setDelegate(newValue: NSObjectPtr); message 'setDelegate:'; { available in ios , tvos , watchos , macos  }
    function delegate: NSObjectPtr; message 'delegate'; { available in ios , tvos , watchos , macos  }
    procedure setFrameInterval(newValue: NSInteger); message 'setFrameInterval:'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    function frameInterval: NSInteger; message 'frameInterval'; deprecated 'in 10_8, 10_12, 7_0, 10_0';
    procedure setPreferredFrameRate(newValue: single); message 'setPreferredFrameRate:'; deprecated 'in 10_12, 10_12, 10_0, 10_0';
    function preferredFrameRate: single; message 'preferredFrameRate'; deprecated 'in 10_12, 10_12, 10_0, 10_0';
    procedure presentScene (scene: SKScene); message 'presentScene:';
    procedure presentScene_transition (scene: SKScene; transition: SKTransition); message 'presentScene:transition:';
    function scene: SKScene; message 'scene';
    function textureFromNode (node: SKNode): SKTexture; message 'textureFromNode:';
    function textureFromNode_crop (node: SKNode; crop: CGRect): SKTexture; message 'textureFromNode:crop:';
    function convertPoint_toScene (point: CGPoint; scene_: SKScene): CGPoint; message 'convertPoint:toScene:';
    function convertPoint_fromScene (point: CGPoint; scene_: SKScene): CGPoint; message 'convertPoint:fromScene:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKViewDelegateProtocol = objcprotocol external name 'SKViewDelegate' (NSObjectProtocol)
  optional
    function view_shouldRenderAtTime (view: SKView; time: NSTimeInterval): objcbool; message 'view:shouldRenderAtTime:';
  end;
{$endif}

{$endif}
