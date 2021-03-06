{ Parsed from PhotosUI.framework PHProjectExtensionContext.h }

{$ifdef CALLBACKS}
type
  PHProjectExtensionContextUpdatedProjectInfoFromProjectInfoCallback = reference to procedure (updatedProjectInfo: PHProjectInfo); cblock; cdecl;
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
    procedure showEditorForAsset (asset: PHAsset); message 'showEditorForAsset:'; { available in macos 10.14 }
    function updatedProjectInfoFromProjectInfo_completion (existingProjectInfo: PHProjectInfo; completion: PHProjectExtensionContextUpdatedProjectInfoFromProjectInfoCallback): NSProgress; message 'updatedProjectInfoFromProjectInfo:completion:'; { available in macos 10.14 }
  end;
{$endif}

