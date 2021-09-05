{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLBuffer.h }

{$ifdef TYPES}
type
  MTLBufferProtocolPtr = ^MTLBufferProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLBufferProtocol = objcprotocol external name 'MTLBuffer' (MTLResourceProtocol)
    function length: NSUInteger; message 'length';
    function contents: pointer; message 'contents';
    procedure didModifyRange (range: NSRange); message 'didModifyRange:'; { unavailable in ios }
    function newTextureWithDescriptor_offset_bytesPerRow (descriptor: MTLTextureDescriptor; offset: NSUInteger; bytesPerRow: NSUInteger): id; message 'newTextureWithDescriptor:offset:bytesPerRow:'; { available in macos , ios  }
    procedure addDebugMarker_range (marker: NSString; range: NSRange); message 'addDebugMarker:range:'; { available in macos , ios  }
    procedure removeAllDebugMarkers; message 'removeAllDebugMarkers'; { available in macos , ios  }
    function remoteStorageBuffer: MTLBufferProtocol; message 'remoteStorageBuffer'; { unavailable in ios }
    function newRemoteBufferViewForDevice (device: MTLDeviceProtocol): id; message 'newRemoteBufferViewForDevice:'; { unavailable in ios }
  end;
{$endif}

