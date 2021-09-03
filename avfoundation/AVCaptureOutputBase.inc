{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureOutputBase.h }

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
    function connectionWithMediaType (mediaType: AVMediaType): AVCaptureConnection; message 'connectionWithMediaType:'; { unavailable in tvos }
    function transformedMetadataObjectForMetadataObject_connection (metadataObject: AVMetadataObject; connection: AVCaptureConnection): AVMetadataObject; message 'transformedMetadataObjectForMetadataObject:connection:'; { unavailable in tvos }
    function metadataOutputRectOfInterestForRect (rectInOutputCoordinates: CGRect): CGRect; message 'metadataOutputRectOfInterestForRect:'; { unavailable in tvos }
    function rectForMetadataOutputRectOfInterest (rectInMetadataOutputCoordinates: CGRect): CGRect; message 'rectForMetadataOutputRectOfInterest:'; { unavailable in tvos }
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
