{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVMetadataObject.h }

{$ifdef TYPES}
type
  AVMetadataObjectPtr = ^AVMetadataObject;
  AVMetadataBodyObjectPtr = ^AVMetadataBodyObject;
  AVMetadataHumanBodyObjectPtr = ^AVMetadataHumanBodyObject;
  AVMetadataCatBodyObjectPtr = ^AVMetadataCatBodyObject;
  AVMetadataDogBodyObjectPtr = ^AVMetadataDogBodyObject;
  AVMetadataSalientObjectPtr = ^AVMetadataSalientObject;
  AVMetadataFaceObjectPtr = ^AVMetadataFaceObject;
  AVMetadataMachineReadableCodeObjectPtr = ^AVMetadataMachineReadableCodeObject;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVMetadataObjectType = NSString { unavailable in watchos };
  AVMetadataObjectTypePtr = ^AVMetadataObjectType { unavailable in watchos };
{$endif}

{$ifdef CLASSES}

type
  AVMetadataObject = objcclass external (NSObject)
  private
    _objectInternal: AVMetadataObjectInternal;
  public
    function time: CMTime; message 'time';
    function duration: CMTime; message 'duration';
    function bounds: CGRect; message 'bounds';
    function type_: AVMetadataObjectType; message 'type';
  end;

type
  AVMetadataBodyObject = objcclass external (AVMetadataObject, NSCopyingProtocol)
  public
    function bodyID: NSInteger; message 'bodyID';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMetadataObjectTypeHumanBody: AVMetadataObjectType { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataHumanBodyObject = objcclass external (AVMetadataBodyObject, NSCopyingProtocol)
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMetadataObjectTypeCatBody: AVMetadataObjectType { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataCatBodyObject = objcclass external (AVMetadataBodyObject, NSCopyingProtocol)
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMetadataObjectTypeDogBody: AVMetadataObjectType { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataDogBodyObject = objcclass external (AVMetadataBodyObject, NSCopyingProtocol)
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMetadataObjectTypeSalientObject: AVMetadataObjectType { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataSalientObject = objcclass external (AVMetadataObject, NSCopyingProtocol)
  public
    function objectID: NSInteger; message 'objectID';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMetadataObjectTypeFace: AVMetadataObjectType { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataFaceObject = objcclass external (AVMetadataObject, NSCopyingProtocol)
  private
    _internal: AVMetadataFaceObjectInternal;
  public
    function faceID: NSInteger; message 'faceID';
    function hasRollAngle: objcbool; message 'hasRollAngle';
    function rollAngle: CGFloat; message 'rollAngle';
    function hasYawAngle: objcbool; message 'hasYawAngle';
    function yawAngle: CGFloat; message 'yawAngle';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVMetadataObjectTypeUPCECode: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeCode39Code: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeCode39Mod43Code: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeEAN13Code: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeEAN8Code: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeCode93Code: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeCode128Code: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypePDF417Code: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeQRCode: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeAztecCode: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeInterleaved2of5Code: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeITF14Code: AVMetadataObjectType { unavailable in watchos }; cvar; external;
  AVMetadataObjectTypeDataMatrixCode: AVMetadataObjectType { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVMetadataMachineReadableCodeObject = objcclass external (AVMetadataObject)
  private
    _internal: AVMetadataMachineReadableCodeObjectInternal;
  public
    function corners: NSArray; message 'corners';
    function stringValue: NSString; message 'stringValue';
  end;


type
  AVMetadataMachineReadableCodeDescriptor = objccategory external (AVMetadataMachineReadableCodeObject)
    function descriptor: CIBarcodeDescriptor; message 'descriptor'; { unavailable in watchos }
  end;
{$endif}

{$else}
{$endif}
