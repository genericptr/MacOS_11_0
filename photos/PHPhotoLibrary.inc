{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHPhotoLibrary.h }

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
  PHAuthorizationStatusLimited = 4 { available in ios  };

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
    procedure photoLibraryDidBecomeUnavailable (photoLibrary: PHPhotoLibrary); message 'photoLibraryDidBecomeUnavailable:'; { available in macos , ios , tvos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  PHPhotoLibrary = objcclass external (NSObject)
  public
    class function sharedPhotoLibrary: PHPhotoLibrary; message 'sharedPhotoLibrary';
    class function authorizationStatusForAccessLevel (accessLevel: PHAccessLevel): PHAuthorizationStatus; message 'authorizationStatusForAccessLevel:'; { available in macosx , ios , tvos  }
    class procedure requestAuthorizationForAccessLevel_handler (accessLevel: PHAccessLevel; handler: PHPhotoLibraryRequestAuthorizationForAccessLevelCallback); message 'requestAuthorizationForAccessLevel:handler:'; { available in macosx , ios , tvos  }
    class function authorizationStatus: PHAuthorizationStatus; message 'authorizationStatus'; deprecated 'replace with +authorizationStatusForAccessLevel:';
    class procedure requestAuthorization (handler: PHPhotoLibraryRequestAuthorizationCallback); message 'requestAuthorization:'; deprecated 'replace with +requestAuthorizationForAccessLevel:handler:';
    function unavailabilityReason: NSError; message 'unavailabilityReason'; { available in macos , ios , tvos  }
    procedure registerAvailabilityObserver (observer: id); message 'registerAvailabilityObserver:'; { available in macos , ios , tvos  }
    procedure unregisterAvailabilityObserver (observer: id); message 'unregisterAvailabilityObserver:'; { available in macos , ios , tvos  }
    procedure performChanges_completionHandler (changeBlock: dispatch_block_t; completionHandler: PHPhotoLibraryPerformChangesCallback); message 'performChanges:completionHandler:';
    function performChangesAndWait_error (changeBlock: dispatch_block_t; error: NSErrorPtr): objcbool; message 'performChangesAndWait:error:';
    procedure registerChangeObserver (observer: id); message 'registerChangeObserver:';
    procedure unregisterChangeObserver (observer: id); message 'unregisterChangeObserver:';
  end;
{$endif}

