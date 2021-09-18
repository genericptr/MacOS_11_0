{ Parsed from AppKit.framework NSDocument.h }

{$ifdef CALLBACKS}
type
  NSDocumentPerformActivityWithSynchronousWaitingCallback = reference to procedure (param1: OpaqueCBlock); cblock; cdecl;
  NSDocumentContinueActivityUsingBlockCallback = reference to procedure; cblock; cdecl;
  NSDocumentContinueAsynchronousWorkOnMainThreadUsingBlockCallback = reference to procedure; cblock; cdecl;
  NSDocumentPerformSynchronousFileAccessUsingBlockCallback = reference to procedure; cblock; cdecl;
  NSDocumentPerformAsynchronousFileAccessUsingBlockCallback = reference to procedure (param1: OpaqueCBlock); cblock; cdecl;
  NSDocumentSaveToURLCallback = reference to procedure (errorOrNil: NSError); cblock; cdecl;
  NSDocumentAutosaveWithImplicitCancellabilityCallback = reference to procedure (errorOrNil: NSError); cblock; cdecl;
  NSDocumentStopBrowsingVersionsWithCompletionHandlerCallback = reference to procedure; cblock; cdecl;
  NSDocumentMoveDocumentWithCompletionHandlerCallback = reference to procedure (didMove: objcbool); cblock; cdecl;
  NSDocumentMoveToURLCallback = reference to procedure (param1: NSError); cblock; cdecl;
  NSDocumentLockDocumentWithCompletionHandlerCallback = reference to procedure (didLock: objcbool); cblock; cdecl;
  NSDocumentLockWithCompletionHandlerCallback = reference to procedure (param1: NSError); cblock; cdecl;
  NSDocumentUnlockDocumentWithCompletionHandlerCallback = reference to procedure (didUnlock: objcbool); cblock; cdecl;
  NSDocumentUnlockWithCompletionHandlerCallback = reference to procedure (param1: NSError); cblock; cdecl;
  NSDocumentShareDocumentWithSharingServiceCallback = reference to procedure (success: objcbool); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSDocumentPtr = ^NSDocument;
{$endif}

{$ifdef TYPES}
type
  NSDocumentChangeType = NSUInteger;
  NSDocumentChangeTypePtr = ^NSDocumentChangeType;

const
  NSChangeDone = 0;
  NSChangeUndone = 1;
  NSChangeRedone = 5 { available in macos  };
  NSChangeCleared = 2;
  NSChangeReadOtherContents = 3;
  NSChangeAutosaved = 4;
  NSChangeDiscardable = 256 { available in macos  };

type
  NSSaveOperationType = NSUInteger;
  NSSaveOperationTypePtr = ^NSSaveOperationType;

const
  NSSaveOperation = 0;
  NSSaveAsOperation = 1;
  NSSaveToOperation = 2;
  NSAutosaveInPlaceOperation = 4 { available in macos  };
  NSAutosaveElsewhereOperation = 3 { available in macos  };
  NSAutosaveAsOperation = 5 { available in macos  };
  NSAutosaveOperation = 3 deprecated 'Use NSAutosaveElsewhereOperation instead';
{$endif}

{$ifdef CLASSES}

