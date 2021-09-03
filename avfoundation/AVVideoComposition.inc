{ Parsed from AVFoundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AVFoundation.framework/Headers/AVVideoComposition.h }

{$ifdef CALLBACKS}
type
  AVVideoCompositionVideoCompositionWithAssetCallback = reference to function (request: AVAsynchronousCIImageFilteringRequest): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  AVVideoCompositionPtr = ^AVVideoComposition;
  AVMutableVideoCompositionPtr = ^AVMutableVideoComposition;
  AVVideoCompositionInstructionPtr = ^AVVideoCompositionInstruction;
  AVMutableVideoCompositionInstructionPtr = ^AVMutableVideoCompositionInstruction;
  AVVideoCompositionLayerInstructionPtr = ^AVVideoCompositionLayerInstruction;
  AVMutableVideoCompositionLayerInstructionPtr = ^AVMutableVideoCompositionLayerInstruction;
  AVVideoCompositionCoreAnimationToolPtr = ^AVVideoCompositionCoreAnimationTool;
  AVVideoCompositionValidationHandlingProtocolPtr = ^AVVideoCompositionValidationHandlingProtocol;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVVideoComposition = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _videoComposition: AVVideoCompositionInternal;
  public
    class function videoCompositionWithPropertiesOfAsset (asset: AVAsset): AVVideoComposition; message 'videoCompositionWithPropertiesOfAsset:'; { unavailable in watchos }
    function customVideoCompositorClass: pobjc_class; message 'customVideoCompositorClass'; { unavailable in watchos }
    function frameDuration: CMTime; message 'frameDuration';
    function sourceTrackIDForFrameTiming: CMPersistentTrackID; message 'sourceTrackIDForFrameTiming'; { unavailable in watchos }
    function renderSize: CGSize; message 'renderSize';
    function renderScale: single; message 'renderScale'; { unavailable in watchos }
    function instructions: NSArray; message 'instructions';
    function animationTool: AVVideoCompositionCoreAnimationTool; message 'animationTool';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;


type
  AVVideoCompositionColorimetery = objccategory external (AVVideoComposition)
    function colorPrimaries: NSString; message 'colorPrimaries'; { unavailable in watchos }
    function colorYCbCrMatrix: NSString; message 'colorYCbCrMatrix'; { unavailable in watchos }
    function colorTransferFunction: NSString; message 'colorTransferFunction'; { unavailable in watchos }
  end;

type
  AVVideoCompositionFiltering = objccategory external (AVVideoComposition)
    class function videoCompositionWithAsset_applyingCIFiltersWithHandler (asset: AVAsset; applier: AVVideoCompositionVideoCompositionWithAssetCallback): AVVideoComposition; message 'videoCompositionWithAsset:applyingCIFiltersWithHandler:'; { unavailable in watchos }
  end;


type
  AVMutableVideoComposition = objcclass external (AVVideoComposition)
  private
    _mutableVideoComposition: AVMutableVideoCompositionInternal;
  public
    class function videoComposition: AVMutableVideoComposition; message 'videoComposition';
    class function videoCompositionWithPropertiesOfAsset (asset: AVAsset): AVMutableVideoComposition; message 'videoCompositionWithPropertiesOfAsset:'; { unavailable in watchos }
    class function videoCompositionWithPropertiesOfAsset_prototypeInstruction (asset: AVAsset; prototypeInstruction: AVVideoCompositionInstruction): AVMutableVideoComposition; message 'videoCompositionWithPropertiesOfAsset:prototypeInstruction:'; { unavailable in watchos }
    procedure setCustomVideoCompositorClass(newValue: pobjc_class); message 'setCustomVideoCompositorClass:'; { unavailable in watchos }
    function customVideoCompositorClass: pobjc_class; message 'customVideoCompositorClass'; { unavailable in watchos }
    procedure setFrameDuration(newValue: CMTime); message 'setFrameDuration:';
    function frameDuration: CMTime; message 'frameDuration';
    procedure setSourceTrackIDForFrameTiming(newValue: CMPersistentTrackID); message 'setSourceTrackIDForFrameTiming:'; { unavailable in watchos }
    function sourceTrackIDForFrameTiming: CMPersistentTrackID; message 'sourceTrackIDForFrameTiming'; { unavailable in watchos }
    procedure setRenderSize(newValue: CGSize); message 'setRenderSize:';
    function renderSize: CGSize; message 'renderSize';
    procedure setRenderScale(newValue: single); message 'setRenderScale:'; { unavailable in watchos }
    function renderScale: single; message 'renderScale'; { unavailable in watchos }
    procedure setInstructions(newValue: NSArray); message 'setInstructions:';
    function instructions: NSArray; message 'instructions';
    procedure setAnimationTool(newValue: AVVideoCompositionCoreAnimationTool); message 'setAnimationTool:';
    function animationTool: AVVideoCompositionCoreAnimationTool; message 'animationTool';
  end;


