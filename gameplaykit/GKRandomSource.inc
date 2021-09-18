{ Parsed from GameplayKit.framework GKRandomSource.h }

{$ifdef TYPES}
type
  GKRandomSourcePtr = ^GKRandomSource;
  GKARC4RandomSourcePtr = ^GKARC4RandomSource;
  GKLinearCongruentialRandomSourcePtr = ^GKLinearCongruentialRandomSource;
  GKMersenneTwisterRandomSourcePtr = ^GKMersenneTwisterRandomSource;
  GKRandomProtocolPtr = ^GKRandomProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKRandomProtocol = objcprotocol external name 'GKRandom'
  required
    function nextInt: NSInteger; message 'nextInt';
    function nextIntWithUpperBound (upperBound: NSUInteger): NSUInteger; message 'nextIntWithUpperBound:';
    function nextUniform: single; message 'nextUniform';
    function nextBool: objcbool; message 'nextBool';
  end;
{$endif}

{$ifdef CLASSES}

type
  GKRandomSource = objcclass external (NSObject, GKRandomProtocol, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function sharedRandom: GKRandomSource; message 'sharedRandom';
    function arrayByShufflingObjectsInArray (array_: NSArray): NSArray; message 'arrayByShufflingObjectsInArray:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function nextBool: objcbool; message 'nextBool';
    function nextInt: NSInteger; message 'nextInt';
    function nextIntWithUpperBound (upperBound: NSUInteger): NSUInteger; message 'nextIntWithUpperBound:';
    function nextUniform: single; message 'nextUniform';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSArray_GameplayKit = objccategory external name 'GameplayKit' (NSArray)
    function shuffledArrayWithRandomSource (randomSource: GKRandomSource): NSArray; message 'shuffledArrayWithRandomSource:';
    function shuffledArray: NSArray; message 'shuffledArray';
  end;


type
  GKARC4RandomSource = objcclass external (GKRandomSource)
  public
    procedure setSeed(newValue: NSData); message 'setSeed:';
    function seed: NSData; message 'seed';
    function init: id; message 'init';
    function initWithSeed (seed_: NSData): id; message 'initWithSeed:'; { NS_DESIGNATED_INITIALIZER }
    procedure dropValuesWithCount (count: NSUInteger); message 'dropValuesWithCount:';
  end;

type
  GKLinearCongruentialRandomSource = objcclass external (GKRandomSource)
  public
    procedure setSeed(newValue: cuint64); message 'setSeed:';
    function seed: cuint64; message 'seed';
    function init: id; message 'init';
    function initWithSeed (seed_: cuint64): id; message 'initWithSeed:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKMersenneTwisterRandomSource = objcclass external (GKRandomSource)
  public
    procedure setSeed(newValue: cuint64); message 'setSeed:';
    function seed: cuint64; message 'seed';
    function init: id; message 'init';
    function initWithSeed (seed_: cuint64): id; message 'initWithSeed:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

