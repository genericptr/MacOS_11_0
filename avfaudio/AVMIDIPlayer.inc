{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVMIDIPlayer.h }

{$ifdef TYPES}
type
  AVMIDIPlayerPtr = ^AVMIDIPlayer;
{$endif}

{$ifdef TYPES}
type
  AVMIDIPlayerCompletionHandler = reference to function : pointer; cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  AVMIDIPlayer = objcclass external (NSObject)
  private
    _impl: pointer;
  public
    function initWithContentsOfURL_soundBankURL_error (inURL: NSURL; bankURL: NSURL; outError: NSErrorPtr): id; message 'initWithContentsOfURL:soundBankURL:error:';
    function initWithData_soundBankURL_error (data: NSData; bankURL: NSURL; outError: NSErrorPtr): id; message 'initWithData:soundBankURL:error:';
    procedure prepareToPlay; message 'prepareToPlay';
    procedure play (completionHandler: AVMIDIPlayerCompletionHandler); message 'play:';
    procedure stop; message 'stop';
    function duration: NSTimeInterval; message 'duration';
    function isPlaying: objcbool; message 'isPlaying';
    procedure setRate(newValue: single); message 'setRate:';
    function rate: single; message 'rate';
    procedure setCurrentPosition(newValue: NSTimeInterval); message 'setCurrentPosition:';
    function currentPosition: NSTimeInterval; message 'currentPosition';
  end;
{$endif}

