{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PhotosTypes.h }

{$ifndef Photos_PhotosTypes_h}
{$ifdef TYPES}
type
  PHImageContentMode = NSInteger;
  PHImageContentModePtr = ^PHImageContentMode;

const
  PHImageContentModeAspectFit = 0;
  PHImageContentModeAspectFill = 1;
  PHImageContentModeDefault = PHImageContentModeAspectFit;

type
  PHCollectionListType = NSInteger;
  PHCollectionListTypePtr = ^PHCollectionListType;

const
  PHCollectionListTypeMomentList = 1 { unavailable in macos };
  PHCollectionListTypeFolder = 2;
  PHCollectionListTypeSmartFolder = 3;

type
  PHCollectionListSubtype = NSInteger;
  PHCollectionListSubtypePtr = ^PHCollectionListSubtype;

const
  PHCollectionListSubtypeMomentListCluster = 1 { unavailable in macos };
  PHCollectionListSubtypeMomentListYear = 2 { unavailable in macos };
  PHCollectionListSubtypeRegularFolder = 100;
  PHCollectionListSubtypeSmartFolderEvents = 200;
  PHCollectionListSubtypeSmartFolderFaces = 201;
  PHCollectionListSubtypeAny = NSIntegerMax;

type
  PHCollectionEditOperation = NSInteger;
  PHCollectionEditOperationPtr = ^PHCollectionEditOperation;

const
  PHCollectionEditOperationDeleteContent = 1;
  PHCollectionEditOperationRemoveContent = 2;
  PHCollectionEditOperationAddContent = 3;
  PHCollectionEditOperationCreateContent = 4;
  PHCollectionEditOperationRearrangeContent = 5;
  PHCollectionEditOperationDelete = 6;
  PHCollectionEditOperationRename = 7;

type
  PHAssetCollectionType = NSInteger;
  PHAssetCollectionTypePtr = ^PHAssetCollectionType;

const
  PHAssetCollectionTypeAlbum = 1;
  PHAssetCollectionTypeSmartAlbum = 2;
  PHAssetCollectionTypeMoment = 3 { unavailable in macos };

type
  PHAssetCollectionSubtype = NSInteger;
  PHAssetCollectionSubtypePtr = ^PHAssetCollectionSubtype;

const
  PHAssetCollectionSubtypeAlbumRegular = 2;
  PHAssetCollectionSubtypeAlbumSyncedEvent = 3;
  PHAssetCollectionSubtypeAlbumSyncedFaces = 4;
  PHAssetCollectionSubtypeAlbumSyncedAlbum = 5;
  PHAssetCollectionSubtypeAlbumImported = 6;
  PHAssetCollectionSubtypeAlbumMyPhotoStream = 100;
  PHAssetCollectionSubtypeAlbumCloudShared = 101;
  PHAssetCollectionSubtypeSmartAlbumGeneric = 200;
  PHAssetCollectionSubtypeSmartAlbumPanoramas = 201;
  PHAssetCollectionSubtypeSmartAlbumVideos = 202;
  PHAssetCollectionSubtypeSmartAlbumFavorites = 203;
  PHAssetCollectionSubtypeSmartAlbumTimelapses = 204;
  PHAssetCollectionSubtypeSmartAlbumAllHidden = 205;
  PHAssetCollectionSubtypeSmartAlbumRecentlyAdded = 206;
  PHAssetCollectionSubtypeSmartAlbumBursts = 207;
  PHAssetCollectionSubtypeSmartAlbumSlomoVideos = 208;
  PHAssetCollectionSubtypeSmartAlbumUserLibrary = 209;
  PHAssetCollectionSubtypeSmartAlbumSelfPortraits = 210 { available in ios  };
  PHAssetCollectionSubtypeSmartAlbumScreenshots = 211 { available in ios  };
  PHAssetCollectionSubtypeSmartAlbumDepthEffect = 212 { available in macos , ios , tvos  };
  PHAssetCollectionSubtypeSmartAlbumLivePhotos = 213 { available in macos , ios , tvos  };
  PHAssetCollectionSubtypeSmartAlbumAnimated = 214 { available in macos , ios , tvos  };
  PHAssetCollectionSubtypeSmartAlbumLongExposures = 215 { available in macos , ios , tvos  };
  PHAssetCollectionSubtypeSmartAlbumUnableToUpload = 216 { available in macos , ios , tvos  };
  PHAssetCollectionSubtypeAny = NSIntegerMax;

