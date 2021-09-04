{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHChange.h }

{$ifdef CALLBACKS}
type
  PHChangeEnumerateMovesWithBlockCallback = reference to procedure (fromIndex: NSUInteger; toIndex: NSUInteger); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHChangePtr = ^PHChange;
  PHObjectChangeDetailsPtr = ^PHObjectChangeDetails;
  PHFetchResultChangeDetailsPtr = ^PHFetchResultChangeDetails;
{$endif}

{$ifdef CLASSES}

type
  PHChange = objcclass external (NSObject)
  public
    function changeDetailsForObject (object_: PHObject): PHObjectChangeDetails; message 'changeDetailsForObject:';
    function changeDetailsForFetchResult (object_: PHFetchResult): PHFetchResultChangeDetails; message 'changeDetailsForFetchResult:';
  end;

type
  PHObjectChangeDetails = objcclass external (NSObject)
  public
    function objectBeforeChanges: PHObject; message 'objectBeforeChanges';
    function objectAfterChanges: PHObject; message 'objectAfterChanges';
    function assetContentChanged: objcbool; message 'assetContentChanged';
    function objectWasDeleted: objcbool; message 'objectWasDeleted';
  end;

type
  PHFetchResultChangeDetails = objcclass external (NSObject)
  public
    function fetchResultBeforeChanges: PHFetchResult; message 'fetchResultBeforeChanges';
    function fetchResultAfterChanges: PHFetchResult; message 'fetchResultAfterChanges';
    function hasIncrementalChanges: objcbool; message 'hasIncrementalChanges';
    function removedIndexes: NSIndexSet; message 'removedIndexes';
    function removedObjects: NSArray; message 'removedObjects';
    function insertedIndexes: NSIndexSet; message 'insertedIndexes';
    function insertedObjects: NSArray; message 'insertedObjects';
    function changedIndexes: NSIndexSet; message 'changedIndexes';
    function changedObjects: NSArray; message 'changedObjects';
    procedure enumerateMovesWithBlock (handler: PHChangeEnumerateMovesWithBlockCallback); message 'enumerateMovesWithBlock:';
    function hasMoves: objcbool; message 'hasMoves';
    class function changeDetailsFromFetchResult_toFetchResult_changedObjects (fromResult: PHFetchResult; toResult: PHFetchResult; changedObjects_: NSArray): id; message 'changeDetailsFromFetchResult:toFetchResult:changedObjects:';
  end;
{$endif}

