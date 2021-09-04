{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKNotificationBanner.h }

{$ifdef CALLBACKS}
type
  GKNotificationBannerShowBannerWithTitleCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKNotificationBannerPtr = ^GKNotificationBanner;
{$endif}

{$ifdef CLASSES}

type
  GKNotificationBanner = objcclass external (NSObject)
  public
    class procedure showBannerWithTitle_message_completionHandler (title: NSString; message_: NSString; completionHandler: GKNotificationBannerShowBannerWithTitleCallback); message 'showBannerWithTitle:message:completionHandler:'; { available in 10_8, 5_0 }
    class procedure showBannerWithTitle_message_duration_completionHandler (title: NSString; message_: NSString; duration: NSTimeInterval; completionHandler: GKNotificationBannerShowBannerWithTitleCallback); message 'showBannerWithTitle:message:duration:completionHandler:'; { available in 10_8, 6_0 }
  end;
{$endif}