type
  NSDocument = objcclass external (NSObject, NSEditorRegistrationProtocol, NSFilePresenterProtocol, NSMenuItemValidationProtocol, NSUserInterfaceValidationsProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithType_error (typeName: NSString; outError: NSErrorPtr): id; message 'initWithType:error:';
    class function canConcurrentlyReadDocumentsOfType (typeName: NSString): objcbool; message 'canConcurrentlyReadDocumentsOfType:'; { available in macos  }
    function initWithContentsOfURL_ofType_error (url: NSURL; typeName: NSString; outError: NSErrorPtr): id; message 'initWithContentsOfURL:ofType:error:';
    function initForURL_withContentsOfURL_ofType_error (urlOrNil: NSURL; contentsURL: NSURL; typeName: NSString; outError: NSErrorPtr): id; message 'initForURL:withContentsOfURL:ofType:error:';
    procedure setFileType(newValue: NSString); message 'setFileType:';
    function fileType: NSString; message 'fileType';
    procedure setFileURL(newValue: NSURL); message 'setFileURL:';
    function fileURL: NSURL; message 'fileURL';
    procedure setFileModificationDate(newValue: NSDate); message 'setFileModificationDate:';
    function fileModificationDate: NSDate; message 'fileModificationDate';
    procedure setDraft(newValue: objcbool); message 'setDraft:'; { available in macos  }
    function isDraft: objcbool; message 'isDraft'; { available in macos  }
    procedure performActivityWithSynchronousWaiting_usingBlock (waitSynchronously: objcbool; block: NSDocumentPerformActivityWithSynchronousWaitingCallback); message 'performActivityWithSynchronousWaiting:usingBlock:'; { available in macos  }
    procedure continueActivityUsingBlock (block: NSDocumentContinueActivityUsingBlockCallback); message 'continueActivityUsingBlock:'; { available in macos  }
    procedure continueAsynchronousWorkOnMainThreadUsingBlock (block: NSDocumentContinueAsynchronousWorkOnMainThreadUsingBlockCallback); message 'continueAsynchronousWorkOnMainThreadUsingBlock:'; { available in macos  }
    procedure performSynchronousFileAccessUsingBlock (block: NSDocumentPerformSynchronousFileAccessUsingBlockCallback); message 'performSynchronousFileAccessUsingBlock:'; { available in macos  }
    procedure performAsynchronousFileAccessUsingBlock (block: NSDocumentPerformAsynchronousFileAccessUsingBlockCallback); message 'performAsynchronousFileAccessUsingBlock:'; { available in macos  }
    procedure revertDocumentToSaved (sender: id); message 'revertDocumentToSaved:';
    function revertToContentsOfURL_ofType_error (url: NSURL; typeName: NSString; outError: NSErrorPtr): objcbool; message 'revertToContentsOfURL:ofType:error:';
    function readFromURL_ofType_error (url: NSURL; typeName: NSString; outError: NSErrorPtr): objcbool; message 'readFromURL:ofType:error:';
    function readFromFileWrapper_ofType_error (fileWrapper: NSFileWrapper; typeName: NSString; outError: NSErrorPtr): objcbool; message 'readFromFileWrapper:ofType:error:';
    function readFromData_ofType_error (data: NSData; typeName: NSString; outError: NSErrorPtr): objcbool; message 'readFromData:ofType:error:';
    function isEntireFileLoaded: objcbool; message 'isEntireFileLoaded'; { available in macos  }
    function writeToURL_ofType_error (url: NSURL; typeName: NSString; outError: NSErrorPtr): objcbool; message 'writeToURL:ofType:error:';
    function fileWrapperOfType_error (typeName: NSString; outError: NSErrorPtr): NSFileWrapper; message 'fileWrapperOfType:error:';
    function dataOfType_error (typeName: NSString; outError: NSErrorPtr): NSData; message 'dataOfType:error:';
    procedure unblockUserInteraction; message 'unblockUserInteraction'; { available in macos  }
    function autosavingIsImplicitlyCancellable: objcbool; message 'autosavingIsImplicitlyCancellable'; { available in macos  }
    function writeSafelyToURL_ofType_forSaveOperation_error (url: NSURL; typeName: NSString; saveOperation: NSSaveOperationType; outError: NSErrorPtr): objcbool; message 'writeSafelyToURL:ofType:forSaveOperation:error:';
    function writeToURL_ofType_forSaveOperation_originalContentsURL_error (url: NSURL; typeName: NSString; saveOperation: NSSaveOperationType; absoluteOriginalContentsURL: NSURL; outError: NSErrorPtr): objcbool; message 'writeToURL:ofType:forSaveOperation:originalContentsURL:error:';
    function fileAttributesToWriteToURL_ofType_forSaveOperation_originalContentsURL_error (url: NSURL; typeName: NSString; saveOperation: NSSaveOperationType; absoluteOriginalContentsURL: NSURL; outError: NSErrorPtr): NSDictionary; message 'fileAttributesToWriteToURL:ofType:forSaveOperation:originalContentsURL:error:';
    function keepBackupFile: objcbool; message 'keepBackupFile';
    function backupFileURL: NSURL; message 'backupFileURL'; { available in macos  }
    procedure saveDocument (sender: id); message 'saveDocument:';
    procedure saveDocumentAs (sender: id); message 'saveDocumentAs:';
    procedure saveDocumentTo (sender: id); message 'saveDocumentTo:';
    procedure saveDocumentWithDelegate_didSaveSelector_contextInfo (delegate: id; didSaveSelector: SEL; contextInfo: pointer); message 'saveDocumentWithDelegate:didSaveSelector:contextInfo:';
    procedure runModalSavePanelForSaveOperation_delegate_didSaveSelector_contextInfo (saveOperation: NSSaveOperationType; delegate: id; didSaveSelector: SEL; contextInfo: pointer); message 'runModalSavePanelForSaveOperation:delegate:didSaveSelector:contextInfo:';
    function shouldRunSavePanelWithAccessoryView: objcbool; message 'shouldRunSavePanelWithAccessoryView';
    function prepareSavePanel (savePanel: NSSavePanel): objcbool; message 'prepareSavePanel:';
    function fileNameExtensionWasHiddenInLastRunSavePanel: objcbool; message 'fileNameExtensionWasHiddenInLastRunSavePanel';
    function fileTypeFromLastRunSavePanel: NSString; message 'fileTypeFromLastRunSavePanel';
    procedure saveToURL_ofType_forSaveOperation_delegate_didSaveSelector_contextInfo (url: NSURL; typeName: NSString; saveOperation: NSSaveOperationType; delegate: id; didSaveSelector: SEL; contextInfo: pointer); message 'saveToURL:ofType:forSaveOperation:delegate:didSaveSelector:contextInfo:';
    procedure saveToURL_ofType_forSaveOperation_completionHandler (url: NSURL; typeName: NSString; saveOperation: NSSaveOperationType; completionHandler: NSDocumentSaveToURLCallback); message 'saveToURL:ofType:forSaveOperation:completionHandler:'; { available in macos  }
    function canAsynchronouslyWriteToURL_ofType_forSaveOperation (url: NSURL; typeName: NSString; saveOperation: NSSaveOperationType): objcbool; message 'canAsynchronouslyWriteToURL:ofType:forSaveOperation:'; { available in macos  }
    function checkAutosavingSafetyAndReturnError (outError: NSErrorPtr): objcbool; message 'checkAutosavingSafetyAndReturnError:'; { available in macos  }
    procedure scheduleAutosaving; message 'scheduleAutosaving'; { available in macos  }
    function hasUnautosavedChanges: objcbool; message 'hasUnautosavedChanges';
    procedure autosaveDocumentWithDelegate_didAutosaveSelector_contextInfo (delegate: id; didAutosaveSelector: SEL; contextInfo: pointer); message 'autosaveDocumentWithDelegate:didAutosaveSelector:contextInfo:';
    procedure autosaveWithImplicitCancellability_completionHandler (autosavingIsImplicitlyCancellable_: objcbool; completionHandler: NSDocumentAutosaveWithImplicitCancellabilityCallback); message 'autosaveWithImplicitCancellability:completionHandler:'; { available in macos  }
    class function autosavesInPlace: objcbool; message 'autosavesInPlace'; { available in macos  }
    class function preservesVersions: objcbool; message 'preservesVersions'; { available in macos  }
    procedure browseDocumentVersions (sender: id); message 'browseDocumentVersions:'; { available in macos  }
    function isBrowsingVersions: objcbool; message 'isBrowsingVersions'; { available in macos  }
    procedure stopBrowsingVersionsWithCompletionHandler (completionHandler: NSDocumentStopBrowsingVersionsWithCompletionHandlerCallback); message 'stopBrowsingVersionsWithCompletionHandler:'; { available in macos  }
    class function autosavesDrafts: objcbool; message 'autosavesDrafts'; { available in macos  }
    function autosavingFileType: NSString; message 'autosavingFileType';
    procedure setAutosavedContentsFileURL(newValue: NSURL); message 'setAutosavedContentsFileURL:';
    function autosavedContentsFileURL: NSURL; message 'autosavedContentsFileURL';
    procedure canCloseDocumentWithDelegate_shouldCloseSelector_contextInfo (delegate: id; shouldCloseSelector: SEL; contextInfo: pointer); message 'canCloseDocumentWithDelegate:shouldCloseSelector:contextInfo:';
    procedure close; message 'close';
    procedure duplicateDocument (sender: id); message 'duplicateDocument:'; { available in macos  }
    procedure duplicateDocumentWithDelegate_didDuplicateSelector_contextInfo (delegate: id; didDuplicateSelector: SEL; contextInfo: pointer); message 'duplicateDocumentWithDelegate:didDuplicateSelector:contextInfo:'; { available in macos  }
    function duplicateAndReturnError (outError: NSErrorPtr): NSDocument; message 'duplicateAndReturnError:'; { available in macos  }
    procedure renameDocument (sender: id); message 'renameDocument:'; { available in macos  }
    procedure moveDocumentToUbiquityContainer (sender: id); message 'moveDocumentToUbiquityContainer:'; { available in macos  }
    procedure moveDocument (sender: id); message 'moveDocument:'; { available in macos  }
    procedure moveDocumentWithCompletionHandler (completionHandler: NSDocumentMoveDocumentWithCompletionHandlerCallback); message 'moveDocumentWithCompletionHandler:'; { available in macos  }
    procedure moveToURL_completionHandler (url: NSURL; completionHandler: NSDocumentMoveToURLCallback); message 'moveToURL:completionHandler:'; { available in macos  }
    procedure lockDocument (sender: id); message 'lockDocument:'; { available in macos  }
    procedure unlockDocument (sender: id); message 'unlockDocument:'; { available in macos  }
    procedure lockDocumentWithCompletionHandler (completionHandler: NSDocumentLockDocumentWithCompletionHandlerCallback); message 'lockDocumentWithCompletionHandler:'; { available in macos  }
    procedure lockWithCompletionHandler (completionHandler: NSDocumentLockWithCompletionHandlerCallback); message 'lockWithCompletionHandler:'; { available in macos  }
    procedure unlockDocumentWithCompletionHandler (completionHandler: NSDocumentUnlockDocumentWithCompletionHandlerCallback); message 'unlockDocumentWithCompletionHandler:'; { available in macos  }
    procedure unlockWithCompletionHandler (completionHandler: NSDocumentUnlockWithCompletionHandlerCallback); message 'unlockWithCompletionHandler:'; { available in macos  }
    function isLocked: objcbool; message 'isLocked'; { available in macos  }
    procedure runPageLayout (sender: id); message 'runPageLayout:';
    procedure runModalPageLayoutWithPrintInfo_delegate_didRunSelector_contextInfo (printInfo: NSPrintInfo; delegate: id; didRunSelector: SEL; contextInfo: pointer); message 'runModalPageLayoutWithPrintInfo:delegate:didRunSelector:contextInfo:';
    function preparePageLayout (pageLayout: NSPageLayout): objcbool; message 'preparePageLayout:';
    function shouldChangePrintInfo (newPrintInfo: NSPrintInfo): objcbool; message 'shouldChangePrintInfo:';
    procedure setPrintInfo(newValue: NSPrintInfo); message 'setPrintInfo:';
    function printInfo: NSPrintInfo; message 'printInfo';
    procedure printDocument (sender: id); message 'printDocument:';
    procedure printDocumentWithSettings_showPrintPanel_delegate_didPrintSelector_contextInfo (printSettings: NSDictionary; showPrintPanel: objcbool; delegate: id; didPrintSelector: SEL; contextInfo: pointer); message 'printDocumentWithSettings:showPrintPanel:delegate:didPrintSelector:contextInfo:';
    function printOperationWithSettings_error (printSettings: NSDictionary; outError: NSErrorPtr): NSPrintOperation; message 'printOperationWithSettings:error:';
    procedure runModalPrintOperation_delegate_didRunSelector_contextInfo (printOperation: NSPrintOperation; delegate: id; didRunSelector: SEL; contextInfo: pointer); message 'runModalPrintOperation:delegate:didRunSelector:contextInfo:';
    procedure saveDocumentToPDF (sender: id); message 'saveDocumentToPDF:'; { available in macos  }
    function PDFPrintOperation: NSPrintOperation; message 'PDFPrintOperation'; { available in macos  }
    function allowsDocumentSharing: objcbool; message 'allowsDocumentSharing'; { available in macos  }
    procedure shareDocumentWithSharingService_completionHandler (sharingService: NSSharingService; completionHandler: NSDocumentShareDocumentWithSharingServiceCallback); message 'shareDocumentWithSharingService:completionHandler:'; { available in macos  }
    procedure prepareSharingServicePicker (sharingServicePicker: NSSharingServicePicker); message 'prepareSharingServicePicker:'; { available in macos  }
    function isDocumentEdited: objcbool; message 'isDocumentEdited';
    function isInViewingMode: objcbool; message 'isInViewingMode'; { available in macos  }
    procedure updateChangeCount (change: NSDocumentChangeType); message 'updateChangeCount:';
    function changeCountTokenForSaveOperation (saveOperation: NSSaveOperationType): id; message 'changeCountTokenForSaveOperation:'; { available in macos  }
    procedure updateChangeCountWithToken_forSaveOperation (changeCountToken: id; saveOperation: NSSaveOperationType); message 'updateChangeCountWithToken:forSaveOperation:'; { available in macos  }
    procedure setUndoManager(newValue: NSUndoManager); message 'setUndoManager:';
    function undoManager: NSUndoManager; message 'undoManager';
    procedure setHasUndoManager(newValue: objcbool); message 'setHasUndoManager:';
    function hasUndoManager: objcbool; message 'hasUndoManager';
    procedure presentError_modalForWindow_delegate_didPresentSelector_contextInfo (error: NSError; window: NSWindow; delegate: id; didPresentSelector: SEL; contextInfo: pointer); message 'presentError:modalForWindow:delegate:didPresentSelector:contextInfo:';
    function presentError (error: NSError): objcbool; message 'presentError:';
    function willPresentError (error: NSError): NSError; message 'willPresentError:';
    procedure willNotPresentError (error: NSError); message 'willNotPresentError:'; { available in macos  }
    procedure makeWindowControllers; message 'makeWindowControllers';
    function windowNibName: NSNibName; message 'windowNibName';
    procedure windowControllerWillLoadNib (windowController: NSWindowController); message 'windowControllerWillLoadNib:';
    procedure windowControllerDidLoadNib (windowController: NSWindowController); message 'windowControllerDidLoadNib:';
    procedure setWindow (window: NSWindow); message 'setWindow:';
    procedure addWindowController (windowController: NSWindowController); message 'addWindowController:';
    procedure removeWindowController (windowController: NSWindowController); message 'removeWindowController:';
    procedure showWindows; message 'showWindows';
    function windowControllers: NSArray; message 'windowControllers';
    procedure shouldCloseWindowController_delegate_shouldCloseSelector_contextInfo (windowController: NSWindowController; delegate: id; shouldCloseSelector: SEL; contextInfo: pointer); message 'shouldCloseWindowController:delegate:shouldCloseSelector:contextInfo:';
    procedure setDisplayName (displayNameOrNil: NSString); message 'setDisplayName:'; { available in macos  }
    procedure setDisplayName_(newValue: NSString); message 'setDisplayName:';
    function displayName: NSString; message 'displayName';
    function defaultDraftName: NSString; message 'defaultDraftName'; { available in macos  }
    function windowForSheet: NSWindow; message 'windowForSheet';
    class function readableTypes: NSArray; message 'readableTypes';
    class function writableTypes: NSArray; message 'writableTypes';
    class function isNativeType (type_: NSString): objcbool; message 'isNativeType:';
    function writableTypesForSaveOperation (saveOperation: NSSaveOperationType): NSArray; message 'writableTypesForSaveOperation:';
    function fileNameExtensionForType_saveOperation (typeName: NSString; saveOperation: NSSaveOperationType): NSString; message 'fileNameExtensionForType:saveOperation:'; { available in macos  }
    function validateUserInterfaceItem (item: NSValidatedUserInterfaceItemProtocol): objcbool; message 'validateUserInterfaceItem:';
    class function usesUbiquitousStorage: objcbool; message 'usesUbiquitousStorage'; { available in macos  }

    { Adopted protocols }
    procedure accommodatePresentedItemDeletionWithCompletionHandler (completionHandler: NSFilePresenterAccommodatePresentedItemDeletionWithCompletionHandlerCallback); message 'accommodatePresentedItemDeletionWithCompletionHandler:';
    procedure accommodatePresentedSubitemDeletionAtURL_completionHandler (url: NSURL; completionHandler: NSFilePresenterAccommodatePresentedSubitemDeletionAtURLCallback); message 'accommodatePresentedSubitemDeletionAtURL:completionHandler:';
    procedure objectDidBeginEditing (editor: NSEditorProtocol); message 'objectDidBeginEditing:';
    procedure objectDidEndEditing (editor: NSEditorProtocol); message 'objectDidEndEditing:';
    function observedPresentedItemUbiquityAttributes: NSSet; message 'observedPresentedItemUbiquityAttributes'; { unavailable in watchos, tvos }
    procedure presentedItemDidChange; message 'presentedItemDidChange';
    procedure presentedItemDidChangeUbiquityAttributes (attributes: NSSet); message 'presentedItemDidChangeUbiquityAttributes:'; { unavailable in watchos, tvos }
    procedure presentedItemDidGainVersion (version: NSFileVersion); message 'presentedItemDidGainVersion:';
    procedure presentedItemDidLoseVersion (version: NSFileVersion); message 'presentedItemDidLoseVersion:';
    procedure presentedItemDidMoveToURL (newURL: NSURL); message 'presentedItemDidMoveToURL:';
    procedure presentedItemDidResolveConflictVersion (version: NSFileVersion); message 'presentedItemDidResolveConflictVersion:';
    function presentedItemOperationQueue: NSOperationQueue; message 'presentedItemOperationQueue';
    function presentedItemURL: NSURL; message 'presentedItemURL';
    procedure presentedSubitemAtURL_didGainVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didGainVersion:';
    procedure presentedSubitemAtURL_didLoseVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didLoseVersion:';
    procedure presentedSubitemAtURL_didMoveToURL (oldURL: NSURL; newURL: NSURL); message 'presentedSubitemAtURL:didMoveToURL:';
    procedure presentedSubitemAtURL_didResolveConflictVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didResolveConflictVersion:';
    procedure presentedSubitemDidAppearAtURL (url: NSURL); message 'presentedSubitemDidAppearAtURL:';
    procedure presentedSubitemDidChangeAtURL (url: NSURL); message 'presentedSubitemDidChangeAtURL:';
    function primaryPresentedItemURL: NSURL; message 'primaryPresentedItemURL'; { unavailable in ios, watchos, tvos }
    procedure relinquishPresentedItemToReader (reader: NSFilePresenterRelinquishPresentedItemToReaderCallback); message 'relinquishPresentedItemToReader:';
    procedure relinquishPresentedItemToWriter (writer: NSFilePresenterRelinquishPresentedItemToWriterCallback); message 'relinquishPresentedItemToWriter:';
    procedure savePresentedItemChangesWithCompletionHandler (completionHandler: NSFilePresenterSavePresentedItemChangesWithCompletionHandlerCallback); message 'savePresentedItemChangesWithCompletionHandler:';
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
  end;


type
  NSDocument_NSDeprecated = objccategory external name 'NSDeprecated' (NSDocument)
    function saveToURL_ofType_forSaveOperation_error (url: NSURL; typeName: NSString; saveOperation: NSSaveOperationType; outError: NSErrorPtr): objcbool; message 'saveToURL:ofType:forSaveOperation:error:'; deprecated 'Use -saveToURL:ofType:forSaveOperation:completionHandler: instead';
    function dataRepresentationOfType (type_: NSString): NSData; message 'dataRepresentationOfType:'; deprecated;
    function fileAttributesToWriteToFile_ofType_saveOperation (fullDocumentPath: NSString; documentTypeName: NSString; saveOperationType: NSSaveOperationType): NSDictionary; message 'fileAttributesToWriteToFile:ofType:saveOperation:'; deprecated;
    function fileName: NSString; message 'fileName'; deprecated;
    function fileWrapperRepresentationOfType (type_: NSString): NSFileWrapper; message 'fileWrapperRepresentationOfType:'; deprecated;
    function initWithContentsOfFile_ofType (absolutePath: NSString; typeName: NSString): id; message 'initWithContentsOfFile:ofType:'; deprecated;
    function initWithContentsOfURL_ofType (url: NSURL; typeName: NSString): id; message 'initWithContentsOfURL:ofType:'; deprecated;
    function loadDataRepresentation_ofType (data: NSData; type_: NSString): objcbool; message 'loadDataRepresentation:ofType:'; deprecated;
    function loadFileWrapperRepresentation_ofType (wrapper: NSFileWrapper; type_: NSString): objcbool; message 'loadFileWrapperRepresentation:ofType:'; deprecated;
    procedure printShowingPrintPanel (flag: objcbool); message 'printShowingPrintPanel:'; deprecated;
    function readFromFile_ofType (fileName_: NSString; type_: NSString): objcbool; message 'readFromFile:ofType:'; deprecated;
    function readFromURL_ofType (url: NSURL; type_: NSString): objcbool; message 'readFromURL:ofType:'; deprecated;
    function revertToSavedFromFile_ofType (fileName_: NSString; type_: NSString): objcbool; message 'revertToSavedFromFile:ofType:'; deprecated;
    function revertToSavedFromURL_ofType (url: NSURL; type_: NSString): objcbool; message 'revertToSavedFromURL:ofType:'; deprecated;
    function runModalPageLayoutWithPrintInfo (printInfo_: NSPrintInfo): NSInteger; message 'runModalPageLayoutWithPrintInfo:'; deprecated;
    procedure saveToFile_saveOperation_delegate_didSaveSelector_contextInfo (fileName_: NSString; saveOperation: NSSaveOperationType; delegate: id; didSaveSelector: SEL; contextInfo: pointer); message 'saveToFile:saveOperation:delegate:didSaveSelector:contextInfo:'; deprecated;
    procedure setFileName (fileName_: NSString); message 'setFileName:'; deprecated;
    function writeToFile_ofType (fileName_: NSString; type_: NSString): objcbool; message 'writeToFile:ofType:'; deprecated;
    function writeToFile_ofType_originalFile_saveOperation (fullDocumentPath: NSString; documentTypeName: NSString; fullOriginalDocumentPath: NSString; saveOperationType: NSSaveOperationType): objcbool; message 'writeToFile:ofType:originalFile:saveOperation:'; deprecated;
    function writeToURL_ofType (url: NSURL; type_: NSString): objcbool; message 'writeToURL:ofType:'; deprecated;
    function writeWithBackupToFile_ofType_saveOperation (fullDocumentPath: NSString; documentTypeName: NSString; saveOperationType: NSSaveOperationType): objcbool; message 'writeWithBackupToFile:ofType:saveOperation:'; deprecated;
  end;
{$endif}

