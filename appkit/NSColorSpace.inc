{ Parsed from AppKit.framework NSColorSpace.h }

{$ifdef TYPES}
type
  NSColorSpacePtr = ^NSColorSpace;
{$endif}

{$ifdef TYPES}
type
  NSColorSpaceModel = NSInteger;
  NSColorSpaceModelPtr = ^NSColorSpaceModel;

const
  NSColorSpaceModelUnknown = -1;
  NSColorSpaceModelGray = 0;
  NSColorSpaceModelRGB = 1;
  NSColorSpaceModelCMYK = 2;
  NSColorSpaceModelLAB = 3;
  NSColorSpaceModelDeviceN = 4;
  NSColorSpaceModelIndexed = 5;
  NSColorSpaceModelPatterned = 6;
{$endif}

{$ifdef CLASSES}

type
  NSColorSpace = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function initWithICCProfileData (iccData: NSData): id; message 'initWithICCProfileData:';
    function ICCProfileData: NSData; message 'ICCProfileData';
    function initWithColorSyncProfile (prof: pointer): id; message 'initWithColorSyncProfile:';
    function colorSyncProfile: pointer; message 'colorSyncProfile';
    function initWithCGColorSpace (cgColorSpace: CGColorSpaceRef): id; message 'initWithCGColorSpace:'; { available in macos 10.5 }
    function CGColorSpace: CGColorSpaceRef; message 'CGColorSpace'; { available in macos 10.5 }
    function numberOfColorComponents: NSInteger; message 'numberOfColorComponents';
    function colorSpaceModel: NSColorSpaceModel; message 'colorSpaceModel';
    function localizedName: NSString; message 'localizedName';
    class function sRGBColorSpace: NSColorSpace; message 'sRGBColorSpace'; { available in macos 10.5 }
    class function genericGamma22GrayColorSpace: NSColorSpace; message 'genericGamma22GrayColorSpace'; { available in macos 10.6 }
    class function extendedSRGBColorSpace: NSColorSpace; message 'extendedSRGBColorSpace'; { available in macos 10.12 }
    class function extendedGenericGamma22GrayColorSpace: NSColorSpace; message 'extendedGenericGamma22GrayColorSpace'; { available in macos 10.12 }
    class function displayP3ColorSpace: NSColorSpace; message 'displayP3ColorSpace'; { available in macos 10.12 }
    class function adobeRGB1998ColorSpace: NSColorSpace; message 'adobeRGB1998ColorSpace'; { available in macos 10.5 }
    class function genericRGBColorSpace: NSColorSpace; message 'genericRGBColorSpace';
    class function genericGrayColorSpace: NSColorSpace; message 'genericGrayColorSpace';
    class function genericCMYKColorSpace: NSColorSpace; message 'genericCMYKColorSpace';
    class function deviceRGBColorSpace: NSColorSpace; message 'deviceRGBColorSpace';
    class function deviceGrayColorSpace: NSColorSpace; message 'deviceGrayColorSpace';
    class function deviceCMYKColorSpace: NSColorSpace; message 'deviceCMYKColorSpace';
    class function availableColorSpacesWithModel (model: NSColorSpaceModel): NSArray; message 'availableColorSpacesWithModel:'; { available in macos 10.6 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
const
  NSUnknownColorSpaceModel = NSColorSpaceModelUnknown deprecated 'replace with NSColorSpaceModelUnknown';
  NSGrayColorSpaceModel = NSColorSpaceModelGray deprecated 'replace with NSColorSpaceModelGray';
  NSRGBColorSpaceModel = NSColorSpaceModelRGB deprecated 'replace with NSColorSpaceModelRGB';
  NSCMYKColorSpaceModel = NSColorSpaceModelCMYK deprecated 'replace with NSColorSpaceModelCMYK';
  NSLABColorSpaceModel = NSColorSpaceModelLAB deprecated 'replace with NSColorSpaceModelLAB';
  NSDeviceNColorSpaceModel = NSColorSpaceModelDeviceN deprecated 'replace with NSColorSpaceModelDeviceN';
  NSIndexedColorSpaceModel = NSColorSpaceModelIndexed deprecated 'replace with NSColorSpaceModelIndexed';
  NSPatternColorSpaceModel = NSColorSpaceModelPatterned deprecated 'replace with NSColorSpaceModelPatterned';
{$endif}

