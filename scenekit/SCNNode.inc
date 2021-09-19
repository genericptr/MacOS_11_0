{ Parsed from SceneKit.framework SCNNode.h }

{$ifdef CALLBACKS}
type
  SCNNodeChildNodesPassingTestCallback = reference to function (child: SCNNode; stop: objcboolPtr): objcbool; cblock; cdecl;
  SCNNodeEnumerateChildNodesUsingBlockCallback = reference to procedure (child: SCNNode; stop: objcboolPtr); cblock; cdecl;
  SCNNodeEnumerateHierarchyUsingBlockCallback = reference to procedure (node: SCNNode; stop: objcboolPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SCNNodePtr = ^SCNNode;
  SCNNodeRendererDelegateProtocolPtr = ^SCNNodeRendererDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNModelTransform: NSString; cvar; external;
  SCNViewTransform: NSString; cvar; external;
  SCNProjectionTransform: NSString; cvar; external;
  SCNNormalTransform: NSString; cvar; external;
  SCNModelViewTransform: NSString; cvar; external;
  SCNModelViewProjectionTransform: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  SCNMovabilityHint = NSInteger;
  SCNMovabilityHintPtr = ^SCNMovabilityHint;

const
  SCNMovabilityHintFixed = 0;
  SCNMovabilityHintMovable = 1;

type
  SCNNodeFocusBehavior = NSInteger;
  SCNNodeFocusBehaviorPtr = ^SCNNodeFocusBehavior;

const
  SCNNodeFocusBehaviorNone = 0;
  SCNNodeFocusBehaviorOccluding = 1;
  SCNNodeFocusBehaviorFocusable = 2;
{$endif}

{$ifdef CLASSES}

type
  SCNNode = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol, SCNAnimatableProtocol, SCNActionableProtocol, SCNBoundingVolumeProtocol)
  public
    class function node: id; message 'node';
    class function nodeWithGeometry (geometry: SCNGeometry): SCNNode; message 'nodeWithGeometry:';
    function clone: id; message 'clone';
    function flattenedClone: id; message 'flattenedClone'; { available in macos 10.9 }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setLight(newValue: SCNLight); message 'setLight:';
    function light: SCNLight; message 'light';
    procedure setCamera(newValue: SCNCamera); message 'setCamera:';
    function camera: SCNCamera; message 'camera';
    procedure setGeometry(newValue: SCNGeometry); message 'setGeometry:';
    function geometry: SCNGeometry; message 'geometry';
    procedure setSkinner(newValue: SCNSkinner); message 'setSkinner:'; { available in macos 10.9 }
    function skinner: SCNSkinner; message 'skinner'; { available in macos 10.9 }
    procedure setMorpher(newValue: SCNMorpher); message 'setMorpher:'; { available in macos 10.9 }
    function morpher: SCNMorpher; message 'morpher'; { available in macos 10.9 }
    procedure setTransform(newValue: SCNMatrix4); message 'setTransform:';
    function transform: SCNMatrix4; message 'transform';
    function worldTransform: SCNMatrix4; message 'worldTransform';
    procedure setWorldTransform (worldTransform_: SCNMatrix4); message 'setWorldTransform:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setPosition(newValue: SCNVector3); message 'setPosition:';
    function position: SCNVector3; message 'position';
    procedure setWorldPosition(newValue: SCNVector3); message 'setWorldPosition:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function worldPosition: SCNVector3; message 'worldPosition'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setRotation(newValue: SCNVector4); message 'setRotation:';
    function rotation: SCNVector4; message 'rotation';
    procedure setOrientation(newValue: SCNQuaternion); message 'setOrientation:'; { available in macos 10.10 }
    function orientation: SCNQuaternion; message 'orientation'; { available in macos 10.10 }
    procedure setWorldOrientation(newValue: SCNQuaternion); message 'setWorldOrientation:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function worldOrientation: SCNQuaternion; message 'worldOrientation'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setEulerAngles(newValue: SCNVector3); message 'setEulerAngles:'; { available in macos 10.10 }
    function eulerAngles: SCNVector3; message 'eulerAngles'; { available in macos 10.10 }
    procedure setScale(newValue: SCNVector3); message 'setScale:';
    function scale: SCNVector3; message 'scale';
    procedure setPivot(newValue: SCNMatrix4); message 'setPivot:';
    function pivot: SCNMatrix4; message 'pivot';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function isHidden: objcbool; message 'isHidden';
    procedure setOpacity(newValue: CGFloat); message 'setOpacity:';
    function opacity: CGFloat; message 'opacity';
    procedure setRenderingOrder(newValue: NSInteger); message 'setRenderingOrder:';
    function renderingOrder: NSInteger; message 'renderingOrder';
    procedure setCastsShadow(newValue: objcbool); message 'setCastsShadow:'; { available in macos 10.10 }
    function castsShadow: objcbool; message 'castsShadow'; { available in macos 10.10 }
    procedure setMovabilityHint(newValue: SCNMovabilityHint); message 'setMovabilityHint:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function movabilityHint: SCNMovabilityHint; message 'movabilityHint'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function parentNode: SCNNode; message 'parentNode';
    function childNodes: NSArray; message 'childNodes';
    procedure addChildNode (child: SCNNode); message 'addChildNode:';
    procedure insertChildNode_atIndex (child: SCNNode; index: NSUInteger); message 'insertChildNode:atIndex:';
    procedure removeFromParentNode; message 'removeFromParentNode';
    procedure replaceChildNode_with (oldChild: SCNNode; newChild: SCNNode); message 'replaceChildNode:with:';
    function childNodeWithName_recursively (name_: NSString; recursively: objcbool): SCNNode; message 'childNodeWithName:recursively:';
    function childNodesPassingTest (predicate: SCNNodeChildNodesPassingTestCallback): NSArray; message 'childNodesPassingTest:';
    procedure enumerateChildNodesUsingBlock (block: SCNNodeEnumerateChildNodesUsingBlockCallback); message 'enumerateChildNodesUsingBlock:'; { available in macos 10.10 }
    procedure enumerateHierarchyUsingBlock (block: SCNNodeEnumerateHierarchyUsingBlockCallback); message 'enumerateHierarchyUsingBlock:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function convertPosition_toNode (position_: SCNVector3; node_: SCNNode): SCNVector3; message 'convertPosition:toNode:'; { available in macos 10.9 }
    function convertPosition_fromNode (position_: SCNVector3; node_: SCNNode): SCNVector3; message 'convertPosition:fromNode:'; { available in macos 10.9 }
    function convertVector_toNode (vector: SCNVector3; node_: SCNNode): SCNVector3; message 'convertVector:toNode:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function convertVector_fromNode (vector: SCNVector3; node_: SCNNode): SCNVector3; message 'convertVector:fromNode:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function convertTransform_toNode (transform_: SCNMatrix4; node_: SCNNode): SCNMatrix4; message 'convertTransform:toNode:'; { available in macos 10.9 }
    function convertTransform_fromNode (transform_: SCNMatrix4; node_: SCNNode): SCNMatrix4; message 'convertTransform:fromNode:'; { available in macos 10.9 }
    procedure setPhysicsBody(newValue: SCNPhysicsBody); message 'setPhysicsBody:'; { available in macos 10.10 }
    function physicsBody: SCNPhysicsBody; message 'physicsBody'; { available in macos 10.10 }
    procedure setPhysicsField(newValue: SCNPhysicsField); message 'setPhysicsField:'; { available in macos 10.10 }
    function physicsField: SCNPhysicsField; message 'physicsField'; { available in macos 10.10 }
    procedure setConstraints(newValue: NSArray); message 'setConstraints:'; { available in macos 10.9 }
    function constraints: NSArray; message 'constraints'; { available in macos 10.9 }
    procedure setFilters(newValue: NSArray); message 'setFilters:'; { unavailable in watchos } { available in macos 10.9 }
    function filters: NSArray; message 'filters'; { unavailable in watchos } { available in macos 10.9 }
    function presentationNode: SCNNode; message 'presentationNode';
    procedure setPaused(newValue: objcbool); message 'setPaused:'; { available in macos 10.10 }
    function isPaused: objcbool; message 'isPaused'; { available in macos 10.10 }
    procedure setRendererDelegate(newValue: SCNNodeRendererDelegateProtocol); message 'setRendererDelegate:';
    function rendererDelegate: SCNNodeRendererDelegateProtocol; message 'rendererDelegate';
    function hitTestWithSegmentFromPoint_toPoint_options (pointA: SCNVector3; pointB: SCNVector3; options: NSDictionary): NSArray; message 'hitTestWithSegmentFromPoint:toPoint:options:'; { available in macos 10.9 }
    procedure setCategoryBitMask(newValue: NSUInteger); message 'setCategoryBitMask:'; { available in macos 10.10 }
    function categoryBitMask: NSUInteger; message 'categoryBitMask'; { available in macos 10.10 }
    procedure setFocusBehavior(newValue: SCNNodeFocusBehavior); message 'setFocusBehavior:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function focusBehavior: SCNNodeFocusBehavior; message 'focusBehavior'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }

    { Adopted protocols }
    function actionForKey (key: NSString): SCNAction; message 'actionForKey:'; { available in macos 10.10 }
    function actionKeys: NSArray; message 'actionKeys'; { available in macos 10.10 }
    procedure addAnimation_forKey (animation: SCNAnimationProtocol; key: NSString); message 'addAnimation:forKey:';
    procedure addAnimationPlayer_forKey (player: SCNAnimationPlayer; key: NSString); message 'addAnimationPlayer:forKey:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function animationForKey (key: NSString): CAAnimationPtr; message 'animationForKey:'; deprecated 'replace with -animationPlayerForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationPlayerForKey (key: NSString): SCNAnimationPlayer; message 'animationPlayerForKey:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function getBoundingBoxMin_max (min: SCNVector3Ptr; max: SCNVector3Ptr): objcbool; message 'getBoundingBoxMin:max:';
    function getBoundingSphereCenter_radius (center: SCNVector3Ptr; radius: CGFloatPtr): objcbool; message 'getBoundingSphereCenter:radius:';
    function hasActions: objcbool; message 'hasActions'; { available in macos 10.10 }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function isAnimationForKeyPaused (key: NSString): objcbool; message 'isAnimationForKeyPaused:'; deprecated 'Use -[SCNAnimationPlayer paused] instead';
    procedure pauseAnimationForKey (key: NSString); message 'pauseAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure removeActionForKey (key: NSString); message 'removeActionForKey:'; { available in macos 10.10 }
    procedure removeAllActions; message 'removeAllActions'; { available in macos 10.10 }
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    procedure removeAnimationForKey_blendOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:blendOutDuration:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure removeAnimationForKey_fadeOutDuration (key: NSString; duration: CGFloat); message 'removeAnimationForKey:fadeOutDuration:'; deprecated 'replace with -removeAnimationForKey:blendOutDuration:';
    procedure resumeAnimationForKey (key: NSString); message 'resumeAnimationForKey:'; deprecated 'Use -[SCNAnimationPlayer setPaused:] instead';
    procedure runAction (action: SCNAction); message 'runAction:'; { available in macos 10.10 }
    procedure runAction_completionHandler (action: SCNAction; block: SCNActionRunActionCallback); message 'runAction:completionHandler:'; { available in macos 10.10 }
    procedure runAction_forKey (action: SCNAction; key: NSString); message 'runAction:forKey:'; { available in macos 10.10 }
    procedure runAction_forKey_completionHandler (action: SCNAction; key: NSString; block: SCNActionRunActionCallback); message 'runAction:forKey:completionHandler:'; { available in macos 10.10 }
    procedure setBoundingBoxMin_max (min: SCNVector3Ptr; max: SCNVector3Ptr); message 'setBoundingBoxMin:max:'; { available in macos 10.9 }
    procedure setSpeed_forAnimationKey (speed: CGFloat; key: NSString); message 'setSpeed:forAnimationKey:'; deprecated 'Use -[SCNAnimationPlayer setSpeed:] instead';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  Transforms = objccategory external (SCNNode)
    class function localUp: SCNVector3; message 'localUp'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    class function localRight: SCNVector3; message 'localRight'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    class function localFront: SCNVector3; message 'localFront'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function worldUp: SCNVector3; message 'worldUp'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function worldRight: SCNVector3; message 'worldRight'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function worldFront: SCNVector3; message 'worldFront'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure lookAt (worldTarget: SCNVector3); message 'lookAt:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure lookAt_up_localFront (worldTarget: SCNVector3; worldUp_: SCNVector3; localFront_: SCNVector3); message 'lookAt:up:localFront:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure localTranslateBy (translation: SCNVector3); message 'localTranslateBy:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure localRotateBy (rotation_: SCNQuaternion); message 'localRotateBy:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure rotateBy_aroundTarget (worldRotation: SCNQuaternion; worldTarget: SCNVector3); message 'rotateBy:aroundTarget:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNNodeRendererDelegateProtocol = objcprotocol external name 'SCNNodeRendererDelegate' (NSObjectProtocol)
  optional
    procedure renderNode_renderer_arguments (node: SCNNode; renderer: SCNRenderer; arguments: NSDictionary); message 'renderNode:renderer:arguments:';
  end;
{$endif}

