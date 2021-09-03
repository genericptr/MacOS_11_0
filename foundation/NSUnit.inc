{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSUnit.h }

{$ifdef TYPES}
type
  NSUnitConverterPtr = ^NSUnitConverter;
  NSUnitConverterLinearPtr = ^NSUnitConverterLinear;
  NSUnitPtr = ^NSUnit;
  NSDimensionPtr = ^NSDimension;
  NSUnitAccelerationPtr = ^NSUnitAcceleration;
  NSUnitAnglePtr = ^NSUnitAngle;
  NSUnitAreaPtr = ^NSUnitArea;
  NSUnitConcentrationMassPtr = ^NSUnitConcentrationMass;
  NSUnitDispersionPtr = ^NSUnitDispersion;
  NSUnitDurationPtr = ^NSUnitDuration;
  NSUnitElectricChargePtr = ^NSUnitElectricCharge;
  NSUnitElectricCurrentPtr = ^NSUnitElectricCurrent;
  NSUnitElectricPotentialDifferencePtr = ^NSUnitElectricPotentialDifference;
  NSUnitElectricResistancePtr = ^NSUnitElectricResistance;
  NSUnitEnergyPtr = ^NSUnitEnergy;
  NSUnitFrequencyPtr = ^NSUnitFrequency;
  NSUnitFuelEfficiencyPtr = ^NSUnitFuelEfficiency;
  NSUnitInformationStoragePtr = ^NSUnitInformationStorage;
  NSUnitLengthPtr = ^NSUnitLength;
  NSUnitIlluminancePtr = ^NSUnitIlluminance;
  NSUnitMassPtr = ^NSUnitMass;
  NSUnitPowerPtr = ^NSUnitPower;
  NSUnitPressurePtr = ^NSUnitPressure;
  NSUnitSpeedPtr = ^NSUnitSpeed;
  NSUnitTemperaturePtr = ^NSUnitTemperature;
  NSUnitVolumePtr = ^NSUnitVolume;
{$endif}

{$ifdef CLASSES}

type
  NSUnitConverter = objcclass external (NSObject)
  public
    function baseUnitValueFromValue (value: double): double; message 'baseUnitValueFromValue:';
    function valueFromBaseUnitValue (baseUnitValue: double): double; message 'valueFromBaseUnitValue:';
  end;

type
  NSUnitConverterLinear = objcclass external (NSUnitConverter, NSSecureCodingProtocol)
  private
    _coefficient: double;
    _constant: double;
  public
    function coefficient: double; message 'coefficient';
    function constant: double; message 'constant';
    function initWithCoefficient (coefficient_: double): id; message 'initWithCoefficient:';
    function initWithCoefficient_constant (coefficient_: double; constant_: double): id; message 'initWithCoefficient:constant:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSUnit = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _symbol: NSString;
  public
    function symbol: NSString; message 'symbol';
    function init: id; message 'init'; { unavailable in macos, ios, watchos, tvos }
    class function new_: id; message 'new'; { unavailable in macos, ios, watchos, tvos }
    function initWithSymbol (symbol_: NSString): id; message 'initWithSymbol:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;

type
  NSDimension = objcclass external (NSUnit, NSSecureCodingProtocol)
  private
    _reserved: NSUInteger;
    _converter: NSUnitConverter;
  public
    function converter: NSUnitConverter; message 'converter';
    function initWithSymbol_converter (symbol_: NSString; converter_: NSUnitConverter): id; message 'initWithSymbol:converter:'; { NS_DESIGNATED_INITIALIZER }
    class function baseUnit: id; message 'baseUnit';
  end;

type
  NSUnitAcceleration = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function metersPerSecondSquared: NSUnitAcceleration; message 'metersPerSecondSquared';
    class function gravity: NSUnitAcceleration; message 'gravity';
  end;

