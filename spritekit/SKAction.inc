{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKAction.h }

{$ifdef CALLBACKS}
type
  SKActionCustomActionWithDurationCallback = reference to function (node: SKNode; elapsedTime: CGFloat): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKActionPtr = ^SKAction;
{$endif}

{$ifdef TYPES}
type
  SKActionTimingMode = NSInteger;
  SKActionTimingModePtr = ^SKActionTimingMode;

const
  SKActionTimingLinear = 0;
  SKActionTimingEaseIn = 1;
  SKActionTimingEaseOut = 2;
  SKActionTimingEaseInEaseOut = 3;

type
  SKActionTimingFunction = reference to function (time: single): single; cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  SKAction = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setDuration(newValue: NSTimeInterval); message 'setDuration:';
    function duration: NSTimeInterval; message 'duration';
    procedure setTimingMode(newValue: SKActionTimingMode); message 'setTimingMode:';
    function timingMode: SKActionTimingMode; message 'timingMode';
    procedure setTimingFunction(newValue: SKActionTimingFunction); message 'setTimingFunction:'; { available in ios , tvos , watchos , macos  }
    function timingFunction: SKActionTimingFunction; message 'timingFunction'; { available in ios , tvos , watchos , macos  }
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    function reversedAction: SKAction; message 'reversedAction';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  SKActions = objccategory external (SKAction)
    class function moveBy_duration (delta: CGVector; duration_: NSTimeInterval): SKAction; message 'moveBy:duration:';
    class function moveByX_y_duration (deltaX: CGFloat; deltaY: CGFloat; duration_: NSTimeInterval): SKAction; message 'moveByX:y:duration:';
    class function moveTo_duration (location: CGPoint; duration_: NSTimeInterval): SKAction; message 'moveTo:duration:';
    class function moveToX_duration (x: CGFloat; duration_: NSTimeInterval): SKAction; message 'moveToX:duration:';
    class function moveToY_duration (y: CGFloat; duration_: NSTimeInterval): SKAction; message 'moveToY:duration:';
    class function rotateByAngle_duration (radians: CGFloat; duration_: NSTimeInterval): SKAction; message 'rotateByAngle:duration:';
    class function rotateToAngle_duration (radians: CGFloat; duration_: NSTimeInterval): SKAction; message 'rotateToAngle:duration:';
    class function rotateToAngle_duration_shortestUnitArc (radians: CGFloat; duration_: NSTimeInterval; shortestUnitArc: objcbool): SKAction; message 'rotateToAngle:duration:shortestUnitArc:';
    class function resizeByWidth_height_duration (width: CGFloat; height: CGFloat; duration_: NSTimeInterval): SKAction; message 'resizeByWidth:height:duration:';
    class function resizeToWidth_height_duration (width: CGFloat; height: CGFloat; duration_: NSTimeInterval): SKAction; message 'resizeToWidth:height:duration:';
    class function resizeToWidth_duration (width: CGFloat; duration_: NSTimeInterval): SKAction; message 'resizeToWidth:duration:';
    class function resizeToHeight_duration (height: CGFloat; duration_: NSTimeInterval): SKAction; message 'resizeToHeight:duration:';
    class function scaleBy_duration (scale: CGFloat; duration_: NSTimeInterval): SKAction; message 'scaleBy:duration:';
    class function scaleXBy_y_duration (xScale: CGFloat; yScale: CGFloat; duration_: NSTimeInterval): SKAction; message 'scaleXBy:y:duration:';
    class function scaleTo_duration (scale: CGFloat; duration_: NSTimeInterval): SKAction; message 'scaleTo:duration:';
    class function scaleXTo_y_duration (xScale: CGFloat; yScale: CGFloat; duration_: NSTimeInterval): SKAction; message 'scaleXTo:y:duration:';
    class function scaleXTo_duration (scale: CGFloat; duration_: NSTimeInterval): SKAction; message 'scaleXTo:duration:';
    class function scaleYTo_duration (scale: CGFloat; duration_: NSTimeInterval): SKAction; message 'scaleYTo:duration:';
    class function scaleToSize_duration (size: CGSize; duration_: NSTimeInterval): SKAction; message 'scaleToSize:duration:'; { available in ios , tvos , watchos , macos  }
    class function sequence (actions: NSArray): SKAction; message 'sequence:';
    class function group (actions: NSArray): SKAction; message 'group:';
    class function repeatAction_count (action: SKAction; count: NSUInteger): SKAction; message 'repeatAction:count:';
    class function repeatActionForever (action: SKAction): SKAction; message 'repeatActionForever:';
    class function fadeInWithDuration (duration_: NSTimeInterval): SKAction; message 'fadeInWithDuration:';
    class function fadeOutWithDuration (duration_: NSTimeInterval): SKAction; message 'fadeOutWithDuration:';
    class function fadeAlphaBy_duration (factor: CGFloat; duration_: NSTimeInterval): SKAction; message 'fadeAlphaBy:duration:';
    class function fadeAlphaTo_duration (alpha: CGFloat; duration_: NSTimeInterval): SKAction; message 'fadeAlphaTo:duration:';
    class function hide: SKAction; message 'hide'; { available in ios , tvos , watchos , macos  }
    class function unhide: SKAction; message 'unhide'; { available in ios , tvos , watchos , macos  }
    class function setTexture (texture: SKTexture): SKAction; message 'setTexture:'; { available in ios , tvos , watchos , macos  }
    class function setNormalTexture (texture: SKTexture): SKAction; message 'setNormalTexture:'; { available in ios , tvos , watchos , macos  }
    class function setTexture_resize (texture: SKTexture; resize: objcbool): SKAction; message 'setTexture:resize:'; { available in ios , tvos , watchos , macos  }
    class function setNormalTexture_resize (texture: SKTexture; resize: objcbool): SKAction; message 'setNormalTexture:resize:'; { available in ios , tvos , watchos , macos  }
    class function animateWithTextures_timePerFrame (textures: NSArray; sec: NSTimeInterval): SKAction; message 'animateWithTextures:timePerFrame:';
    class function animateWithNormalTextures_timePerFrame (textures: NSArray; sec: NSTimeInterval): SKAction; message 'animateWithNormalTextures:timePerFrame:'; { available in ios , tvos , watchos , macos  }
    class function animateWithTextures_timePerFrame_resize_restore (textures: NSArray; sec: NSTimeInterval; resize: objcbool; restore: objcbool): SKAction; message 'animateWithTextures:timePerFrame:resize:restore:';
    class function animateWithNormalTextures_timePerFrame_resize_restore (textures: NSArray; sec: NSTimeInterval; resize: objcbool; restore: objcbool): SKAction; message 'animateWithNormalTextures:timePerFrame:resize:restore:'; { available in ios , tvos , watchos , macos  }
    class function playSoundFileNamed_waitForCompletion (soundFile: NSString; wait: objcbool): SKAction; message 'playSoundFileNamed:waitForCompletion:';
    class function colorizeWithColor_colorBlendFactor_duration (color: SKColor; colorBlendFactor: CGFloat; duration_: NSTimeInterval): SKAction; message 'colorizeWithColor:colorBlendFactor:duration:';
    class function colorizeWithColorBlendFactor_duration (colorBlendFactor: CGFloat; sec: NSTimeInterval): SKAction; message 'colorizeWithColorBlendFactor:duration:';
    class function falloffTo_duration (falloff: single; duration_: NSTimeInterval): SKAction; message 'falloffTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function falloffBy_duration (falloff: single; duration_: NSTimeInterval): SKAction; message 'falloffBy:duration:'; { available in ios , tvos , watchos , macos  }
    class function followPath_duration (path: CGPathRef; duration_: NSTimeInterval): SKAction; message 'followPath:duration:';
    class function followPath_asOffset_orientToPath_duration (path: CGPathRef; offset: objcbool; orient: objcbool; duration_: NSTimeInterval): SKAction; message 'followPath:asOffset:orientToPath:duration:';
    class function followPath_speed (path: CGPathRef; speed_: CGFloat): SKAction; message 'followPath:speed:';
    class function followPath_asOffset_orientToPath_speed (path: CGPathRef; offset: objcbool; orient: objcbool; speed_: CGFloat): SKAction; message 'followPath:asOffset:orientToPath:speed:';
    class function speedBy_duration (speed_: CGFloat; duration_: NSTimeInterval): SKAction; message 'speedBy:duration:';
    class function speedTo_duration (speed_: CGFloat; duration_: NSTimeInterval): SKAction; message 'speedTo:duration:';
    class function reachTo_rootNode_duration (position: CGPoint; root: SKNode; duration_: NSTimeInterval): SKAction; message 'reachTo:rootNode:duration:'; { available in ios , tvos , watchos , macos  }
    class function reachTo_rootNode_velocity (position: CGPoint; root: SKNode; velocity: CGFloat): SKAction; message 'reachTo:rootNode:velocity:'; { available in ios , tvos , watchos , macos  }
    class function reachToNode_rootNode_duration (node: SKNode; root: SKNode; sec: NSTimeInterval): SKAction; message 'reachToNode:rootNode:duration:'; { available in ios , tvos , watchos , macos  }
    class function reachToNode_rootNode_velocity (node: SKNode; root: SKNode; velocity: CGFloat): SKAction; message 'reachToNode:rootNode:velocity:'; { available in ios , tvos , watchos , macos  }
    class function strengthTo_duration (strength: single; duration_: NSTimeInterval): SKAction; message 'strengthTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function strengthBy_duration (strength: single; duration_: NSTimeInterval): SKAction; message 'strengthBy:duration:'; { available in ios , tvos , watchos , macos  }
    class function waitForDuration (duration_: NSTimeInterval): SKAction; message 'waitForDuration:';
    class function waitForDuration_withRange (duration_: NSTimeInterval; durationRange: NSTimeInterval): SKAction; message 'waitForDuration:withRange:';
    class function removeFromParent: SKAction; message 'removeFromParent';
    class function performSelector_onTarget (selector: SEL; target: id): SKAction; message 'performSelector:onTarget:';
    class function runBlock (block: dispatch_block_t): SKAction; message 'runBlock:';
    class function runBlock_queue (block: dispatch_block_t; queue: dispatch_queue_t): SKAction; message 'runBlock:queue:';
    class function runAction_onChildWithName (action: SKAction; name: NSString): SKAction; message 'runAction:onChildWithName:';
    class function customActionWithDuration_actionBlock (duration_: NSTimeInterval; block: SKActionCustomActionWithDurationCallback): SKAction; message 'customActionWithDuration:actionBlock:';
    class function actionNamed (name: NSString): SKAction; message 'actionNamed:'; { available in ios , tvos , watchos , macos  }
    class function actionNamed_duration (name: NSString; duration_: NSTimeInterval): SKAction; message 'actionNamed:duration:'; { available in ios , tvos , watchos , macos  }
    class function actionNamed_fromURL (name: NSString; url: NSURL): SKAction; message 'actionNamed:fromURL:'; { available in ios , tvos , watchos , macos  }
    class function actionNamed_fromURL_duration (name: NSString; url: NSURL; duration_: NSTimeInterval): SKAction; message 'actionNamed:fromURL:duration:'; { available in ios , tvos , watchos , macos  }
  end;

