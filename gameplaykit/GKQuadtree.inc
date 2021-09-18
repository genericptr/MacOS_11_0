{ Parsed from GameplayKit.framework GKQuadtree.h }

{$ifdef TYPES}
type
  GKQuadtreeNodePtr = ^GKQuadtreeNode;
  GKQuadtreePtr = ^GKQuadtree;
{$endif}

{$ifdef CLASSES}

type
  GKQuadtreeNode = objcclass external (NSObject)
  public
    function quad: GKQuad; message 'quad';
  end;

type
  GKQuadtree = objcclass external (NSObject)
  public
    class function quadtreeWithBoundingQuad_minimumCellSize (quad: GKQuad; minCellSize: single): id; message 'quadtreeWithBoundingQuad:minimumCellSize:';
    function initWithBoundingQuad_minimumCellSize (quad: GKQuad; minCellSize: single): id; message 'initWithBoundingQuad:minimumCellSize:'; { NS_DESIGNATED_INITIALIZER }
    function addElement_withPoint (element: NSObjectPtr; point: vector_float2): GKQuadtreeNode; message 'addElement:withPoint:';
    function addElement_withQuad (element: NSObjectPtr; quad: GKQuad): GKQuadtreeNode; message 'addElement:withQuad:';
    function elementsAtPoint (point: vector_float2): NSArray; message 'elementsAtPoint:';
    function elementsInQuad (quad: GKQuad): NSArray; message 'elementsInQuad:';
    function removeElement (element: NSObjectPtr): objcbool; message 'removeElement:';
    function removeElement_withNode (data: NSObjectPtr; node: GKQuadtreeNode): objcbool; message 'removeElement:withNode:';
  end;
{$endif}

