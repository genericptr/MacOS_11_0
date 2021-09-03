{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIImageAccumulator.h }

{$ifdef TYPES}
type
  CIImageAccumulatorPtr = ^CIImageAccumulator;
{$endif}

{$ifdef CLASSES}

type
  CIImageAccumulator = objcclass external (NSObject)
  private
    _state: pointer;
  public
    class function imageAccumulatorWithExtent_format (extent: CGRect; format: CIFormat): id; message 'imageAccumulatorWithExtent:format:';
    class function imageAccumulatorWithExtent_format_colorSpace (extent: CGRect; format: CIFormat; colorSpace: CGColorSpaceRef): id; message 'imageAccumulatorWithExtent:format:colorSpace:'; { available in 10_7, 9_0 }
    function initWithExtent_format (extent: CGRect; format: CIFormat): id; message 'initWithExtent:format:';
    function initWithExtent_format_colorSpace (extent: CGRect; format: CIFormat; colorSpace: CGColorSpaceRef): id; message 'initWithExtent:format:colorSpace:'; { available in 10_7, 9_0 }
    function extent: CGRect; message 'extent';
    function format: CIFormat; message 'format';
    function image: CIImage; message 'image';
    procedure setImage (image_: CIImage); message 'setImage:';
    procedure setImage_dirtyRect (image_: CIImage; dirtyRect: CGRect); message 'setImage:dirtyRect:';
    procedure clear; message 'clear';
  end;
{$endif}

