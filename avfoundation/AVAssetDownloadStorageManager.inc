{ Parsed from AVFoundation.framework AVAssetDownloadStorageManager.h }

{$ifdef TYPES}
type
  AVAssetDownloadStorageManagerPtr = ^AVAssetDownloadStorageManager;
  AVAssetDownloadStorageManagementPolicyPtr = ^AVAssetDownloadStorageManagementPolicy;
  AVMutableAssetDownloadStorageManagementPolicyPtr = ^AVMutableAssetDownloadStorageManagementPolicy;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVAssetDownloadedAssetEvictionPriority = NSString { unavailable in tvos, watchos } { available in macos 10.15, ios 11.0 };
  AVAssetDownloadedAssetEvictionPriorityPtr = ^AVAssetDownloadedAssetEvictionPriority { unavailable in tvos, watchos } { available in macos 10.15, ios 11.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  AVAssetDownloadedAssetEvictionPriorityImportant: AVAssetDownloadedAssetEvictionPriority { unavailable in tvos, watchos } { available in macos 10.15, ios 11.0 }; cvar; external;
  AVAssetDownloadedAssetEvictionPriorityDefault: AVAssetDownloadedAssetEvictionPriority { unavailable in tvos, watchos } { available in macos 10.15, ios 11.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  AVAssetDownloadStorageManager = objcclass external (NSObject)
  public
    class function sharedDownloadStorageManager: AVAssetDownloadStorageManager; message 'sharedDownloadStorageManager';
    procedure setStorageManagementPolicy_forURL (storageManagementPolicy: AVAssetDownloadStorageManagementPolicy; downloadStorageURL: NSURL); message 'setStorageManagementPolicy:forURL:';
    function storageManagementPolicyForURL (downloadStorageURL: NSURL): AVAssetDownloadStorageManagementPolicy; message 'storageManagementPolicyForURL:';
  end;

type
  AVAssetDownloadStorageManagementPolicy = objcclass external (NSObject, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _storageManagementPolicy: AVAssetDownloadStorageManagementPolicyInternal;
  public
    function priority: AVAssetDownloadedAssetEvictionPriority; message 'priority';
    function expirationDate: NSDate; message 'expirationDate';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  AVMutableAssetDownloadStorageManagementPolicy = objcclass external (AVAssetDownloadStorageManagementPolicy)
  public
    procedure setPriority(newValue: AVAssetDownloadedAssetEvictionPriority); message 'setPriority:';
    function priority: AVAssetDownloadedAssetEvictionPriority; message 'priority';
    procedure setExpirationDate(newValue: NSDate); message 'setExpirationDate:';
    function expirationDate: NSDate; message 'expirationDate';
  end;
{$endif}

{$else}
{$endif}
