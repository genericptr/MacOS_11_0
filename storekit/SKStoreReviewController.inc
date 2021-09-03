{ Parsed from StoreKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/StoreKit.framework/Headers/SKStoreReviewController.h }

{ Types from SKStoreReviewController }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SKStoreReviewControllerPtr = ^SKStoreReviewController;
{$endif}

{$ifdef CLASSES}

type
  SKStoreReviewController = objcclass external (NSObject)
  public
    class procedure requestReview; message 'requestReview'; { unavailable in watchos }
    {$if defined(TARGET_OS_IOS)}
    class procedure requestReviewInScene (windowScene: UIWindowScenePtr); message 'requestReviewInScene:'; { unavailable in watchos }
    {$endif}
  end;
{$endif}

