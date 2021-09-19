{ Parsed from AVFoundation.framework AVCaptureOutputBase.h }

{$ifdef TYPES}
type
  AVCaptureOutputPtr = ^AVCaptureOutput;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureOutput = objcclass external (NSObject)
  private
    _outputInternal: AVCaptureOutputInternal;
  public
    function connections: NSArray; message 'connections';
    function connectionWithMediaType (mediaType: AVMediaType): AVCaptureConnection; message 'connectionWithMediaType:'; { unavailable in tvos } { available in ios 5.0, macCatalyst 14.0 }
    function transformedMetadataObjectForMetadataObject_connection (metadataObject: AVMetadataObject; connection: AVCaptureConnection): AVMetadataObject; message 'transformedMetadataObjectForMetadataObject:connection:'; { unavailable in tvos } { available in macos 10.15, ios 6.0, macCatalyst 14.0 }
    function metadataOutputRectOfInterestForRect (rectInOutputCoordinates: CGRect): CGRect; message 'metadataOutputRectOfInterestForRect:'; { unavailable in tvos } { available in macos 10.15, ios 7.0, macCatalyst 14.0 }
    function rectForMetadataOutputRectOfInterest (rectInMetadataOutputCoordinates: CGRect): CGRect; message 'rectForMetadataOutputRectOfInterest:'; { unavailable in tvos } { available in macos 10.15, ios 7.0, macCatalyst 14.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  AVCaptureOutputDataDroppedReason = NSInteger;
  AVCaptureOutputDataDroppedReasonPtr = ^AVCaptureOutputDataDroppedReason;

const
  AVCaptureOutputDataDroppedReasonNone = 0;
  AVCaptureOutputDataDroppedReasonLateData = 1;
  AVCaptureOutputDataDroppedReasonOutOfBuffers = 2;
  AVCaptureOutputDataDroppedReasonDiscontinuity = 3;
{$endif}

{$else}
{$endif}
