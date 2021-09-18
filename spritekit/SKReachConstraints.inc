{ Parsed from SpriteKit.framework SKReachConstraints.h }

{$ifdef TYPES}
type
  SKReachConstraintsPtr = ^SKReachConstraints;
{$endif}

{$ifdef CLASSES}

type
  SKReachConstraints = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    procedure setLowerAngleLimit(newValue: CGFloat); message 'setLowerAngleLimit:';
    function lowerAngleLimit: CGFloat; message 'lowerAngleLimit';
    procedure setUpperAngleLimit(newValue: CGFloat); message 'setUpperAngleLimit:';
    function upperAngleLimit: CGFloat; message 'upperAngleLimit';
    function initWithLowerAngleLimit_upperAngleLimit (lowerAngleLimit_: CGFloat; upperAngleLimit_: CGFloat): id; message 'initWithLowerAngleLimit:upperAngleLimit:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

