{ Parsed from AppKit.framework NSBitmapImageRep.h }

{$ifdef TYPES}
type
  NSBitmapImageRepPtr = ^NSBitmapImageRep;
{$endif}

{$ifdef TYPES}
type
  NSTIFFCompression = NSUInteger;
  NSTIFFCompressionPtr = ^NSTIFFCompression;

const
  NSTIFFCompressionNone = 1;
  NSTIFFCompressionCCITTFAX3 = 3;
  NSTIFFCompressionCCITTFAX4 = 4;
  NSTIFFCompressionLZW = 5;
  NSTIFFCompressionJPEG = 6;
  NSTIFFCompressionNEXT = 32766;
  NSTIFFCompressionPackBits = 32773;
  NSTIFFCompressionOldJPEG = 32865;

type
  NSBitmapImageFileType = NSUInteger;
  NSBitmapImageFileTypePtr = ^NSBitmapImageFileType;

const
  NSBitmapImageFileTypeTIFF = 0;
  NSBitmapImageFileTypeBMP = 1;
  NSBitmapImageFileTypeGIF = 2;
  NSBitmapImageFileTypeJPEG = 3;
  NSBitmapImageFileTypePNG = 4;
  NSBitmapImageFileTypeJPEG2000 = 5;

type
  NSImageRepLoadStatus = NSInteger;
  NSImageRepLoadStatusPtr = ^NSImageRepLoadStatus;

const
  NSImageRepLoadStatusUnknownType = -1;
  NSImageRepLoadStatusReadingHeader = -2;
  NSImageRepLoadStatusWillNeedAllData = -3;
  NSImageRepLoadStatusInvalidData = -4;
  NSImageRepLoadStatusUnexpectedEOF = -5;
  NSImageRepLoadStatusCompleted = -6;

type
  NSBitmapFormat = NSUInteger;
  NSBitmapFormatPtr = ^NSBitmapFormat;

const
  NSBitmapFormatAlphaFirst = 1 shl 0;
  NSBitmapFormatAlphaNonpremultiplied = 1 shl 1;
  NSBitmapFormatFloatingPointSamples = 1 shl 2;
  NSBitmapFormatSixteenBitLittleEndian = 1 shl 8 { available in macos 10.10 };
  NSBitmapFormatThirtyTwoBitLittleEndian = 1 shl 9 { available in macos 10.10 };
  NSBitmapFormatSixteenBitBigEndian = 1 shl 10 { available in macos 10.10 };
  NSBitmapFormatThirtyTwoBitBigEndian = 1 shl 11 { available in macos 10.10 };

