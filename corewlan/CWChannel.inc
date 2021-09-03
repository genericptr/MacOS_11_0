{ Parsed from CoreWLAN.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreWLAN.framework/Headers/CWChannel.h }

{$ifdef TYPES}
type
  CWChannelPtr = ^CWChannel;
{$endif}

{$ifndef _CORE_WLAN_CHANNEL_H_}
{$ifdef CLASSES}

type
  CWChannel = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _info: NSDictionary;
  public
    function channelNumber: NSInteger; message 'channelNumber'; { available in 10_7 }
    function channelWidth: CWChannelWidth; message 'channelWidth'; { available in 10_7 }
    function channelBand: CWChannelBand; message 'channelBand'; { available in 10_7 }
    function isEqualToChannel (channel: CWChannel): objcbool; message 'isEqualToChannel:'; { available in 10_7 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}
