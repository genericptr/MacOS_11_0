{ Parsed from AppKit.framework NSTreeController.h }

{$ifdef TYPES}
type
  NSTreeControllerPtr = ^NSTreeController;
{$endif}

{$ifdef CLASSES}

type
  NSTreeController = objcclass external (NSObjectController)
  public
    procedure rearrangeObjects; message 'rearrangeObjects';
    function arrangedObjects: NSTreeNode; message 'arrangedObjects';
    procedure setChildrenKeyPath(newValue: NSString); message 'setChildrenKeyPath:';
    function childrenKeyPath: NSString; message 'childrenKeyPath';
    procedure setCountKeyPath(newValue: NSString); message 'setCountKeyPath:';
    function countKeyPath: NSString; message 'countKeyPath';
    procedure setLeafKeyPath(newValue: NSString); message 'setLeafKeyPath:';
    function leafKeyPath: NSString; message 'leafKeyPath';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    procedure setContent(newValue: id); message 'setContent:';
    function content: id; message 'content';
    procedure add (sender: id); message 'add:';
    procedure remove (sender: id); message 'remove:';
    procedure addChild (sender: id); message 'addChild:';
    procedure insert (sender: id); message 'insert:';
    procedure insertChild (sender: id); message 'insertChild:';
    function canInsert: objcbool; message 'canInsert';
    function canInsertChild: objcbool; message 'canInsertChild';
    function canAddChild: objcbool; message 'canAddChild';
    procedure insertObject_atArrangedObjectIndexPath (object_: id; indexPath: NSIndexPath); message 'insertObject:atArrangedObjectIndexPath:';
    procedure insertObjects_atArrangedObjectIndexPaths (objects: NSArray; indexPaths: NSArray); message 'insertObjects:atArrangedObjectIndexPaths:';
    procedure removeObjectAtArrangedObjectIndexPath (indexPath: NSIndexPath); message 'removeObjectAtArrangedObjectIndexPath:';
    procedure removeObjectsAtArrangedObjectIndexPaths (indexPaths: NSArray); message 'removeObjectsAtArrangedObjectIndexPaths:';
    procedure setAvoidsEmptySelection(newValue: objcbool); message 'setAvoidsEmptySelection:';
    function avoidsEmptySelection: objcbool; message 'avoidsEmptySelection';
    procedure setPreservesSelection(newValue: objcbool); message 'setPreservesSelection:';
    function preservesSelection: objcbool; message 'preservesSelection';
    procedure setSelectsInsertedObjects(newValue: objcbool); message 'setSelectsInsertedObjects:';
    function selectsInsertedObjects: objcbool; message 'selectsInsertedObjects';
    procedure setAlwaysUsesMultipleValuesMarker(newValue: objcbool); message 'setAlwaysUsesMultipleValuesMarker:';
    function alwaysUsesMultipleValuesMarker: objcbool; message 'alwaysUsesMultipleValuesMarker';
    function selectedObjects: NSArray; message 'selectedObjects';
    function setSelectionIndexPaths (indexPaths: NSArray): objcbool; message 'setSelectionIndexPaths:';
    function selectionIndexPaths: NSArray; message 'selectionIndexPaths';
    function setSelectionIndexPath (indexPath: NSIndexPath): objcbool; message 'setSelectionIndexPath:';
    function selectionIndexPath: NSIndexPath; message 'selectionIndexPath';
    function addSelectionIndexPaths (indexPaths: NSArray): objcbool; message 'addSelectionIndexPaths:';
    function removeSelectionIndexPaths (indexPaths: NSArray): objcbool; message 'removeSelectionIndexPaths:';
    function selectedNodes: NSArray; message 'selectedNodes'; { available in macos 10.5 }
    procedure moveNode_toIndexPath (node: NSTreeNode; indexPath: NSIndexPath); message 'moveNode:toIndexPath:'; { available in macos 10.5 }
    procedure moveNodes_toIndexPath (nodes: NSArray; startingIndexPath: NSIndexPath); message 'moveNodes:toIndexPath:'; { available in macos 10.5 }
    function childrenKeyPathForNode (node: NSTreeNode): NSString; message 'childrenKeyPathForNode:'; { available in macos 10.5 }
    function countKeyPathForNode (node: NSTreeNode): NSString; message 'countKeyPathForNode:'; { available in macos 10.5 }
    function leafKeyPathForNode (node: NSTreeNode): NSString; message 'leafKeyPathForNode:'; { available in macos 10.5 }
  end;
{$endif}

