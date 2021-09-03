{ Parsed from ImageCaptureCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ImageCaptureCore.framework/Headers/ICCameraFolder.h }

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

