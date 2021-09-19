{ Parsed from AppKit.framework NSDocumentController.h }

{$ifdef CALLBACKS}
type
  NSDocumentControllerBeginOpenPanelWithCompletionHandlerCallback = reference to procedure (param1: NSArray); cblock; cdecl;
  NSDocumentControllerBeginOpenPanelCallback = reference to procedure (result_: NSInteger); cblock; cdecl;
  NSDocumentControllerOpenDocumentWithContentsOfURLCallback = reference to procedure (document: NSDocument; documentWasAlreadyOpen: objcbool; error: NSError); cblock; cdecl;
  NSDocumentControllerReopenDocumentForURLCallback = reference to procedure (document: NSDocument; documentWasAlreadyOpen: objcbool; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSDocumentControllerPtr = ^NSDocumentController;
{$endif}

{$ifdef CLASSES}

type
  NSDocumentController = objcclass external (NSObject, NSCodingProtocol, NSMenuItemValidationProtocol, NSUserInterfaceValidationsProtocol)
  public
    class function sharedDocumentController: NSDocumentController; message 'sharedDocumentController';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function documents: NSArray; message 'documents';
    function currentDocument: NSDocument; message 'currentDocument';
    function currentDirectory: NSString; message 'currentDirectory';
    function documentForURL (url: NSURL): NSDocument; message 'documentForURL:';
    function documentForWindow (window: NSWindow): NSDocument; message 'documentForWindow:';
    procedure addDocument (document: NSDocument); message 'addDocument:';
    procedure removeDocument (document: NSDocument); message 'removeDocument:';
    procedure newDocument (sender: id); message 'newDocument:';
    function openUntitledDocumentAndDisplay_error (displayDocument: objcbool; outError: NSErrorPtr): NSDocument; message 'openUntitledDocumentAndDisplay:error:';
    function makeUntitledDocumentOfType_error (typeName: NSString; outError: NSErrorPtr): NSDocument; message 'makeUntitledDocumentOfType:error:';
    procedure openDocument (sender: id); message 'openDocument:';
    function URLsFromRunningOpenPanel: NSArray; message 'URLsFromRunningOpenPanel';
    function runModalOpenPanel_forTypes (openPanel: NSOpenPanel; types: NSArray): NSInteger; message 'runModalOpenPanel:forTypes:';
    procedure beginOpenPanelWithCompletionHandler (completionHandler: NSDocumentControllerBeginOpenPanelWithCompletionHandlerCallback); message 'beginOpenPanelWithCompletionHandler:'; { available in macos 10.8 }
    procedure beginOpenPanel_forTypes_completionHandler (openPanel: NSOpenPanel; inTypes: NSArray; completionHandler: NSDocumentControllerBeginOpenPanelCallback); message 'beginOpenPanel:forTypes:completionHandler:'; { available in macos 10.8 }
    procedure openDocumentWithContentsOfURL_display_completionHandler (url: NSURL; displayDocument: objcbool; completionHandler: NSDocumentControllerOpenDocumentWithContentsOfURLCallback); message 'openDocumentWithContentsOfURL:display:completionHandler:'; { available in macos 10.7 }
    function makeDocumentWithContentsOfURL_ofType_error (url: NSURL; typeName: NSString; outError: NSErrorPtr): NSDocument; message 'makeDocumentWithContentsOfURL:ofType:error:';
    procedure reopenDocumentForURL_withContentsOfURL_display_completionHandler (urlOrNil: NSURL; contentsURL: NSURL; displayDocument: objcbool; completionHandler: NSDocumentControllerReopenDocumentForURLCallback); message 'reopenDocumentForURL:withContentsOfURL:display:completionHandler:'; { available in macos 10.7 }
    function makeDocumentForURL_withContentsOfURL_ofType_error (urlOrNil: NSURL; contentsURL: NSURL; typeName: NSString; outError: NSErrorPtr): NSDocument; message 'makeDocumentForURL:withContentsOfURL:ofType:error:';
    procedure setAutosavingDelay(newValue: NSTimeInterval); message 'setAutosavingDelay:';
    function autosavingDelay: NSTimeInterval; message 'autosavingDelay';
    procedure saveAllDocuments (sender: id); message 'saveAllDocuments:';
    function hasEditedDocuments: objcbool; message 'hasEditedDocuments';
    procedure reviewUnsavedDocumentsWithAlertTitle_cancellable_delegate_didReviewAllSelector_contextInfo (title: NSString; cancellable: objcbool; delegate: id; didReviewAllSelector: SEL; contextInfo: pointer); message 'reviewUnsavedDocumentsWithAlertTitle:cancellable:delegate:didReviewAllSelector:contextInfo:';
    procedure closeAllDocumentsWithDelegate_didCloseAllSelector_contextInfo (delegate: id; didCloseAllSelector: SEL; contextInfo: pointer); message 'closeAllDocumentsWithDelegate:didCloseAllSelector:contextInfo:';
    function duplicateDocumentWithContentsOfURL_copying_displayName_error (url: NSURL; duplicateByCopying: objcbool; displayNameOrNil: NSString; outError: NSErrorPtr): NSDocument; message 'duplicateDocumentWithContentsOfURL:copying:displayName:error:'; { available in macos 10.7 }
    function allowsAutomaticShareMenu: objcbool; message 'allowsAutomaticShareMenu'; { available in macos 10.13 }
    function standardShareMenuItem: NSMenuItem; message 'standardShareMenuItem'; { available in macos 10.13 }
    procedure presentError_modalForWindow_delegate_didPresentSelector_contextInfo (error: NSError; window: NSWindow; delegate: id; didPresentSelector: SEL; contextInfo: pointer); message 'presentError:modalForWindow:delegate:didPresentSelector:contextInfo:';
    function presentError (error: NSError): objcbool; message 'presentError:';
    function willPresentError (error: NSError): NSError; message 'willPresentError:';
    function maximumRecentDocumentCount: NSUInteger; message 'maximumRecentDocumentCount';
    procedure clearRecentDocuments (sender: id); message 'clearRecentDocuments:';
    procedure noteNewRecentDocument (document: NSDocument); message 'noteNewRecentDocument:';
    procedure noteNewRecentDocumentURL (url: NSURL); message 'noteNewRecentDocumentURL:';
    function recentDocumentURLs: NSArray; message 'recentDocumentURLs';
    function defaultType: NSString; message 'defaultType';
    function typeForContentsOfURL_error (url: NSURL; outError: NSErrorPtr): NSString; message 'typeForContentsOfURL:error:';
    function documentClassNames: NSArray; message 'documentClassNames';
    function documentClassForType (typeName: NSString): pobjc_class; message 'documentClassForType:';
    function displayNameForType (typeName: NSString): NSString; message 'displayNameForType:';
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
  end;


type
  NSDocumentController_NSDeprecated = objccategory external name 'NSDeprecated' (NSDocumentController)
    function openDocumentWithContentsOfURL_display_error (url: NSURL; displayDocument: objcbool; outError: NSErrorPtr): id; message 'openDocumentWithContentsOfURL:display:error:'; deprecated 'Use -openDocumentWithContentsOfURL:display:completionHandler: instead';
    function reopenDocumentForURL_withContentsOfURL_error (url: NSURL; contentsURL: NSURL; outError: NSErrorPtr): objcbool; message 'reopenDocumentForURL:withContentsOfURL:error:'; deprecated 'Use -reopenDocumentForURL:withContentsOfURL:display:completionHandler: instead';
    function fileExtensionsFromType (typeName: NSString): NSArray; message 'fileExtensionsFromType:'; deprecated;
    function typeFromFileExtension (fileNameExtensionOrHFSFileType: NSString): NSString; message 'typeFromFileExtension:'; deprecated;
    function documentForFileName (fileName: NSString): id; message 'documentForFileName:'; deprecated;
    function fileNamesFromRunningOpenPanel: NSArray; message 'fileNamesFromRunningOpenPanel'; deprecated;
    function makeDocumentWithContentsOfFile_ofType (fileName: NSString; type_: NSString): id; message 'makeDocumentWithContentsOfFile:ofType:'; deprecated;
    function makeDocumentWithContentsOfURL_ofType (url: NSURL; type_: NSString): id; message 'makeDocumentWithContentsOfURL:ofType:'; deprecated;
    function makeUntitledDocumentOfType (type_: NSString): id; message 'makeUntitledDocumentOfType:'; deprecated;
    function openDocumentWithContentsOfFile_display (fileName: NSString; display: objcbool): id; message 'openDocumentWithContentsOfFile:display:'; deprecated;
    function openDocumentWithContentsOfURL_display (url: NSURL; display: objcbool): id; message 'openDocumentWithContentsOfURL:display:'; deprecated;
    function openUntitledDocumentOfType_display (type_: NSString; display: objcbool): id; message 'openUntitledDocumentOfType:display:'; deprecated;
    procedure setShouldCreateUI (flag: objcbool); message 'setShouldCreateUI:'; deprecated;
    function shouldCreateUI: objcbool; message 'shouldCreateUI'; deprecated;
  end;
{$endif}