type
  AVMutableVideoCompositionColorimetery = objccategory external (AVMutableVideoComposition)
    procedure setColorPrimaries(newValue: NSString); message 'setColorPrimaries:'; { unavailable in watchos }
    function colorPrimaries: NSString; message 'colorPrimaries'; { unavailable in watchos }
    procedure setColorYCbCrMatrix(newValue: NSString); message 'setColorYCbCrMatrix:'; { unavailable in watchos }
    function colorYCbCrMatrix: NSString; message 'colorYCbCrMatrix'; { unavailable in watchos }
    procedure setColorTransferFunction(newValue: NSString); message 'setColorTransferFunction:'; { unavailable in watchos }
    function colorTransferFunction: NSString; message 'colorTransferFunction'; { unavailable in watchos }
  end;

type
  AVMutableVideoCompositionFiltering = objccategory external (AVMutableVideoComposition)
    class function videoCompositionWithAsset_applyingCIFiltersWithHandler (asset: AVAsset; applier: AVVideoCompositionVideoCompositionWithAssetCallback): AVMutableVideoComposition; message 'videoCompositionWithAsset:applyingCIFiltersWithHandler:'; { unavailable in watchos }
  end;


type
  AVVideoCompositionInstruction = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol, NSMutableCopyingProtocol, AVVideoCompositionInstructionProtocol)
  private
    _instruction: AVVideoCompositionInstructionInternal;
  public
    function timeRange: CMTimeRange; message 'timeRange';
    function backgroundColor: CGColorRef; message 'backgroundColor';
    function layerInstructions: NSArray; message 'layerInstructions';
    function enablePostProcessing: objcbool; message 'enablePostProcessing';
    function requiredSourceTrackIDs: NSArray; message 'requiredSourceTrackIDs'; { unavailable in watchos }
    function passthroughTrackID: CMPersistentTrackID; message 'passthroughTrackID'; { unavailable in watchos }

    { Adopted protocols }
    function containsTweening: objcbool; message 'containsTweening';
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function enablePostProcessing_: objcbool; message 'enablePostProcessing';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    function passthroughTrackID_: CMPersistentTrackID; message 'passthroughTrackID';
    function requiredSourceTrackIDs_: NSArray; message 'requiredSourceTrackIDs';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
    function timeRange_: CMTimeRange; message 'timeRange';
  end;

type
  AVMutableVideoCompositionInstruction = objcclass external (AVVideoCompositionInstruction)
  private
    _mutableInstruction: AVMutableVideoCompositionInstructionInternal;
  public
    class function videoCompositionInstruction: id; message 'videoCompositionInstruction';
    procedure setTimeRange(newValue: CMTimeRange); message 'setTimeRange:';
    function timeRange: CMTimeRange; message 'timeRange';
    procedure setBackgroundColor(newValue: CGColorRef); message 'setBackgroundColor:';
    function backgroundColor: CGColorRef; message 'backgroundColor';
    procedure setLayerInstructions(newValue: NSArray); message 'setLayerInstructions:';
    function layerInstructions: NSArray; message 'layerInstructions';
    procedure setEnablePostProcessing(newValue: objcbool); message 'setEnablePostProcessing:';
    function enablePostProcessing: objcbool; message 'enablePostProcessing';
  end;

