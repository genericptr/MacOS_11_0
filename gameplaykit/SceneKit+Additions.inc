{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/SceneKit+Additions.h }
{$ifdef CLASSES}

type
  SCNNode_GameplayKit = objccategory external name 'GameplayKit' (SCNNode)
    procedure setEntity(newValue: GKEntity); message 'setEntity:'; { available in 10_13, 11_0 }
    function entity: GKEntity; message 'entity'; { available in 10_13, 11_0 }
  end;

type
  GameplayKit = objccategory external (SCNScene)
  end;
{$endif}

