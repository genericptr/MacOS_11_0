{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHProject.h }

{$ifdef TYPES}
type
  PHProjectPtr = ^PHProject;
{$endif}

{$ifdef CLASSES}

type
  PHProject = objcclass external (PHAssetCollection)
  public
    function projectExtensionData: NSData; message 'projectExtensionData';
    function hasProjectPreview: objcbool; message 'hasProjectPreview';
  end;
{$endif}

