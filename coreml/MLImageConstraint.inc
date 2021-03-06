{ Parsed from CoreML.framework MLImageConstraint.h }

{$ifdef TYPES}
type
  MLImageConstraintPtr = ^MLImageConstraint;
{$endif}

{$ifdef CLASSES}

type
  MLImageConstraint = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function pixelsHigh: NSInteger; message 'pixelsHigh';
    function pixelsWide: NSInteger; message 'pixelsWide';
    function pixelFormatType: OSType; message 'pixelFormatType';
    function sizeConstraint: MLImageSizeConstraint; message 'sizeConstraint'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
    function init: id; message 'init'; { unavailable in "" }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

