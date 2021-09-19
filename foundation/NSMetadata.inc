{ Parsed from Foundation.framework NSMetadata.h }

{$ifdef CALLBACKS}
type
  NSMetadataEnumerateResultsUsingBlockCallback = reference to procedure (result_: id; idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
  NSMetadataEnumerateResultsWithOptionsCallback = reference to procedure (result_: id; idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSMetadataQueryPtr = ^NSMetadataQuery;
  NSMetadataItemPtr = ^NSMetadataItem;
  NSMetadataQueryAttributeValueTuplePtr = ^NSMetadataQueryAttributeValueTuple;
  NSMetadataQueryResultGroupPtr = ^NSMetadataQueryResultGroup;
  NSMetadataQueryDelegateProtocolPtr = ^NSMetadataQueryDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSMetadataQuery = objcclass external (NSObject)
  private
    _flags: NSUInteger;
    _interval: NSTimeInterval;
    _private:array[0..10] of id;
    _reserved: pointer;
  public
    procedure setDelegate(newValue: NSMetadataQueryDelegateProtocol); message 'setDelegate:';
    function delegate: NSMetadataQueryDelegateProtocol; message 'delegate';
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    procedure setValueListAttributes(newValue: NSArray); message 'setValueListAttributes:';
    function valueListAttributes: NSArray; message 'valueListAttributes';
    procedure setGroupingAttributes(newValue: NSArray); message 'setGroupingAttributes:';
    function groupingAttributes: NSArray; message 'groupingAttributes';
    procedure setNotificationBatchingInterval(newValue: NSTimeInterval); message 'setNotificationBatchingInterval:';
    function notificationBatchingInterval: NSTimeInterval; message 'notificationBatchingInterval';
    procedure setSearchScopes(newValue: NSArray); message 'setSearchScopes:';
    function searchScopes: NSArray; message 'searchScopes';
    procedure setSearchItems(newValue: NSArray); message 'setSearchItems:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    function searchItems: NSArray; message 'searchItems'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure setOperationQueue(newValue: NSOperationQueue); message 'setOperationQueue:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    function operationQueue: NSOperationQueue; message 'operationQueue'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    function startQuery: objcbool; message 'startQuery';
    procedure stopQuery; message 'stopQuery';
    function isStarted: objcbool; message 'isStarted';
    function isGathering: objcbool; message 'isGathering';
    function isStopped: objcbool; message 'isStopped';
    procedure disableUpdates; message 'disableUpdates';
    procedure enableUpdates; message 'enableUpdates';
    function resultCount: NSUInteger; message 'resultCount';
    function resultAtIndex (idx: NSUInteger): id; message 'resultAtIndex:';
    procedure enumerateResultsUsingBlock (block: NSMetadataEnumerateResultsUsingBlockCallback); message 'enumerateResultsUsingBlock:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure enumerateResultsWithOptions_usingBlock (opts: NSEnumerationOptions; block: NSMetadataEnumerateResultsWithOptionsCallback); message 'enumerateResultsWithOptions:usingBlock:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    function results: NSArray; message 'results';
    function indexOfResult (result_: id): NSUInteger; message 'indexOfResult:';
    function valueLists: NSDictionary; message 'valueLists';
    function groupedResults: NSArray; message 'groupedResults';
    function valueOfAttribute_forResultAtIndex (attrName: NSString; idx: NSUInteger): id; message 'valueOfAttribute:forResultAtIndex:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSMetadataQueryDelegateProtocol = objcprotocol external name 'NSMetadataQueryDelegate' (NSObjectProtocol)
  optional
    function metadataQuery_replacementObjectForResultObject (query: NSMetadataQuery; result_: NSMetadataItem): id; message 'metadataQuery:replacementObjectForResultObject:';
    function metadataQuery_replacementValueForAttribute_value (query: NSMetadataQuery; attrName: NSString; attrValue: id): id; message 'metadataQuery:replacementValueForAttribute:value:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSMetadataQueryDidStartGatheringNotification: NSNotificationName { available in macos 10.4, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryGatheringProgressNotification: NSNotificationName { available in macos 10.4, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryDidFinishGatheringNotification: NSNotificationName { available in macos 10.4, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryDidUpdateNotification: NSNotificationName { available in macos 10.4, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryUpdateAddedItemsKey: NSString { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryUpdateChangedItemsKey: NSString { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryUpdateRemovedItemsKey: NSString { available in macos 10.9, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryResultContentRelevanceAttribute: NSString { available in macos 10.4, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryUserHomeScope: NSString { unavailable in ios, watchos, tvos } { available in macos 10.4 }; cvar; external;
  NSMetadataQueryLocalComputerScope: NSString { unavailable in ios, watchos, tvos } { available in macos 10.4 }; cvar; external;
  NSMetadataQueryNetworkScope: NSString { unavailable in ios, watchos, tvos } { available in macos 10.4 }; cvar; external;
  NSMetadataQueryIndexedLocalComputerScope: NSString { unavailable in ios, watchos, tvos } { available in macos 10.9 }; cvar; external;
  NSMetadataQueryIndexedNetworkScope: NSString { unavailable in ios, watchos, tvos } { available in macos 10.9 }; cvar; external;
  NSMetadataQueryUbiquitousDocumentsScope: NSString { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryUbiquitousDataScope: NSString { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSMetadataQueryAccessibleUbiquitousExternalDocumentsScope: NSString { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSMetadataItem = objcclass external (NSObject)
  private
    _item: id;
    _reserved: pointer;
  public
    function initWithURL (url: NSURL): id; message 'initWithURL:'; { unavailable in ios, watchos, tvos } { available in macos 10.9 }
    function valueForAttribute (key: NSString): id; message 'valueForAttribute:';
    function valuesForAttributes (keys: NSArray): NSDictionary; message 'valuesForAttributes:';
    function attributes: NSArray; message 'attributes';
  end;

type
  NSMetadataQueryAttributeValueTuple = objcclass external (NSObject)
  private
    _attr: id;
    _value: id;
    _count: NSUInteger;
    _reserved: pointer;
  public
    function attribute: NSString; message 'attribute';
    function value: id; message 'value';
    function count: NSUInteger; message 'count';
  end;

type
  NSMetadataQueryResultGroup = objcclass external (NSObject)
  private
    _private:array[0..8] of id;
    _private2:array[0..0] of NSUInteger;
    _reserved: pointer;
  public
    function attribute: NSString; message 'attribute';
    function value: id; message 'value';
    function subgroups: NSArray; message 'subgroups';
    function resultCount: NSUInteger; message 'resultCount';
    function resultAtIndex (idx: NSUInteger): id; message 'resultAtIndex:';
    function results: NSArray; message 'results';
  end;
{$endif}

