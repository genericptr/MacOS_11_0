{ Parsed from PhotosUI.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PhotosUI.framework/Headers/PHProjectExtensionContext.h }

{$ifdef CALLBACKS}
type
  PHProjectExtensionContextUpdatedProjectInfoFromProjectInfoCallback = reference to function (updatedProjectInfo: PHProjectInfo): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHProjectExtensionContextPtr = ^PHProjectExtensionContext;
{$endif}

{$ifdef CLASSES}

type
  PHProjectExtensionContext = objcclass external (NSExtensionContext)
  public
    function photoLibrary: PHPhotoLibrary; message 'photoLibrary';
    function project: PHProject; message 'project';
    procedure showEditorForAsset (asset: PHAsset); message 'showEditorForAsset:'; { available in macos  }
    function updatedProjectInfoFromProjectInfo_completion (existingProjectInfo: PHProjectInfo; completion: PHProjectExtensionContextUpdatedProjectInfoFromProjectInfoCallback): NSProgress; message 'updatedProjectInfoFromProjectInfo:completion:'; { available in macos  }
  end;
{$endif}

