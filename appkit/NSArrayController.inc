{ Parsed from AppKit.framework NSArrayController.h }

{$ifdef TYPES}
type
  NSArrayControllerPtr = ^NSArrayController;
{$endif}

{$ifdef CLASSES}

type
  NSArrayController = objcclass external (NSObjectController)
  public
    procedure rearrangeObjects; message 'rearrangeObjects';
    procedure setAutomaticallyRearrangesObjects(newValue: objcbool); message 'setAutomaticallyRearrangesObjects:'; { available in macos 10.5 }
    function automaticallyRearrangesObjects: objcbool; message 'automaticallyRearrangesObjects'; { available in macos 10.5 }
    function automaticRearrangementKeyPaths: NSArray; message 'automaticRearrangementKeyPaths'; { available in macos 10.5 }
    procedure didChangeArrangementCriteria; message 'didChangeArrangementCriteria'; { available in macos 10.5 }
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    procedure setFilterPredicate(newValue: NSPredicate); message 'setFilterPredicate:';
    function filterPredicate: NSPredicate; message 'filterPredicate';
    procedure setClearsFilterPredicateOnInsertion(newValue: objcbool); message 'setClearsFilterPredicateOnInsertion:';
    function clearsFilterPredicateOnInsertion: objcbool; message 'clearsFilterPredicateOnInsertion';
    function arrangeObjects (objects: NSArray): NSArray; message 'arrangeObjects:';
    function arrangedObjects: id; message 'arrangedObjects';
    procedure setAvoidsEmptySelection(newValue: objcbool); message 'setAvoidsEmptySelection:';
    function avoidsEmptySelection: objcbool; message 'avoidsEmptySelection';
    procedure setPreservesSelection(newValue: objcbool); message 'setPreservesSelection:';
    function preservesSelection: objcbool; message 'preservesSelection';
    procedure setSelectsInsertedObjects(newValue: objcbool); message 'setSelectsInsertedObjects:';
    function selectsInsertedObjects: objcbool; message 'selectsInsertedObjects';
    procedure setAlwaysUsesMultipleValuesMarker(newValue: objcbool); message 'setAlwaysUsesMultipleValuesMarker:';
    function alwaysUsesMultipleValuesMarker: objcbool; message 'alwaysUsesMultipleValuesMarker';
    function setSelectionIndexes (indexes: NSIndexSet): objcbool; message 'setSelectionIndexes:';
    function selectionIndexes: NSIndexSet; message 'selectionIndexes';
    function setSelectionIndex (index: NSUInteger): objcbool; message 'setSelectionIndex:';
    function selectionIndex: NSUInteger; message 'selectionIndex';
    function addSelectionIndexes (indexes: NSIndexSet): objcbool; message 'addSelectionIndexes:';
    function removeSelectionIndexes (indexes: NSIndexSet): objcbool; message 'removeSelectionIndexes:';
    function setSelectedObjects (objects: NSArray): objcbool; message 'setSelectedObjects:';
    function selectedObjects: NSArray; message 'selectedObjects';
    function addSelectedObjects (objects: NSArray): objcbool; message 'addSelectedObjects:';
    function removeSelectedObjects (objects: NSArray): objcbool; message 'removeSelectedObjects:';
    procedure add (sender: id); message 'add:';
    procedure remove (sender: id); message 'remove:';
    procedure insert (sender: id); message 'insert:';
    function canInsert: objcbool; message 'canInsert';
    procedure selectNext (sender: id); message 'selectNext:';
    procedure selectPrevious (sender: id); message 'selectPrevious:';
    function canSelectNext: objcbool; message 'canSelectNext';
    function canSelectPrevious: objcbool; message 'canSelectPrevious';
    procedure addObject (object_: id); message 'addObject:';
    procedure addObjects (objects: NSArray); message 'addObjects:';
    procedure insertObject_atArrangedObjectIndex (object_: id; index: NSUInteger); message 'insertObject:atArrangedObjectIndex:';
    procedure insertObjects_atArrangedObjectIndexes (objects: NSArray; indexes: NSIndexSet); message 'insertObjects:atArrangedObjectIndexes:';
    procedure removeObjectAtArrangedObjectIndex (index: NSUInteger); message 'removeObjectAtArrangedObjectIndex:';
    procedure removeObjectsAtArrangedObjectIndexes (indexes: NSIndexSet); message 'removeObjectsAtArrangedObjectIndexes:';
    procedure removeObject (object_: id); message 'removeObject:';
    procedure removeObjects (objects: NSArray); message 'removeObjects:';
  end;
{$endif}

