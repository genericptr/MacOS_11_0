{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLSequence.h }

{$ifdef TYPES}
type
  MLSequencePtr = ^MLSequence;
{$endif}

{$ifdef CLASSES}

type
  MLSequence = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function type_: MLFeatureType; message 'type';
    class function emptySequenceWithType (type_: MLFeatureType): id; message 'emptySequenceWithType:';
    class function sequenceWithStringArray (stringValues: NSArray): id; message 'sequenceWithStringArray:';
    function stringValues: NSArray; message 'stringValues';
    class function sequenceWithInt64Array (int64Values: NSArray): id; message 'sequenceWithInt64Array:';
    function int64Values: NSArray; message 'int64Values';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

