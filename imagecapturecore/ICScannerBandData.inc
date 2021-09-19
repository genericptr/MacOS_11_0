{ Parsed from ImageCaptureCore.framework ICScannerBandData.h }

{$ifdef TYPES}
type
  ICScannerBandDataPtr = ^ICScannerBandData;
{$endif}

{$ifdef CLASSES}

type
  ICScannerBandData = objcclass external (NSObject)
  public
    function fullImageWidth: NSUInteger; message 'fullImageWidth'; { unavailable in ios } { available in macos 10.4 }
    function fullImageHeight: NSUInteger; message 'fullImageHeight'; { unavailable in ios } { available in macos 10.4 }
    function bitsPerPixel: NSUInteger; message 'bitsPerPixel'; { unavailable in ios } { available in macos 10.4 }
    function bitsPerComponent: NSUInteger; message 'bitsPerComponent'; { unavailable in ios } { available in macos 10.4 }
    function numComponents: NSUInteger; message 'numComponents'; { unavailable in ios } { available in macos 10.4 }
    function isBigEndian: objcbool; message 'isBigEndian'; { unavailable in ios } { available in macos 10.4 }
    function pixelDataType: ICScannerPixelDataType; message 'pixelDataType'; { unavailable in ios } { available in macos 10.4 }
    function colorSyncProfilePath: NSString; message 'colorSyncProfilePath'; { unavailable in ios } { available in macos 10.4 }
    function bytesPerRow: NSUInteger; message 'bytesPerRow'; { unavailable in ios } { available in macos 10.4 }
    function dataStartRow: NSUInteger; message 'dataStartRow'; { unavailable in ios } { available in macos 10.4 }
    function dataNumRows: NSUInteger; message 'dataNumRows'; { unavailable in ios } { available in macos 10.4 }
    function dataSize: NSUInteger; message 'dataSize'; { unavailable in ios } { available in macos 10.4 }
    function dataBuffer: NSData; message 'dataBuffer'; { unavailable in ios } { available in macos 10.4 }
  end;
{$endif}

