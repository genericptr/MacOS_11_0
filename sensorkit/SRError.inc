{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/SRError.h }

{$ifdef TYPES}
type
  SRErrorDomain =  NSErrorDomain { unavailable in watchos, macos) API_UNAVAILABLE(tvos };
  SRErrorCode = NSInteger;
  SRErrorCodePtr = ^SRErrorCode;

const
  SRErrorInvalidEntitlement = 0;
  SRErrorNoAuthorization = 1;
  SRErrorDataInaccessible = 2;
  SRErrorFetchRequestInvalid = 3;
  SRErrorPromptDeclined = 4;
{$endif}

