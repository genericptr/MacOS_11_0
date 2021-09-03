{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHObject.h }

{$ifdef TYPES}
type
  PHObjectPtr = ^PHObject;
  PHObjectPlaceholderPtr = ^PHObjectPlaceholder;
{$endif}

{$ifdef CLASSES}

type
  PHObject = objcclass external (NSObject, NSCopyingProtocol)
  public
    function localIdentifier: NSString; message 'localIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  PHObjectPlaceholder = objcclass external (PHObject)
  end;
{$endif}

