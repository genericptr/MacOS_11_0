{ Parsed from AVFoundation.framework AVCaptureSession.h }

{$ifdef TYPES}
type
  AVCaptureSessionPtr = ^AVCaptureSession;
  AVCaptureMultiCamSessionPtr = ^AVCaptureMultiCamSession;
  AVCaptureConnectionPtr = ^AVCaptureConnection;
  AVCaptureAudioChannelPtr = ^AVCaptureAudioChannel;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureSessionRuntimeErrorNotification: NSString { unavailable in tvos }; cvar; external;
  AVCaptureSessionErrorKey: NSString { unavailable in tvos }; cvar; external;
  AVCaptureSessionDidStartRunningNotification: NSString { unavailable in tvos }; cvar; external;
  AVCaptureSessionDidStopRunningNotification: NSString { unavailable in tvos }; cvar; external;
  AVCaptureSessionWasInterruptedNotification: NSString { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVCaptureSessionInterruptionReason = NSInteger;
  AVCaptureSessionInterruptionReasonPtr = ^AVCaptureSessionInterruptionReason;

const
  AVCaptureSessionInterruptionReasonVideoDeviceNotAvailableInBackground = 1;
  AVCaptureSessionInterruptionReasonAudioDeviceInUseByAnotherClient = 2;
  AVCaptureSessionInterruptionReasonVideoDeviceInUseByAnotherClient = 3;
  AVCaptureSessionInterruptionReasonVideoDeviceNotAvailableWithMultipleForegroundApps = 4;
  AVCaptureSessionInterruptionReasonVideoDeviceNotAvailableDueToSystemPressure = 5 { available in ios , macCatalyst  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureSessionInterruptionReasonKey: NSString { unavailable in macos, tvos }; cvar; external;
  AVCaptureSessionInterruptionSystemPressureStateKey: NSString { unavailable in macos, tvos }; cvar; external;
  AVCaptureSessionInterruptionEndedNotification: NSString { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  AVCaptureVideoOrientation = NSInteger;
  AVCaptureVideoOrientationPtr = ^AVCaptureVideoOrientation;

const
  AVCaptureVideoOrientationPortrait = 1;
  AVCaptureVideoOrientationPortraitUpsideDown = 2;
  AVCaptureVideoOrientationLandscapeRight = 3;
  AVCaptureVideoOrientationLandscapeLeft = 4;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureSession = objcclass external (NSObject)
  private
    _internal: AVCaptureSessionInternal;
  public
    function canSetSessionPreset (preset: AVCaptureSessionPreset): objcbool; message 'canSetSessionPreset:';
    procedure setSessionPreset(newValue: AVCaptureSessionPreset); message 'setSessionPreset:';
    function sessionPreset: AVCaptureSessionPreset; message 'sessionPreset';
    function inputs: NSArray; message 'inputs';
    function canAddInput (input: AVCaptureInput): objcbool; message 'canAddInput:';
    procedure addInput (input: AVCaptureInput); message 'addInput:';
    procedure removeInput (input: AVCaptureInput); message 'removeInput:';
    function outputs: NSArray; message 'outputs';
    function canAddOutput (output: AVCaptureOutput): objcbool; message 'canAddOutput:';
    procedure addOutput (output: AVCaptureOutput); message 'addOutput:';
    procedure removeOutput (output: AVCaptureOutput); message 'removeOutput:';
    procedure addInputWithNoConnections (input: AVCaptureInput); message 'addInputWithNoConnections:'; { unavailable in tvos }
    procedure addOutputWithNoConnections (output: AVCaptureOutput); message 'addOutputWithNoConnections:'; { unavailable in tvos }
    function connections: NSArray; message 'connections'; { unavailable in tvos }
    function canAddConnection (connection: AVCaptureConnection): objcbool; message 'canAddConnection:'; { unavailable in tvos }
    procedure addConnection (connection: AVCaptureConnection); message 'addConnection:'; { unavailable in tvos }
    procedure removeConnection (connection: AVCaptureConnection); message 'removeConnection:'; { unavailable in tvos }
    procedure beginConfiguration; message 'beginConfiguration';
    procedure commitConfiguration; message 'commitConfiguration';
    function isRunning: objcbool; message 'isRunning';
    function isInterrupted: objcbool; message 'isInterrupted'; { unavailable in macos, tvos }
    procedure setUsesApplicationAudioSession(newValue: objcbool); message 'setUsesApplicationAudioSession:'; { unavailable in macos, tvos }
    function usesApplicationAudioSession: objcbool; message 'usesApplicationAudioSession'; { unavailable in macos, tvos }
    procedure setAutomaticallyConfiguresApplicationAudioSession(newValue: objcbool); message 'setAutomaticallyConfiguresApplicationAudioSession:'; { unavailable in macos, tvos }
    function automaticallyConfiguresApplicationAudioSession: objcbool; message 'automaticallyConfiguresApplicationAudioSession'; { unavailable in macos, tvos }
    procedure setAutomaticallyConfiguresCaptureDeviceForWideColor(newValue: objcbool); message 'setAutomaticallyConfiguresCaptureDeviceForWideColor:'; { unavailable in macos, tvos }
    function automaticallyConfiguresCaptureDeviceForWideColor: objcbool; message 'automaticallyConfiguresCaptureDeviceForWideColor'; { unavailable in macos, tvos }
    procedure startRunning; message 'startRunning';
    procedure stopRunning; message 'stopRunning';
    function masterClock: CMClockRef; message 'masterClock'; { unavailable in tvos }
  end;

type
  AVCaptureMultiCamSession = objcclass external (AVCaptureSession)
  public
    class function isMultiCamSupported: objcbool; message 'isMultiCamSupported';
    function hardwareCost: single; message 'hardwareCost';
    function systemPressureCost: single; message 'systemPressureCost';
  end;
{$endif}

{$ifdef TYPES}
type
  AVVideoFieldMode = NSInteger;
  AVVideoFieldModePtr = ^AVVideoFieldMode;

const
  AVVideoFieldModeBoth = 0;
  AVVideoFieldModeTopOnly = 1;
  AVVideoFieldModeBottomOnly = 2;
  AVVideoFieldModeDeinterlace = 3;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureConnection = objcclass external (NSObject)
  private
    _internal: AVCaptureConnectionInternal;
  public
    class function connectionWithInputPorts_output (ports: NSArray; output: AVCaptureOutput): id; message 'connectionWithInputPorts:output:'; { unavailable in tvos }
    class function connectionWithInputPort_videoPreviewLayer (port: AVCaptureInputPort; layer: AVCaptureVideoPreviewLayer): id; message 'connectionWithInputPort:videoPreviewLayer:'; { unavailable in tvos }
    function initWithInputPorts_output (ports: NSArray; output: AVCaptureOutput): id; message 'initWithInputPorts:output:'; { unavailable in tvos }
    function initWithInputPort_videoPreviewLayer (port: AVCaptureInputPort; layer: AVCaptureVideoPreviewLayer): id; message 'initWithInputPort:videoPreviewLayer:'; { unavailable in tvos }
    function inputPorts: NSArray; message 'inputPorts';
    function output: AVCaptureOutput; message 'output';
    function videoPreviewLayer: AVCaptureVideoPreviewLayer; message 'videoPreviewLayer'; { unavailable in tvos }
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    function isActive: objcbool; message 'isActive';
    function audioChannels: NSArray; message 'audioChannels';
    function isVideoMirroringSupported: objcbool; message 'isVideoMirroringSupported';
    procedure setVideoMirrored(newValue: objcbool); message 'setVideoMirrored:';
    function isVideoMirrored: objcbool; message 'isVideoMirrored';
    procedure setAutomaticallyAdjustsVideoMirroring(newValue: objcbool); message 'setAutomaticallyAdjustsVideoMirroring:'; { unavailable in tvos }
    function automaticallyAdjustsVideoMirroring: objcbool; message 'automaticallyAdjustsVideoMirroring'; { unavailable in tvos }
    function isVideoOrientationSupported: objcbool; message 'isVideoOrientationSupported';
    procedure setVideoOrientation(newValue: AVCaptureVideoOrientation); message 'setVideoOrientation:';
    function videoOrientation: AVCaptureVideoOrientation; message 'videoOrientation';
    function isVideoFieldModeSupported: objcbool; message 'isVideoFieldModeSupported'; { unavailable in ios, macCatalyst, watchos, tvos }
    procedure setVideoFieldMode(newValue: AVVideoFieldMode); message 'setVideoFieldMode:'; { unavailable in ios, macCatalyst, watchos, tvos }
    function videoFieldMode: AVVideoFieldMode; message 'videoFieldMode'; { unavailable in ios, macCatalyst, watchos, tvos }
    function isVideoMinFrameDurationSupported: objcbool; message 'isVideoMinFrameDurationSupported'; { unavailable in tvos }
    procedure setVideoMinFrameDuration(newValue: CMTime); message 'setVideoMinFrameDuration:'; { unavailable in tvos }
    function videoMinFrameDuration: CMTime; message 'videoMinFrameDuration'; { unavailable in tvos }
    function isVideoMaxFrameDurationSupported: objcbool; message 'isVideoMaxFrameDurationSupported'; { unavailable in tvos }
    procedure setVideoMaxFrameDuration(newValue: CMTime); message 'setVideoMaxFrameDuration:'; { unavailable in tvos }
    function videoMaxFrameDuration: CMTime; message 'videoMaxFrameDuration'; { unavailable in tvos }
    function videoMaxScaleAndCropFactor: CGFloat; message 'videoMaxScaleAndCropFactor'; { unavailable in macos, tvos }
    procedure setVideoScaleAndCropFactor(newValue: CGFloat); message 'setVideoScaleAndCropFactor:'; { unavailable in macos, tvos }
    function videoScaleAndCropFactor: CGFloat; message 'videoScaleAndCropFactor'; { unavailable in macos, tvos }
    procedure setPreferredVideoStabilizationMode(newValue: AVCaptureVideoStabilizationMode); message 'setPreferredVideoStabilizationMode:'; { unavailable in macos, tvos }
    function preferredVideoStabilizationMode: AVCaptureVideoStabilizationMode; message 'preferredVideoStabilizationMode'; { unavailable in macos, tvos }
    function activeVideoStabilizationMode: AVCaptureVideoStabilizationMode; message 'activeVideoStabilizationMode'; { unavailable in macos, tvos }
    function isVideoStabilizationSupported: objcbool; message 'isVideoStabilizationSupported'; { unavailable in macos, tvos }
    function isVideoStabilizationEnabled: objcbool; message 'isVideoStabilizationEnabled'; { unavailable in macos }
    procedure setEnablesVideoStabilizationWhenAvailable(newValue: objcbool); message 'setEnablesVideoStabilizationWhenAvailable:'; { unavailable in macos }
    function enablesVideoStabilizationWhenAvailable: objcbool; message 'enablesVideoStabilizationWhenAvailable'; { unavailable in macos }
    function isCameraIntrinsicMatrixDeliverySupported: objcbool; message 'isCameraIntrinsicMatrixDeliverySupported'; { unavailable in macos, tvos }
    procedure setCameraIntrinsicMatrixDeliveryEnabled(newValue: objcbool); message 'setCameraIntrinsicMatrixDeliveryEnabled:'; { unavailable in macos, tvos }
    function isCameraIntrinsicMatrixDeliveryEnabled: objcbool; message 'isCameraIntrinsicMatrixDeliveryEnabled'; { unavailable in macos, tvos }
  end;

type
  AVCaptureAudioChannel = objcclass external (NSObject)
  private
    _internal: AVCaptureAudioChannelInternal;
  public
    function averagePowerLevel: single; message 'averagePowerLevel';
    function peakHoldLevel: single; message 'peakHoldLevel';
    procedure setVolume(newValue: single); message 'setVolume:'; { unavailable in ios, macCatalyst, watchos, tvos }
    function volume: single; message 'volume'; { unavailable in ios, macCatalyst, watchos, tvos }
    procedure setEnabled(newValue: objcbool); message 'setEnabled:'; { unavailable in ios, macCatalyst, watchos, tvos }
    function isEnabled: objcbool; message 'isEnabled'; { unavailable in ios, macCatalyst, watchos, tvos }
  end;
{$endif}

{$else}
{$endif}