type
  NSUnitAngle = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function degrees: NSUnitAngle; message 'degrees';
    class function arcMinutes: NSUnitAngle; message 'arcMinutes';
    class function arcSeconds: NSUnitAngle; message 'arcSeconds';
    class function radians: NSUnitAngle; message 'radians';
    class function gradians: NSUnitAngle; message 'gradians';
    class function revolutions: NSUnitAngle; message 'revolutions';
  end;

type
  NSUnitArea = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function squareMegameters: NSUnitArea; message 'squareMegameters';
    class function squareKilometers: NSUnitArea; message 'squareKilometers';
    class function squareMeters: NSUnitArea; message 'squareMeters';
    class function squareCentimeters: NSUnitArea; message 'squareCentimeters';
    class function squareMillimeters: NSUnitArea; message 'squareMillimeters';
    class function squareMicrometers: NSUnitArea; message 'squareMicrometers';
    class function squareNanometers: NSUnitArea; message 'squareNanometers';
    class function squareInches: NSUnitArea; message 'squareInches';
    class function squareFeet: NSUnitArea; message 'squareFeet';
    class function squareYards: NSUnitArea; message 'squareYards';
    class function squareMiles: NSUnitArea; message 'squareMiles';
    class function acres: NSUnitArea; message 'acres';
    class function ares: NSUnitArea; message 'ares';
    class function hectares: NSUnitArea; message 'hectares';
  end;

type
  NSUnitConcentrationMass = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function gramsPerLiter: NSUnitConcentrationMass; message 'gramsPerLiter';
    class function milligramsPerDeciliter: NSUnitConcentrationMass; message 'milligramsPerDeciliter';
    class function millimolesPerLiterWithGramsPerMole (gramsPerMole: double): NSUnitConcentrationMass; message 'millimolesPerLiterWithGramsPerMole:';
  end;

type
  NSUnitDispersion = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function partsPerMillion: NSUnitDispersion; message 'partsPerMillion';
  end;

type
  NSUnitDuration = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function hours: NSUnitDuration; message 'hours';
    class function minutes: NSUnitDuration; message 'minutes';
    class function seconds: NSUnitDuration; message 'seconds';
    class function milliseconds: NSUnitDuration; message 'milliseconds'; { available in macos , ios , tvos , watchos  }
    class function microseconds: NSUnitDuration; message 'microseconds'; { available in macos , ios , tvos , watchos  }
    class function nanoseconds: NSUnitDuration; message 'nanoseconds'; { available in macos , ios , tvos , watchos  }
    class function picoseconds: NSUnitDuration; message 'picoseconds'; { available in macos , ios , tvos , watchos  }
  end;

type
  NSUnitElectricCharge = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function coulombs: NSUnitElectricCharge; message 'coulombs';
    class function megaampereHours: NSUnitElectricCharge; message 'megaampereHours';
    class function kiloampereHours: NSUnitElectricCharge; message 'kiloampereHours';
    class function ampereHours: NSUnitElectricCharge; message 'ampereHours';
    class function milliampereHours: NSUnitElectricCharge; message 'milliampereHours';
    class function microampereHours: NSUnitElectricCharge; message 'microampereHours';
  end;

type
  NSUnitElectricCurrent = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function megaamperes: NSUnitElectricCurrent; message 'megaamperes';
    class function kiloamperes: NSUnitElectricCurrent; message 'kiloamperes';
    class function amperes: NSUnitElectricCurrent; message 'amperes';
    class function milliamperes: NSUnitElectricCurrent; message 'milliamperes';
    class function microamperes: NSUnitElectricCurrent; message 'microamperes';
  end;

type
  NSUnitElectricPotentialDifference = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function megavolts: NSUnitElectricPotentialDifference; message 'megavolts';
    class function kilovolts: NSUnitElectricPotentialDifference; message 'kilovolts';
    class function volts: NSUnitElectricPotentialDifference; message 'volts';
    class function millivolts: NSUnitElectricPotentialDifference; message 'millivolts';
    class function microvolts: NSUnitElectricPotentialDifference; message 'microvolts';
  end;

