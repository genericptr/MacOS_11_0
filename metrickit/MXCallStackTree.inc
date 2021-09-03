{ Parsed from MetricKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/MetricKit.framework/Headers/MXCallStackTree.h }

{$ifdef TYPES}
type
  MXCallStackTreePtr = ^MXCallStackTree;
{$endif}

{$ifdef CLASSES}

type
  MXCallStackTree = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function JSONRepresentation: NSData; message 'JSONRepresentation';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

