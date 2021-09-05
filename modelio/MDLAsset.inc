{ Parsed from ModelIO.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ModelIO.framework/Headers/MDLAsset.h }

{$ifdef TYPES}
type
  MDLAssetPtr = ^MDLAsset;
  MDLLightProbeIrradianceDataSourceProtocolPtr = ^MDLLightProbeIrradianceDataSourceProtocol;
{$endif}

{$ifdef CLASSES}

type
  MDLAsset = objcclass external (NSObject, NSCopyingProtocol, NSFastEnumerationProtocol)
  public
    function initWithURL (URL: NSURL): id; message 'initWithURL:';
    function initWithURL_vertexDescriptor_bufferAllocator (URL: NSURL; vertexDescriptor: MDLVertexDescriptor; bufferAllocator: MDLMeshBufferAllocatorProtocol): id; message 'initWithURL:vertexDescriptor:bufferAllocator:';
    function initWithBufferAllocator (bufferAllocator: MDLMeshBufferAllocatorProtocol): id; message 'initWithBufferAllocator:';
    function initWithURL_vertexDescriptor_bufferAllocator_preserveTopology_error (URL: NSURL; vertexDescriptor: MDLVertexDescriptor; bufferAllocator: MDLMeshBufferAllocatorProtocol; preserveTopology: objcbool; error: NSErrorPtr): id; message 'initWithURL:vertexDescriptor:bufferAllocator:preserveTopology:error:';
    function exportAssetToURL (URL: NSURL): objcbool; message 'exportAssetToURL:';
    function exportAssetToURL_error (URL: NSURL; error: NSErrorPtr): objcbool; message 'exportAssetToURL:error:';
    function objectAtPath (path: NSString): MDLObject; message 'objectAtPath:'; { available in macos , ios , tvos  }
    class function canImportFileExtension (extension: NSString): objcbool; message 'canImportFileExtension:';
    class function canExportFileExtension (extension: NSString): objcbool; message 'canExportFileExtension:';
    function childObjectsOfClass (objectClass: pobjc_class): NSArray; message 'childObjectsOfClass:';
    procedure loadTextures; message 'loadTextures'; { available in macos , ios , tvos  }
    function boundingBoxAtTime (time: NSTimeInterval): MDLAxisAlignedBoundingBox; message 'boundingBoxAtTime:';
    function boundingBox: MDLAxisAlignedBoundingBox; message 'boundingBox';
    procedure setFrameInterval(newValue: NSTimeInterval); message 'setFrameInterval:';
    function frameInterval: NSTimeInterval; message 'frameInterval';
    procedure setStartTime(newValue: NSTimeInterval); message 'setStartTime:';
    function startTime: NSTimeInterval; message 'startTime';
    procedure setEndTime(newValue: NSTimeInterval); message 'setEndTime:';
    function endTime: NSTimeInterval; message 'endTime';
    procedure setUpAxis(newValue: vector_float3); message 'setUpAxis:'; { available in macos , ios , tvos  }
    function upAxis: vector_float3; message 'upAxis'; { available in macos , ios , tvos  }
    function URL: NSURL; message 'URL';
    procedure setResolver(newValue: MDLAssetResolverProtocol); message 'setResolver:'; { available in macos , ios , tvos  }
    function resolver: MDLAssetResolverProtocol; message 'resolver'; { available in macos , ios , tvos  }
    function bufferAllocator: MDLMeshBufferAllocatorProtocol; message 'bufferAllocator';
    function vertexDescriptor: MDLVertexDescriptor; message 'vertexDescriptor';
    procedure addObject (object_: MDLObject); message 'addObject:';
    procedure removeObject (object_: MDLObject); message 'removeObject:';
    function count: NSUInteger; message 'count';
    function objectAtIndexedSubscript (index: NSUInteger): MDLObject; message 'objectAtIndexedSubscript:';
    function objectAtIndex (index: NSUInteger): MDLObject; message 'objectAtIndex:';
    procedure setMasters(newValue: MDLObjectContainerComponentProtocol); message 'setMasters:';
    function masters: MDLObjectContainerComponentProtocol; message 'masters';
    procedure setAnimations(newValue: MDLObjectContainerComponentProtocol); message 'setAnimations:'; { available in macos , ios , tvos  }
    function animations: MDLObjectContainerComponentProtocol; message 'animations'; { available in macos , ios , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLLightProbeIrradianceDataSourceProtocol = objcprotocol external name 'MDLLightProbeIrradianceDataSource' (NSObjectProtocol)
    procedure setBoundingBox(newValue: MDLAxisAlignedBoundingBox); message 'setBoundingBox:';
    function boundingBox: MDLAxisAlignedBoundingBox; message 'boundingBox';
  optional
    procedure setSphericalHarmonicsLevel(newValue: NSUInteger); message 'setSphericalHarmonicsLevel:';
    function sphericalHarmonicsLevel: NSUInteger; message 'sphericalHarmonicsLevel';
    function sphericalHarmonicsCoefficientsAtPosition (position: vector_float3): NSData; message 'sphericalHarmonicsCoefficientsAtPosition:';
  end;
{$endif}

{$ifdef CLASSES}

type
  MDLAsset_MDLLightBaking = objccategory external name 'MDLLightBaking' (MDLAsset)
    class function placeLightProbesWithDensity_heuristic_usingIrradianceDataSource (value: single; type_: MDLProbePlacement; dataSource: MDLLightProbeIrradianceDataSourceProtocol): NSArray; message 'placeLightProbesWithDensity:heuristic:usingIrradianceDataSource:';
  end;
{$endif}