type
  NSUnitElectricResistance = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function megaohms: NSUnitElectricResistance; message 'megaohms';
    class function kiloohms: NSUnitElectricResistance; message 'kiloohms';
    class function ohms: NSUnitElectricResistance; message 'ohms';
    class function milliohms: NSUnitElectricResistance; message 'milliohms';
    class function microohms: NSUnitElectricResistance; message 'microohms';
  end;

type
  NSUnitEnergy = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function kilojoules: NSUnitEnergy; message 'kilojoules';
    class function joules: NSUnitEnergy; message 'joules';
    class function kilocalories: NSUnitEnergy; message 'kilocalories';
    class function calories: NSUnitEnergy; message 'calories';
    class function kilowattHours: NSUnitEnergy; message 'kilowattHours';
  end;

type
  NSUnitFrequency = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function terahertz: NSUnitFrequency; message 'terahertz';
    class function gigahertz: NSUnitFrequency; message 'gigahertz';
    class function megahertz: NSUnitFrequency; message 'megahertz';
    class function kilohertz: NSUnitFrequency; message 'kilohertz';
    class function hertz: NSUnitFrequency; message 'hertz';
    class function millihertz: NSUnitFrequency; message 'millihertz';
    class function microhertz: NSUnitFrequency; message 'microhertz';
    class function nanohertz: NSUnitFrequency; message 'nanohertz';
    class function framesPerSecond: NSUnitFrequency; message 'framesPerSecond'; { available in macos , ios , tvos , watchos  }
  end;

type
  NSUnitFuelEfficiency = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function litersPer100Kilometers: NSUnitFuelEfficiency; message 'litersPer100Kilometers';
    class function milesPerImperialGallon: NSUnitFuelEfficiency; message 'milesPerImperialGallon';
    class function milesPerGallon: NSUnitFuelEfficiency; message 'milesPerGallon';
  end;

type
  NSUnitInformationStorage = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function bytes: NSUnitInformationStorage; message 'bytes';
    class function bits: NSUnitInformationStorage; message 'bits';
    class function nibbles: NSUnitInformationStorage; message 'nibbles';
    class function yottabytes: NSUnitInformationStorage; message 'yottabytes';
    class function zettabytes: NSUnitInformationStorage; message 'zettabytes';
    class function exabytes: NSUnitInformationStorage; message 'exabytes';
    class function petabytes: NSUnitInformationStorage; message 'petabytes';
    class function terabytes: NSUnitInformationStorage; message 'terabytes';
    class function gigabytes: NSUnitInformationStorage; message 'gigabytes';
    class function megabytes: NSUnitInformationStorage; message 'megabytes';
    class function kilobytes: NSUnitInformationStorage; message 'kilobytes';
    class function yottabits: NSUnitInformationStorage; message 'yottabits';
    class function zettabits: NSUnitInformationStorage; message 'zettabits';
    class function exabits: NSUnitInformationStorage; message 'exabits';
    class function petabits: NSUnitInformationStorage; message 'petabits';
    class function terabits: NSUnitInformationStorage; message 'terabits';
    class function gigabits: NSUnitInformationStorage; message 'gigabits';
    class function megabits: NSUnitInformationStorage; message 'megabits';
    class function kilobits: NSUnitInformationStorage; message 'kilobits';
    class function yobibytes: NSUnitInformationStorage; message 'yobibytes';
    class function zebibytes: NSUnitInformationStorage; message 'zebibytes';
    class function exbibytes: NSUnitInformationStorage; message 'exbibytes';
    class function pebibytes: NSUnitInformationStorage; message 'pebibytes';
    class function tebibytes: NSUnitInformationStorage; message 'tebibytes';
    class function gibibytes: NSUnitInformationStorage; message 'gibibytes';
    class function mebibytes: NSUnitInformationStorage; message 'mebibytes';
    class function kibibytes: NSUnitInformationStorage; message 'kibibytes';
    class function yobibits: NSUnitInformationStorage; message 'yobibits';
    class function zebibits: NSUnitInformationStorage; message 'zebibits';
    class function exbibits: NSUnitInformationStorage; message 'exbibits';
    class function pebibits: NSUnitInformationStorage; message 'pebibits';
    class function tebibits: NSUnitInformationStorage; message 'tebibits';
    class function gibibits: NSUnitInformationStorage; message 'gibibits';
    class function mebibits: NSUnitInformationStorage; message 'mebibits';
    class function kibibits: NSUnitInformationStorage; message 'kibibits';
  end;

