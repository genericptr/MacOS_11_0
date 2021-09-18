{ Parsed from WebKit.framework WKPDFConfiguration.h }

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

