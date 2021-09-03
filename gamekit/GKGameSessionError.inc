{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKGameSessionError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  GKGameSessionErrorDomain: NSString { unavailable in watchos }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  GKGameSessionErrorCode = NSInteger;
  GKGameSessionErrorCodePtr = ^GKGameSessionErrorCode;

const
  GKGameSessionErrorUnknown = 1;
  GKGameSessionErrorNotAuthenticated = 2;
  GKGameSessionErrorSessionConflict = 3;
  GKGameSessionErrorSessionNotShared = 4;
  GKGameSessionErrorConnectionCancelledByUser = 5;
  GKGameSessionErrorConnectionFailed = 6;
  GKGameSessionErrorSessionHasMaxConnectedPlayers = 7;
  GKGameSessionErrorSendDataNotConnected = 8;
  GKGameSessionErrorSendDataNoRecipients = 9;
  GKGameSessionErrorSendDataNotReachable = 10;
  GKGameSessionErrorSendRateLimitReached = 11;
  GKGameSessionErrorBadContainer = 12;
  GKGameSessionErrorCloudQuotaExceeded = 13;
  GKGameSessionErrorNetworkFailure = 14;
  GKGameSessionErrorCloudDriveDisabled = 15;
  GKGameSessionErrorInvalidSession = 16;
{$endif}

