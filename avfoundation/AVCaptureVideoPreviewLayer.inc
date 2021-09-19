{ Parsed from AVFoundation.framework AVCaptureVideoPreviewLayer.h }

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
    class function layerWithSessionWithNoConnection (session: AVCaptureSession): id; message 'layerWithSessionWithNoConnection:'; { unavailable in tvos } { available in ios 8.0, macCatalyst 14.0 }
    function initWithSessionWithNoConnection (session: AVCaptureSession): id; message 'initWithSessionWithNoConnection:'; { unavailable in tvos } { available in ios 8.0, macCatalyst 14.0 }
    procedure setSession(newValue: AVCaptureSession); message 'setSession:';
    function session: AVCaptureSession; message 'session';
    procedure setSessionWithNoConnection (session_: AVCaptureSession); message 'setSessionWithNoConnection:'; { unavailable in tvos } { available in ios 8.0, macCatalyst 14.0 }
    function connection: AVCaptureConnection; message 'connection'; { unavailable in tvos } { available in ios 6.0, macCatalyst 14.0 }
    procedure setVideoGravity(newValue: AVLayerVideoGravity); message 'setVideoGravity:';
    function videoGravity: AVLayerVideoGravity; message 'videoGravity';
    function isPreviewing: objcbool; message 'isPreviewing'; { unavailable in macos, tvos } { unavailable in watchos }
    function captureDevicePointOfInterestForPoint (pointInLayer: CGPoint): CGPoint; message 'captureDevicePointOfInterestForPoint:'; { unavailable in tvos } { available in macos 10.15, ios 6.0, macCatalyst 14.0 }
    function pointForCaptureDevicePointOfInterest (captureDevicePointOfInterest: CGPoint): CGPoint; message 'pointForCaptureDevicePointOfInterest:'; { unavailable in tvos } { available in macos 10.15, ios 6.0, macCatalyst 14.0 }
    function metadataOutputRectOfInterestForRect (rectInLayerCoordinates: CGRect): CGRect; message 'metadataOutputRectOfInterestForRect:'; { unavailable in tvos } { available in macos 10.15, ios 7.0, macCatalyst 14.0 }
    function rectForMetadataOutputRectOfInterest (rectInMetadataOutputCoordinates: CGRect): CGRect; message 'rectForMetadataOutputRectOfInterest:'; { unavailable in tvos } { available in macos 10.15, ios 7.0, macCatalyst 14.0 }
    function transformedMetadataObjectForMetadataObject (metadataObject: AVMetadataObject): AVMetadataObject; message 'transformedMetadataObjectForMetadataObject:'; { unavailable in tvos } { available in macos 10.15, ios 6.0, macCatalyst 14.0 }
    function isOrientationSupported: objcbool; message 'isOrientationSupported'; { unavailable in macos } { unavailable in tvos }
    procedure setOrientation(newValue: AVCaptureVideoOrientation); message 'setOrientation:'; { unavailable in macos } { unavailable in tvos }
    function orientation: AVCaptureVideoOrientation; message 'orientation'; { unavailable in macos } { unavailable in tvos }
    function isMirroringSupported: objcbool; message 'isMirroringSupported'; { unavailable in macos } { unavailable in tvos }
    procedure setAutomaticallyAdjustsMirroring(newValue: objcbool); message 'setAutomaticallyAdjustsMirroring:'; { unavailable in macos } { unavailable in tvos }
    function automaticallyAdjustsMirroring: objcbool; message 'automaticallyAdjustsMirroring'; { unavailable in macos } { unavailable in tvos }
    procedure setMirrored(newValue: objcbool); message 'setMirrored:'; { unavailable in macos } { unavailable in tvos }
    function isMirrored: objcbool; message 'isMirrored'; { unavailable in macos } { unavailable in tvos }
  end;
{$endif}

{$endif}

{$else}
{$endif}