type
  NSBitmapImageRepPropertyKey = NSString;
  NSBitmapImageRepPropertyKeyPtr = ^NSBitmapImageRepPropertyKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSImageCompressionMethod: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageCompressionFactor: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageDitherTransparency: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageRGBColorTable: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageInterlaced: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageColorSyncProfileData: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageFrameCount: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageCurrentFrame: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageCurrentFrameDuration: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageLoopCount: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageGamma: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageProgressive: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageEXIFData: NSBitmapImageRepPropertyKey; cvar; external;
  NSImageFallbackBackgroundColor: NSBitmapImageRepPropertyKey { available in macos 10.5 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSBitmapImageRep = objcclass external (NSImageRep, NSSecureCodingProtocol)
  public
    function initWithFocusedViewRect (rect: NSRect): id; message 'initWithFocusedViewRect:'; deprecated 'Use -[NSView cacheDisplayInRect:toBitmapImageRep:] to snapshot a view.';
    function initWithBitmapDataPlanes_pixelsWide_pixelsHigh_bitsPerSample_samplesPerPixel_hasAlpha_isPlanar_colorSpaceName_bytesPerRow_bitsPerPixel (planes: PChar; width: NSInteger; height: NSInteger; bps: NSInteger; spp: NSInteger; alpha: objcbool; isPlanar: objcbool; colorSpaceName_: NSColorSpaceName; rBytes: NSInteger; pBits: NSInteger): id; message 'initWithBitmapDataPlanes:pixelsWide:pixelsHigh:bitsPerSample:samplesPerPixel:hasAlpha:isPlanar:colorSpaceName:bytesPerRow:bitsPerPixel:';
    function initWithBitmapDataPlanes_pixelsWide_pixelsHigh_bitsPerSample_samplesPerPixel_hasAlpha_isPlanar_colorSpaceName_bitmapFormat_bytesPerRow_bitsPerPixel (planes: PChar; width: NSInteger; height: NSInteger; bps: NSInteger; spp: NSInteger; alpha: objcbool; isPlanar: objcbool; colorSpaceName_: NSColorSpaceName; bitmapFormat: NSBitmapFormat; rBytes: NSInteger; pBits: NSInteger): id; message 'initWithBitmapDataPlanes:pixelsWide:pixelsHigh:bitsPerSample:samplesPerPixel:hasAlpha:isPlanar:colorSpaceName:bitmapFormat:bytesPerRow:bitsPerPixel:';
    function initWithCGImage (cgImage: CGImageRef): id; message 'initWithCGImage:'; { available in macos 10.5 }
    function initWithCIImage (ciImage_: CIImage): id; message 'initWithCIImage:'; { available in macos 10.5 }
    class function imageRepsWithData (data: NSData): NSArray; message 'imageRepsWithData:';
    class function imageRepWithData (data: NSData): id; message 'imageRepWithData:';
    function initWithData (data: NSData): id; message 'initWithData:';
    function bitmapData: PChar; message 'bitmapData';
    procedure getBitmapDataPlanes (data: PChar); message 'getBitmapDataPlanes:';
    function isPlanar: objcbool; message 'isPlanar';
    function samplesPerPixel: NSInteger; message 'samplesPerPixel';
    function bitsPerPixel: NSInteger; message 'bitsPerPixel';
    function bytesPerRow: NSInteger; message 'bytesPerRow';
    function bytesPerPlane: NSInteger; message 'bytesPerPlane';
    function numberOfPlanes: NSInteger; message 'numberOfPlanes';
    function bitmapFormat: NSBitmapFormat; message 'bitmapFormat';
    procedure getCompression_factor (compression: NSTIFFCompressionPtr; factor: psingle); message 'getCompression:factor:';
    procedure setCompression_factor (compression: NSTIFFCompression; factor: single); message 'setCompression:factor:';
    function TIFFRepresentation: NSData; message 'TIFFRepresentation';
    function TIFFRepresentationUsingCompression_factor (comp: NSTIFFCompression; factor: single): NSData; message 'TIFFRepresentationUsingCompression:factor:';
    class function TIFFRepresentationOfImageRepsInArray (array_: NSArray): NSData; message 'TIFFRepresentationOfImageRepsInArray:';
    class function TIFFRepresentationOfImageRepsInArray_usingCompression_factor (array_: NSArray; comp: NSTIFFCompression; factor: single): NSData; message 'TIFFRepresentationOfImageRepsInArray:usingCompression:factor:';
    class procedure getTIFFCompressionTypes_count (list: NSTIFFCompressionPtr; numTypes: NSIntegerPtr); message 'getTIFFCompressionTypes:count:';
    class function localizedNameForTIFFCompressionType (compression: NSTIFFCompression): NSString; message 'localizedNameForTIFFCompressionType:';
    function canBeCompressedUsing (compression: NSTIFFCompression): objcbool; message 'canBeCompressedUsing:';
    procedure colorizeByMappingGray_toColor_blackMapping_whiteMapping (midPoint: CGFloat; midPointColor: NSColor; shadowColor: NSColor; lightColor: NSColor); message 'colorizeByMappingGray:toColor:blackMapping:whiteMapping:';
    function initForIncrementalLoad: id; message 'initForIncrementalLoad';
    function incrementalLoadFromData_complete (data: NSData; complete: objcbool): NSInteger; message 'incrementalLoadFromData:complete:';
    procedure setColor_atX_y (color: NSColor; x: NSInteger; y: NSInteger); message 'setColor:atX:y:';
    function colorAtX_y (x: NSInteger; y: NSInteger): NSColor; message 'colorAtX:y:';
    procedure getPixel_atX_y (p: NSUIntegerPtr { variable size array of NSUInteger }; x: NSInteger; y: NSInteger); message 'getPixel:atX:y:';
    procedure setPixel_atX_y (p: NSUIntegerPtr { variable size array of NSUInteger }; x: NSInteger; y: NSInteger); message 'setPixel:atX:y:';
    function CGImage: CGImageRef; message 'CGImage'; { available in macos 10.5 }
    function colorSpace: NSColorSpace; message 'colorSpace'; { available in macos 10.6 }
    function bitmapImageRepByConvertingToColorSpace_renderingIntent (targetSpace: NSColorSpace; renderingIntent: NSColorRenderingIntent): NSBitmapImageRep; message 'bitmapImageRepByConvertingToColorSpace:renderingIntent:'; { available in macos 10.6 }
    function bitmapImageRepByRetaggingWithColorSpace (newSpace: NSColorSpace): NSBitmapImageRep; message 'bitmapImageRepByRetaggingWithColorSpace:'; { available in macos 10.6 }

    { Adopted protocols }
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSBitmapImageFileTypeExtensions = objccategory external (NSBitmapImageRep)
    class function representationOfImageRepsInArray_usingType_properties (imageReps: NSArray; storageType: NSBitmapImageFileType; properties: NSDictionary): NSData; message 'representationOfImageRepsInArray:usingType:properties:';
    function representationUsingType_properties (storageType: NSBitmapImageFileType; properties: NSDictionary): NSData; message 'representationUsingType:properties:';
    procedure setProperty_withValue (property_: NSBitmapImageRepPropertyKey; value: id); message 'setProperty:withValue:';
    function valueForProperty (property_: NSBitmapImageRepPropertyKey): id; message 'valueForProperty:';
  end;
{$endif}

{$ifdef TYPES}
const
  NSTIFFFileType = NSBitmapImageFileTypeTIFF deprecated 'replace with NSBitmapImageFileTypeTIFF';
  NSBMPFileType = NSBitmapImageFileTypeBMP deprecated 'replace with NSBitmapImageFileTypeBMP';
  NSGIFFileType = NSBitmapImageFileTypeGIF deprecated 'replace with NSBitmapImageFileTypeGIF';
  NSJPEGFileType = NSBitmapImageFileTypeJPEG deprecated 'replace with NSBitmapImageFileTypeJPEG';
  NSPNGFileType = NSBitmapImageFileTypePNG deprecated 'replace with NSBitmapImageFileTypePNG';
  NSJPEG2000FileType = NSBitmapImageFileTypeJPEG2000 deprecated 'replace with NSBitmapImageFileTypeJPEG2000';
  NSAlphaFirstBitmapFormat = NSBitmapFormatAlphaFirst deprecated 'replace with NSBitmapFormatAlphaFirst';
  NSAlphaNonpremultipliedBitmapFormat = NSBitmapFormatAlphaNonpremultiplied deprecated 'replace with NSBitmapFormatAlphaNonpremultiplied';
  NSFloatingPointSamplesBitmapFormat = NSBitmapFormatFloatingPointSamples deprecated 'replace with NSBitmapFormatFloatingPointSamples';
  NS16BitLittleEndianBitmapFormat = NSBitmapFormatSixteenBitLittleEndian deprecated 'replace with NSBitmapFormatSixteenBitLittleEndian';
  NS32BitLittleEndianBitmapFormat = NSBitmapFormatThirtyTwoBitLittleEndian deprecated 'replace with NSBitmapFormatThirtyTwoBitLittleEndian';
  NS16BitBigEndianBitmapFormat = NSBitmapFormatSixteenBitBigEndian deprecated 'replace with NSBitmapFormatSixteenBitBigEndian';
  NS32BitBigEndianBitmapFormat = NSBitmapFormatThirtyTwoBitBigEndian deprecated 'replace with NSBitmapFormatThirtyTwoBitBigEndian';
{$endif}

