{ Parsed from CoreBluetooth.framework CBPeer.h }

{$ifdef TYPES}
type
  CBPeerPtr = ^CBPeer;
{$endif}

{$ifdef CLASSES}

type
  CBPeer = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: id; message 'init';
    function identifier: NSUUID; message 'identifier'; { available in macos 10.13, ios 7.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

