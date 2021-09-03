{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKCloudPlayer.h }

{$ifdef CALLBACKS}
type
  GKCloudPlayerGetCurrentSignedInPlayerForContainerCallback = reference to function (player: GKCloudPlayer; error: NSError): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKCloudPlayerPtr = ^GKCloudPlayer;
{$endif}

{$ifdef CLASSES}

type
  GKCloudPlayer = objcclass external (GKBasePlayer)
  private
    _identifier: NSString;
    _name: NSString;
  public
    class procedure getCurrentSignedInPlayerForContainer_completionHandler (containerName: NSString; handler: GKCloudPlayerGetCurrentSignedInPlayerForContainerCallback); message 'getCurrentSignedInPlayerForContainer:completionHandler:';
  end;
{$endif}

