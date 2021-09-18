{ Parsed from ModelIO.framework MDLValueTypes.h }

{$ifdef TYPES}
type
  MDLMatrix4x4ArrayPtr = ^MDLMatrix4x4Array;
{$endif}

{$ifdef CLASSES}

type
  MDLMatrix4x4Array = objcclass external (NSObject, NSCopyingProtocol)
  public
    function elementCount: NSUInteger; message 'elementCount';
    function precision: MDLDataPrecision; message 'precision';
    procedure clear; message 'clear';
    function initWithElementCount (arrayElementCount: NSUInteger): id; message 'initWithElementCount:';
    procedure setFloat4x4Array_count (valuesArray: matrix_float4x4Ptr; count: NSUInteger); message 'setFloat4x4Array:count:';
    procedure setDouble4x4Array_count (valuesArray: matrix_double4x4Ptr; count: NSUInteger); message 'setDouble4x4Array:count:';
    function getFloat4x4Array_maxCount (valuesArray: matrix_float4x4Ptr; maxCount: NSUInteger): NSUInteger; message 'getFloat4x4Array:maxCount:';
    function getDouble4x4Array_maxCount (valuesArray: matrix_double4x4Ptr; maxCount: NSUInteger): NSUInteger; message 'getDouble4x4Array:maxCount:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

