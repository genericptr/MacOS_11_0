{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVComposition.h }

{$ifdef TYPES}
type
  AVCompositionPtr = ^AVComposition;
  AVMutableCompositionPtr = ^AVMutableComposition;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVComposition = objcclass external (AVAsset, NSMutableCopyingProtocol)
  private
    _priv: AVCompositionInternal;
  public
    function tracks: NSArray; message 'tracks';
    function naturalSize: CGSize; message 'naturalSize';
    function URLAssetInitializationOptions: NSDictionary; message 'URLAssetInitializationOptions'; { available in macos , ios , tvos , watchos  }

    { Adopted protocols }
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;


type
  AVCompositionTrackInspection = objccategory external (AVComposition)
    function trackWithTrackID (trackID: CMPersistentTrackID): AVCompositionTrack; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: AVMediaType): NSArray; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): NSArray; message 'tracksWithMediaCharacteristic:';
  end;


type
  AVMutableComposition = objcclass external (AVComposition)
  private
    _mutablePriv: AVMutableCompositionInternal;
  public
    function tracks: NSArray; message 'tracks';
    procedure setNaturalSize(newValue: CGSize); message 'setNaturalSize:';
    function naturalSize: CGSize; message 'naturalSize';
    class function composition: id; message 'composition';
    class function compositionWithURLAssetInitializationOptions (URLAssetInitializationOptions_: NSDictionary): id; message 'compositionWithURLAssetInitializationOptions:'; { available in macos , ios , tvos , watchos  }
  end;


type
  AVMutableCompositionCompositionLevelEditing = objccategory external (AVMutableComposition)
    function insertTimeRange_ofAsset_atTime_error (timeRange: CMTimeRange; asset: AVAsset; startTime: CMTime; outError: NSErrorPtr): objcbool; message 'insertTimeRange:ofAsset:atTime:error:';
    procedure insertEmptyTimeRange (timeRange: CMTimeRange); message 'insertEmptyTimeRange:';
    procedure removeTimeRange (timeRange: CMTimeRange); message 'removeTimeRange:';
    procedure scaleTimeRange_toDuration (timeRange: CMTimeRange; duration_: CMTime); message 'scaleTimeRange:toDuration:';
  end;

type
  AVMutableCompositionTrackLevelEditing = objccategory external (AVMutableComposition)
    function addMutableTrackWithMediaType_preferredTrackID (mediaType: AVMediaType; preferredTrackID: CMPersistentTrackID): AVMutableCompositionTrack; message 'addMutableTrackWithMediaType:preferredTrackID:';
    procedure removeTrack (track: AVCompositionTrack); message 'removeTrack:';
    function mutableTrackCompatibleWithTrack (track: AVAssetTrack): AVMutableCompositionTrack; message 'mutableTrackCompatibleWithTrack:';
  end;

type
  AVMutableCompositionTrackInspection = objccategory external (AVMutableComposition)
    function trackWithTrackID (trackID: CMPersistentTrackID): AVMutableCompositionTrack; message 'trackWithTrackID:';
    function tracksWithMediaType (mediaType: AVMediaType): NSArray; message 'tracksWithMediaType:';
    function tracksWithMediaCharacteristic (mediaCharacteristic: AVMediaCharacteristic): NSArray; message 'tracksWithMediaCharacteristic:';
  end;
{$endif}

{$else}
{$endif}
