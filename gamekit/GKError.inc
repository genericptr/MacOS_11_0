{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKError.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  GKErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  GKErrorCode = NSInteger;
  GKErrorCodePtr = ^GKErrorCode;

const
  GKErrorUnknown = 1;
  GKErrorCancelled = 2;
  GKErrorCommunicationsFailure = 3;
  GKErrorUserDenied = 4;
  GKErrorInvalidCredentials = 5;
  GKErrorNotAuthenticated = 6;
  GKErrorAuthenticationInProgress = 7;
  GKErrorInvalidPlayer = 8;
  GKErrorScoreNotSet = 9;
  GKErrorParentalControlsBlocked = 10;
  GKErrorPlayerStatusExceedsMaximumLength = 11;
  GKErrorPlayerStatusInvalid = 12;
  GKErrorMatchRequestInvalid = 13;
  GKErrorUnderage = 14;
  GKErrorGameUnrecognized = 15;
  GKErrorNotSupported = 16;
  GKErrorInvalidParameter = 17;
  GKErrorUnexpectedConnection = 18;
  GKErrorChallengeInvalid = 19;
  GKErrorTurnBasedMatchDataTooLarge = 20;
  GKErrorTurnBasedTooManySessions = 21;
  GKErrorTurnBasedInvalidParticipant = 22;
  GKErrorTurnBasedInvalidTurn = 23;
  GKErrorTurnBasedInvalidState = 24;
  GKErrorInvitationsDisabled = 25;
  GKErrorPlayerPhotoFailure = 26;
  GKErrorUbiquityContainerUnavailable = 27;
  GKErrorMatchNotConnected = 28;
  GKErrorGameSessionRequestInvalid = 29;
  GKErrorRestrictedToAutomatch = 30;
  GKErrorAPINotAvailable = 31;
  GKErrorNotAuthorized = 32;
  GKErrorConnectionTimeout = 33;
  GKErrorAPIObsolete = 34;
  GKErrorFriendListDescriptionMissing = 100;
  GKErrorFriendListRestricted = 101;
  GKErrorFriendListDenied = 102;
{$endif}

