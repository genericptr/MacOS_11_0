{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVCaptureVideoPreviewLayer.h }

{$ifdef TYPES}
type
  AVCaptureVideoPreviewLayerPtr = ^AVCaptureVideoPreviewLayer;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureVideoPreviewLayer = objcclass external (CALayer)
  private
    _internal: AVCaptureVideoPreviewLayerInternal;
  public
    class function layerWithSession (session: AVCaptureSession): id; message 'layerWithSession:';
    function initWithSession (session: AVCaptureSession): id; message 'initWithSession:';
    class function layerWithSessionWithNoConnection (session: AVCaptureSession): id; message 'layerWithSessionWithNoConnection:'; { unavailable in tvos }
    function initWithSessionWithNoConnection (session: AVCaptureSession): id; message 'initWithSessionWithNoConnection:'; { unavailable in tvos }
    procedure setSession(newValue: AVCaptureSession); message 'setSession:';
    function session: AVCaptureSession; message 'session';
    procedure setSessionWithNoConnection (session_: AVCaptureSession); message 'setSessionWithNoConnection:'; { unavailable in tvos }
    function connection: AVCaptureConnection; message 'connection'; { unavailable in tvos }
    procedure setVideoGravity(newValue: AVLayerVideoGravity); message 'setVideoGravity:';
    function videoGravity: AVLayerVideoGravity; message 'videoGravity';
    function isPreviewing: objcbool; message 'isPreviewing'; { unavailable in macos, tvos }
    function captureDevicePointOfInterestForPoint (pointInLayer: CGPoint): CGPoint; message 'captureDevicePointOfInterestForPoint:'; { unavailable in tvos }
    function pointForCaptureDevicePointOfInterest (captureDevicePointOfInterest: CGPoint): CGPoint; message 'pointForCaptureDevicePointOfInterest:'; { unavailable in tvos }
    function metadataOutputRectOfInterestForRect (rectInLayerCoordinates: CGRect): CGRect; message 'metadataOutputRectOfInterestForRect:'; { unavailable in tvos }
    function rectForMetadataOutputRectOfInterest (rectInMetadataOutputCoordinates: CGRect): CGRect; message 'rectForMetadataOutputRectOfInterest:'; { unavailable in tvos }
    function transformedMetadataObjectForMetadataObject (metadataObject: AVMetadataObject): AVMetadataObject; message 'transformedMetadataObjectForMetadataObject:'; { unavailable in tvos }
    function isOrientationSupported: objcbool; message 'isOrientationSupported'; { unavailable in macos }
    procedure setOrientation(newValue: AVCaptureVideoOrientation); message 'setOrientation:'; { unavailable in macos }
    function orientation: AVCaptureVideoOrientation; message 'orientation'; { unavailable in macos }
    function isMirroringSupported: objcbool; message 'isMirroringSupported'; { unavailable in macos }
    procedure setAutomaticallyAdjustsMirroring(newValue: objcbool); message 'setAutomaticallyAdjustsMirroring:'; { unavailable in macos }
    function automaticallyAdjustsMirroring: objcbool; message 'automaticallyAdjustsMirroring'; { unavailable in macos }
    procedure setMirrored(newValue: objcbool); message 'setMirrored:'; { unavailable in macos }
    function isMirrored: objcbool; message 'isMirrored'; { unavailable in macos }
  end;
{$endif}

{$endif}

{$else}
{$endif}