{$ifdef CLASSES}

type
  SIMD = objccategory external (SCNNode)
    procedure setSimdTransform(newValue: simd_float4x4); message 'setSimdTransform:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdTransform: simd_float4x4; message 'simdTransform'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSimdPosition(newValue: simd_float3); message 'setSimdPosition:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdPosition: simd_float3; message 'simdPosition'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSimdRotation(newValue: simd_float4); message 'setSimdRotation:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdRotation: simd_float4; message 'simdRotation'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSimdOrientation(newValue: simd_quatf); message 'setSimdOrientation:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdOrientation: simd_quatf; message 'simdOrientation'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSimdEulerAngles(newValue: simd_float3); message 'setSimdEulerAngles:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdEulerAngles: simd_float3; message 'simdEulerAngles'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSimdScale(newValue: simd_float3); message 'setSimdScale:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdScale: simd_float3; message 'simdScale'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSimdPivot(newValue: simd_float4x4); message 'setSimdPivot:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdPivot: simd_float4x4; message 'simdPivot'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSimdWorldPosition(newValue: simd_float3); message 'setSimdWorldPosition:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdWorldPosition: simd_float3; message 'simdWorldPosition'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSimdWorldOrientation(newValue: simd_quatf); message 'setSimdWorldOrientation:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdWorldOrientation: simd_quatf; message 'simdWorldOrientation'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure setSimdWorldTransform(newValue: simd_float4x4); message 'setSimdWorldTransform:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdWorldTransform: simd_float4x4; message 'simdWorldTransform'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdConvertPosition_toNode (position_: simd_float3; node_: SCNNode): simd_float3; message 'simdConvertPosition:toNode:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdConvertPosition_fromNode (position_: simd_float3; node_: SCNNode): simd_float3; message 'simdConvertPosition:fromNode:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdConvertVector_toNode (vector: simd_float3; node_: SCNNode): simd_float3; message 'simdConvertVector:toNode:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdConvertVector_fromNode (vector: simd_float3; node_: SCNNode): simd_float3; message 'simdConvertVector:fromNode:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdConvertTransform_toNode (transform_: simd_float4x4; node_: SCNNode): simd_float4x4; message 'simdConvertTransform:toNode:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdConvertTransform_fromNode (transform_: simd_float4x4; node_: SCNNode): simd_float4x4; message 'simdConvertTransform:fromNode:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    class function simdLocalUp: simd_float3; message 'simdLocalUp'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    class function simdLocalRight: simd_float3; message 'simdLocalRight'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    class function simdLocalFront: simd_float3; message 'simdLocalFront'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdWorldUp: simd_float3; message 'simdWorldUp'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdWorldRight: simd_float3; message 'simdWorldRight'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    function simdWorldFront: simd_float3; message 'simdWorldFront'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure simdLookAt (worldTarget: simd_float3); message 'simdLookAt:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure simdLookAt_up_localFront (worldTarget: simd_float3; worldUp: simd_float3; localFront: simd_float3); message 'simdLookAt:up:localFront:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure simdLocalTranslateBy (translation: simd_float3); message 'simdLocalTranslateBy:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure simdLocalRotateBy (rotation_: simd_quatf); message 'simdLocalRotateBy:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
    procedure simdRotateBy_aroundTarget (worldRotation: simd_quatf; worldTarget: simd_float3); message 'simdRotateBy:aroundTarget:'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
  end;
{$endif}