type
  AVVideoCompositionLayerInstruction = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _layerInstruction: AVVideoCompositionLayerInstructionInternal;
  public
    function trackID: CMPersistentTrackID; message 'trackID';
    function getTransformRampForTime_startTransform_endTransform_timeRange (time: CMTime; startTransform: CGAffineTransformPtr; endTransform: CGAffineTransformPtr; timeRange: CMTimeRangePtr): objcbool; message 'getTransformRampForTime:startTransform:endTransform:timeRange:';
    function getOpacityRampForTime_startOpacity_endOpacity_timeRange (time: CMTime; startOpacity: psingle; endOpacity: psingle; timeRange: CMTimeRangePtr): objcbool; message 'getOpacityRampForTime:startOpacity:endOpacity:timeRange:';
    function getCropRectangleRampForTime_startCropRectangle_endCropRectangle_timeRange (time: CMTime; startCropRectangle: CGRectPtr; endCropRectangle: CGRectPtr; timeRange: CMTimeRangePtr): objcbool; message 'getCropRectangleRampForTime:startCropRectangle:endCropRectangle:timeRange:'; { unavailable in watchos }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  AVMutableVideoCompositionLayerInstruction = objcclass external (AVVideoCompositionLayerInstruction)
  private
    _mutableLayerInstruction: AVMutableVideoCompositionLayerInstructionInternal;
  public
    class function videoCompositionLayerInstructionWithAssetTrack (track: AVAssetTrack): id; message 'videoCompositionLayerInstructionWithAssetTrack:';
    class function videoCompositionLayerInstruction: id; message 'videoCompositionLayerInstruction';
    procedure setTrackID(newValue: CMPersistentTrackID); message 'setTrackID:';
    function trackID: CMPersistentTrackID; message 'trackID';
    procedure setTransformRampFromStartTransform_toEndTransform_timeRange (startTransform: CGAffineTransform; endTransform: CGAffineTransform; timeRange: CMTimeRange); message 'setTransformRampFromStartTransform:toEndTransform:timeRange:';
    procedure setTransform_atTime (transform: CGAffineTransform; time: CMTime); message 'setTransform:atTime:';
    procedure setOpacityRampFromStartOpacity_toEndOpacity_timeRange (startOpacity: single; endOpacity: single; timeRange: CMTimeRange); message 'setOpacityRampFromStartOpacity:toEndOpacity:timeRange:';
    procedure setOpacity_atTime (opacity: single; time: CMTime); message 'setOpacity:atTime:';
    procedure setCropRectangleRampFromStartCropRectangle_toEndCropRectangle_timeRange (startCropRectangle: CGRect; endCropRectangle: CGRect; timeRange: CMTimeRange); message 'setCropRectangleRampFromStartCropRectangle:toEndCropRectangle:timeRange:'; { unavailable in watchos }
    procedure setCropRectangle_atTime (cropRectangle: CGRect; time: CMTime); message 'setCropRectangle:atTime:'; { unavailable in watchos }
  end;

type
  AVVideoCompositionCoreAnimationTool = objcclass external (NSObject)
  private
    _videoCompositionTool: AVVideoCompositionCoreAnimationToolInternal;
  public
    class function videoCompositionCoreAnimationToolWithAdditionalLayer_asTrackID (layer: CALayer; trackID: CMPersistentTrackID): id; message 'videoCompositionCoreAnimationToolWithAdditionalLayer:asTrackID:';
    class function videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer_inLayer (videoLayer: CALayer; animationLayer: CALayer): id; message 'videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:inLayer:';
    class function videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers_inLayer (videoLayers: NSArray; animationLayer: CALayer): id; message 'videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:inLayer:'; { unavailable in watchos }
  end;


type
  AVAssetVideoCompositionUtility = objccategory external (AVAsset)
    function unusedTrackID: CMPersistentTrackID; message 'unusedTrackID';
  end;

type
  AVVideoCompositionValidation = objccategory external (AVVideoComposition)
    function isValidForAsset_timeRange_validationDelegate (asset: AVAsset; timeRange: CMTimeRange; validationDelegate: id): objcbool; message 'isValidForAsset:timeRange:validationDelegate:'; { unavailable in watchos }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AVVideoCompositionValidationHandlingProtocol = objcprotocol external name 'AVVideoCompositionValidationHandling' (NSObjectProtocol)
  optional
    function videoComposition_shouldContinueValidatingAfterFindingInvalidValueForKey (videoComposition: AVVideoComposition; key: NSString): objcbool; message 'videoComposition:shouldContinueValidatingAfterFindingInvalidValueForKey:'; { unavailable in watchos }
    function videoComposition_shouldContinueValidatingAfterFindingEmptyTimeRange (videoComposition: AVVideoComposition; timeRange: CMTimeRange): objcbool; message 'videoComposition:shouldContinueValidatingAfterFindingEmptyTimeRange:'; { unavailable in watchos }
    function videoComposition_shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction (videoComposition: AVVideoComposition; videoCompositionInstruction: id): objcbool; message 'videoComposition:shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction:'; { unavailable in watchos }
    function videoComposition_shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction_layerInstruction_asset (videoComposition: AVVideoComposition; videoCompositionInstruction: id; layerInstruction: AVVideoCompositionLayerInstruction; asset: AVAsset): objcbool; message 'videoComposition:shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction:layerInstruction:asset:'; { unavailable in watchos }
  end;
{$endif}

{$else}
{$endif}
