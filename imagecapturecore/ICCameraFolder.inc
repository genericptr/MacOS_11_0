{ Parsed from ImageCaptureCore.framework ICCameraFolder.h }

{$ifdef TYPES}
type
  ICCameraFolderPtr = ^ICCameraFolder;
{$endif}

{$ifdef CLASSES}

type
  ICCameraFolder = objcclass external (ICCameraItem)
  private
  public
    function contents: NSArray; message 'contents'; { available in macos , ios  }
  end;
{$endif}

