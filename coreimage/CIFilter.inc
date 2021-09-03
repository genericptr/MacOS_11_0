{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIFilter.h }

{$ifdef TYPES}
type
  CIFilterPtr = ^CIFilter;
  CIFilterProtocolPtr = ^CIFilterProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCIAttributeFilterName: NSString; cvar; external;
  kCIAttributeFilterDisplayName: NSString; cvar; external;
  kCIAttributeDescription: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIAttributeFilterAvailable_Mac: NSString { available in 10_11, 9_0 }; cvar; external;
  kCIAttributeFilterAvailable_iOS: NSString { available in 10_11, 9_0 }; cvar; external;
  kCIAttributeReferenceDocumentation: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIAttributeFilterCategories: NSString; cvar; external;
  kCIAttributeClass: NSString; cvar; external;
  kCIAttributeType: NSString; cvar; external;
  kCIAttributeMin: NSString; cvar; external;
  kCIAttributeMax: NSString; cvar; external;
  kCIAttributeSliderMin: NSString; cvar; external;
  kCIAttributeSliderMax: NSString; cvar; external;
  kCIAttributeDefault: NSString; cvar; external;
  kCIAttributeIdentity: NSString; cvar; external;
  kCIAttributeName: NSString; cvar; external;
  kCIAttributeDisplayName: NSString; cvar; external;
  kCIUIParameterSet: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIUISetBasic: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIUISetIntermediate: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIUISetAdvanced: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIUISetDevelopment: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIAttributeTypeTime: NSString; cvar; external;
  kCIAttributeTypeScalar: NSString; cvar; external;
  kCIAttributeTypeDistance: NSString; cvar; external;
  kCIAttributeTypeAngle: NSString; cvar; external;
  kCIAttributeTypeBoolean: NSString; cvar; external;
  kCIAttributeTypeInteger: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIAttributeTypeCount: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIAttributeTypePosition: NSString; cvar; external;
  kCIAttributeTypeOffset: NSString; cvar; external;
  kCIAttributeTypePosition3: NSString; cvar; external;
  kCIAttributeTypeRectangle: NSString; cvar; external;
  kCIAttributeTypeOpaqueColor: NSString { available in 10_4, 9_0 }; cvar; external;
  kCIAttributeTypeColor: NSString { available in 10_11, 5_0 }; cvar; external;
  kCIAttributeTypeGradient: NSString { available in 10_4, 9_0 }; cvar; external;
  kCIAttributeTypeImage: NSString { available in 10_11, 5_0 }; cvar; external;
  kCIAttributeTypeTransform: NSString { available in 10_11, 5_0 }; cvar; external;
  kCICategoryDistortionEffect: NSString; cvar; external;
  kCICategoryGeometryAdjustment: NSString; cvar; external;
  kCICategoryCompositeOperation: NSString; cvar; external;
  kCICategoryHalftoneEffect: NSString; cvar; external;
  kCICategoryColorAdjustment: NSString; cvar; external;
  kCICategoryColorEffect: NSString; cvar; external;
  kCICategoryTransition: NSString; cvar; external;
  kCICategoryTileEffect: NSString; cvar; external;
  kCICategoryGenerator: NSString; cvar; external;
  kCICategoryReduction: NSString { available in 10_5, 5_0 }; cvar; external;
  kCICategoryGradient: NSString; cvar; external;
  kCICategoryStylize: NSString; cvar; external;
  kCICategorySharpen: NSString; cvar; external;
  kCICategoryBlur: NSString; cvar; external;
  kCICategoryVideo: NSString; cvar; external;
  kCICategoryStillImage: NSString; cvar; external;
  kCICategoryInterlaced: NSString; cvar; external;
  kCICategoryNonSquarePixels: NSString; cvar; external;
  kCICategoryHighDynamicRange: NSString; cvar; external;
  kCICategoryBuiltIn: NSString; cvar; external;
  kCICategoryFilterGenerator: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIApplyOptionExtent: NSString { available in 10_4 }; cvar; external;
  kCIApplyOptionDefinition: NSString { available in 10_4 }; cvar; external;
  kCIApplyOptionUserInfo: NSString { available in 10_4 }; cvar; external;
  kCIApplyOptionColorSpace: NSString { available in 10_4 }; cvar; external;
  kCIOutputImageKey: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIInputBackgroundImageKey: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIInputImageKey: NSString { available in 10_5, 5_0 }; cvar; external;
  kCIInputDepthImageKey: NSString { available in 10_13, 11_0 }; cvar; external;
  kCIInputDisparityImageKey: NSString { available in 10_13, 11_0 }; cvar; external;
  kCIInputAmountKey: NSString { available in 10_14, 12_0 }; cvar; external;
  kCIInputTimeKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputTransformKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputScaleKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputAspectRatioKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputCenterKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputRadiusKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputAngleKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputRefractionKey: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIInputWidthKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputSharpnessKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputIntensityKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputEVKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputSaturationKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputColorKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputBrightnessKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputContrastKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputBiasKey: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIInputWeightsKey: NSString { available in 10_11, 9_0 }; cvar; external;
  kCIInputGradientImageKey: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIInputMaskImageKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputMatteImageKey: NSString { available in 10_14, 12_0 }; cvar; external;
  kCIInputShadingImageKey: NSString { available in 10_5, 9_0 }; cvar; external;
  kCIInputTargetImageKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputExtentKey: NSString { available in 10_5, 7_0 }; cvar; external;
  kCIInputVersionKey: NSString { available in 10_11, 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CIFilter = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _priv:array[0..7] of pointer;
  public
    function outputImage: CIImage; message 'outputImage'; { available in 10_10, 5_0 }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:'; { available in 10_5 }
    function isEnabled: objcbool; message 'isEnabled'; { available in 10_5 }
    function inputKeys: NSArray; message 'inputKeys';
    function outputKeys: NSArray; message 'outputKeys';
    procedure setDefaults; message 'setDefaults';
    function attributes: NSDictionary; message 'attributes';
    function apply_arguments_options (k: CIKernel; args: NSArray; dict: NSDictionary): CIImage; message 'apply:arguments:options:'; { available in 10_4 }
    function apply (k: CIKernel): CIImage; varargs; message 'apply:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CIFilterProtocol = objcprotocol external name 'CIFilter'
    function outputImage: CIImage; message 'outputImage';
  optional
    class function customAttributes: NSDictionary; message 'customAttributes';
  end;
{$endif}

{$ifdef CLASSES}

type
  CIFilterRegistry = objccategory external (CIFilter)
    class function filterWithName (name__: NSString): CIFilter; message 'filterWithName:';
    class function filterWithName_keysAndValues (name__: NSString; key0: id): CIFilter; varargs; message 'filterWithName:keysAndValues:';
    class function filterWithName_withInputParameters (name__: NSString; params: NSDictionary): CIFilter; message 'filterWithName:withInputParameters:'; { available in 10_10, 8_0 }
    class function filterNamesInCategory (category: NSString): NSArray; message 'filterNamesInCategory:';
    class function filterNamesInCategories (categories: NSArray): NSArray; message 'filterNamesInCategories:';
    class procedure registerFilterName_constructor_classAttributes (name__: NSString; anObject: id; attributes_: NSDictionary); message 'registerFilterName:constructor:classAttributes:'; { available in 10_4, 9_0 }
    class function localizedNameForFilterName (filterName: NSString): NSString; message 'localizedNameForFilterName:'; { available in 10_4, 9_0 }
    class function localizedNameForCategory (category: NSString): NSString; message 'localizedNameForCategory:'; { available in 10_4, 9_0 }
    class function localizedDescriptionForFilterName (filterName: NSString): NSString; message 'localizedDescriptionForFilterName:'; { available in 10_4, 9_0 }
    class function localizedReferenceDocumentationForFilterName (filterName: NSString): NSURL; message 'localizedReferenceDocumentationForFilterName:'; { available in 10_4, 9_0 }
  end;

type
  CIFilterXMPSerialization = objccategory external (CIFilter)
    class function serializedXMPFromFilters_inputImageExtent (filters: NSArray; extent: CGRect): NSData; message 'serializedXMPFromFilters:inputImageExtent:'; { available in 10_9, 6_0 }
    class function filterArrayFromSerializedXMP_inputImageExtent_error (xmpData: NSData; extent: CGRect; outError: NSErrorPtr): NSArray; message 'filterArrayFromSerializedXMP:inputImageExtent:error:'; { available in 10_9, 6_0 }
  end;
{$endif}

