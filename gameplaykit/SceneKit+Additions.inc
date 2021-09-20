{ Parsed from GameplayKit.framework SceneKit+Additions.h }
{$ifdef CLASSES}

type
  SCNNode_GameplayKit = objccategory external name 'GameplayKit' (SCNNode)
    procedure setEntity(newValue: GKEntity); message 'setEntity:'; { available in macos 10.13, ios 11.0 }
    function entity: GKEntity; message 'entity'; { available in macos 10.13, ios 11.0 }
  end;

type
  GameplayKit = objccategory external (SCNScene)
  end;
{$endif}

