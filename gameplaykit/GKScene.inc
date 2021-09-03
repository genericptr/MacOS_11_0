{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKScene.h }

{$ifdef TYPES}
type
  GKScenePtr = ^GKScene;
  GKSceneRootNodeTypeProtocolPtr = ^GKSceneRootNodeTypeProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GKSceneRootNodeTypeProtocol = objcprotocol external name 'GKSceneRootNodeType' (NSObjectProtocol)
  end;
{$endif}

{$ifdef CLASSES}

type
  GKScene = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function sceneWithFileNamed (filename: NSString): id; message 'sceneWithFileNamed:';
    class function sceneWithFileNamed_rootNode (filename: NSString; rootNode: id): id; message 'sceneWithFileNamed:rootNode:';
    function entities: NSArray; message 'entities';
    procedure setRootNode(newValue: id); message 'setRootNode:';
    function rootNode: id; message 'rootNode';
    function graphs: NSDictionary; message 'graphs';
    procedure addEntity (entity: GKEntity); message 'addEntity:';
    procedure removeEntity (entity: GKEntity); message 'removeEntity:';
    procedure addGraph_name (graph: GKGraph; name: NSString); message 'addGraph:name:';
    procedure removeGraph (name: NSString); message 'removeGraph:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

