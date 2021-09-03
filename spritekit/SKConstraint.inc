{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKConstraint.h }

{$ifdef TYPES}
type
  SKRangePtr = ^SKRange;
  SKConstraintPtr = ^SKConstraint;
{$endif}

{$ifdef CLASSES}

type
  SKRange = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithLowerLimit_upperLimit (lower: CGFloat; upper: CGFloat): id; message 'initWithLowerLimit:upperLimit:'; { NS_DESIGNATED_INITIALIZER }
    class function rangeWithLowerLimit_upperLimit (lower: CGFloat; upper: CGFloat): id; message 'rangeWithLowerLimit:upperLimit:';
    class function rangeWithLowerLimit (lower: CGFloat): id; message 'rangeWithLowerLimit:';
    class function rangeWithUpperLimit (upper: CGFloat): id; message 'rangeWithUpperLimit:';
    class function rangeWithConstantValue (value: CGFloat): id; message 'rangeWithConstantValue:';
    class function rangeWithValue_variance (value: CGFloat; variance: CGFloat): id; message 'rangeWithValue:variance:';
    class function rangeWithNoLimits: id; message 'rangeWithNoLimits';
    procedure setLowerLimit(newValue: CGFloat); message 'setLowerLimit:';
    function lowerLimit: CGFloat; message 'lowerLimit';
    procedure setUpperLimit(newValue: CGFloat); message 'setUpperLimit:';
    function upperLimit: CGFloat; message 'upperLimit';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SKConstraint = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function enabled: objcbool; message 'enabled';
    procedure setReferenceNode(newValue: SKNode); message 'setReferenceNode:';
    function referenceNode: SKNode; message 'referenceNode';
    class function positionX (range: SKRange): id; message 'positionX:';
    class function positionY (range: SKRange): id; message 'positionY:';
    class function positionX_Y (xRange: SKRange; yRange: SKRange): id; message 'positionX:Y:';
    class function distance_toNode (range: SKRange; node: SKNode): id; message 'distance:toNode:';
    class function distance_toPoint (range: SKRange; point: CGPoint): id; message 'distance:toPoint:';
    class function distance_toPoint_inNode (range: SKRange; point: CGPoint; node: SKNode): id; message 'distance:toPoint:inNode:';
    class function zRotation (zRange: SKRange): id; message 'zRotation:';
    class function orientToNode_offset (node: SKNode; radians: SKRange): id; message 'orientToNode:offset:';
    class function orientToPoint_offset (point: CGPoint; radians: SKRange): id; message 'orientToPoint:offset:';
    class function orientToPoint_inNode_offset (point: CGPoint; node: SKNode; radians: SKRange): id; message 'orientToPoint:inNode:offset:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

