{ Parsed from CoreAudioKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreAudioKit.framework/Headers/AUPannerView.h }

{$ifdef TYPES}
type
  AUPannerViewPtr = ^AUPannerView;
{$endif}

{$ifdef CLASSES}

type
  AUPannerView = objcclass external (NSView)
  private
  public
    function audioUnit: AudioUnit; message 'audioUnit';
    class function AUPannerViewWithAudioUnit (au: AudioUnit): AUPannerView; message 'AUPannerViewWithAudioUnit:';
  end;
{$endif}

