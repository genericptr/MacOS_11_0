{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHFetchResult.h }

{$ifdef CALLBACKS}
type
  PHFetchResultEnumerateObjectsUsingBlockCallback = reference to procedure (obj: id; idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
  PHFetchResultEnumerateObjectsWithOptionsCallback = reference to procedure (obj: id; idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
  PHFetchResultEnumerateObjectsAtIndexesCallback = reference to procedure (obj: id; idx: NSUInteger; stop: objcboolPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHFetchResultPtr = ^PHFetchResult;
{$endif}

{$ifdef CLASSES}

type
  PHFetchResult = objcclass external (NSObject, NSCopyingProtocol, NSFastEnumerationProtocol)
  public
    function count: NSUInteger; message 'count';
    function objectAtIndex (index: NSUInteger): id; message 'objectAtIndex:';
    function objectAtIndexedSubscript (idx: NSUInteger): id; message 'objectAtIndexedSubscript:';
    function containsObject (anObject: id): objcbool; message 'containsObject:';
    function indexOfObject (anObject: id): NSUInteger; message 'indexOfObject:';
    function indexOfObject_inRange (anObject: id; range: NSRange): NSUInteger; message 'indexOfObject:inRange:';
    function firstObject: id; message 'firstObject';
    function lastObject: id; message 'lastObject';
    function objectsAtIndexes (indexes: NSIndexSet): NSArray; message 'objectsAtIndexes:';
    procedure enumerateObjectsUsingBlock (block: PHFetchResultEnumerateObjectsUsingBlockCallback); message 'enumerateObjectsUsingBlock:';
    procedure enumerateObjectsWithOptions_usingBlock (opts: NSEnumerationOptions; block: PHFetchResultEnumerateObjectsWithOptionsCallback); message 'enumerateObjectsWithOptions:usingBlock:';
    procedure enumerateObjectsAtIndexes_options_usingBlock (s: NSIndexSet; opts: NSEnumerationOptions; block: PHFetchResultEnumerateObjectsAtIndexesCallback); message 'enumerateObjectsAtIndexes:options:usingBlock:';
    function countOfAssetsWithMediaType (mediaType: PHAssetMediaType): NSUInteger; message 'countOfAssetsWithMediaType:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
  end;
{$endif}

