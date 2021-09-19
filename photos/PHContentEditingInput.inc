{ Parsed from Photos.framework PHContentEditingInput.h }

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
    function playbackStyle: PHAssetPlaybackStyle; message 'playbackStyle'; { available in macos 10.13, ios 11, tvos 11 }
    function adjustmentData: PHAdjustmentData; message 'adjustmentData';
    {$if defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MACCATALYST)}
    function displaySizeImage: UIImage; message 'displaySizeImage';
    {$else}
    function displaySizeImage_: NSImage; message 'displaySizeImage';
    {$endif}
    function fullSizeImageURL: NSURL; message 'fullSizeImageURL';
    function fullSizeImageOrientation: cint; message 'fullSizeImageOrientation';
    function avAsset: AVAsset; message 'avAsset'; { unavailable in macos }
    function audiovisualAsset: AVAsset; message 'audiovisualAsset'; { available in macos 10.11, ios 9 }
    function livePhoto: PHLivePhoto; message 'livePhoto'; { available in macos 10.12, ios 10 }
  end;
{$endif}