type
  NSUnitLength = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function megameters: NSUnitLength; message 'megameters';
    class function kilometers: NSUnitLength; message 'kilometers';
    class function hectometers: NSUnitLength; message 'hectometers';
    class function decameters: NSUnitLength; message 'decameters';
    class function meters: NSUnitLength; message 'meters';
    class function decimeters: NSUnitLength; message 'decimeters';
    class function centimeters: NSUnitLength; message 'centimeters';
    class function millimeters: NSUnitLength; message 'millimeters';
    class function micrometers: NSUnitLength; message 'micrometers';
    class function nanometers: NSUnitLength; message 'nanometers';
    class function picometers: NSUnitLength; message 'picometers';
    class function inches: NSUnitLength; message 'inches';
    class function feet: NSUnitLength; message 'feet';
    class function yards: NSUnitLength; message 'yards';
    class function miles: NSUnitLength; message 'miles';
    class function scandinavianMiles: NSUnitLength; message 'scandinavianMiles';
    class function lightyears: NSUnitLength; message 'lightyears';
    class function nauticalMiles: NSUnitLength; message 'nauticalMiles';
    class function fathoms: NSUnitLength; message 'fathoms';
    class function furlongs: NSUnitLength; message 'furlongs';
    class function astronomicalUnits: NSUnitLength; message 'astronomicalUnits';
    class function parsecs: NSUnitLength; message 'parsecs';
  end;

type
  NSUnitIlluminance = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function lux: NSUnitIlluminance; message 'lux';
  end;

type
  NSUnitMass = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function kilograms: NSUnitMass; message 'kilograms';
    class function grams: NSUnitMass; message 'grams';
    class function decigrams: NSUnitMass; message 'decigrams';
    class function centigrams: NSUnitMass; message 'centigrams';
    class function milligrams: NSUnitMass; message 'milligrams';
    class function micrograms: NSUnitMass; message 'micrograms';
    class function nanograms: NSUnitMass; message 'nanograms';
    class function picograms: NSUnitMass; message 'picograms';
    class function ounces: NSUnitMass; message 'ounces';
    class function poundsMass: NSUnitMass; message 'poundsMass';
    class function stones: NSUnitMass; message 'stones';
    class function metricTons: NSUnitMass; message 'metricTons';
    class function shortTons: NSUnitMass; message 'shortTons';
    class function carats: NSUnitMass; message 'carats';
    class function ouncesTroy: NSUnitMass; message 'ouncesTroy';
    class function slugs: NSUnitMass; message 'slugs';
  end;

type
  NSUnitPower = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function terawatts: NSUnitPower; message 'terawatts';
    class function gigawatts: NSUnitPower; message 'gigawatts';
    class function megawatts: NSUnitPower; message 'megawatts';
    class function kilowatts: NSUnitPower; message 'kilowatts';
    class function watts: NSUnitPower; message 'watts';
    class function milliwatts: NSUnitPower; message 'milliwatts';
    class function microwatts: NSUnitPower; message 'microwatts';
    class function nanowatts: NSUnitPower; message 'nanowatts';
    class function picowatts: NSUnitPower; message 'picowatts';
    class function femtowatts: NSUnitPower; message 'femtowatts';
    class function horsepower: NSUnitPower; message 'horsepower';
  end;

