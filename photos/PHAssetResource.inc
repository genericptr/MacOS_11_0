{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHAssetResource.h }

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
    class function assetResourcesForLivePhoto (livePhoto: PHLivePhoto): NSArray; message 'assetResourcesForLivePhoto:'; { available in ios  }
  end;
{$endif}

