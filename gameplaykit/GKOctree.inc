{ Parsed from GameplayKit.framework GKOctree.h }

{$ifdef TYPES}
type
  GKOctreeNodePtr = ^GKOctreeNode;
  GKOctreePtr = ^GKOctree;
{$endif}

{$ifdef CLASSES}

type
  GKOctreeNode = objcclass external (NSObject)
  public
    function box: GKBox; message 'box';
  end;

type
  GKOctree = objcclass external (NSObject)
  public
    class function octreeWithBoundingBox_minimumCellSize (box: GKBox; minCellSize: single): id; message 'octreeWithBoundingBox:minimumCellSize:';
    function initWithBoundingBox_minimumCellSize (box: GKBox; minCellSize: single): id; message 'initWithBoundingBox:minimumCellSize:';
    function addElement_withPoint (element: NSObjectPtr; point: vector_float3): GKOctreeNode; message 'addElement:withPoint:';
    function addElement_withBox (element: NSObjectPtr; box: GKBox): GKOctreeNode; message 'addElement:withBox:';
    function elementsAtPoint (point: vector_float3): NSArray; message 'elementsAtPoint:';
    function elementsInBox (box: GKBox): NSArray; message 'elementsInBox:';
    function removeElement (element: NSObjectPtr): objcbool; message 'removeElement:';
    function removeElement_withNode (element: NSObjectPtr; node: GKOctreeNode): objcbool; message 'removeElement:withNode:';
  end;
{$endif}

