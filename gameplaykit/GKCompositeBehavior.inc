{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKCompositeBehavior.h }

{$ifdef TYPES}
type
  GKCompositeBehaviorPtr = ^GKCompositeBehavior;
{$endif}

{$ifdef CLASSES}

type
  GKCompositeBehavior = objcclass external (GKBehavior)
  public
    function behaviorCount: NSInteger; message 'behaviorCount';
    class function behaviorWithBehaviors (behaviors: NSArray): id; message 'behaviorWithBehaviors:';
    class function behaviorWithBehaviors_andWeights (behaviors: NSArray; weights: NSArray): id; message 'behaviorWithBehaviors:andWeights:';
    procedure setWeight_forBehavior (weight: single; behavior: GKBehavior); message 'setWeight:forBehavior:';
    function weightForBehavior (behavior: GKBehavior): single; message 'weightForBehavior:';
    procedure removeBehavior (behavior: GKBehavior); message 'removeBehavior:';
    procedure removeAllBehaviors; message 'removeAllBehaviors';
    function objectAtIndexedSubscript (idx: NSUInteger): GKBehavior; message 'objectAtIndexedSubscript:';
    procedure setObject_forKeyedSubscript (weight: NSNumber; behavior: GKBehavior); message 'setObject:forKeyedSubscript:';
    function objectForKeyedSubscript (behavior: GKBehavior): NSNumber; message 'objectForKeyedSubscript:';
  end;
{$endif}

