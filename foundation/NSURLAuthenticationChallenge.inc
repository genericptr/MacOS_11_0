{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSURLAuthenticationChallenge.h }

{$ifdef TYPES}
type
  NSURLAuthenticationChallengePtr = ^NSURLAuthenticationChallenge;
  NSURLAuthenticationChallengeSenderProtocolPtr = ^NSURLAuthenticationChallengeSenderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSURLAuthenticationChallengeSenderProtocol = objcprotocol external name 'NSURLAuthenticationChallengeSender' (NSObjectProtocol)
    procedure useCredential_forAuthenticationChallenge (credential: NSURLCredential; challenge: NSURLAuthenticationChallenge); message 'useCredential:forAuthenticationChallenge:';
    procedure continueWithoutCredentialForAuthenticationChallenge (challenge: NSURLAuthenticationChallenge); message 'continueWithoutCredentialForAuthenticationChallenge:';
    procedure cancelAuthenticationChallenge (challenge: NSURLAuthenticationChallenge); message 'cancelAuthenticationChallenge:';
  optional
    procedure performDefaultHandlingForAuthenticationChallenge (challenge: NSURLAuthenticationChallenge); message 'performDefaultHandlingForAuthenticationChallenge:';
    procedure rejectProtectionSpaceAndContinueWithChallenge (challenge: NSURLAuthenticationChallenge); message 'rejectProtectionSpaceAndContinueWithChallenge:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSURLAuthenticationChallenge = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _internal: NSURLAuthenticationChallengeInternal;
  public
    function initWithProtectionSpace_proposedCredential_previousFailureCount_failureResponse_error_sender (space: NSURLProtectionSpace; credential: NSURLCredential; previousFailureCount: NSInteger; response: NSURLResponse; error: NSError; sender: id): id; message 'initWithProtectionSpace:proposedCredential:previousFailureCount:failureResponse:error:sender:';
    function initWithAuthenticationChallenge_sender (challenge: NSURLAuthenticationChallenge; sender: id): id; message 'initWithAuthenticationChallenge:sender:';
    function protectionSpace: NSURLProtectionSpace; message 'protectionSpace';
    function proposedCredential: NSURLCredential; message 'proposedCredential';
    function previousFailureCount: NSInteger; message 'previousFailureCount';
    function failureResponse: NSURLResponse; message 'failureResponse';
    function error: NSError; message 'error';
    function sender: id; message 'sender';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

