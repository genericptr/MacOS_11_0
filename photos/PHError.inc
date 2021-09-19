{ Parsed from Photos.framework PHError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  PHPhotosErrorDomain: NSErrorDomain; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PHPhotosError = NSInteger;
  PHPhotosErrorPtr = ^PHPhotosError;

const
  PHPhotosErrorInvalid = -1;
  PHPhotosErrorUserCancelled = 3072;
  PHPhotosErrorLibraryVolumeOffline = 3114;
  PHPhotosErrorRelinquishingLibraryBundleToWriter = 3142;
  PHPhotosErrorSwitchingSystemPhotoLibrary = 3143;
  PHPhotosErrorNetworkAccessRequired = 3164 { available in macos 11.0, ios 14, tvos 14 };
{$endif}

{$ifdef __swift__}
{$ifdef TYPES}
const
  PHPhotosErrorInvalidDeprecated = PHPhotosErrorInvalid;
  PHPhotosErrorUserCancelledDeprecated = PHPhotosErrorUserCancelled;
  PHPhotosErrorLibraryVolumeOfflineDeprecated = PHPhotosErrorLibraryVolumeOffline;
  PHPhotosErrorRelinquishingLibraryBundleToWriterDeprecated = PHPhotosErrorRelinquishingLibraryBundleToWriter;
  PHPhotosErrorSwitchingSystemPhotoLibraryDeprecated = PHPhotosErrorSwitchingSystemPhotoLibrary;
{$endif}

{$endif}
