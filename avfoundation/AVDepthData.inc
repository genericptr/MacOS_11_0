{ Parsed from AVFoundation.framework AVDepthData.h }

{$ifdef TYPES}
type
  AVDepthDataPtr = ^AVDepthData;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVDepthDataQuality = NSInteger;
  AVDepthDataQualityPtr = ^AVDepthDataQuality;

const
  AVDepthDataQualityLow = 0;
  AVDepthDataQualityHigh = 1;

type
  AVDepthDataAccuracy = NSInteger;
  AVDepthDataAccuracyPtr = ^AVDepthDataAccuracy;

const
  AVDepthDataAccuracyRelative = 0;
  AVDepthDataAccuracyAbsolute = 1;
{$endif}

{$ifdef CLASSES}

type
  AVDepthData = objcclass external (NSObject)
  private
    _internal: AVDepthDataInternal;
  public
    class function depthDataFromDictionaryRepresentation_error (imageSourceAuxDataInfoDictionary: NSDictionary; outError: NSErrorPtr): id; message 'depthDataFromDictionaryRepresentation:error:';
    function depthDataByConvertingToDepthDataType (depthDataType: OSType): id; message 'depthDataByConvertingToDepthDataType:';
    function depthDataByApplyingExifOrientation (exifOrientation: CGImagePropertyOrientation): id; message 'depthDataByApplyingExifOrientation:';
    function depthDataByReplacingDepthDataMapWithPixelBuffer_error (pixelBuffer: CVPixelBufferRef; outError: NSErrorPtr): id; message 'depthDataByReplacingDepthDataMapWithPixelBuffer:error:';
    function availableDepthDataTypes: NSArray; message 'availableDepthDataTypes';
    function dictionaryRepresentationForAuxiliaryDataType (outAuxDataType: NSStringPtr): NSDictionary; message 'dictionaryRepresentationForAuxiliaryDataType:';
    function depthDataType: OSType; message 'depthDataType';
    function depthDataMap: CVPixelBufferRef; message 'depthDataMap';
    function depthDataQuality: AVDepthDataQuality; message 'depthDataQuality';
    function isDepthDataFiltered: objcbool; message 'isDepthDataFiltered';
    function depthDataAccuracy: AVDepthDataAccuracy; message 'depthDataAccuracy';
    function cameraCalibrationData: AVCameraCalibrationData; message 'cameraCalibrationData';
  end;
{$endif}

{$else}
{$endif}
