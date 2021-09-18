{ Parsed from CoreML.framework MLImageSize.h }

{$ifdef TYPES}
type
  MLImageSizePtr = ^MLImageSize;
{$endif}

{$ifdef CLASSES}

type
  MLImageSize = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function pixelsWide: NSInteger; message 'pixelsWide';
    function pixelsHigh: NSInteger; message 'pixelsHigh';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

