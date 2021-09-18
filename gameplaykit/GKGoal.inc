{ Parsed from GameplayKit.framework GKGoal.h }

{$ifdef TYPES}
type
  GKGoalPtr = ^GKGoal;
{$endif}

{$ifdef CLASSES}

type
  GKGoal = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function goalToSeekAgent (agent: GKAgent): id; message 'goalToSeekAgent:';
    class function goalToFleeAgent (agent: GKAgent): id; message 'goalToFleeAgent:';
    class function goalToAvoidObstacles_maxPredictionTime (obstacles: NSArray; maxPredictionTime: NSTimeInterval): id; message 'goalToAvoidObstacles:maxPredictionTime:';
    class function goalToAvoidAgents_maxPredictionTime (agents: NSArray; maxPredictionTime: NSTimeInterval): id; message 'goalToAvoidAgents:maxPredictionTime:';
    class function goalToSeparateFromAgents_maxDistance_maxAngle (agents: NSArray; maxDistance: single; maxAngle: single): id; message 'goalToSeparateFromAgents:maxDistance:maxAngle:';
    class function goalToAlignWithAgents_maxDistance_maxAngle (agents: NSArray; maxDistance: single; maxAngle: single): id; message 'goalToAlignWithAgents:maxDistance:maxAngle:';
    class function goalToCohereWithAgents_maxDistance_maxAngle (agents: NSArray; maxDistance: single; maxAngle: single): id; message 'goalToCohereWithAgents:maxDistance:maxAngle:';
    class function goalToReachTargetSpeed (targetSpeed: single): id; message 'goalToReachTargetSpeed:';
    class function goalToWander (speed: single): id; message 'goalToWander:';
    class function goalToInterceptAgent_maxPredictionTime (target: GKAgent; maxPredictionTime: NSTimeInterval): id; message 'goalToInterceptAgent:maxPredictionTime:';
    class function goalToFollowPath_maxPredictionTime_forward (path: GKPath; maxPredictionTime: NSTimeInterval; forward: objcbool): id; message 'goalToFollowPath:maxPredictionTime:forward:';
    class function goalToStayOnPath_maxPredictionTime (path: GKPath; maxPredictionTime: NSTimeInterval): id; message 'goalToStayOnPath:maxPredictionTime:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

