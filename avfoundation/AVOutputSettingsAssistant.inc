{ Parsed from AVFoundation.framework AVOutputSettingsAssistant.h }

{$ifdef TYPES}
type
  AVOutputSettingsAssistantPtr = ^AVOutputSettingsAssistant;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVOutputSettingsPreset = NSString;
  AVOutputSettingsPresetPtr = ^AVOutputSettingsPreset;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVOutputSettingsPreset640x480: AVOutputSettingsPreset { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }; cvar; external;
  AVOutputSettingsPreset960x540: AVOutputSettingsPreset { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }; cvar; external;
  AVOutputSettingsPreset1280x720: AVOutputSettingsPreset { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }; cvar; external;
  AVOutputSettingsPreset1920x1080: AVOutputSettingsPreset { unavailable in watchos } { available in macos 10.9, ios 7.0, tvos 9.0 }; cvar; external;
  AVOutputSettingsPreset3840x2160: AVOutputSettingsPreset { unavailable in watchos } { available in macos 10.10, ios 9.0, tvos 9.0 }; cvar; external;
  AVOutputSettingsPresetHEVC1920x1080: AVOutputSettingsPreset { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVOutputSettingsPresetHEVC1920x1080WithAlpha: AVOutputSettingsPreset { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }; cvar; external;
  AVOutputSettingsPresetHEVC3840x2160: AVOutputSettingsPreset { unavailable in watchos } { available in macos 10.13, ios 11.0, tvos 11.0 }; cvar; external;
  AVOutputSettingsPresetHEVC3840x2160WithAlpha: AVOutputSettingsPreset { unavailable in watchos } { available in macos 10.15, ios 13.0, tvos 13.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVOutputSettingsAssistant = objcclass external (NSObject)
  private
    _internal: AVOutputSettingsAssistantInternal;
  public
    class function availableOutputSettingsPresets: NSArray; message 'availableOutputSettingsPresets'; { unavailable in watchos } { available in macos 10.10, ios 7.0, tvos 9.0 }
    class function outputSettingsAssistantWithPreset (presetIdentifier: AVOutputSettingsPreset): id; message 'outputSettingsAssistantWithPreset:';
    function audioSettings: NSDictionary; message 'audioSettings';
    function videoSettings: NSDictionary; message 'videoSettings';
    function outputFileType: AVFileType; message 'outputFileType';
  end;


type
  AVOutputSettingsAssistant_SourceInformation = objccategory external (AVOutputSettingsAssistant)
    procedure setSourceAudioFormat(newValue: CMAudioFormatDescriptionRef); message 'setSourceAudioFormat:';
    function sourceAudioFormat: CMAudioFormatDescriptionRef; message 'sourceAudioFormat';
    procedure setSourceVideoFormat(newValue: CMVideoFormatDescriptionRef); message 'setSourceVideoFormat:';
    function sourceVideoFormat: CMVideoFormatDescriptionRef; message 'sourceVideoFormat';
    procedure setSourceVideoAverageFrameDuration(newValue: CMTime); message 'setSourceVideoAverageFrameDuration:';
    function sourceVideoAverageFrameDuration: CMTime; message 'sourceVideoAverageFrameDuration';
    procedure setSourceVideoMinFrameDuration(newValue: CMTime); message 'setSourceVideoMinFrameDuration:'; { unavailable in watchos } { available in macos 10.10, ios 7.0, tvos 9.0 }
    function sourceVideoMinFrameDuration: CMTime; message 'sourceVideoMinFrameDuration'; { unavailable in watchos } { available in macos 10.10, ios 7.0, tvos 9.0 }
  end;
{$endif}

{$else}
{$endif}
