{ Parsed from Foundation.framework NSURLCredential.h }

{$ifdef TYPES}
type
  NSURLCredentialPtr = ^NSURLCredential;
{$endif}

{$ifdef TYPES}
type
  NSURLCredentialPersistence = NSUInteger;
  NSURLCredentialPersistencePtr = ^NSURLCredentialPersistence;

const
  NSURLCredentialPersistenceNone = 0;
  NSURLCredentialPersistenceForSession = 1;
  NSURLCredentialPersistencePermanent = 2;
  NSURLCredentialPersistenceSynchronizable = 3 { available in macos , ios , watchos , tvos  };
{$endif}

{$ifdef CLASSES}

type
  NSURLCredential = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _internal: NSURLCredentialInternal;
  public
    function persistence: NSURLCredentialPersistence; message 'persistence';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSInternetPassword = objccategory external (NSURLCredential)
    function initWithUser_password_persistence (user: NSString; password: NSString; persistence_: NSURLCredentialPersistence): id; message 'initWithUser:password:persistence:';
    class function credentialWithUser_password_persistence (user: NSString; password: NSString; persistence_: NSURLCredentialPersistence): NSURLCredential; message 'credentialWithUser:password:persistence:';
    function user: NSString; message 'user';
    function password: NSString; message 'password';
    function hasPassword: objcbool; message 'hasPassword';
  end;

type
  NSClientCertificate = objccategory external (NSURLCredential)
    function initWithIdentity_certificates_persistence (identity: SecIdentityRef; certArray: NSArray; persistence_: NSURLCredentialPersistence): id; message 'initWithIdentity:certificates:persistence:'; { available in macos , ios , watchos , tvos  }
    class function credentialWithIdentity_certificates_persistence (identity: SecIdentityRef; certArray: NSArray; persistence_: NSURLCredentialPersistence): NSURLCredential; message 'credentialWithIdentity:certificates:persistence:'; { available in macos , ios , watchos , tvos  }
    function identity: SecIdentityRef; message 'identity';
    function certificates: NSArray; message 'certificates'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSServerTrust = objccategory external (NSURLCredential)
    function initWithTrust (trust: SecTrustRef): id; message 'initWithTrust:'; { available in macos , ios , watchos , tvos  }
    class function credentialForTrust (trust: SecTrustRef): NSURLCredential; message 'credentialForTrust:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

