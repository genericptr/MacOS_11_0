{ Parsed from GameKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameKit.framework/Headers/GKBasePlayer.h }

{$ifdef TYPES}
type
  GKBasePlayerPtr = ^GKBasePlayer;
{$endif}

{$ifdef CLASSES}

type
  GKBasePlayer = objcclass external (NSObject)
  public
    function playerID: NSString; message 'playerID';
    function displayName: NSString; message 'displayName';
  end;
{$endif}

