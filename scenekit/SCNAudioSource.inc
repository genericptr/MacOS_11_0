{ Parsed from SceneKit.framework SCNAudioSource.h }

{$ifdef CALLBACKS}
type
  SCNAudioSourceWillStartPlaybackCallback = reference to procedure; cblock; cdecl;
  SCNAudioSourceDidFinishPlaybackCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SCNAudioSourcePtr = ^SCNAudioSource;
  SCNAudioPlayerPtr = ^SCNAudioPlayer;
{$endif}

{$ifdef CLASSES}

type
  SCNAudioSource = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function initWithFileNamed (name: NSString): id; message 'initWithFileNamed:';
    function initWithURL (url: NSURL): id; message 'initWithURL:'; { NS_DESIGNATED_INITIALIZER }
    class function audioSourceNamed (fileName: NSString): id; message 'audioSourceNamed:';
    procedure setPositional(newValue: objcbool); message 'setPositional:';
    function isPositional: objcbool; message 'isPositional';
    procedure setVolume(newValue: single); message 'setVolume:';
    function volume: single; message 'volume';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure setReverbBlend(newValue: single); message 'setReverbBlend:';
    function reverbBlend: single; message 'reverbBlend';
    procedure setLoops(newValue: objcbool); message 'setLoops:';
    function loops: objcbool; message 'loops';
    procedure setShouldStream(newValue: objcbool); message 'setShouldStream:';
    function shouldStream: objcbool; message 'shouldStream';
    procedure load; message 'load';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SCNAudioPlayer = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function initWithSource (source: SCNAudioSource): id; message 'initWithSource:'; { NS_DESIGNATED_INITIALIZER }
    function initWithAVAudioNode (audioNode: AVAudioNode): id; message 'initWithAVAudioNode:'; { NS_DESIGNATED_INITIALIZER }
    class function audioPlayerWithSource (source: SCNAudioSource): id; message 'audioPlayerWithSource:';
    class function audioPlayerWithAVAudioNode (audioNode: AVAudioNode): id; message 'audioPlayerWithAVAudioNode:';
    procedure setWillStartPlayback(newValue: SCNAudioSourceWillStartPlaybackCallback); message 'setWillStartPlayback:';
    function willStartPlayback: SCNAudioSourceWillStartPlaybackCallback; message 'willStartPlayback';
    procedure setDidFinishPlayback(newValue: SCNAudioSourceDidFinishPlaybackCallback); message 'setDidFinishPlayback:';
    function didFinishPlayback: SCNAudioSourceDidFinishPlaybackCallback; message 'didFinishPlayback';
    function audioNode: AVAudioNode; message 'audioNode';
    function audioSource: SCNAudioSource; message 'audioSource';
  end;


type
  SCNAudioSupport = objccategory external (SCNNode)
    procedure addAudioPlayer (player: SCNAudioPlayer); message 'addAudioPlayer:'; { available in macos 10.11, ios 9.0 }
    procedure removeAllAudioPlayers; message 'removeAllAudioPlayers'; { available in macos 10.11, ios 9.0 }
    procedure removeAudioPlayer (player: SCNAudioPlayer); message 'removeAudioPlayer:'; { available in macos 10.11, ios 9.0 }
    function audioPlayers: NSArray; message 'audioPlayers'; { available in macos 10.11, ios 9.0 }
  end;
{$endif}

