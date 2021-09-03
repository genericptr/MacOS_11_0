{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHContentEditingInput.h }

{ Types from PHContentEditingInput }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  PHContentEditingInputPtr = ^PHContentEditingInput;
{$endif}

{$ifdef CLASSES}

type
  PHContentEditingInput = objcclass external (NSObject)
  public
    function mediaType: PHAssetMediaType; message 'mediaType';
    function mediaSubtypes: PHAssetMediaSubtype; message 'mediaSubtypes';
    function creationDate: NSDate; message 'creationDate';
    function location: CLLocation; message 'location';
    function uniformTypeIdentifier: NSString; message 'uniformTypeIdentifier';
    function playbackStyle: PHAssetPlaybackStyle; message 'playbackStyle'; { available in macos , ios , tvos  }
    function adjustmentData: PHAdjustmentData; message 'adjustmentData';
    {$if defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MACCATALYST)}
    function displaySizeImage: UIImage; message 'displaySizeImage';
    {$else}
    function displaySizeImage_: NSImage; message 'displaySizeImage';
    {$endif}
    function fullSizeImageURL: NSURL; message 'fullSizeImageURL';
    function fullSizeImageOrientation: cint; message 'fullSizeImageOrientation';
    function avAsset: AVAsset; message 'avAsset'; { unavailable in macos }
    function audiovisualAsset: AVAsset; message 'audiovisualAsset'; { available in macos , ios  }
    function livePhoto: PHLivePhoto; message 'livePhoto'; { available in macos , ios  }
  end;
{$endif}

