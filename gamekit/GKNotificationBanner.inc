{ Parsed from GameKit.framework GKNotificationBanner.h }

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
    class procedure showBannerWithTitle_message_completionHandler (title: NSString; message_: NSString; completionHandler: GKNotificationBannerShowBannerWithTitleCallback); message 'showBannerWithTitle:message:completionHandler:'; { available in macos 10.8, ios 5.0 }
    class procedure showBannerWithTitle_message_duration_completionHandler (title: NSString; message_: NSString; duration: NSTimeInterval; completionHandler: GKNotificationBannerShowBannerWithTitleCallback); message 'showBannerWithTitle:message:duration:completionHandler:'; { available in macos 10.8, ios 6.0 }
  end;
{$endif}

