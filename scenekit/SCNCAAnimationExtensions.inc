{ Parsed from SceneKit.framework SCNCAAnimationExtensions.h }
{$ifdef CLASSES}

type
  CAAnimation_SCNAnimation = objccategory external name 'SCNAnimation' (CAAnimation)
  end;

type
  SceneKitAdditions = objccategory external (CAAnimation)
    class function animationWithSCNAnimation (animation: SCNAnimationPtr): CAAnimationPtr; message 'animationWithSCNAnimation:'; { available in macos 10.13, ios 11.0, tvos 11.0 }
    procedure setUsesSceneTimeBase(newValue: objcbool); message 'setUsesSceneTimeBase:';
    function usesSceneTimeBase: objcbool; message 'usesSceneTimeBase';
    procedure setFadeInDuration(newValue: CGFloat); message 'setFadeInDuration:'; { available in macos 10.9 }
    function fadeInDuration: CGFloat; message 'fadeInDuration'; { available in macos 10.9 }
    procedure setFadeOutDuration(newValue: CGFloat); message 'setFadeOutDuration:'; { available in macos 10.9 }
    function fadeOutDuration: CGFloat; message 'fadeOutDuration'; { available in macos 10.9 }
    procedure setAnimationEvents(newValue: NSArray); message 'setAnimationEvents:'; { available in macos 10.9 }
    function animationEvents: NSArray; message 'animationEvents'; { available in macos 10.9 }
  end;
{$endif}

