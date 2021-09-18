{ Parsed from Foundation.framework NSOrderedCollectionDifference.h }

{$ifdef CALLBACKS}
type
  NSOrderedCollectionDifferenceDifferenceByTransformingChangesWithBlockCallback = reference to function (param1: NSOrderedCollectionChange): NSOrderedCollectionChange; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSOrderedCollectionDifferencePtr = ^NSOrderedCollectionDifference;
{$endif}

{$ifdef TYPES}
type
  NSOrderedCollectionDifferenceCalculationOptions = NSUInteger;
  NSOrderedCollectionDifferenceCalculationOptionsPtr = ^NSOrderedCollectionDifferenceCalculationOptions;

const
  NSOrderedCollectionDifferenceCalculationOmitInsertedObjects = 1 shl 0;
  NSOrderedCollectionDifferenceCalculationOmitRemovedObjects = 1 shl 1;
  NSOrderedCollectionDifferenceCalculationInferMoves = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  NSOrderedCollectionDifference = objcclass external (NSObject, NSFastEnumerationProtocol)
  private
    _removeIndexes: id;
    _removeObjects: id;
    _insertIndexes: id;
    _insertObjects: id;
    _moves: id;
  public
    function initWithChanges (changes: NSArray): id; message 'initWithChanges:';
    function initWithInsertIndexes_insertedObjects_removeIndexes_removedObjects_additionalChanges (inserts: NSIndexSet; insertedObjects: NSArray; removes: NSIndexSet; removedObjects: NSArray; changes: NSArray): id; message 'initWithInsertIndexes:insertedObjects:removeIndexes:removedObjects:additionalChanges:'; { NS_DESIGNATED_INITIALIZER }
    function initWithInsertIndexes_insertedObjects_removeIndexes_removedObjects (inserts: NSIndexSet; insertedObjects: NSArray; removes: NSIndexSet; removedObjects: NSArray): id; message 'initWithInsertIndexes:insertedObjects:removeIndexes:removedObjects:';
    function insertions: NSArray; message 'insertions'; { available in macosx , ios , watchos , tvos  }
    function removals: NSArray; message 'removals'; { available in macosx , ios , watchos , tvos  }
    function hasChanges: objcbool; message 'hasChanges';
    function differenceByTransformingChangesWithBlock (block: NSOrderedCollectionDifferenceDifferenceByTransformingChangesWithBlockCallback): NSOrderedCollectionDifference; message 'differenceByTransformingChangesWithBlock:';
    function inverseDifference: id; message 'inverseDifference'; { available in macosx , ios , watchos , tvos  }

    { Adopted protocols }
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

