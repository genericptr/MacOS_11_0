{ Parsed from Foundation.framework NSOrderedCollectionChange.h }

{$ifdef TYPES}
type
  NSOrderedCollectionChangePtr = ^NSOrderedCollectionChange;
{$endif}

{$ifdef TYPES}
type
  NSCollectionChangeType = NSInteger;
  NSCollectionChangeTypePtr = ^NSCollectionChangeType;

const
  NSCollectionChangeInsert = 0;
  NSCollectionChangeRemove = 1;
{$endif}

{$ifdef CLASSES}

type
  NSOrderedCollectionChange = objcclass external (NSObject)
  private
    _object: id;
    _changeType: NSCollectionChangeType;
    _index: NSUInteger;
    _associatedIndex: NSUInteger;
  public
    class function changeWithObject_type_index (anObject: id; type_: NSCollectionChangeType; index: NSUInteger): NSOrderedCollectionChange; message 'changeWithObject:type:index:';
    class function changeWithObject_type_index_associatedIndex (anObject: id; type_: NSCollectionChangeType; index: NSUInteger; associatedIndex: NSUInteger): NSOrderedCollectionChange; message 'changeWithObject:type:index:associatedIndex:';
    function object_: id; message 'object';
    function changeType: NSCollectionChangeType; message 'changeType';
    function index: NSUInteger; message 'index';
    function associatedIndex: NSUInteger; message 'associatedIndex';
    function init: id; message 'init'; { unavailable in macos, ios, watchos, tvos }
    function initWithObject_type_index (anObject: id; type_: NSCollectionChangeType; index_: NSUInteger): id; message 'initWithObject:type:index:';
    function initWithObject_type_index_associatedIndex (anObject: id; type_: NSCollectionChangeType; index_: NSUInteger; associatedIndex_: NSUInteger): id; message 'initWithObject:type:index:associatedIndex:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

