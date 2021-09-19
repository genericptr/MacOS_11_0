{ Parsed from Photos.framework PHFetchOptions.h }

{$ifdef TYPES}
type
  PHFetchOptionsPtr = ^PHFetchOptions;
{$endif}

{$ifdef CLASSES}

type
  PHFetchOptions = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setPredicate(newValue: NSPredicate); message 'setPredicate:';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    procedure setIncludeHiddenAssets(newValue: objcbool); message 'setIncludeHiddenAssets:';
    function includeHiddenAssets: objcbool; message 'includeHiddenAssets';
    procedure setIncludeAllBurstAssets(newValue: objcbool); message 'setIncludeAllBurstAssets:'; { available in macos 10.15 }
    function includeAllBurstAssets: objcbool; message 'includeAllBurstAssets'; { available in macos 10.15 }
    procedure setIncludeAssetSourceTypes(newValue: PHAssetSourceType); message 'setIncludeAssetSourceTypes:'; { available in ios 9 }
    function includeAssetSourceTypes: PHAssetSourceType; message 'includeAssetSourceTypes'; { available in ios 9 }
    procedure setFetchLimit(newValue: NSUInteger); message 'setFetchLimit:'; { available in ios 9 }
    function fetchLimit: NSUInteger; message 'fetchLimit'; { available in ios 9 }
    procedure setWantsIncrementalChangeDetails(newValue: objcbool); message 'setWantsIncrementalChangeDetails:';
    function wantsIncrementalChangeDetails: objcbool; message 'wantsIncrementalChangeDetails';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

