{ Parsed from SpriteKit.framework SKPhysicsWorld.h }

{$ifdef CALLBACKS}
type
  SKPhysicsWorldEnumerateBodiesAtPointCallback = reference to procedure (body: SKPhysicsBody; stop: objcboolPtr); cblock; cdecl;
  SKPhysicsWorldEnumerateBodiesInRectCallback = reference to procedure (body: SKPhysicsBody; stop: objcboolPtr); cblock; cdecl;
  SKPhysicsWorldEnumerateBodiesAlongRayStartCallback = reference to procedure (body: SKPhysicsBody; point: CGPoint; normal: CGVector; stop: objcboolPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKPhysicsWorldPtr = ^SKPhysicsWorld;
  SKPhysicsContactDelegateProtocolPtr = ^SKPhysicsContactDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SKPhysicsContactDelegateProtocol = objcprotocol external name 'SKPhysicsContactDelegate' (NSObjectProtocol)
  optional
    procedure didBeginContact (contact: SKPhysicsContact); message 'didBeginContact:';
    procedure didEndContact (contact: SKPhysicsContact); message 'didEndContact:';
  end;
{$endif}

{$ifdef CLASSES}

type
  SKPhysicsWorld = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setGravity(newValue: CGVector); message 'setGravity:';
    function gravity: CGVector; message 'gravity';
    procedure setSpeed(newValue: CGFloat); message 'setSpeed:';
    function speed: CGFloat; message 'speed';
    procedure setContactDelegate(newValue: SKPhysicsContactDelegateProtocol); message 'setContactDelegate:';
    function contactDelegate: SKPhysicsContactDelegateProtocol; message 'contactDelegate';
    procedure addJoint (joint: SKPhysicsJoint); message 'addJoint:';
    procedure removeJoint (joint: SKPhysicsJoint); message 'removeJoint:';
    procedure removeAllJoints; message 'removeAllJoints';
    function sampleFieldsAt (position: vector_float3): vector_float3; message 'sampleFieldsAt:'; { available in ios 8.0, tvos 9.0, watchos 1.0, macos 10.10 }
    function bodyAtPoint (point: CGPoint): SKPhysicsBody; message 'bodyAtPoint:';
    function bodyInRect (rect: CGRect): SKPhysicsBody; message 'bodyInRect:';
    function bodyAlongRayStart_end (start: CGPoint; end_: CGPoint): SKPhysicsBody; message 'bodyAlongRayStart:end:';
    procedure enumerateBodiesAtPoint_usingBlock (point: CGPoint; block: SKPhysicsWorldEnumerateBodiesAtPointCallback); message 'enumerateBodiesAtPoint:usingBlock:';
    procedure enumerateBodiesInRect_usingBlock (rect: CGRect; block: SKPhysicsWorldEnumerateBodiesInRectCallback); message 'enumerateBodiesInRect:usingBlock:';
    procedure enumerateBodiesAlongRayStart_end_usingBlock (start: CGPoint; end_: CGPoint; block: SKPhysicsWorldEnumerateBodiesAlongRayStartCallback); message 'enumerateBodiesAlongRayStart:end:usingBlock:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

