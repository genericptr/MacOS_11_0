{ Parsed from SceneKit.framework SCNAction.h }

{$ifdef CALLBACKS}
type
  SCNActionRunActionCallback = reference to procedure; cblock; cdecl;
  SCNActionRunBlockCallback = reference to procedure (node: SCNNode); cblock; cdecl;
  SCNActionCustomActionWithDurationCallback = reference to procedure (node: SCNNode; elapsedTime: CGFloat); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SCNActionPtr = ^SCNAction;
  SCNActionableProtocolPtr = ^SCNActionableProtocol;
{$endif}

{$ifdef TYPES}
type
  SCNActionTimingFunction = reference to function (time: single): single; cblock; cdecl;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNActionableProtocol = objcprotocol external name 'SCNActionable' (NSObjectProtocol)
    procedure runAction (action: SCNAction); message 'runAction:'; { available in macos  }
    procedure runAction_completionHandler (action: SCNAction; block: SCNActionRunActionCallback); message 'runAction:completionHandler:'; { available in macos  }
    procedure runAction_forKey (action: SCNAction; key: NSString); message 'runAction:forKey:'; { available in macos  }
    procedure runAction_forKey_completionHandler (action: SCNAction; key: NSString; block: SCNActionRunActionCallback); message 'runAction:forKey:completionHandler:'; { available in macos  }
    function hasActions: objcbool; message 'hasActions'; { available in macos  }
    function actionForKey (key: NSString): SCNAction; message 'actionForKey:'; { available in macos  }
    procedure removeActionForKey (key: NSString); message 'removeActionForKey:'; { available in macos  }
    procedure removeAllActions; message 'removeAllActions'; { available in macos  }
    function actionKeys: NSArray; message 'actionKeys'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  SCNAction = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setDuration(newValue: NSTimeInterval); message 'setDuration:';
    function duration: NSTimeInterval; message 'duration';
    procedure setTimingMode(newValue: SCNActionTimingMode); message 'setTimingMode:';
    function timingMode: SCNActionTimingMode; message 'timingMode';
    procedure setTimingFunction(newValue: SCNActionTimingFunction); message 'setTimingFunction:';
    function timingFunction: SCNActionTimingFunction; message 'timingFunction';
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    function reversedAction: SCNAction; message 'reversedAction';
    class function moveByX_y_z_duration (deltaX: CGFloat; deltaY: CGFloat; deltaZ: CGFloat; duration_: NSTimeInterval): SCNAction; message 'moveByX:y:z:duration:';
    class function moveBy_duration (delta: SCNVector3; duration_: NSTimeInterval): SCNAction; message 'moveBy:duration:';
    class function moveTo_duration (location: SCNVector3; duration_: NSTimeInterval): SCNAction; message 'moveTo:duration:';
    class function rotateByX_y_z_duration (xAngle: CGFloat; yAngle: CGFloat; zAngle: CGFloat; duration_: NSTimeInterval): SCNAction; message 'rotateByX:y:z:duration:';
    class function rotateToX_y_z_duration (xAngle: CGFloat; yAngle: CGFloat; zAngle: CGFloat; duration_: NSTimeInterval): SCNAction; message 'rotateToX:y:z:duration:';
    class function rotateToX_y_z_duration_shortestUnitArc (xAngle: CGFloat; yAngle: CGFloat; zAngle: CGFloat; duration_: NSTimeInterval; shortestUnitArc: objcbool): SCNAction; message 'rotateToX:y:z:duration:shortestUnitArc:';
    class function rotateByAngle_aroundAxis_duration (angle: CGFloat; axis: SCNVector3; duration_: NSTimeInterval): SCNAction; message 'rotateByAngle:aroundAxis:duration:';
    class function rotateToAxisAngle_duration (axisAngle: SCNVector4; duration_: NSTimeInterval): SCNAction; message 'rotateToAxisAngle:duration:';
    class function scaleBy_duration (scale: CGFloat; sec: NSTimeInterval): SCNAction; message 'scaleBy:duration:';
    class function scaleTo_duration (scale: CGFloat; sec: NSTimeInterval): SCNAction; message 'scaleTo:duration:';
    class function sequence (actions: NSArray): SCNAction; message 'sequence:';
    class function group (actions: NSArray): SCNAction; message 'group:';
    class function repeatAction_count (action: SCNAction; count: NSUInteger): SCNAction; message 'repeatAction:count:';
    class function repeatActionForever (action: SCNAction): SCNAction; message 'repeatActionForever:';
    class function fadeInWithDuration (sec: NSTimeInterval): SCNAction; message 'fadeInWithDuration:';
    class function fadeOutWithDuration (sec: NSTimeInterval): SCNAction; message 'fadeOutWithDuration:';
    class function fadeOpacityBy_duration (factor: CGFloat; sec: NSTimeInterval): SCNAction; message 'fadeOpacityBy:duration:';
    class function fadeOpacityTo_duration (opacity: CGFloat; sec: NSTimeInterval): SCNAction; message 'fadeOpacityTo:duration:';
    class function hide: SCNAction; message 'hide'; { available in macos , ios  }
    class function unhide: SCNAction; message 'unhide'; { available in macos , ios  }
    class function waitForDuration (sec: NSTimeInterval): SCNAction; message 'waitForDuration:';
    class function waitForDuration_withRange (sec: NSTimeInterval; durationRange: NSTimeInterval): SCNAction; message 'waitForDuration:withRange:';
    class function removeFromParentNode: SCNAction; message 'removeFromParentNode';
    class function runBlock (block: SCNActionRunBlockCallback): SCNAction; message 'runBlock:';
    class function runBlock_queue (block: SCNActionRunBlockCallback; queue: dispatch_queue_t): SCNAction; message 'runBlock:queue:';
    class function javaScriptActionWithScript_duration (script: NSString; seconds: NSTimeInterval): SCNAction; message 'javaScriptActionWithScript:duration:';
    class function customActionWithDuration_actionBlock (seconds: NSTimeInterval; block: SCNActionCustomActionWithDurationCallback): SCNAction; message 'customActionWithDuration:actionBlock:';
    class function playAudioSource_waitForCompletion (source: SCNAudioSource; wait: objcbool): SCNAction; message 'playAudioSource:waitForCompletion:'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

