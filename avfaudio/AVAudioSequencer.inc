{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioSequencer.h }

{ Types from AVMusicTrack }
{$ifdef TYPES}


type
  AVMusicTrackLoopCount = NSInteger;
type
  AVMusicTrackLoopCountPtr = ^AVMusicTrackLoopCount;

const
  AVMusicTrackLoopCountForever = -1;
{$endif}


{$ifdef TYPES}
type
  AVAudioSequencerPtr = ^AVAudioSequencer;
  AVMusicTrackPtr = ^AVMusicTrack;
{$endif}

{$ifdef TYPES}
type
  AVMusicTimeStamp = Float64;
  AVMusicTimeStampPtr = ^AVMusicTimeStamp;
  AVMusicSequenceLoadOptions = NSUInteger;
  AVMusicSequenceLoadOptionsPtr = ^AVMusicSequenceLoadOptions;

const
  AVMusicSequenceLoadSMF_PreserveTracks = 0;
  AVMusicSequenceLoadSMF_ChannelsToTracks = 1 shl 0;

type
  _AVBeatRange = record
    start: AVMusicTimeStamp;
    length: AVMusicTimeStamp;
  end;
type
  AVBeatRange = _AVBeatRange;
type
  AVBeatRangePtr = ^_AVBeatRange;
type
  _AVBeatRangePtr = ^_AVBeatRange;
{$endif}

{$ifdef CLASSES}

type
  AVAudioSequencer = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function init: id; message 'init'; { unavailable in tvos }
    function initWithAudioEngine (engine: AVAudioEngine): id; message 'initWithAudioEngine:';
    function loadFromURL_options_error (fileURL: NSURL; options: AVMusicSequenceLoadOptions; outError: NSErrorPtr): objcbool; message 'loadFromURL:options:error:';
    function loadFromData_options_error (data: NSData; options: AVMusicSequenceLoadOptions; outError: NSErrorPtr): objcbool; message 'loadFromData:options:error:';
    function writeToURL_SMPTEResolution_replaceExisting_error (fileURL: NSURL; resolution: NSInteger; replace: objcbool; outError: NSErrorPtr): objcbool; message 'writeToURL:SMPTEResolution:replaceExisting:error:';
    function dataWithSMPTEResolution_error (SMPTEResolution: NSInteger; outError: NSErrorPtr): NSData; message 'dataWithSMPTEResolution:error:';
    function secondsForBeats (beats: AVMusicTimeStamp): NSTimeInterval; message 'secondsForBeats:';
    function beatsForSeconds (seconds: NSTimeInterval): AVMusicTimeStamp; message 'beatsForSeconds:';
    function tracks: NSArray; message 'tracks';
    function tempoTrack: AVMusicTrack; message 'tempoTrack';
    function userInfo: NSDictionary; message 'userInfo';
  end;


type
  AVAudioSequencer_Player = objccategory external (AVAudioSequencer)
    procedure setCurrentPositionInSeconds(newValue: NSTimeInterval); message 'setCurrentPositionInSeconds:';
    function currentPositionInSeconds: NSTimeInterval; message 'currentPositionInSeconds';
    procedure setCurrentPositionInBeats(newValue: NSTimeInterval); message 'setCurrentPositionInBeats:';
    function currentPositionInBeats: NSTimeInterval; message 'currentPositionInBeats';
    function isPlaying: objcbool; message 'isPlaying';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    function hostTimeForBeats_error (inBeats: AVMusicTimeStamp; outError: NSErrorPtr): UInt64; message 'hostTimeForBeats:error:';
    function beatsForHostTime_error (inHostTime: UInt64; outError: NSErrorPtr): AVMusicTimeStamp; message 'beatsForHostTime:error:';
    procedure prepareToPlay; message 'prepareToPlay';
    function startAndReturnError (outError: NSErrorPtr): objcbool; message 'startAndReturnError:';
    procedure stop; message 'stop';
  end;


type
  AVMusicTrack = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    procedure setDestinationAudioUnit(newValue: AVAudioUnit); message 'setDestinationAudioUnit:';
    function destinationAudioUnit: AVAudioUnit; message 'destinationAudioUnit';
    {$if defined(TARGET_OS_OSX) or defined(TARGET_OS_IOS)}
    procedure setDestinationMIDIEndpoint(newValue: MIDIEndpointRef); message 'setDestinationMIDIEndpoint:';
    function destinationMIDIEndpoint: MIDIEndpointRef; message 'destinationMIDIEndpoint';
    {$endif}
    procedure setLoopRange(newValue: AVBeatRange); message 'setLoopRange:';
    function loopRange: AVBeatRange; message 'loopRange';
    procedure setLoopingEnabled(newValue: objcbool); message 'setLoopingEnabled:';
    function isLoopingEnabled: objcbool; message 'isLoopingEnabled';
    procedure setNumberOfLoops(newValue: NSInteger); message 'setNumberOfLoops:';
    function numberOfLoops: NSInteger; message 'numberOfLoops';
    procedure setOffsetTime(newValue: AVMusicTimeStamp); message 'setOffsetTime:';
    function offsetTime: AVMusicTimeStamp; message 'offsetTime';
    procedure setMuted(newValue: objcbool); message 'setMuted:';
    function isMuted: objcbool; message 'isMuted';
    procedure setSoloed(newValue: objcbool); message 'setSoloed:';
    function isSoloed: objcbool; message 'isSoloed';
    procedure setLengthInBeats(newValue: AVMusicTimeStamp); message 'setLengthInBeats:';
    function lengthInBeats: AVMusicTimeStamp; message 'lengthInBeats';
    procedure setLengthInSeconds(newValue: NSTimeInterval); message 'setLengthInSeconds:';
    function lengthInSeconds: NSTimeInterval; message 'lengthInSeconds';
    function timeResolution: NSUInteger; message 'timeResolution';
  end;
{$endif}

