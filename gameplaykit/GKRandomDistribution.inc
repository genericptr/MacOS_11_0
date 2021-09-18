{ Parsed from GameplayKit.framework GKRandomDistribution.h }

{$ifdef TYPES}
type
  GKRandomDistributionPtr = ^GKRandomDistribution;
  GKGaussianDistributionPtr = ^GKGaussianDistribution;
  GKShuffledDistributionPtr = ^GKShuffledDistribution;
{$endif}

{$ifdef CLASSES}

type
  GKRandomDistribution = objcclass external (NSObject, GKRandomProtocol)
  public
    function lowestValue: NSInteger; message 'lowestValue';
    function highestValue: NSInteger; message 'highestValue';
    function numberOfPossibleOutcomes: NSUInteger; message 'numberOfPossibleOutcomes';
    function initWithRandomSource_lowestValue_highestValue (source: GKRandomProtocol; lowestInclusive: NSInteger; highestInclusive: NSInteger): id; message 'initWithRandomSource:lowestValue:highestValue:'; { NS_DESIGNATED_INITIALIZER }
    function nextInt: NSInteger; message 'nextInt';
    function nextIntWithUpperBound (upperBound: NSUInteger): NSUInteger; message 'nextIntWithUpperBound:';
    function nextUniform: single; message 'nextUniform';
    function nextBool: objcbool; message 'nextBool';
    class function distributionWithLowestValue_highestValue (lowestInclusive: NSInteger; highestInclusive: NSInteger): id; message 'distributionWithLowestValue:highestValue:';
    class function distributionForDieWithSideCount (sideCount: NSInteger): id; message 'distributionForDieWithSideCount:';
    class function d6: id; message 'd6';
    class function d20: id; message 'd20';
  end;

type
  GKGaussianDistribution = objcclass external (GKRandomDistribution)
  public
    function mean: single; message 'mean';
    function deviation: single; message 'deviation';
    function initWithRandomSource_lowestValue_highestValue (source: GKRandomProtocol; lowestInclusive: NSInteger; highestInclusive: NSInteger): id; message 'initWithRandomSource:lowestValue:highestValue:'; { NS_DESIGNATED_INITIALIZER }
    function initWithRandomSource_mean_deviation (source: GKRandomProtocol; mean_: single; deviation_: single): id; message 'initWithRandomSource:mean:deviation:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  GKShuffledDistribution = objcclass external (GKRandomDistribution)
  end;
{$endif}

