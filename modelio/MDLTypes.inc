{ Parsed from ModelIO.framework MDLTypes.h }

{$ifdef TYPES}
type
  MDLNamedProtocolPtr = ^MDLNamedProtocol;
  MDLComponentProtocolPtr = ^MDLComponentProtocol;
  MDLObjectContainerComponentProtocolPtr = ^MDLObjectContainerComponentProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kUTTypeAlembic: NSString { available in macos 10.11, ios 9.0, tvos 9.0 }; cvar; external;
  kUTType3dObject: NSString { available in macos 10.11, ios 9.0, tvos 9.0 }; cvar; external;
  kUTTypePolygon: NSString { available in macos 10.11, ios 9.0, tvos 9.0 }; cvar; external;
  kUTTypeStereolithography: NSString { available in macos 10.11, ios 9.0, tvos 9.0 }; cvar; external;
  kUTTypeUniversalSceneDescription: NSString { available in macos 10.12, ios 10.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MDLIndexBitDepth = NSUInteger;
  MDLIndexBitDepthPtr = ^MDLIndexBitDepth;

const
  MDLIndexBitDepthInvalid = 0;
  MDLIndexBitDepthUInt8 = 8;
  MDLIndexBitDepthUInt16 = 16;
  MDLIndexBitDepthUInt32 = 32;

type
  MDLGeometryType = NSInteger;
  MDLGeometryTypePtr = ^MDLGeometryType;

const
  MDLGeometryTypePoints = 0;
  MDLGeometryTypeLines = 1;
  MDLGeometryTypeTriangles = 2;
  MDLGeometryTypeTriangleStrips = 3;
  MDLGeometryTypeQuads = 4;
  MDLGeometryTypeVariableTopology = 5;

type
  MDLProbePlacement = NSInteger;
  MDLProbePlacementPtr = ^MDLProbePlacement;

const
  MDLProbePlacementUniformGrid = 0;
  MDLProbePlacementIrradianceDistribution = 1;

type
  MDLDataPrecision = NSUInteger;
  MDLDataPrecisionPtr = ^MDLDataPrecision;

const
  MDLDataPrecisionUndefined = 0;
  MDLDataPrecisionFloat = 1;
  MDLDataPrecisionDouble = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLNamedProtocol = objcprotocol external name 'MDLNamed'
  required
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  MDLComponentProtocol = objcprotocol external name 'MDLComponent' (NSObjectProtocol)
  end;

type
  MDLObjectContainerComponentProtocol = objcprotocol external name 'MDLObjectContainerComponent' (MDLComponentProtocol, NSFastEnumerationProtocol)
    procedure addObject (object_: MDLObject); message 'addObject:';
    procedure removeObject (object_: MDLObject); message 'removeObject:';
    function objectAtIndexedSubscript (index: NSUInteger): MDLObject; message 'objectAtIndexedSubscript:'; { available in macos , ios , tvos  }
    function count: NSUInteger; message 'count'; { available in macos , ios , tvos  }
    function objects: NSArray; message 'objects';
  end;
{$endif}

{$ifdef TYPES}
type
  MDLAxisAlignedBoundingBox = record
    maxBounds: vector_float3;
    minBounds: vector_float3;
  end;
type
  MDLAxisAlignedBoundingBoxPtr = ^MDLAxisAlignedBoundingBox;
{$endif}

