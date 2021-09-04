{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKArcadeService.h }

{$ifdef CALLBACKS}
type
  SKArcadeServiceRegisterArcadeAppWithRandomFromLibCallback = reference to procedure (randomFromFP: NSData; randomFromFPLength: cuint32; cmacOfAppPID: NSData; cmacOfAppPIDLength: cuint32; error: NSError); cblock; cdecl;
  SKArcadeServiceArcadeSubscriptionStatusWithNonceCallback = reference to procedure (subscriptionStatus: NSData; subscriptionStatusLength: cuint32; cmacOfNonce: NSData; cmacOfNonceLength: cuint32; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SKArcadeServicePtr = ^SKArcadeService;
{$endif}

{$ifdef CLASSES}

type
  SKArcadeService = objcclass external (NSObject)
  public
    class procedure registerArcadeAppWithRandomFromLib_randomFromLibLength_resultHandler (randomFromLib: NSData; randomFromLibLength: cuint32; resultHandler: SKArcadeServiceRegisterArcadeAppWithRandomFromLibCallback); message 'registerArcadeAppWithRandomFromLib:randomFromLibLength:resultHandler:'; { unavailable in watchos }
    class procedure arcadeSubscriptionStatusWithNonce_resultHandler (nonce: cuint64; resultHandler: SKArcadeServiceArcadeSubscriptionStatusWithNonceCallback); message 'arcadeSubscriptionStatusWithNonce:resultHandler:'; { unavailable in watchos }
    class procedure repairArcadeApp; message 'repairArcadeApp'; { unavailable in watchos }
  end;
{$endif}

