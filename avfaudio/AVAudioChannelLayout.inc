{ Parsed from AVFAudio.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFAudio.framework/Headers/AVAudioChannelLayout.h }

{$ifdef TYPES}
type
  AVAudioChannelLayoutPtr = ^AVAudioChannelLayout;
{$endif}

{$ifdef CLASSES}

type
  AVAudioChannelLayout = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _layoutTag: AudioChannelLayoutTag;
    _layout: AudioChannelLayoutPtr;
    _reserved: pointer;
  public
    function init: id; message 'init';
    function initWithLayoutTag (layoutTag: AudioChannelLayoutTag): id; message 'initWithLayoutTag:';
    function initWithLayout (layout: AudioChannelLayoutPtr): id; message 'initWithLayout:'; { NS_DESIGNATED_INITIALIZER }
    function isEqual (object_: id): objcbool; message 'isEqual:';
    class function layoutWithLayoutTag (layoutTag: AudioChannelLayoutTag): id; message 'layoutWithLayoutTag:';
    class function layoutWithLayout (layout: AudioChannelLayoutPtr): id; message 'layoutWithLayout:';
    function layoutTag: AudioChannelLayoutTag; message 'layoutTag';
    function layout: AudioChannelLayoutPtr; message 'layout';
    function channelCount: AVAudioChannelCount; message 'channelCount';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

