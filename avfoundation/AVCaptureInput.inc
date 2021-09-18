{ Parsed from AVFoundation.framework AVCaptureInput.h }

{ Types from AVCaptureScreenInput }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  AVCaptureInputPtr = ^AVCaptureInput;
  AVCaptureInputPortPtr = ^AVCaptureInputPort;
  AVCaptureDeviceInputPtr = ^AVCaptureDeviceInput;
  AVCaptureScreenInputPtr = ^AVCaptureScreenInput;
  AVCaptureMetadataInputPtr = ^AVCaptureMetadataInput;
{$endif}

{$if defined(__NULL_MACRO__)}

{$ifdef CLASSES}

type
  AVCaptureInput = objcclass external (NSObject)
  private
    _inputInternal: AVCaptureInputInternal;
  public
    function ports: NSArray; message 'ports';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVCaptureInputPortFormatDescriptionDidChangeNotification: NSString { unavailable in tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVCaptureInputPort = objcclass external (NSObject)
  private
    _internal: AVCaptureInputPortInternal;
  public
    function input: AVCaptureInput; message 'input';
    function mediaType: AVMediaType; message 'mediaType';
    function formatDescription: CMFormatDescriptionRef; message 'formatDescription';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    function clock: CMClockRef; message 'clock'; { unavailable in tvos }
    function sourceDeviceType: AVCaptureDeviceType; message 'sourceDeviceType'; { unavailable in macos, tvos }
    function sourceDevicePosition: AVCaptureDevicePosition; message 'sourceDevicePosition'; { unavailable in macos, tvos }
  end;

type
  AVCaptureDeviceInput = objcclass external (AVCaptureInput)
  private
    _internal: AVCaptureDeviceInputInternal;
  public
    class function deviceInputWithDevice_error (device: AVCaptureDevice; outError: NSErrorPtr): id; message 'deviceInputWithDevice:error:';
    function initWithDevice_error (device: AVCaptureDevice; outError: NSErrorPtr): id; message 'initWithDevice:error:';
    function device: AVCaptureDevice; message 'device';
    procedure setUnifiedAutoExposureDefaultsEnabled(newValue: objcbool); message 'setUnifiedAutoExposureDefaultsEnabled:'; { unavailable in macos, tvos }
    function unifiedAutoExposureDefaultsEnabled: objcbool; message 'unifiedAutoExposureDefaultsEnabled'; { unavailable in macos, tvos }
    function portsWithMediaType_sourceDeviceType_sourceDevicePosition (mediaType: AVMediaType; sourceDeviceType: AVCaptureDeviceType; sourceDevicePosition: AVCaptureDevicePosition): NSArray; message 'portsWithMediaType:sourceDeviceType:sourceDevicePosition:'; { unavailable in macos, tvos }
    procedure setVideoMinFrameDurationOverride(newValue: CMTime); message 'setVideoMinFrameDurationOverride:'; { unavailable in macos, tvos }
    function videoMinFrameDurationOverride: CMTime; message 'videoMinFrameDurationOverride'; { unavailable in macos, tvos }
  end;

type
  AVCaptureScreenInput = objcclass external (AVCaptureInput)
  private
    _internal: AVCaptureScreenInputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    {$if defined(TARGET_OS_OSX)}
    function initWithDisplayID (displayID: CGDirectDisplayID): id; message 'initWithDisplayID:';
    {$endif}
    procedure setMinFrameDuration(newValue: CMTime); message 'setMinFrameDuration:';
    function minFrameDuration: CMTime; message 'minFrameDuration';
    procedure setCropRect(newValue: CGRect); message 'setCropRect:';
    function cropRect: CGRect; message 'cropRect';
    procedure setScaleFactor(newValue: CGFloat); message 'setScaleFactor:';
    function scaleFactor: CGFloat; message 'scaleFactor';
    procedure setCapturesMouseClicks(newValue: objcbool); message 'setCapturesMouseClicks:';
    function capturesMouseClicks: objcbool; message 'capturesMouseClicks';
    procedure setCapturesCursor(newValue: objcbool); message 'setCapturesCursor:'; { available in macos  }
    function capturesCursor: objcbool; message 'capturesCursor'; { available in macos  }
    procedure setRemovesDuplicateFrames(newValue: objcbool); message 'setRemovesDuplicateFrames:'; deprecated 'No longer supported.';
    function removesDuplicateFrames: objcbool; message 'removesDuplicateFrames'; deprecated 'No longer supported.';
  end;

type
  AVCaptureMetadataInput = objcclass external (AVCaptureInput)
  private
    _internal: AVCaptureMetadataInputInternal;
  public
    class function metadataInputWithFormatDescription_clock (desc: CMMetadataFormatDescriptionRef; clock: CMClockRef): id; message 'metadataInputWithFormatDescription:clock:';
    function initWithFormatDescription_clock (desc: CMMetadataFormatDescriptionRef; clock: CMClockRef): id; message 'initWithFormatDescription:clock:';
    function appendTimedMetadataGroup_error (metadata: AVTimedMetadataGroup; outError: NSErrorPtr): objcbool; message 'appendTimedMetadataGroup:error:';
  end;
{$endif}

{$else}
{$endif}
