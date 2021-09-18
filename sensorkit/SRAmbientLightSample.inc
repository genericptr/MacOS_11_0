{ Parsed from SensorKit.framework SRAmbientLightSample.h }

{$ifdef TYPES}
type
  SRAmbientLightSamplePtr = ^SRAmbientLightSample;
{$endif}

{$ifdef TYPES}
type
  SRAmbientLightSensorPlacement = NSInteger;
  SRAmbientLightSensorPlacementPtr = ^SRAmbientLightSensorPlacement;

const
  SRAmbientLightSensorPlacementUnknown = 0;
  SRAmbientLightSensorPlacementFrontTop = 1;
  SRAmbientLightSensorPlacementFrontBottom = 2;
  SRAmbientLightSensorPlacementFrontRight = 3;
  SRAmbientLightSensorPlacementFrontLeft = 4;
  SRAmbientLightSensorPlacementFrontTopRight = 5;
  SRAmbientLightSensorPlacementFrontTopLeft = 6;
  SRAmbientLightSensorPlacementFrontBottomRight = 7;
  SRAmbientLightSensorPlacementFrontBottomLeft = 8;

type
  SRAmbientLightChromaticity = record
    x: Float32;
    y: Float32;
  end;
type
  SRAmbientLightChromaticityPtr = ^SRAmbientLightChromaticity;
{$endif}

{$ifdef CLASSES}

type
  SRAmbientLightSample = objcclass external (NSObject)
  public
    function placement: SRAmbientLightSensorPlacement; message 'placement';
    function chromaticity: SRAmbientLightChromaticity; message 'chromaticity';
    function lux: NSMeasurement; message 'lux';
  end;
{$endif}

