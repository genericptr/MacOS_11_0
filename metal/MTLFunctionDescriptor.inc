{ Parsed from Metal.framework MTLFunctionDescriptor.h }

{$ifdef TYPES}
type
  MTLFunctionDescriptorPtr = ^MTLFunctionDescriptor;
  MTLIntersectionFunctionDescriptorPtr = ^MTLIntersectionFunctionDescriptor;
{$endif}

{$ifdef TYPES}
type
  MTLFunctionOptions = NSUInteger;
  MTLFunctionOptionsPtr = ^MTLFunctionOptions;

const
  MTLFunctionOptionNone = 0;
  MTLFunctionOptionCompileToBinary = 1 shl 0 { available in macos , ios  };
{$endif}

{$ifdef CLASSES}

type
  MTLFunctionDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function functionDescriptor: MTLFunctionDescriptor; message 'functionDescriptor';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setSpecializedName(newValue: NSString); message 'setSpecializedName:';
    function specializedName: NSString; message 'specializedName';
    procedure setConstantValues(newValue: MTLFunctionConstantValues); message 'setConstantValues:';
    function constantValues: MTLFunctionConstantValues; message 'constantValues';
    procedure setOptions(newValue: MTLFunctionOptions); message 'setOptions:';
    function options: MTLFunctionOptions; message 'options';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLIntersectionFunctionDescriptor = objcclass external (MTLFunctionDescriptor, NSCopyingProtocol)
  end;
{$endif}

