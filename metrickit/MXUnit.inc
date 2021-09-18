{ Parsed from MetricKit.framework MXUnit.h }

{$ifdef TYPES}
type
  MXUnitSignalBarsPtr = ^MXUnitSignalBars;
  MXUnitAveragePixelLuminancePtr = ^MXUnitAveragePixelLuminance;
{$endif}

{$ifdef CLASSES}

type
  MXUnitSignalBars = objcclass external (NSDimension)
  public
    class function bars: MXUnitSignalBars; message 'bars';
  end;

type
  MXUnitAveragePixelLuminance = objcclass external (NSDimension)
  public
    class function apl: MXUnitAveragePixelLuminance; message 'apl';
  end;
{$endif}

