{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSavePanel.h }

{$ifdef CALLBACKS}
type
  NSSavePanelBeginSheetModalForWindowCallback = reference to function (result_: NSModalResponse): pointer; cblock; cdecl;
  NSSavePanelBeginWithCompletionHandlerCallback = reference to function (result_: NSModalResponse): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSSavePanelPtr = ^NSSavePanel;
  NSOpenSavePanelDelegateProtocolPtr = ^NSOpenSavePanelDelegateProtocol;
{$endif}

{$ifdef TYPES}
const
  NSFileHandlingPanelCancelButton = NSModalResponseCancel deprecated 'replace with NSModalResponseCancel';
  NSFileHandlingPanelOKButton = NSModalResponseOK deprecated 'replace with NSModalResponseOK';
{$endif}

{$ifdef CLASSES}

type
  NSSavePanel = objcclass external (NSPanel)
  public
    class function savePanel: NSSavePanel; message 'savePanel';
    function URL: NSURL; message 'URL';
    procedure setDirectoryURL(newValue: NSURL); message 'setDirectoryURL:'; { available in macos  }
    function directoryURL: NSURL; message 'directoryURL'; { available in macos  }
    procedure setAllowedContentTypes(newValue: NSArray); message 'setAllowedContentTypes:'; { available in macos  }
    function allowedContentTypes: NSArray; message 'allowedContentTypes'; { available in macos  }
    procedure setAllowsOtherFileTypes(newValue: objcbool); message 'setAllowsOtherFileTypes:';
    function allowsOtherFileTypes: objcbool; message 'allowsOtherFileTypes';
    procedure setAccessoryView(newValue: NSView); message 'setAccessoryView:';
    function accessoryView: NSView; message 'accessoryView';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function isExpanded: objcbool; message 'isExpanded';
    procedure setCanCreateDirectories(newValue: objcbool); message 'setCanCreateDirectories:';
    function canCreateDirectories: objcbool; message 'canCreateDirectories';
    procedure setCanSelectHiddenExtension(newValue: objcbool); message 'setCanSelectHiddenExtension:';
    function canSelectHiddenExtension: objcbool; message 'canSelectHiddenExtension';
    procedure setExtensionHidden(newValue: objcbool); message 'setExtensionHidden:';
    function isExtensionHidden: objcbool; message 'isExtensionHidden';
    procedure setTreatsFilePackagesAsDirectories(newValue: objcbool); message 'setTreatsFilePackagesAsDirectories:';
    function treatsFilePackagesAsDirectories: objcbool; message 'treatsFilePackagesAsDirectories';
    procedure setPrompt(newValue: NSString); message 'setPrompt:';
    function prompt: NSString; message 'prompt';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setNameFieldLabel(newValue: NSString); message 'setNameFieldLabel:';
    function nameFieldLabel: NSString; message 'nameFieldLabel';
    procedure setNameFieldStringValue(newValue: NSString); message 'setNameFieldStringValue:'; { available in macos  }
    function nameFieldStringValue: NSString; message 'nameFieldStringValue'; { available in macos  }
    procedure setMessage(newValue: NSString); message 'setMessage:';
    function message_: NSString; message 'message';
    procedure validateVisibleColumns; message 'validateVisibleColumns';
    procedure setShowsHiddenFiles(newValue: objcbool); message 'setShowsHiddenFiles:';
    function showsHiddenFiles: objcbool; message 'showsHiddenFiles';
    procedure setShowsTagField(newValue: objcbool); message 'setShowsTagField:'; { available in macos  }
    function showsTagField: objcbool; message 'showsTagField'; { available in macos  }
    procedure setTagNames(newValue: NSArray); message 'setTagNames:'; { available in macos  }
    function tagNames: NSArray; message 'tagNames'; { available in macos  }
    procedure ok (sender: id); message 'ok:';
    procedure cancel (sender: id); message 'cancel:';
    procedure beginSheetModalForWindow_completionHandler (window: NSWindow; handler: NSSavePanelBeginSheetModalForWindowCallback); message 'beginSheetModalForWindow:completionHandler:'; { available in macos  }
    procedure beginWithCompletionHandler (handler: NSSavePanelBeginWithCompletionHandlerCallback); message 'beginWithCompletionHandler:'; { available in macos  }
    function runModal: NSModalResponse; message 'runModal';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSOpenSavePanelDelegateProtocol = objcprotocol external name 'NSOpenSavePanelDelegate' (NSObjectProtocol)
  optional
    function panel_shouldEnableURL (sender: id; url: NSURL): objcbool; message 'panel:shouldEnableURL:'; { available in macos  }
    function panel_validateURL_error (sender: id; url: NSURL; outError: NSErrorPtr): objcbool; message 'panel:validateURL:error:'; { available in macos  }
    procedure panel_didChangeToDirectoryURL (sender: id; url: NSURL); message 'panel:didChangeToDirectoryURL:'; { available in macos  }
    function panel_userEnteredFilename_confirmed (sender: id; filename: NSString; okFlag: objcbool): NSString; message 'panel:userEnteredFilename:confirmed:';
    procedure panel_willExpand (sender: id; expanding: objcbool); message 'panel:willExpand:';
    procedure panelSelectionDidChange (sender: id); message 'panelSelectionDidChange:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSSavePanelDelegateDeprecated = objccategory external (NSObject)
    function panel_isValidFilename (sender: id; filename: NSString): objcbool; message 'panel:isValidFilename:'; deprecated 'Use -panel:validateURL:error: instead';
    procedure panel_directoryDidChange (sender: id; path: NSString); message 'panel:directoryDidChange:'; deprecated 'Use -panel:didChangeToDirectoryURL: instead';
    function panel_compareFilename_with_caseSensitive (sender: id; name1: NSString; name2: NSString; caseSensitive: objcbool): NSComparisonResult; message 'panel:compareFilename:with:caseSensitive:'; deprecated 'Filenames in the save panel should not have a custom sort. This method is never called on 10.14, and rarely called after 10.6';
    function panel_shouldShowFilename (sender: id; filename: NSString): objcbool; message 'panel:shouldShowFilename:'; deprecated 'Use -panel:shouldEnableURL: instead';
  end;

