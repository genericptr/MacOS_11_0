{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSFetchedResultsController.h }

{$ifdef TYPES}
type
  NSFetchedResultsControllerPtr = ^NSFetchedResultsController;
  NSFetchedResultsSectionInfoProtocolPtr = ^NSFetchedResultsSectionInfoProtocol;
  NSFetchedResultsControllerDelegateProtocolPtr = ^NSFetchedResultsControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSFetchedResultsController = objcclass external (NSObject)
  public
    function initWithFetchRequest_managedObjectContext_sectionNameKeyPath_cacheName (fetchRequest: NSFetchRequest; context: NSManagedObjectContext; sectionNameKeyPath: NSString; name: NSString): id; message 'initWithFetchRequest:managedObjectContext:sectionNameKeyPath:cacheName:';
    function performFetch (error: NSErrorPtr): objcbool; message 'performFetch:';
    function fetchRequest: NSFetchRequest; message 'fetchRequest';
    function managedObjectContext: NSManagedObjectContext; message 'managedObjectContext';
    function sectionNameKeyPath: NSString; message 'sectionNameKeyPath';
    function cacheName: NSString; message 'cacheName';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    class procedure deleteCacheWithName (name: NSString); message 'deleteCacheWithName:';
    function fetchedObjects: NSArray; message 'fetchedObjects';
    function objectAtIndexPath (indexPath: NSIndexPath): NSFetchRequestResultProtocol; message 'objectAtIndexPath:';
    function indexPathForObject (object_: NSFetchRequestResultProtocol): NSIndexPath; message 'indexPathForObject:';
    function sectionIndexTitleForSectionName (sectionName: NSString): NSString; message 'sectionIndexTitleForSectionName:';
    function sectionIndexTitles: NSArray; message 'sectionIndexTitles';
    function sections: NSArray; message 'sections';
    function sectionForSectionIndexTitle_atIndex (title: NSString; sectionIndex: NSInteger): NSInteger; message 'sectionForSectionIndexTitle:atIndex:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFetchedResultsSectionInfoProtocol = objcprotocol external name 'NSFetchedResultsSectionInfo'
    function name: NSString; message 'name';
    function indexTitle: NSString; message 'indexTitle';
    function numberOfObjects: NSUInteger; message 'numberOfObjects';
    function objects: NSArray; message 'objects';
  end;
{$endif}

{$ifdef TYPES}
type
  NSFetchedResultsChangeType = NSUInteger;
  NSFetchedResultsChangeTypePtr = ^NSFetchedResultsChangeType;

const
  NSFetchedResultsChangeInsert = 1;
  NSFetchedResultsChangeDelete = 2;
  NSFetchedResultsChangeMove = 3;
  NSFetchedResultsChangeUpdate = 4;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFetchedResultsControllerDelegateProtocol = objcprotocol external name 'NSFetchedResultsControllerDelegate' (NSObjectProtocol)
  optional
    procedure controller_didChangeContentWithSnapshot (controller: NSFetchedResultsController; snapshot: NSDiffableDataSourceSnapshot); message 'controller:didChangeContentWithSnapshot:'; { available in macos , ios , tvos , watchos  }
    procedure controller_didChangeContentWithDifference (controller: NSFetchedResultsController; diff: NSOrderedCollectionDifference); message 'controller:didChangeContentWithDifference:'; { available in macos , ios , tvos , watchos  }
  optional
    procedure controller_didChangeObject_atIndexPath_forChangeType_newIndexPath (controller: NSFetchedResultsController; anObject: id; indexPath: NSIndexPath; type_: NSFetchedResultsChangeType; newIndexPath: NSIndexPath); message 'controller:didChangeObject:atIndexPath:forChangeType:newIndexPath:';
  optional
    procedure controller_didChangeSection_atIndex_forChangeType (controller: NSFetchedResultsController; sectionInfo: id; sectionIndex: NSUInteger; type_: NSFetchedResultsChangeType); message 'controller:didChangeSection:atIndex:forChangeType:';
  optional
    procedure controllerWillChangeContent (controller: NSFetchedResultsController); message 'controllerWillChangeContent:';
  optional
    procedure controllerDidChangeContent (controller: NSFetchedResultsController); message 'controllerDidChangeContent:';
  optional
    function controller_sectionIndexTitleForSectionName (controller: NSFetchedResultsController; sectionName: NSString): NSString; message 'controller:sectionIndexTitleForSectionName:'; { available in macosx ,ios  }
  end;
{$endif}

