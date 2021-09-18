{ Parsed from GameplayKit.framework SceneKit+Additions.h }
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

