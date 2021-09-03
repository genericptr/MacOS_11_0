{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCameraCalibrationData.h }

{$ifdef TYPES}
type
  AVCameraCalibrationDataPtr = ^AVCameraCalibrationData;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCameraCalibrationData = objcclass external (NSObject)
  private
    _internal: AVCameraCalibrationDataInternal;
  public
    function intrinsicMatrix: matrix_float3x3; message 'intrinsicMatrix';
    function intrinsicMatrixReferenceDimensions: CGSize; message 'intrinsicMatrixReferenceDimensions';
    function extrinsicMatrix: matrix_float4x3; message 'extrinsicMatrix';
    function pixelSize: single; message 'pixelSize';
    function lensDistortionLookupTable: NSData; message 'lensDistortionLookupTable';
    function inverseLensDistortionLookupTable: NSData; message 'inverseLensDistortionLookupTable';
    function lensDistortionCenter: CGPoint; message 'lensDistortionCenter';
  end;
{$endif}

{$else}
{$endif}
