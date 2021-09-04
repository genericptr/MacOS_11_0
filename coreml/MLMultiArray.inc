{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLMultiArray.h }

{$ifdef CALLBACKS}
type
  MLMultiArrayInitWithDataPointerCallback = reference to procedure (bytes: pointer); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  MLMultiArrayPtr = ^MLMultiArray;
{$endif}

{$ifdef TYPES}
type
  MLMultiArrayDataType = NSInteger;
  MLMultiArrayDataTypePtr = ^MLMultiArrayDataType;

const
  MLMultiArrayDataTypeDouble = $10000 + 64;
  MLMultiArrayDataTypeFloat64 = $10000 + 64 { available in macos , ios , watchos , tvos  };
  MLMultiArrayDataTypeFloat32 = $10000 + 32;
  MLMultiArrayDataTypeFloat = $10000 + 32 { available in macos , ios , watchos , tvos  };
  MLMultiArrayDataTypeInt32 = $20000 + 32;
{$endif}

{$ifdef CLASSES}

type
  MLMultiArray = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function dataPointer: pointer; message 'dataPointer';
    function dataType: MLMultiArrayDataType; message 'dataType';
    function shape: NSArray; message 'shape';
    function strides: NSArray; message 'strides';
    function count: NSInteger; message 'count';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  Creation = objccategory external (MLMultiArray)
    function initWithShape_dataType_error (shape_: NSArray; dataType_: MLMultiArrayDataType; error: NSErrorPtr): id; message 'initWithShape:dataType:error:';
    function initWithDataPointer_shape_dataType_strides_deallocator_error (dataPointer_: pointer; shape_: NSArray; dataType_: MLMultiArrayDataType; strides_: NSArray; deallocator: MLMultiArrayInitWithDataPointerCallback; error: NSErrorPtr): id; message 'initWithDataPointer:shape:dataType:strides:deallocator:error:';
  end;

type
  Concatenating = objccategory external (MLMultiArray)
    class function multiArrayByConcatenatingMultiArrays_alongAxis_dataType (multiArrays: NSArray; axis: NSInteger; dataType_: MLMultiArrayDataType): id; message 'multiArrayByConcatenatingMultiArrays:alongAxis:dataType:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSNumberDataAccess = objccategory external (MLMultiArray)
    function objectAtIndexedSubscript (idx: NSInteger): NSNumber; message 'objectAtIndexedSubscript:';
    function objectForKeyedSubscript (key: NSArray): NSNumber; message 'objectForKeyedSubscript:';
    procedure setObject_atIndexedSubscript (obj: NSNumber; idx: NSInteger); message 'setObject:atIndexedSubscript:';
    procedure setObject_forKeyedSubscript (obj: NSNumber; key: NSArray); message 'setObject:forKeyedSubscript:';
  end;
{$endif}

