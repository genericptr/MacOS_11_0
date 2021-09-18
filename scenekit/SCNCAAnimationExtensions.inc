{ Parsed from SceneKit.framework SCNCAAnimationExtensions.h }
{$ifdef CLASSES}

type
  CAAnimation_SCNAnimation = objccategory external name 'SCNAnimation' (CAAnimation)
  end;

type
  SceneKitAdditions = objccategory external (CAAnimation)
    class function animationWithSCNAnimation (animation: SCNAnimationPtr): CAAnimationPtr; message 'animationWithSCNAnimation:'; { available in macos , ios , tvos  }
    procedure setUsesSceneTimeBase(newValue: objcbool); message 'setUsesSceneTimeBase:';
    function usesSceneTimeBase: objcbool; message 'usesSceneTimeBase';
    procedure setFadeInDuration(newValue: CGFloat); message 'setFadeInDuration:'; { available in macos  }
    function fadeInDuration: CGFloat; message 'fadeInDuration'; { available in macos  }
    procedure setFadeOutDuration(newValue: CGFloat); message 'setFadeOutDuration:'; { available in macos  }
    function fadeOutDuration: CGFloat; message 'fadeOutDuration'; { available in macos  }
    procedure setAnimationEvents(newValue: NSArray); message 'setAnimationEvents:'; { available in macos  }
    function animationEvents: NSArray; message 'animationEvents'; { available in macos  }
  end;
{$endif}

