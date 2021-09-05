{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLModelConfiguration.h }

{$ifdef TYPES}
type
  MLModelConfigurationPtr = ^MLModelConfiguration;
{$endif}

{$ifdef TYPES}
type
  MLComputeUnits = NSInteger;
  MLComputeUnitsPtr = ^MLComputeUnits;

const
  MLComputeUnitsCPUOnly = 0;
  MLComputeUnitsCPUAndGPU = 1;
  MLComputeUnitsAll = 2;
{$endif}

{$ifdef CLASSES}

type
  MLModelConfiguration = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    procedure setComputeUnits(newValue: MLComputeUnits); message 'setComputeUnits:';
    function computeUnits: MLComputeUnits; message 'computeUnits';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  MLGPUConfigurationOptions = objccategory external (MLModelConfiguration)
    procedure setAllowLowPrecisionAccumulationOnGPU(newValue: objcbool); message 'setAllowLowPrecisionAccumulationOnGPU:';
    function allowLowPrecisionAccumulationOnGPU: objcbool; message 'allowLowPrecisionAccumulationOnGPU';
    procedure setPreferredMetalDevice(newValue: MTLDeviceProtocol); message 'setPreferredMetalDevice:';
    function preferredMetalDevice: MTLDeviceProtocol; message 'preferredMetalDevice';
  end;

type
  MLModelParameterAdditions = objccategory external (MLModelConfiguration)
    procedure setParameters(newValue: NSDictionary); message 'setParameters:';
    function parameters: NSDictionary; message 'parameters';
  end;
{$endif}

