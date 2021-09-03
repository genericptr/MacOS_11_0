{ Parsed from ImageCaptureCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ImageCaptureCore.framework/Headers/ICScannerBandData.h }

{$ifdef TYPES}
type
  ICScannerBandDataPtr = ^ICScannerBandData;
{$endif}

{$ifdef CLASSES}

type
  ICScannerBandData = objcclass external (NSObject)
  public
    function fullImageWidth: NSUInteger; message 'fullImageWidth'; { unavailable in ios }
    function fullImageHeight: NSUInteger; message 'fullImageHeight'; { unavailable in ios }
    function bitsPerPixel: NSUInteger; message 'bitsPerPixel'; { unavailable in ios }
    function bitsPerComponent: NSUInteger; message 'bitsPerComponent'; { unavailable in ios }
    function numComponents: NSUInteger; message 'numComponents'; { unavailable in ios }
    function isBigEndian: objcbool; message 'isBigEndian'; { unavailable in ios }
    function pixelDataType: ICScannerPixelDataType; message 'pixelDataType'; { unavailable in ios }
    function colorSyncProfilePath: NSString; message 'colorSyncProfilePath'; { unavailable in ios }
    function bytesPerRow: NSUInteger; message 'bytesPerRow'; { unavailable in ios }
    function dataStartRow: NSUInteger; message 'dataStartRow'; { unavailable in ios }
    function dataNumRows: NSUInteger; message 'dataNumRows'; { unavailable in ios }
    function dataSize: NSUInteger; message 'dataSize'; { unavailable in ios }
    function dataBuffer: NSData; message 'dataBuffer'; { unavailable in ios }
  end;
{$endif}

