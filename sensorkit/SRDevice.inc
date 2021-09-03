{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/SRDevice.h }

{$ifdef TYPES}
type
  SRDevicePtr = ^SRDevice;
{$endif}

{$ifdef CLASSES}

type
  SRDevice = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    class function currentDevice: SRDevice; message 'currentDevice';
    function name: NSString; message 'name';
    function model: NSString; message 'model';
    function systemName: NSString; message 'systemName';
    function systemVersion: NSString; message 'systemVersion';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

