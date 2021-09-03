{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKGridGraph.h }

{$ifdef TYPES}
type
  GKGridGraphPtr = ^GKGridGraph;
{$endif}

{$ifdef CLASSES}

type
  GKGridGraph = objcclass external (GKGraph)
  public
    function gridOrigin: vector_int2; message 'gridOrigin';
    function gridWidth: NSUInteger; message 'gridWidth';
    function gridHeight: NSUInteger; message 'gridHeight';
    function diagonalsAllowed: objcbool; message 'diagonalsAllowed';
    class function graphFromGridStartingAt_width_height_diagonalsAllowed (position: vector_int2; width: cint; height: cint; diagonalsAllowed_: objcbool): id; message 'graphFromGridStartingAt:width:height:diagonalsAllowed:';
    function initFromGridStartingAt_width_height_diagonalsAllowed (position: vector_int2; width: cint; height: cint; diagonalsAllowed_: objcbool): id; message 'initFromGridStartingAt:width:height:diagonalsAllowed:';
    class function graphFromGridStartingAt_width_height_diagonalsAllowed_nodeClass (position: vector_int2; width: cint; height: cint; diagonalsAllowed_: objcbool; nodeClass: pobjc_class): id; message 'graphFromGridStartingAt:width:height:diagonalsAllowed:nodeClass:';
    function initFromGridStartingAt_width_height_diagonalsAllowed_nodeClass (position: vector_int2; width: cint; height: cint; diagonalsAllowed_: objcbool; nodeClass: pobjc_class): id; message 'initFromGridStartingAt:width:height:diagonalsAllowed:nodeClass:';
    function nodeAtGridPosition (position: vector_int2): GKGridGraphNode; message 'nodeAtGridPosition:';
    procedure connectNodeToAdjacentNodes (node: GKGridGraphNode); message 'connectNodeToAdjacentNodes:';
    function classForGenericArgumentAtIndex (index: NSUInteger): pobjc_class; message 'classForGenericArgumentAtIndex:';
  end;
{$endif}