type
  NodeWithPhysicsBody = objccategory external (SKAction)
    class function changeChargeTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeChargeTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeChargeBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeChargeBy:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeMassTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeMassTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeMassBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeMassBy:duration:'; { available in ios , tvos , watchos , macos  }
    class function applyForce_duration (force: CGVector; duration_: NSTimeInterval): SKAction; message 'applyForce:duration:'; { available in ios , tvos , watchos , macos  }
    class function applyForce_atPoint_duration (force: CGVector; point: CGPoint; duration_: NSTimeInterval): SKAction; message 'applyForce:atPoint:duration:'; { available in ios , tvos , watchos , macos  }
    class function applyTorque_duration (torque: CGFloat; duration_: NSTimeInterval): SKAction; message 'applyTorque:duration:'; { available in ios , tvos , watchos , macos  }
    class function applyImpulse_duration (impulse: CGVector; duration_: NSTimeInterval): SKAction; message 'applyImpulse:duration:'; { available in ios , tvos , watchos , macos  }
    class function applyImpulse_atPoint_duration (impulse: CGVector; point: CGPoint; duration_: NSTimeInterval): SKAction; message 'applyImpulse:atPoint:duration:'; { available in ios , tvos , watchos , macos  }
    class function applyAngularImpulse_duration (impulse: CGFloat; duration_: NSTimeInterval): SKAction; message 'applyAngularImpulse:duration:'; { available in ios , tvos , watchos , macos  }
  end;

type
  PlaybackControl = objccategory external (SKAction)
    class function play: SKAction; message 'play'; { available in ios , tvos , watchos , macos  }
    class function pause: SKAction; message 'pause'; { available in ios , tvos , watchos , macos  }
    class function stop: SKAction; message 'stop'; { available in ios , tvos , watchos , macos  }
    class function changePlaybackRateTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changePlaybackRateTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function changePlaybackRateBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changePlaybackRateBy:duration:'; { available in ios , tvos , watchos , macos  }
  end;

type
  MixerControl = objccategory external (SKAction)
    class function changeVolumeTo_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeVolumeTo:duration:'; { available in ios , tvos , watchos , macos  }
    class function changeVolumeBy_duration (v: single; duration_: NSTimeInterval): SKAction; message 'changeVolumeBy:duration:'; { available in ios , tvos , watchos , macos  }
  end;
{$endif}