type
  NSSavePanel_NSDeprecated = objccategory external name 'NSDeprecated' (NSSavePanel)
    function filename: NSString; message 'filename'; deprecated 'Use -URL instead';
    function directory: NSString; message 'directory'; deprecated 'Use -directoryURL instead';
    procedure setDirectory (path: NSString); message 'setDirectory:'; deprecated 'Use -setDirectoryURL: instead';
    function requiredFileType: NSString; message 'requiredFileType'; deprecated 'Use -allowedFileTypes instead';
    procedure setRequiredFileType (type_: NSString); message 'setRequiredFileType:'; deprecated 'Use -setAllowedFileTypes: instead';
    procedure beginSheetForDirectory_file_modalForWindow_modalDelegate_didEndSelector_contextInfo (path: NSString; name: NSString; docWindow: NSWindow; delegate_: id; didEndSelector: SEL; contextInfo: pointer); message 'beginSheetForDirectory:file:modalForWindow:modalDelegate:didEndSelector:contextInfo:'; deprecated 'Use beginSheetModalForWindow:completionHandler: instead. The following parameters are replaced by properties: ''path'' is replaced by ''directoryURL'' and ''name'' by ''nameFieldStringValue''.';
    function runModalForDirectory_file (path: NSString; name: NSString): NSInteger; message 'runModalForDirectory:file:'; deprecated 'Use -runModal instead. The following parameters are replaced by properties: ''path'' is replaced by ''directoryURL'' and ''name'' by ''nameFieldStringValue''.';
    procedure selectText (sender: id); message 'selectText:'; deprecated 'Default implementation does nothing.';
    procedure setAllowedFileTypes(newValue: NSArray); message 'setAllowedFileTypes:'; deprecated 'Use -allowedContentTypes instead';
    function allowedFileTypes: NSArray; message 'allowedFileTypes'; deprecated 'Use -allowedContentTypes instead';
  end;
{$endif}

