{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKRTree.h }

{$ifdef TYPES}
type
  GKRTreePtr = ^GKRTree;
{$endif}

{$ifdef TYPES}
type
  GKRTreeSplitStrategy = NSInteger;
  GKRTreeSplitStrategyPtr = ^GKRTreeSplitStrategy;

const
  GKRTreeSplitStrategyHalve = 0;
  GKRTreeSplitStrategyLinear = 1;
  GKRTreeSplitStrategyQuadratic = 2;
  GKRTreeSplitStrategyReduceOverlap = 3;
{$endif}

{$ifdef CLASSES}

type
  GKRTree = objcclass external (NSObject)
  public
    procedure setQueryReserve(newValue: NSUInteger); message 'setQueryReserve:';
    function queryReserve: NSUInteger; message 'queryReserve';
    class function treeWithMaxNumberOfChildren (maxNumberOfChildren: NSUInteger): id; message 'treeWithMaxNumberOfChildren:';
    function initWithMaxNumberOfChildren (maxNumberOfChildren: NSUInteger): id; message 'initWithMaxNumberOfChildren:'; { NS_DESIGNATED_INITIALIZER }
    procedure addElement_boundingRectMin_boundingRectMax_splitStrategy (element: NSObjectPtr; boundingRectMin: vector_float2; boundingRectMax: vector_float2; splitStrategy: GKRTreeSplitStrategy); message 'addElement:boundingRectMin:boundingRectMax:splitStrategy:';
    procedure removeElement_boundingRectMin_boundingRectMax (element: NSObjectPtr; boundingRectMin: vector_float2; boundingRectMax: vector_float2); message 'removeElement:boundingRectMin:boundingRectMax:';
    function elementsInBoundingRectMin_rectMax (rectMin: vector_float2; rectMax: vector_float2): NSArray; message 'elementsInBoundingRectMin:rectMax:';
  end;
{$endif}