type
  PHAssetEditOperation = NSInteger;
  PHAssetEditOperationPtr = ^PHAssetEditOperation;

const
  PHAssetEditOperationDelete = 1;
  PHAssetEditOperationContent = 2;
  PHAssetEditOperationProperties = 3;

type
  PHAssetPlaybackStyle = NSInteger;
  PHAssetPlaybackStylePtr = ^PHAssetPlaybackStyle;

const
  PHAssetPlaybackStyleUnsupported = 0;
  PHAssetPlaybackStyleImage = 1;
  PHAssetPlaybackStyleImageAnimated = 2;
  PHAssetPlaybackStyleLivePhoto = 3;
  PHAssetPlaybackStyleVideo = 4;
  PHAssetPlaybackStyleVideoLooping = 5;

type
  PHAssetMediaType = NSInteger;
  PHAssetMediaTypePtr = ^PHAssetMediaType;

const
  PHAssetMediaTypeUnknown = 0;
  PHAssetMediaTypeImage = 1;
  PHAssetMediaTypeVideo = 2;
  PHAssetMediaTypeAudio = 3;

type
  PHAssetMediaSubtype = NSUInteger;
  PHAssetMediaSubtypePtr = ^PHAssetMediaSubtype;

const
  PHAssetMediaSubtypeNone = 0;
  PHAssetMediaSubtypePhotoPanorama = 1 shl 0;
  PHAssetMediaSubtypePhotoHDR = 1 shl 1;
  PHAssetMediaSubtypePhotoScreenshot = 1 shl 2 { available in ios  };
  PHAssetMediaSubtypePhotoLive = 1 shl 3 { available in ios  };
  PHAssetMediaSubtypePhotoDepthEffect = 1 shl 4 { available in macos , ios , tvos  };
  PHAssetMediaSubtypeVideoStreamed = 1 shl 16;
  PHAssetMediaSubtypeVideoHighFrameRate = 1 shl 17;
  PHAssetMediaSubtypeVideoTimelapse = 1 shl 18;

type
  PHAssetBurstSelectionType = NSUInteger;
  PHAssetBurstSelectionTypePtr = ^PHAssetBurstSelectionType;

const
  PHAssetBurstSelectionTypeNone = 0;
  PHAssetBurstSelectionTypeAutoPick = 1 shl 0;
  PHAssetBurstSelectionTypeUserPick = 1 shl 1;

type
  PHAssetSourceType = NSUInteger;
  PHAssetSourceTypePtr = ^PHAssetSourceType;

const
  PHAssetSourceTypeNone = 0;
  PHAssetSourceTypeUserLibrary = 1 shl 0;
  PHAssetSourceTypeCloudShared = 1 shl 1;
  PHAssetSourceTypeiTunesSynced = 1 shl 2;

type
  PHAssetResourceType = NSInteger;
  PHAssetResourceTypePtr = ^PHAssetResourceType;

const
  PHAssetResourceTypePhoto = 1;
  PHAssetResourceTypeVideo = 2;
  PHAssetResourceTypeAudio = 3;
  PHAssetResourceTypeAlternatePhoto = 4;
  PHAssetResourceTypeFullSizePhoto = 5;
  PHAssetResourceTypeFullSizeVideo = 6;
  PHAssetResourceTypeAdjustmentData = 7;
  PHAssetResourceTypeAdjustmentBasePhoto = 8;
  PHAssetResourceTypePairedVideo = 9 { available in ios  };
  PHAssetResourceTypeFullSizePairedVideo = 10 { available in macos , ios  };
  PHAssetResourceTypeAdjustmentBasePairedVideo = 11 { available in macos , ios  };
  PHAssetResourceTypeAdjustmentBaseVideo = 12 { available in macos , ios  };
{$endif}

{$endif}
