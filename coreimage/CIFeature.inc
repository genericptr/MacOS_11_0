{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIFeature.h }

{$ifdef TYPES}
type
  CIFeaturePtr = ^CIFeature;
  CIFaceFeaturePtr = ^CIFaceFeature;
  CIRectangleFeaturePtr = ^CIRectangleFeature;
  CIQRCodeFeaturePtr = ^CIQRCodeFeature;
{$endif}

{$ifdef CLASSES}

type
  CIFeature = objcclass external (NSObject)
  private
  public
    function type_: NSString; message 'type';
    function bounds: CGRect; message 'bounds';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  CIFeatureTypeFace: NSString; cvar; external;
  CIFeatureTypeRectangle: NSString; cvar; external;
  CIFeatureTypeQRCode: NSString; cvar; external;
  CIFeatureTypeText: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CIFaceFeature = objcclass external (CIFeature)
  private
    bounds_: CGRect;
    hasLeftEyePosition: objcbool;
    leftEyePosition: CGPoint;
    hasRightEyePosition: objcbool;
    rightEyePosition: CGPoint;
    hasMouthPosition: objcbool;
    mouthPosition: CGPoint;
    hasTrackingID: objcbool;
    trackingID: cint;
    hasTrackingFrameCount: objcbool;
    trackingFrameCount: cint;
    hasFaceAngle: objcbool;
    faceAngle: single;
    hasSmile: objcbool;
    leftEyeClosed: objcbool;
    rightEyeClosed: objcbool;
  public
    function bounds: CGRect; message 'bounds';
    function hasLeftEyePosition_: objcbool; message 'hasLeftEyePosition';
    function leftEyePosition_: CGPoint; message 'leftEyePosition';
    function hasRightEyePosition_: objcbool; message 'hasRightEyePosition';
    function rightEyePosition_: CGPoint; message 'rightEyePosition';
    function hasMouthPosition_: objcbool; message 'hasMouthPosition';
    function mouthPosition_: CGPoint; message 'mouthPosition';
    function hasTrackingID_: objcbool; message 'hasTrackingID';
    function trackingID_: cint; message 'trackingID';
    function hasTrackingFrameCount_: objcbool; message 'hasTrackingFrameCount';
    function trackingFrameCount_: cint; message 'trackingFrameCount';
    function hasFaceAngle_: objcbool; message 'hasFaceAngle';
    function faceAngle_: single; message 'faceAngle';
    function hasSmile_: objcbool; message 'hasSmile';
    function leftEyeClosed_: objcbool; message 'leftEyeClosed';
    function rightEyeClosed_: objcbool; message 'rightEyeClosed';
  end;

type
  CIRectangleFeature = objcclass external (CIFeature)
  private
    bounds_: CGRect;
    topLeft: CGPoint;
    topRight: CGPoint;
    bottomLeft: CGPoint;
    bottomRight: CGPoint;
  public
    function bounds: CGRect; message 'bounds';
    function topLeft_: CGPoint; message 'topLeft';
    function topRight_: CGPoint; message 'topRight';
    function bottomLeft_: CGPoint; message 'bottomLeft';
    function bottomRight_: CGPoint; message 'bottomRight';
  end;

type
  CIQRCodeFeature = objcclass external (CIFeature, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    bounds_: CGRect;
    topLeft: CGPoint;
    topRight: CGPoint;
    bottomLeft: CGPoint;
    bottomRight: CGPoint;
    symbolDescriptor: CIQRCodeDescriptor;
  public
    function bounds: CGRect; message 'bounds';
    function topLeft_: CGPoint; message 'topLeft';
    function topRight_: CGPoint; message 'topRight';
    function bottomLeft_: CGPoint; message 'bottomLeft';
    function bottomRight_: CGPoint; message 'bottomRight';
    function messageString: NSString; message 'messageString';
    function symbolDescriptor_: CIQRCodeDescriptor; message 'symbolDescriptor'; { available in 10_13, 11_0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

