{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLFunctionConstantValues.h }

{$ifdef TYPES}
type
  MTLFunctionConstantValuesPtr = ^MTLFunctionConstantValues;
{$endif}

{$ifdef CLASSES}

type
  MTLFunctionConstantValues = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setConstantValue_type_atIndex (value: pointer; type_: MTLDataType; index: NSUInteger); message 'setConstantValue:type:atIndex:';
    procedure setConstantValues_type_withRange (values: pointer; type_: MTLDataType; range: NSRange); message 'setConstantValues:type:withRange:';
    procedure setConstantValue_type_withName (value: pointer; type_: MTLDataType; name: NSString); message 'setConstantValue:type:withName:';
    procedure reset; message 'reset';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

