{ Parsed from SpriteKit.framework SKWarpGeometry.h }

{ Types from SKWarpGeometryGrid }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  SKWarpGeometryPtr = ^SKWarpGeometry;
  SKWarpGeometryGridPtr = ^SKWarpGeometryGrid;
  SKWarpableProtocolPtr = ^SKWarpableProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SKWarpableProtocol = objcprotocol external name 'SKWarpable' (NSObjectProtocol)
    procedure setWarpGeometry(newValue: SKWarpGeometry); message 'setWarpGeometry:';
    function warpGeometry: SKWarpGeometry; message 'warpGeometry';
    procedure setSubdivisionLevels(newValue: NSInteger); message 'setSubdivisionLevels:';
    function subdivisionLevels: NSInteger; message 'subdivisionLevels';
  end;
{$endif}

{$ifdef CLASSES}

type
  SKWarpGeometry = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  SKWarpGeometryGrid = objcclass external (SKWarpGeometry, NSSecureCodingProtocol)
  public
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function grid: id; message 'grid';
    class function gridWithColumns_rows (cols: NSInteger; rows: NSInteger): id; message 'gridWithColumns:rows:';
    {$if ((defined(SWIFT_SDK_OVERLAY_SPRITEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_SPRITEKIT_EPOCH >= 1))}
    class function gridWithColumns_rows_sourcePositions_destPositions (cols: NSInteger; rows: NSInteger; sourcePositions: vector_float2Ptr; destPositions: vector_float2Ptr): id; message 'gridWithColumns:rows:sourcePositions:destPositions:';
    function initWithColumns_rows_sourcePositions_destPositions (cols: NSInteger; rows: NSInteger; sourcePositions: vector_float2Ptr; destPositions: vector_float2Ptr): id; message 'initWithColumns:rows:sourcePositions:destPositions:'; { NS_DESIGNATED_INITIALIZER }
    {$else}
    class function gridWithColumns_rows_sourcePositions_destPositions (cols: NSInteger; rows: NSInteger; sourcePositions: vector_float2Ptr; destPositions: vector_float2Ptr): id; message 'gridWithColumns:rows:sourcePositions:destPositions:';
    function initWithColumns_rows_sourcePositions_destPositions (cols: NSInteger; rows: NSInteger; sourcePositions: vector_float2Ptr; destPositions: vector_float2Ptr): id; message 'initWithColumns:rows:sourcePositions:destPositions:'; { NS_DESIGNATED_INITIALIZER }
    {$endif}
    function numberOfColumns: NSInteger; message 'numberOfColumns';
    function numberOfRows: NSInteger; message 'numberOfRows';
    function vertexCount: NSInteger; message 'vertexCount';
    function sourcePositionAtIndex (index: NSInteger): vector_float2; message 'sourcePositionAtIndex:';
    function destPositionAtIndex (index: NSInteger): vector_float2; message 'destPositionAtIndex:';
    {$if ((defined(SWIFT_SDK_OVERLAY_SPRITEKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_SPRITEKIT_EPOCH >= 1))}
    function gridByReplacingSourcePositions (sourcePositions: vector_float2Ptr): id; message 'gridByReplacingSourcePositions:';
    function gridByReplacingDestPositions (destPositions: vector_float2Ptr): id; message 'gridByReplacingDestPositions:';
    {$else}
    function gridByReplacingSourcePositions (sourcePositions: vector_float2Ptr): id; message 'gridByReplacingSourcePositions:';
    function gridByReplacingDestPositions (destPositions: vector_float2Ptr): id; message 'gridByReplacingDestPositions:';
    {$endif}
  end;


type
  SKWarpable = objccategory external (SKAction)
    class function warpTo_duration (warp: SKWarpGeometry; duration_: NSTimeInterval): SKAction; message 'warpTo:duration:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    class function animateWithWarps_times (warps: NSArray; times: NSArray): SKAction; message 'animateWithWarps:times:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    class function animateWithWarps_times_restore (warps: NSArray; times: NSArray; restore: objcbool): SKAction; message 'animateWithWarps:times:restore:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
  end;
{$endif}

