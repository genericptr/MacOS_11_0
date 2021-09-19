{ Parsed from AppKit.framework NSOpenPanel.h }

{$ifdef TYPES}
type
  NSOpenPanelPtr = ^NSOpenPanel;
{$endif}

{$ifdef CLASSES}

type
  NSOpenPanel = objcclass external (NSSavePanel)
  public
    class function openPanel: NSOpenPanel; message 'openPanel';
    function URLs: NSArray; message 'URLs';
    procedure setResolvesAliases(newValue: objcbool); message 'setResolvesAliases:';
    function resolvesAliases: objcbool; message 'resolvesAliases';
    procedure setCanChooseDirectories(newValue: objcbool); message 'setCanChooseDirectories:';
    function canChooseDirectories: objcbool; message 'canChooseDirectories';
    procedure setAllowsMultipleSelection(newValue: objcbool); message 'setAllowsMultipleSelection:';
    function allowsMultipleSelection: objcbool; message 'allowsMultipleSelection';
    procedure setCanChooseFiles(newValue: objcbool); message 'setCanChooseFiles:';
    function canChooseFiles: objcbool; message 'canChooseFiles';
    procedure setCanResolveUbiquitousConflicts(newValue: objcbool); message 'setCanResolveUbiquitousConflicts:'; { available in macos 10.10 }
    function canResolveUbiquitousConflicts: objcbool; message 'canResolveUbiquitousConflicts'; { available in macos 10.10 }
    procedure setCanDownloadUbiquitousContents(newValue: objcbool); message 'setCanDownloadUbiquitousContents:'; { available in macos 10.10 }
    function canDownloadUbiquitousContents: objcbool; message 'canDownloadUbiquitousContents'; { available in macos 10.10 }
    procedure setAccessoryViewDisclosed(newValue: objcbool); message 'setAccessoryViewDisclosed:'; { available in macos 10.11 }
    function isAccessoryViewDisclosed: objcbool; message 'isAccessoryViewDisclosed'; { available in macos 10.11 }
  end;


type
  NSOpenPanel_NSDeprecated = objccategory external name 'NSDeprecated' (NSOpenPanel)
    function filenames: NSArray; message 'filenames'; deprecated;
    procedure beginSheetForDirectory_file_types_modalForWindow_modalDelegate_didEndSelector_contextInfo (path: NSString; name: NSString; fileTypes: NSArray; docWindow: NSWindow; delegate_: id; didEndSelector: SEL; contextInfo: pointer); message 'beginSheetForDirectory:file:types:modalForWindow:modalDelegate:didEndSelector:contextInfo:'; deprecated;
    procedure beginForDirectory_file_types_modelessDelegate_didEndSelector_contextInfo (path: NSString; name: NSString; fileTypes: NSArray; delegate_: id; didEndSelector: SEL; contextInfo: pointer); message 'beginForDirectory:file:types:modelessDelegate:didEndSelector:contextInfo:'; deprecated;
    function runModalForDirectory_file_types (path: NSString; name: NSString; fileTypes: NSArray): NSInteger; message 'runModalForDirectory:file:types:'; deprecated;
    function runModalForTypes (fileTypes: NSArray): NSInteger; message 'runModalForTypes:'; deprecated;
  end;
{$endif}

