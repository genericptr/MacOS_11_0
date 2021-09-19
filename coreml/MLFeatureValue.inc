{ Parsed from CoreML.framework MLFeatureValue.h }

{$ifdef TYPES}
type
  MLFeatureValuePtr = ^MLFeatureValue;
{$endif}

{$ifdef CLASSES}

type
  MLFeatureValue = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function type_: MLFeatureType; message 'type';
    function isUndefined: objcbool; message 'isUndefined';
    function int64Value: cint64; message 'int64Value';
    function doubleValue: double; message 'doubleValue';
    function stringValue: NSString; message 'stringValue';
    function multiArrayValue: MLMultiArray; message 'multiArrayValue';
    function dictionaryValue: NSDictionary; message 'dictionaryValue';
    function imageBufferValue: CVPixelBufferRef; message 'imageBufferValue';
    function sequenceValue: MLSequence; message 'sequenceValue'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
    class function featureValueWithInt64 (value: cint64): id; message 'featureValueWithInt64:';
    class function featureValueWithDouble (value: double): id; message 'featureValueWithDouble:';
    class function featureValueWithString (value: NSString): id; message 'featureValueWithString:';
    class function featureValueWithMultiArray (value: MLMultiArray): id; message 'featureValueWithMultiArray:';
    class function featureValueWithPixelBuffer (value: CVPixelBufferRef): id; message 'featureValueWithPixelBuffer:';
    class function featureValueWithSequence (sequence: MLSequence): id; message 'featureValueWithSequence:'; { available in macos 10.14, ios 12.0, watchos 5.0, tvos 12.0 }
    class function undefinedFeatureValueWithType (type_: MLFeatureType): id; message 'undefinedFeatureValueWithType:';
    class function featureValueWithDictionary_error (value: NSDictionary; error: NSErrorPtr): id; message 'featureValueWithDictionary:error:';
    function isEqualToFeatureValue (value: MLFeatureValue): objcbool; message 'isEqualToFeatureValue:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

