{ Parsed from CoreML.framework MLSequenceConstraint.h }

{$ifdef TYPES}
type
  MLSequenceConstraintPtr = ^MLSequenceConstraint;
{$endif}

{$ifdef CLASSES}

type
  MLSequenceConstraint = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function valueDescription: MLFeatureDescription; message 'valueDescription';
    function countRange: NSRange; message 'countRange';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

