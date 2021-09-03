{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHError.h }
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
  PHPhotosErrorNetworkAccessRequired = 3164 { available in macos , ios , tvos  };
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
