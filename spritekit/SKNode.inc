{ Parsed from SpriteKit.framework SKNode.h }

{ Types from SKNode }
{$ifdef TYPES}


{$endif}


{$ifdef CALLBACKS}
type
  SKNodeEnumerateChildNodesWithNameCallback = reference to procedure (node: SKNode; stop: objcboolPtr); cblock; cdecl;
  SKNodeRunActionCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKNodePtr = ^SKNode;
{$endif}

{$ifdef TYPES}
type
  SKBlendMode = NSInteger;
  SKBlendModePtr = ^SKBlendMode;

const
  SKBlendModeAlpha = 0;
  SKBlendModeAdd = 1;
  SKBlendModeSubtract = 2;
  SKBlendModeMultiply = 3;
  SKBlendModeMultiplyX2 = 4;
  SKBlendModeScreen = 5;
  SKBlendModeReplace = 6;
  SKBlendModeMultiplyAlpha = 7;

type
  SKNodeFocusBehavior = NSInteger;
  SKNodeFocusBehaviorPtr = ^SKNodeFocusBehavior;

const
  SKNodeFocusBehaviorNone = 0;
  SKNodeFocusBehaviorOccluding = 1;
  SKNodeFocusBehaviorFocusable = 2;
{$endif}

{$ifdef CLASSES}

type
  SKNode = objcclass external (NSResponder, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function node: id; message 'node';
    class function nodeWithFileNamed (filename: NSString): id; message 'nodeWithFileNamed:';
    class function nodeWithFileNamed_securelyWithClasses_andError (filename: NSString; classes: NSSet; error: NSErrorPtr): id; message 'nodeWithFileNamed:securelyWithClasses:andError:'; { available in macos , ios , tvos , watchos  }
    function frame: CGRect; message 'frame';
    function calculateAccumulatedFrame: CGRect; message 'calculateAccumulatedFrame';
    procedure setPosition(newValue: CGPoint); message 'setPosition:';
    function position: CGPoint; message 'position';
    procedure setZPosition(newValue: CGFloat); message 'setZPosition:';
    function zPosition: CGFloat; message 'zPosition';
    procedure setZRotation(newValue: CGFloat); message 'setZRotation:';
    function zRotation: CGFloat; message 'zRotation';
    procedure setXScale(newValue: CGFloat); message 'setXScale:';
    function xScale: CGFloat; message 'xScale';
    procedure setYScale(newValue: CGFloat); message 'setYScale:';
    function yScale: CGFloat; message 'yScale';
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    procedure setAlpha(newValue: CGFloat); message 'setAlpha:';
    function alpha: CGFloat; message 'alpha';
    procedure setPaused(newValue: objcbool); message 'setPaused:';
    function isPaused: objcbool; message 'isPaused';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function isHidden: objcbool; message 'isHidden';
    procedure setUserInteractionEnabled(newValue: objcbool); message 'setUserInteractionEnabled:';
    function isUserInteractionEnabled: objcbool; message 'isUserInteractionEnabled';
    procedure setFocusBehavior(newValue: SKNodeFocusBehavior); message 'setFocusBehavior:'; { unavailable in macos, watchos }
    function focusBehavior: SKNodeFocusBehavior; message 'focusBehavior'; { unavailable in macos, watchos }
    function parent: SKNode; message 'parent';
    function children: NSArray; message 'children';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    function scene: SKScene; message 'scene';
    procedure setPhysicsBody(newValue: SKPhysicsBody); message 'setPhysicsBody:';
    function physicsBody: SKPhysicsBody; message 'physicsBody';
    procedure setUserData(newValue: NSMutableDictionary); message 'setUserData:';
    function userData: NSMutableDictionary; message 'userData';
    procedure setReachConstraints(newValue: SKReachConstraints); message 'setReachConstraints:';
    function reachConstraints: SKReachConstraints; message 'reachConstraints';
    procedure setConstraints(newValue: NSArray); message 'setConstraints:';
    function constraints: NSArray; message 'constraints';
    procedure setAttributeValues(newValue: NSDictionary); message 'setAttributeValues:'; deprecated 'in 10_12, 10_12, 10_0, 10_0';
    function attributeValues: NSDictionary; message 'attributeValues'; deprecated 'in 10_12, 10_12, 10_0, 10_0';
    function valueForAttributeNamed (key: NSString): SKAttributeValue; message 'valueForAttributeNamed:'; deprecated 'in 10_12, 10_12, 10_0, 10_0';
    procedure setValue_forAttributeNamed (value: SKAttributeValue; key: NSString); message 'setValue:forAttributeNamed:';
    procedure setScale (scale: CGFloat); message 'setScale:';
    procedure addChild (node_: SKNode); message 'addChild:';
    procedure insertChild_atIndex (node_: SKNode; index: NSInteger); message 'insertChild:atIndex:';
    procedure removeChildrenInArray (nodes: NSArray); message 'removeChildrenInArray:';
    procedure removeAllChildren; message 'removeAllChildren';
    procedure removeFromParent; message 'removeFromParent';
    procedure moveToParent (parent_: SKNode); message 'moveToParent:'; { available in ios , tvos , watchos , macos  }
    function childNodeWithName (name_: NSString): SKNode; message 'childNodeWithName:';
    procedure enumerateChildNodesWithName_usingBlock (name_: NSString; block: SKNodeEnumerateChildNodesWithNameCallback); message 'enumerateChildNodesWithName:usingBlock:';
    function objectForKeyedSubscript (name_: NSString): NSArray; message 'objectForKeyedSubscript:'; { available in ios , tvos , watchos , macos  }
    function inParentHierarchy (parent_: SKNode): objcbool; message 'inParentHierarchy:';
    procedure runAction (action: SKAction); message 'runAction:';
    procedure runAction_completion (action: SKAction; block: SKNodeRunActionCallback); message 'runAction:completion:';
    procedure runAction_withKey (action: SKAction; key: NSString); message 'runAction:withKey:';
    function hasActions: objcbool; message 'hasActions';
    function actionForKey (key: NSString): SKAction; message 'actionForKey:';
    procedure removeActionForKey (key: NSString); message 'removeActionForKey:';
    procedure removeAllActions; message 'removeAllActions';
    function containsPoint (p: CGPoint): objcbool; message 'containsPoint:';
    function nodeAtPoint (p: CGPoint): SKNode; message 'nodeAtPoint:';
    function nodesAtPoint (p: CGPoint): NSArray; message 'nodesAtPoint:';
    function convertPoint_fromNode (point: CGPoint; node_: SKNode): CGPoint; message 'convertPoint:fromNode:';
    function convertPoint_toNode (point: CGPoint; node_: SKNode): CGPoint; message 'convertPoint:toNode:';
    function intersectsNode (node_: SKNode): objcbool; message 'intersectsNode:';
    function isEqualToNode (node_: SKNode): objcbool; message 'isEqualToNode:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$if defined(TARGET_OS_IPHONE)}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  SKNodeTouches = objccategory external (UITouch)
    function locationInNode (node: SKNode): CGPoint; message 'locationInNode:';
    function previousLocationInNode (node: SKNode): CGPoint; message 'previousLocationInNode:';
  end;
{$endif}

{$endif}

{$else}
{$ifdef CLASSES}

type
  SKNodeEvent = objccategory external (NSEvent)
    function locationInNode (node: SKNode): CGPoint; message 'locationInNode:';
  end;
{$endif}

{$endif}
