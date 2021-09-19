{ Parsed from Photos.framework PHAssetResource.h }

{$ifdef TYPES}
type
  PHAssetResourcePtr = ^PHAssetResource;
{$endif}

{$ifdef CLASSES}

type
  PHAssetResource = objcclass external (NSObject)
  public
    function type_: PHAssetResourceType; message 'type';
    function assetLocalIdentifier: NSString; message 'assetLocalIdentifier';
    function uniformTypeIdentifier: NSString; message 'uniformTypeIdentifier';
    function originalFilename: NSString; message 'originalFilename';
    class function assetResourcesForAsset (asset: PHAsset): NSArray; message 'assetResourcesForAsset:';
    class function assetResourcesForLivePhoto (livePhoto: PHLivePhoto): NSArray; message 'assetResourcesForLivePhoto:'; { available in ios 9.1 }
  end;
{$endif}

