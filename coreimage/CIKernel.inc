{ Parsed from CoreImage.framework CIKernel.h }

{$ifdef TYPES}
type
  CIKernelPtr = ^CIKernel;
  CIColorKernelPtr = ^CIColorKernel;
  CIWarpKernelPtr = ^CIWarpKernel;
  CIBlendKernelPtr = ^CIBlendKernel;
{$endif}

{$ifdef TYPES}
type
  CIKernelROICallback = reference to function (index: cint; destRect: CGRect): CGRect; cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  CIKernel = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    class function kernelsWithString (string_: NSString): NSArray; message 'kernelsWithString:'; deprecated 'in 10_4,10_14, 8_0,12_0';
    class function kernelWithString (string_: NSString): id; message 'kernelWithString:'; deprecated 'in 10_10,10_14, 8_0,12_0';
    class function kernelWithFunctionName_fromMetalLibraryData_error (name: NSString; data: NSData; error: NSErrorPtr): id; message 'kernelWithFunctionName:fromMetalLibraryData:error:'; { available in 10_13, 11_0 }
    class function kernelWithFunctionName_fromMetalLibraryData_outputPixelFormat_error (name: NSString; data: NSData; format: CIFormat; error: NSErrorPtr): id; message 'kernelWithFunctionName:fromMetalLibraryData:outputPixelFormat:error:'; { available in 10_13, 11_0 }
    class function kernelNamesFromMetalLibraryData (data: NSData): NSArray; message 'kernelNamesFromMetalLibraryData:'; { available in 11_0,14_0 }
    function name: NSString; message 'name'; { available in 10_4, 8_0 }
    procedure setROISelector (method: SEL); message 'setROISelector:'; { available in 10_4, 9_0 }
    function applyWithExtent_roiCallback_arguments (extent: CGRect; callback: CIKernelROICallback; args: NSArray): CIImage; message 'applyWithExtent:roiCallback:arguments:'; { available in 10_11, 8_0 }
  end;

type
  CIColorKernel = objcclass external (CIKernel)
  private
  public
    class function kernelWithString (string_: NSString): id; message 'kernelWithString:'; deprecated 'in 10_10,10_14, 8_0,12_0';
    function applyWithExtent_arguments (extent: CGRect; args: NSArray): CIImage; message 'applyWithExtent:arguments:';
  end;

type
  CIWarpKernel = objcclass external (CIKernel)
  private
  public
    class function kernelWithString (string_: NSString): id; message 'kernelWithString:'; deprecated 'in 10_10,10_14, 8_0,12_0';
    function applyWithExtent_roiCallback_inputImage_arguments (extent: CGRect; callback: CIKernelROICallback; image: CIImage; args: NSArray): CIImage; message 'applyWithExtent:roiCallback:inputImage:arguments:';
  end;

type
  CIBlendKernel = objcclass external (CIColorKernel)
  private
  public
    class function kernelWithString (string_: NSString): id; message 'kernelWithString:'; deprecated 'in 10_10,10_14, 8_0,12_0';
    function applyWithForeground_background (foreground: CIImage; background: CIImage): CIImage; message 'applyWithForeground:background:';
    function applyWithForeground_background_colorSpace (foreground: CIImage; background: CIImage; colorSpace: CGColorSpaceRef): CIImage; message 'applyWithForeground:background:colorSpace:'; { available in 10_15, 13_0 }
  end;


type
  BuiltIn = objccategory external (CIBlendKernel)
    class function componentAdd: CIBlendKernel; message 'componentAdd';
    class function componentMultiply: CIBlendKernel; message 'componentMultiply';
    class function componentMin: CIBlendKernel; message 'componentMin';
    class function componentMax: CIBlendKernel; message 'componentMax';
    class function clear: CIBlendKernel; message 'clear';
    class function source: CIBlendKernel; message 'source';
    class function destination: CIBlendKernel; message 'destination';
    class function sourceOver: CIBlendKernel; message 'sourceOver';
    class function destinationOver: CIBlendKernel; message 'destinationOver';
    class function sourceIn: CIBlendKernel; message 'sourceIn';
    class function destinationIn: CIBlendKernel; message 'destinationIn';
    class function sourceOut: CIBlendKernel; message 'sourceOut';
    class function destinationOut: CIBlendKernel; message 'destinationOut';
    class function sourceAtop: CIBlendKernel; message 'sourceAtop';
    class function destinationAtop: CIBlendKernel; message 'destinationAtop';
    class function exclusiveOr: CIBlendKernel; message 'exclusiveOr';
    class function multiply: CIBlendKernel; message 'multiply';
    class function screen: CIBlendKernel; message 'screen';
    class function overlay: CIBlendKernel; message 'overlay';
    class function darken: CIBlendKernel; message 'darken';
    class function lighten: CIBlendKernel; message 'lighten';
    class function colorDodge: CIBlendKernel; message 'colorDodge';
    class function colorBurn: CIBlendKernel; message 'colorBurn';
    class function hardLight: CIBlendKernel; message 'hardLight';
    class function softLight: CIBlendKernel; message 'softLight';
    class function difference: CIBlendKernel; message 'difference';
    class function exclusion: CIBlendKernel; message 'exclusion';
    class function hue: CIBlendKernel; message 'hue';
    class function saturation: CIBlendKernel; message 'saturation';
    class function color: CIBlendKernel; message 'color';
    class function luminosity: CIBlendKernel; message 'luminosity';
    class function subtract: CIBlendKernel; message 'subtract';
    class function divide: CIBlendKernel; message 'divide';
    class function linearBurn: CIBlendKernel; message 'linearBurn';
    class function linearDodge: CIBlendKernel; message 'linearDodge';
    class function vividLight: CIBlendKernel; message 'vividLight';
    class function linearLight: CIBlendKernel; message 'linearLight';
    class function pinLight: CIBlendKernel; message 'pinLight';
    class function hardMix: CIBlendKernel; message 'hardMix';
    class function darkerColor: CIBlendKernel; message 'darkerColor';
    class function lighterColor: CIBlendKernel; message 'lighterColor';
  end;
{$endif}

