{ Parsed from SceneKit.framework SCNPhysicsContact.h }

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
    function sweepTestFraction: CGFloat; message 'sweepTestFraction'; { available in macos 10.13, ios 11.0, tvos 11.0, watchos 4.0 }
  end;
{$endif}

