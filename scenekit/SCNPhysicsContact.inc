{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNPhysicsContact.h }

{$ifdef TYPES}
type
  SCNPhysicsContactPtr = ^SCNPhysicsContact;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsContact = objcclass external (NSObject)
  public
    function nodeA: SCNNode; message 'nodeA';
    function nodeB: SCNNode; message 'nodeB';
    function contactPoint: SCNVector3; message 'contactPoint';
    function contactNormal: SCNVector3; message 'contactNormal';
    function collisionImpulse: CGFloat; message 'collisionImpulse';
    function penetrationDistance: CGFloat; message 'penetrationDistance';
    function sweepTestFraction: CGFloat; message 'sweepTestFraction'; { available in macos , ios , tvos , watchos  }
  end;
{$endif}

