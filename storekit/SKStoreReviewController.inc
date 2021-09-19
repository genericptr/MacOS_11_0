{ Parsed from StoreKit.framework SKStoreReviewController.h }

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
    class procedure requestReview; message 'requestReview'; { unavailable in watchos } { available in macos 10.14 }
    {$if defined(TARGET_OS_IOS)}
    class procedure requestReviewInScene (windowScene: UIWindowScenePtr); message 'requestReviewInScene:'; { unavailable in watchos } { available in ios 14.0 }
    {$endif}
  end;
{$endif}

