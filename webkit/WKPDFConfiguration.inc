{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKPDFConfiguration.h }

{$ifdef TYPES}
type
  WKPDFConfigurationPtr = ^WKPDFConfiguration;
{$endif}

{$ifdef CLASSES}

type
  WKPDFConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setRect(newValue: CGRect); message 'setRect:';
    function rect: CGRect; message 'rect';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

