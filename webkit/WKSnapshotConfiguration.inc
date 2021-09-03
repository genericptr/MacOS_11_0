{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKSnapshotConfiguration.h }

{$ifdef TYPES}
type
  WKSnapshotConfigurationPtr = ^WKSnapshotConfiguration;
{$endif}

{$ifdef CLASSES}

type
  WKSnapshotConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setRect(newValue: CGRect); message 'setRect:';
    function rect: CGRect; message 'rect';
    procedure setSnapshotWidth(newValue: NSNumber); message 'setSnapshotWidth:';
    function snapshotWidth: NSNumber; message 'snapshotWidth';
    procedure setAfterScreenUpdates(newValue: objcbool); message 'setAfterScreenUpdates:'; { available in macos , ios  }
    function afterScreenUpdates: objcbool; message 'afterScreenUpdates'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

