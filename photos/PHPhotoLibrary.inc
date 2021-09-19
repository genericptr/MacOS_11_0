{ Parsed from Photos.framework PHPhotoLibrary.h }

{$ifdef CALLBACKS}
type
  PHPhotoLibraryRequestAuthorizationForAccessLevelCallback = reference to procedure (status: PHAuthorizationStatus); cblock; cdecl;
  PHPhotoLibraryRequestAuthorizationCallback = reference to procedure (status: PHAuthorizationStatus); cblock; cdecl;
  PHPhotoLibraryPerformChangesCallback = reference to procedure (success: objcbool; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PHPhotoLibraryPtr = ^PHPhotoLibrary;
  PHPhotoLibraryChangeObserverProtocolPtr = ^PHPhotoLibraryChangeObserverProtocol;
  PHPhotoLibraryAvailabilityObserverProtocolPtr = ^PHPhotoLibraryAvailabilityObserverProtocol;
{$endif}

{$ifdef TYPES}
type
  PHAuthorizationStatus = NSInteger;
  PHAuthorizationStatusPtr = ^PHAuthorizationStatus;

const
  PHAuthorizationStatusNotDetermined = 0;
  PHAuthorizationStatusRestricted = 1;
  PHAuthorizationStatusDenied = 2;
  PHAuthorizationStatusAuthorized = 3;
  PHAuthorizationStatusLimited = 4 { available in ios 14 };

type
  PHAccessLevel = NSInteger;
  PHAccessLevelPtr = ^PHAccessLevel;

const
  PHAccessLevelAddOnly = 1;
  PHAccessLevelReadWrite = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  PHPhotoLibraryChangeObserverProtocol = objcprotocol external name 'PHPhotoLibraryChangeObserver' (NSObjectProtocol)
    procedure photoLibraryDidChange (changeInstance: PHChange); message 'photoLibraryDidChange:';
  end;

type
  PHPhotoLibraryAvailabilityObserverProtocol = objcprotocol external name 'PHPhotoLibraryAvailabilityObserver' (NSObjectProtocol)
    procedure photoLibraryDidBecomeUnavailable (photoLibrary: PHPhotoLibrary); message 'photoLibraryDidBecomeUnavailable:'; { available in macos 10.15, ios 13, tvos 13 }
  end;
{$endif}

{$ifdef CLASSES}

type
  PHPhotoLibrary = objcclass external (NSObject)
  public
    class function sharedPhotoLibrary: PHPhotoLibrary; message 'sharedPhotoLibrary';
    class function authorizationStatusForAccessLevel (accessLevel: PHAccessLevel): PHAuthorizationStatus; message 'authorizationStatusForAccessLevel:'; { available in macosx 11.0, ios 14, tvos 14 }
    class procedure requestAuthorizationForAccessLevel_handler (accessLevel: PHAccessLevel; handler: PHPhotoLibraryRequestAuthorizationForAccessLevelCallback); message 'requestAuthorizationForAccessLevel:handler:'; { available in macosx 11.0, ios 14, tvos 14 }
    class function authorizationStatus: PHAuthorizationStatus; message 'authorizationStatus'; deprecated 'replace with +authorizationStatusForAccessLevel:';
    class procedure requestAuthorization (handler: PHPhotoLibraryRequestAuthorizationCallback); message 'requestAuthorization:'; deprecated 'replace with +requestAuthorizationForAccessLevel:handler:';
    function unavailabilityReason: NSError; message 'unavailabilityReason'; { available in macos 10.15, ios 13, tvos 13 }
    procedure registerAvailabilityObserver (observer: PHPhotoLibraryAvailabilityObserverProtocol); message 'registerAvailabilityObserver:'; { available in macos 10.15, ios 13, tvos 13 }
    procedure unregisterAvailabilityObserver (observer: PHPhotoLibraryAvailabilityObserverProtocol); message 'unregisterAvailabilityObserver:'; { available in macos 10.15, ios 13, tvos 13 }
    procedure performChanges_completionHandler (changeBlock: dispatch_block_t; completionHandler: PHPhotoLibraryPerformChangesCallback); message 'performChanges:completionHandler:';
    function performChangesAndWait_error (changeBlock: dispatch_block_t; error: NSErrorPtr): objcbool; message 'performChangesAndWait:error:';
    procedure registerChangeObserver (observer: PHPhotoLibraryChangeObserverProtocol); message 'registerChangeObserver:';
    procedure unregisterChangeObserver (observer: PHPhotoLibraryChangeObserverProtocol); message 'unregisterChangeObserver:';
  end;
{$endif}

