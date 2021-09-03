{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKBehavior.h }

{$ifdef TYPES}
type
  GKBehaviorPtr = ^GKBehavior;
{$endif}

{$ifdef CLASSES}

type
  GKBehavior = objcclass external (NSObject, NSFastEnumerationProtocol, NSCopyingProtocol)
  public
    function goalCount: NSInteger; message 'goalCount';
    class function behaviorWithGoal_weight (goal: GKGoal; weight: single): id; message 'behaviorWithGoal:weight:';
    class function behaviorWithGoals (goals: NSArray): id; message 'behaviorWithGoals:';
    class function behaviorWithGoals_andWeights (goals: NSArray; weights: NSArray): id; message 'behaviorWithGoals:andWeights:';
    class function behaviorWithWeightedGoals (weightedGoals: NSDictionary): id; message 'behaviorWithWeightedGoals:';
    procedure setWeight_forGoal (weight: single; goal: GKGoal); message 'setWeight:forGoal:';
    function weightForGoal (goal: GKGoal): single; message 'weightForGoal:';
    procedure removeGoal (goal: GKGoal); message 'removeGoal:';
    procedure removeAllGoals; message 'removeAllGoals';
    function objectAtIndexedSubscript (idx: NSUInteger): GKGoal; message 'objectAtIndexedSubscript:';
    procedure setObject_forKeyedSubscript (weight: NSNumber; goal: GKGoal); message 'setObject:forKeyedSubscript:';
    function objectForKeyedSubscript (goal: GKGoal): NSNumber; message 'objectForKeyedSubscript:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

