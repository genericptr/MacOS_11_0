{ Parsed from Metal.framework MTLBuffer.h }

{$ifdef TYPES}
type
  MTLBufferProtocolPtr = ^MTLBufferProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLBufferProtocol = objcprotocol external name 'MTLBuffer' (MTLResourceProtocol)
    function length: NSUInteger; message 'length';
    function contents: pointer; message 'contents';
    procedure didModifyRange (range: NSRange); message 'didModifyRange:'; { unavailable in ios } { available in macos 10.11, macCatalyst 13.0 }
    function newTextureWithDescriptor_offset_bytesPerRow (descriptor: MTLTextureDescriptor; offset: NSUInteger; bytesPerRow: NSUInteger): id; message 'newTextureWithDescriptor:offset:bytesPerRow:'; { available in macos 10.13, ios 8.0 }
    procedure addDebugMarker_range (marker: NSString; range: NSRange); message 'addDebugMarker:range:'; { available in macos 10.12, ios 10.0 }
    procedure removeAllDebugMarkers; message 'removeAllDebugMarkers'; { available in macos 10.12, ios 10.0 }
    function remoteStorageBuffer: MTLBufferProtocol; message 'remoteStorageBuffer'; { unavailable in ios } { available in macos 10.15 }
    function newRemoteBufferViewForDevice (device: MTLDeviceProtocol): id; message 'newRemoteBufferViewForDevice:'; { unavailable in ios } { available in macos 10.15 }
  end;
{$endif}

