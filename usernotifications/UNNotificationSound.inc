{ Parsed from UserNotifications.framework UNNotificationSound.h }

{$ifdef TYPES}
type
  UNNotificationSoundPtr = ^UNNotificationSound;
{$endif}

{$ifdef TYPES}
type
  UNNotificationSoundName = NSString;
  UNNotificationSoundNamePtr = ^UNNotificationSoundName;
{$endif}

{$ifdef CLASSES}

type
  UNNotificationSound = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function defaultSound: UNNotificationSound; message 'defaultSound';
    class function defaultCriticalSound: UNNotificationSound; message 'defaultCriticalSound'; { unavailable in tvos } { available in ios 12.0, watchos 5.0 }
    class function defaultCriticalSoundWithAudioVolume (volume: single): id; message 'defaultCriticalSoundWithAudioVolume:'; { unavailable in tvos } { available in ios 12.0, watchos 5.0 }
    class function soundNamed (name: UNNotificationSoundName): id; message 'soundNamed:'; { unavailable in watchos, tvos }
    class function criticalSoundNamed (name: UNNotificationSoundName): id; message 'criticalSoundNamed:'; { unavailable in watchos, tvos } { available in ios 12.0 }
    class function criticalSoundNamed_withAudioVolume (name: UNNotificationSoundName; volume: single): id; message 'criticalSoundNamed:withAudioVolume:'; { unavailable in watchos, tvos } { available in ios 12.0 }
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

