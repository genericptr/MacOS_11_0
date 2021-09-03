{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesGameplayKit;
interface

type
  GKARC4RandomSource = objcclass external;
  GKAgent = objcclass external;
  GKAgent2D = objcclass external;
  GKAgent3D = objcclass external;
  GKBehavior = objcclass external;
  GKBillowNoiseSource = objcclass external;
  GKCheckerboardNoiseSource = objcclass external;
  GKCircleObstacle = objcclass external;
  GKCoherentNoiseSource = objcclass external;
  GKComponent = objcclass external;
  GKComponentSystem = objcclass external;
  GKCompositeBehavior = objcclass external;
  GKConstantNoiseSource = objcclass external;
  GKCylindersNoiseSource = objcclass external;
  GKDecisionNode = objcclass external;
  GKDecisionTree = objcclass external;
  GKEntity = objcclass external;
  GKGaussianDistribution = objcclass external;
  GKGoal = objcclass external;
  GKGraph = objcclass external;
  GKGraphNode = objcclass external;
  GKGraphNode2D = objcclass external;
  GKGraphNode3D = objcclass external;
  GKGridGraph = objcclass external;
  GKGridGraphNode = objcclass external;
  GKLinearCongruentialRandomSource = objcclass external;
  GKMersenneTwisterRandomSource = objcclass external;
  GKMeshGraph = objcclass external;
  GKMinmaxStrategist = objcclass external;
  GKMonteCarloStrategist = objcclass external;
  GKNSPredicateRule = objcclass external;
  GKNoise = objcclass external;
  GKNoiseMap = objcclass external;
  GKNoiseSource = objcclass external;
  GKObstacle = objcclass external;
  GKObstacleGraph = objcclass external;
  GKOctree = objcclass external;
  GKOctreeNode = objcclass external;
  GKPath = objcclass external;
  GKPerlinNoiseSource = objcclass external;
  GKPolygonObstacle = objcclass external;
  GKQuadtree = objcclass external;
  GKQuadtreeNode = objcclass external;
  GKRTree = objcclass external;
  GKRandomDistribution = objcclass external;
  GKRandomSource = objcclass external;
  GKRidgedNoiseSource = objcclass external;
  GKRule = objcclass external;
  GKRuleSystem = objcclass external;
  GKSCNNodeComponent = objcclass external;
  GKSKNodeComponent = objcclass external;
  GKScene = objcclass external;
  GKShuffledDistribution = objcclass external;
  GKSphereObstacle = objcclass external;
  GKSpheresNoiseSource = objcclass external;
  GKState = objcclass external;
  GKStateMachine = objcclass external;
  GKVoronoiNoiseSource = objcclass external;
  GKAgentDelegateProtocol = objcprotocol external name 'GKAgentDelegate';
  GKGameModelPlayerProtocol = objcprotocol external name 'GKGameModelPlayer';
  GKGameModelProtocol = objcprotocol external name 'GKGameModel';
  GKGameModelUpdateProtocol = objcprotocol external name 'GKGameModelUpdate';
  GKRandomProtocol = objcprotocol external name 'GKRandom';
  GKSceneRootNodeTypeProtocol = objcprotocol external name 'GKSceneRootNodeType';
  GKStrategistProtocol = objcprotocol external name 'GKStrategist';

type
  SCNNode = objcclass external;
  SKNode = objcclass external;

implementation
end.
