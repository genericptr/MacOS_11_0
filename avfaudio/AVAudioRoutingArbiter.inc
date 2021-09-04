{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioRoutingArbiter.h }

{$ifdef CALLBACKS}
type
  AVAudioRoutingArbiterBeginArbitrationWithCategoryCallback = reference to procedure (defaultDeviceChanged: objcbool; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVAudioRoutingArbiterPtr = ^AVAudioRoutingArbiter;
{$endif}

{$if defined(__NULL_MACRO__)}

{$ifndef AudioSession_AVAudioRoutingArbiter_h}
{$ifdef TYPES}
type
  AVAudioRoutingArbitrationCategory = NSInteger;
  AVAudioRoutingArbitrationCategoryPtr = ^AVAudioRoutingArbitrationCategory;

const
  AVAudioRoutingArbitrationCategoryPlayback = 0;
  AVAudioRoutingArbitrationCategoryPlayAndRecord = 1;
  AVAudioRoutingArbitrationCategoryPlayAndRecordVoice = 2;
{$endif}

{$ifdef CLASSES}

type
  AVAudioRoutingArbiter = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    class function sharedRoutingArbiter: AVAudioRoutingArbiter; message 'sharedRoutingArbiter';
    procedure beginArbitrationWithCategory_completionHandler (category: AVAudioRoutingArbitrationCategory; handler: AVAudioRoutingArbiterBeginArbitrationWithCategoryCallback); message 'beginArbitrationWithCategory:completionHandler:';
    procedure leaveArbitration; message 'leaveArbitration';
  end;
{$endif}

{$endif}

{$else}
{$endif}