type
  NSUnitPressure = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function newtonsPerMetersSquared: NSUnitPressure; message 'newtonsPerMetersSquared';
    class function gigapascals: NSUnitPressure; message 'gigapascals';
    class function megapascals: NSUnitPressure; message 'megapascals';
    class function kilopascals: NSUnitPressure; message 'kilopascals';
    class function hectopascals: NSUnitPressure; message 'hectopascals';
    class function inchesOfMercury: NSUnitPressure; message 'inchesOfMercury';
    class function bars: NSUnitPressure; message 'bars';
    class function millibars: NSUnitPressure; message 'millibars';
    class function millimetersOfMercury: NSUnitPressure; message 'millimetersOfMercury';
    class function poundsForcePerSquareInch: NSUnitPressure; message 'poundsForcePerSquareInch';
  end;

type
  NSUnitSpeed = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function metersPerSecond: NSUnitSpeed; message 'metersPerSecond';
    class function kilometersPerHour: NSUnitSpeed; message 'kilometersPerHour';
    class function milesPerHour: NSUnitSpeed; message 'milesPerHour';
    class function knots: NSUnitSpeed; message 'knots';
  end;

type
  NSUnitTemperature = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function kelvin: NSUnitTemperature; message 'kelvin';
    class function celsius: NSUnitTemperature; message 'celsius';
    class function fahrenheit: NSUnitTemperature; message 'fahrenheit';
  end;

type
  NSUnitVolume = objcclass external (NSDimension, NSSecureCodingProtocol)
  public
    class function megaliters: NSUnitVolume; message 'megaliters';
    class function kiloliters: NSUnitVolume; message 'kiloliters';
    class function liters: NSUnitVolume; message 'liters';
    class function deciliters: NSUnitVolume; message 'deciliters';
    class function centiliters: NSUnitVolume; message 'centiliters';
    class function milliliters: NSUnitVolume; message 'milliliters';
    class function cubicKilometers: NSUnitVolume; message 'cubicKilometers';
    class function cubicMeters: NSUnitVolume; message 'cubicMeters';
    class function cubicDecimeters: NSUnitVolume; message 'cubicDecimeters';
    class function cubicCentimeters: NSUnitVolume; message 'cubicCentimeters';
    class function cubicMillimeters: NSUnitVolume; message 'cubicMillimeters';
    class function cubicInches: NSUnitVolume; message 'cubicInches';
    class function cubicFeet: NSUnitVolume; message 'cubicFeet';
    class function cubicYards: NSUnitVolume; message 'cubicYards';
    class function cubicMiles: NSUnitVolume; message 'cubicMiles';
    class function acreFeet: NSUnitVolume; message 'acreFeet';
    class function bushels: NSUnitVolume; message 'bushels';
    class function teaspoons: NSUnitVolume; message 'teaspoons';
    class function tablespoons: NSUnitVolume; message 'tablespoons';
    class function fluidOunces: NSUnitVolume; message 'fluidOunces';
    class function cups: NSUnitVolume; message 'cups';
    class function pints: NSUnitVolume; message 'pints';
    class function quarts: NSUnitVolume; message 'quarts';
    class function gallons: NSUnitVolume; message 'gallons';
    class function imperialTeaspoons: NSUnitVolume; message 'imperialTeaspoons';
    class function imperialTablespoons: NSUnitVolume; message 'imperialTablespoons';
    class function imperialFluidOunces: NSUnitVolume; message 'imperialFluidOunces';
    class function imperialPints: NSUnitVolume; message 'imperialPints';
    class function imperialQuarts: NSUnitVolume; message 'imperialQuarts';
    class function imperialGallons: NSUnitVolume; message 'imperialGallons';
    class function metricCups: NSUnitVolume; message 'metricCups';
  end;
{$endif}

