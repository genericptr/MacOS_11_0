{ Parsed from Photos.framework PHProject.h }

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

