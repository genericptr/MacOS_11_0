{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHProjectChangeRequest.h }

{ Types from PHProjectChangeRequest }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  PHProjectChangeRequestPtr = ^PHProjectChangeRequest;
{$endif}

{$ifdef CLASSES}

type
  PHProjectChangeRequest = objcclass external (PHChangeRequest)
  public
    function initWithProject (project: PHProject): id; message 'initWithProject:';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setProjectExtensionData(newValue: NSData); message 'setProjectExtensionData:';
    function projectExtensionData: NSData; message 'projectExtensionData';
    procedure setKeyAsset (keyAsset: PHAsset); message 'setKeyAsset:'; { unavailable in ios, macCatalyst, tvos }
    {$if defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MACCATALYST)}
    procedure setProjectPreviewImage (previewImage: UIImage); message 'setProjectPreviewImage:';
    {$else}
    procedure setProjectPreviewImage (previewImage: NSImage); message 'setProjectPreviewImage:'; { available in macos  }
    {$endif}
    procedure removeAssets (assets: id); message 'removeAssets:'; { available in macos  }
  end;
{$endif}

