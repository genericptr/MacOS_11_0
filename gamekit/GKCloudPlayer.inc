{ Parsed from GameKit.framework GKCloudPlayer.h }

{$ifdef CALLBACKS}
type
  GKCloudPlayerGetCurrentSignedInPlayerForContainerCallback = reference to procedure (player: GKCloudPlayer; error: NSError); cblock; cdecl;
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

