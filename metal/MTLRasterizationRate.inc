{ Parsed from Metal.framework MTLRasterizationRate.h }

{$ifdef TYPES}
type
  MTLRasterizationRateSampleArrayPtr = ^MTLRasterizationRateSampleArray;
  MTLRasterizationRateLayerDescriptorPtr = ^MTLRasterizationRateLayerDescriptor;
  MTLRasterizationRateLayerArrayPtr = ^MTLRasterizationRateLayerArray;
  MTLRasterizationRateMapDescriptorPtr = ^MTLRasterizationRateMapDescriptor;
  MTLRasterizationRateMapProtocolPtr = ^MTLRasterizationRateMapProtocol;
{$endif}

{$ifdef CLASSES}

type
  MTLRasterizationRateSampleArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (index: NSUInteger): NSNumber; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (value: NSNumber; index: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLRasterizationRateLayerDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: id; message 'init'; { unavailable in macos, ios }
    function initWithSampleCount (sampleCount: MTLSize): id; message 'initWithSampleCount:'; { NS_DESIGNATED_INITIALIZER }
    function initWithSampleCount_horizontal_vertical (sampleCount: MTLSize; horizontal: psingle; vertical: psingle): id; message 'initWithSampleCount:horizontal:vertical:';
    function sampleCount: MTLSize; message 'sampleCount';
    function horizontalSampleStorage: psingle; message 'horizontalSampleStorage';
    function verticalSampleStorage: psingle; message 'verticalSampleStorage';
    function horizontal: MTLRasterizationRateSampleArray; message 'horizontal';
    function vertical: MTLRasterizationRateSampleArray; message 'vertical';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLRasterizationRateLayerArray = objcclass external (NSObject)
  public
    function objectAtIndexedSubscript (layerIndex: NSUInteger): MTLRasterizationRateLayerDescriptor; message 'objectAtIndexedSubscript:';
    procedure setObject_atIndexedSubscript (layer: MTLRasterizationRateLayerDescriptor; layerIndex: NSUInteger); message 'setObject:atIndexedSubscript:';
  end;

type
  MTLRasterizationRateMapDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function rasterizationRateMapDescriptorWithScreenSize (screenSize: MTLSize): MTLRasterizationRateMapDescriptor; message 'rasterizationRateMapDescriptorWithScreenSize:';
    class function rasterizationRateMapDescriptorWithScreenSize_layer (screenSize: MTLSize; layer: MTLRasterizationRateLayerDescriptor): MTLRasterizationRateMapDescriptor; message 'rasterizationRateMapDescriptorWithScreenSize:layer:';
    class function rasterizationRateMapDescriptorWithScreenSize_layerCount_layers (screenSize: MTLSize; layerCount: NSUInteger; layers: MTLRasterizationRateLayerDescriptorPtr): MTLRasterizationRateMapDescriptor; message 'rasterizationRateMapDescriptorWithScreenSize:layerCount:layers:';
    function layerAtIndex (layerIndex: NSUInteger): MTLRasterizationRateLayerDescriptor; message 'layerAtIndex:';
    procedure setLayer_atIndex (layer: MTLRasterizationRateLayerDescriptor; layerIndex: NSUInteger); message 'setLayer:atIndex:';
    function layers: MTLRasterizationRateLayerArray; message 'layers';
    procedure setScreenSize(newValue: MTLSize); message 'setScreenSize:';
    function screenSize: MTLSize; message 'screenSize';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function layerCount: NSUInteger; message 'layerCount';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLRasterizationRateMapProtocol = objcprotocol external name 'MTLRasterizationRateMap' (NSObjectProtocol)
    function device: id; message 'device';
    function label_: NSString; message 'label';
    function screenSize: MTLSize; message 'screenSize';
    function physicalGranularity: MTLSize; message 'physicalGranularity';
    function layerCount: NSUInteger; message 'layerCount';
    function parameterBufferSizeAndAlign: MTLSizeAndAlign; message 'parameterBufferSizeAndAlign';
    procedure copyParameterDataToBuffer_offset (buffer: id; offset: NSUInteger); message 'copyParameterDataToBuffer:offset:';
    function physicalSizeForLayer (layerIndex: NSUInteger): MTLSize; message 'physicalSizeForLayer:';
    function mapScreenToPhysicalCoordinates_forLayer (screenCoordinates: MTLCoordinate2D; layerIndex: NSUInteger): MTLCoordinate2D; message 'mapScreenToPhysicalCoordinates:forLayer:';
    function mapPhysicalToScreenCoordinates_forLayer (physicalCoordinates: MTLCoordinate2D; layerIndex: NSUInteger): MTLCoordinate2D; message 'mapPhysicalToScreenCoordinates:forLayer:';
  end;
{$endif}

