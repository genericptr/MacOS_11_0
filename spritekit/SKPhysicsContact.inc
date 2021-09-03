{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKPhysicsContact.h }

{$ifdef TYPES}
type
  SKPhysicsContactPtr = ^SKPhysicsContact;
{$endif}

{$ifdef CLASSES}

type
  SKPhysicsContact = objcclass external (NSObject)
  public
    function bodyA: SKPhysicsBody; message 'bodyA';
    function bodyB: SKPhysicsBody; message 'bodyB';
    function contactPoint: CGPoint; message 'contactPoint';
    function contactNormal: CGVector; message 'contactNormal';
    function collisionImpulse: CGFloat; message 'collisionImpulse';
  end;
{$endif}

