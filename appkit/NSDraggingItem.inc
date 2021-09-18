{ Parsed from AppKit.framework NSDraggingItem.h }

{$ifdef CALLBACKS}
type
  NSDraggingItemImageComponentsProviderCallback = reference to function : NSArray; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSDraggingImageComponentPtr = ^NSDraggingImageComponent;
  NSDraggingItemPtr = ^NSDraggingItem;
{$endif}

{$ifdef TYPES}
type
  NSDraggingImageComponentKey = NSString;
  NSDraggingImageComponentKeyPtr = ^NSDraggingImageComponentKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDraggingImageComponentIconKey: NSDraggingImageComponentKey { available in macos  }; cvar; external;
  NSDraggingImageComponentLabelKey: NSDraggingImageComponentKey { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSDraggingImageComponent = objcclass external (NSObject)
  public
    class function draggingImageComponentWithKey (key: NSDraggingImageComponentKey): NSDraggingImageComponent; message 'draggingImageComponentWithKey:';
    function initWithKey (key: NSDraggingImageComponentKey): id; message 'initWithKey:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    procedure setKey(newValue: NSDraggingImageComponentKey); message 'setKey:';
    function key: NSDraggingImageComponentKey; message 'key';
    procedure setContents(newValue: id); message 'setContents:';
    function contents: id; message 'contents';
    procedure setFrame(newValue: NSRect); message 'setFrame:';
    function frame: NSRect; message 'frame';
  end;

type
  NSDraggingItem = objcclass external (NSObject)
  public
    function initWithPasteboardWriter (pasteboardWriter: NSPasteboardWritingProtocol): id; message 'initWithPasteboardWriter:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function item: id; message 'item';
    procedure setDraggingFrame(newValue: NSRect); message 'setDraggingFrame:';
    function draggingFrame: NSRect; message 'draggingFrame';
    procedure setImageComponentsProvider(newValue: NSDraggingItemImageComponentsProviderCallback); message 'setImageComponentsProvider:';
    function imageComponentsProvider: NSDraggingItemImageComponentsProviderCallback; message 'imageComponentsProvider';
    procedure setDraggingFrame_contents (frame: NSRect; contents: id); message 'setDraggingFrame:contents:';
    function imageComponents: NSArray; message 'imageComponents';
  end;
{$endif}

