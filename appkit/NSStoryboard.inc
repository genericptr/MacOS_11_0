{ Parsed from AppKit.framework NSStoryboard.h }

{$ifdef TYPES}
type
  NSStoryboardPtr = ^NSStoryboard;
{$endif}

{$ifdef TYPES}
type
  NSStoryboardName = NSString;
  NSStoryboardNamePtr = ^NSStoryboardName;
  NSStoryboardSceneIdentifier = NSString;
  NSStoryboardSceneIdentifierPtr = ^NSStoryboardSceneIdentifier;
  NSStoryboardControllerCreator = reference to function (coder: NSCoder): id; cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  NSStoryboard = objcclass external (NSObject)
  public
    class function mainStoryboard: NSStoryboard; message 'mainStoryboard'; { available in macos 10.13 }
    class function storyboardWithName_bundle (name: NSStoryboardName; storyboardBundleOrNil: NSBundle): id; message 'storyboardWithName:bundle:';
    function instantiateInitialController: id; message 'instantiateInitialController';
    function instantiateInitialControllerWithCreator (block: NSStoryboardControllerCreator): id; message 'instantiateInitialControllerWithCreator:'; { available in macos 10.15 }
    function instantiateControllerWithIdentifier (identifier: NSStoryboardSceneIdentifier): id; message 'instantiateControllerWithIdentifier:';
    function instantiateControllerWithIdentifier_creator (identifier: NSStoryboardSceneIdentifier; block: NSStoryboardControllerCreator): id; message 'instantiateControllerWithIdentifier:creator:'; { available in macos 10.15 }
  end;
{$endif}

