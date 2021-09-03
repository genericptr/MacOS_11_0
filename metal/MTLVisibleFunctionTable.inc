{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLVisibleFunctionTable.h }

{$ifdef TYPES}
type
  MTLVisibleFunctionTableDescriptorPtr = ^MTLVisibleFunctionTableDescriptor;
  MTLVisibleFunctionTableProtocolPtr = ^MTLVisibleFunctionTableProtocol;
{$endif}

{$ifdef CLASSES}

type
  MTLVisibleFunctionTableDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function visibleFunctionTableDescriptor: MTLVisibleFunctionTableDescriptor; message 'visibleFunctionTableDescriptor';
    procedure setFunctionCount(newValue: NSUInteger); message 'setFunctionCount:';
    function functionCount: NSUInteger; message 'functionCount';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLVisibleFunctionTableProtocol = objcprotocol external name 'MTLVisibleFunctionTable' (MTLResourceProtocol)
    procedure setFunction_atIndex (function_: id; index: NSUInteger); message 'setFunction:atIndex:';
    procedure setFunctions_withRange (functions: idPtr { variable size array of id }; range: NSRange); message 'setFunctions:withRange:';
  end;
{$endif}

