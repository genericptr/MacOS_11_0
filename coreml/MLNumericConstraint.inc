{ Parsed from CoreML.framework MLNumericConstraint.h }

{$ifdef TYPES}
type
  MLNumericConstraintPtr = ^MLNumericConstraint;
{$endif}

{$ifdef CLASSES}

type
  MLNumericConstraint = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function minNumber: NSNumber; message 'minNumber';
    function maxNumber: NSNumber; message 'maxNumber';
    function enumeratedNumbers: NSSet; message 'enumeratedNumbers';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

