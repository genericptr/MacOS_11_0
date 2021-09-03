{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSAtomicStoreCacheNode.h }

{$ifdef TYPES}
type
  NSAtomicStoreCacheNodePtr = ^NSAtomicStoreCacheNode;
{$endif}

{$ifdef CLASSES}

type
  NSAtomicStoreCacheNode = objcclass external (NSObject)
  private
  public
    function initWithObjectID (moid: NSManagedObjectID): id; message 'initWithObjectID:';
    function objectID: NSManagedObjectID; message 'objectID';
    procedure setPropertyCache(newValue: NSMutableDictionary); message 'setPropertyCache:';
    function propertyCache: NSMutableDictionary; message 'propertyCache';
    function valueForKey (key: NSString): id; message 'valueForKey:';
    procedure setValue_forKey (value: id; key: NSString); message 'setValue:forKey:';
  end;
{$endif}
