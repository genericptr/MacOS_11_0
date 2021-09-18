{ Parsed from WebKit.framework WKProcessPool.h }

{$ifdef TYPES}
type
  WKProcessPoolPtr = ^WKProcessPool;
{$endif}

{$ifdef CLASSES}

type
  WKProcessPool = objcclass external (NSObject, NSSecureCodingProtocol)

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

