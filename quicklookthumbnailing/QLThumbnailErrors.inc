{ Parsed from QuickLookThumbnailing.framework QLThumbnailErrors.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  QLThumbnailErrorDomain: NSErrorDomain { available in macos 10.15, ios 13.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  QLThumbnailError = NSErrorDomain;
  QLThumbnailErrorPtr = ^QLThumbnailError;

const
  QLThumbnailErrorGenerationFailed = 0;
  QLThumbnailErrorSavingToURLFailed = 1;
  QLThumbnailErrorNoCachedThumbnail = 2;
  QLThumbnailErrorNoCloudThumbnail = 3;
  QLThumbnailErrorRequestInvalid = 4;
  QLThumbnailErrorRequestCancelled = 5;
{$endif}

