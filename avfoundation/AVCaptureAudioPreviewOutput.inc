{ Parsed from AVFoundation.framework AVCaptureAudioPreviewOutput.h }

{$ifdef TYPES}
type
  AVCaptureAudioPreviewOutputPtr = ^AVCaptureAudioPreviewOutput;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVCaptureAudioPreviewOutput = objcclass external (AVCaptureOutput)
  private
    _internal: AVCaptureAudioPreviewOutputInternal;
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setOutputDeviceUniqueID(newValue: NSString); message 'setOutputDeviceUniqueID:';
    function outputDeviceUniqueID: NSString; message 'outputDeviceUniqueID';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
  end;
{$endif}

{$else}
{$endif}
