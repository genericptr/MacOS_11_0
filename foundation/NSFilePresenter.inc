{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSFilePresenter.h }

{$ifdef CALLBACKS}
type
  NSFilePresenterRelinquishPresentedItemToReaderCallback = reference to procedure (param1: OpaqueCBlock); cblock; cdecl;
  NSFilePresenterRelinquishPresentedItemToWriterCallback = reference to procedure (param1: OpaqueCBlock); cblock; cdecl;
  NSFilePresenterSavePresentedItemChangesWithCompletionHandlerCallback = reference to procedure (errorOrNil: NSError); cblock; cdecl;
  NSFilePresenterAccommodatePresentedItemDeletionWithCompletionHandlerCallback = reference to procedure (errorOrNil: NSError); cblock; cdecl;
  NSFilePresenterAccommodatePresentedSubitemDeletionAtURLCallback = reference to procedure (errorOrNil: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSFilePresenterProtocolPtr = ^NSFilePresenterProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFilePresenterProtocol = objcprotocol external name 'NSFilePresenter' (NSObjectProtocol)
  required
    function presentedItemURL: NSURL; message 'presentedItemURL';
    function presentedItemOperationQueue: NSOperationQueue; message 'presentedItemOperationQueue';
  optional
    function primaryPresentedItemURL: NSURL; message 'primaryPresentedItemURL'; { unavailable in ios, watchos, tvos }
    procedure relinquishPresentedItemToReader (reader: NSFilePresenterRelinquishPresentedItemToReaderCallback); message 'relinquishPresentedItemToReader:';
    procedure relinquishPresentedItemToWriter (writer: NSFilePresenterRelinquishPresentedItemToWriterCallback); message 'relinquishPresentedItemToWriter:';
    procedure savePresentedItemChangesWithCompletionHandler (completionHandler: NSFilePresenterSavePresentedItemChangesWithCompletionHandlerCallback); message 'savePresentedItemChangesWithCompletionHandler:';
    procedure accommodatePresentedItemDeletionWithCompletionHandler (completionHandler: NSFilePresenterAccommodatePresentedItemDeletionWithCompletionHandlerCallback); message 'accommodatePresentedItemDeletionWithCompletionHandler:';
    procedure presentedItemDidMoveToURL (newURL: NSURL); message 'presentedItemDidMoveToURL:';
    procedure presentedItemDidChange; message 'presentedItemDidChange';
    procedure presentedItemDidChangeUbiquityAttributes (attributes: NSSet); message 'presentedItemDidChangeUbiquityAttributes:'; { unavailable in watchos, tvos }
    function observedPresentedItemUbiquityAttributes: NSSet; message 'observedPresentedItemUbiquityAttributes'; { unavailable in watchos, tvos }
    procedure presentedItemDidGainVersion (version: NSFileVersion); message 'presentedItemDidGainVersion:';
    procedure presentedItemDidLoseVersion (version: NSFileVersion); message 'presentedItemDidLoseVersion:';
    procedure presentedItemDidResolveConflictVersion (version: NSFileVersion); message 'presentedItemDidResolveConflictVersion:';
    procedure accommodatePresentedSubitemDeletionAtURL_completionHandler (url: NSURL; completionHandler: NSFilePresenterAccommodatePresentedSubitemDeletionAtURLCallback); message 'accommodatePresentedSubitemDeletionAtURL:completionHandler:';
    procedure presentedSubitemDidAppearAtURL (url: NSURL); message 'presentedSubitemDidAppearAtURL:';
    procedure presentedSubitemAtURL_didMoveToURL (oldURL: NSURL; newURL: NSURL); message 'presentedSubitemAtURL:didMoveToURL:';
    procedure presentedSubitemDidChangeAtURL (url: NSURL); message 'presentedSubitemDidChangeAtURL:';
    procedure presentedSubitemAtURL_didGainVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didGainVersion:';
    procedure presentedSubitemAtURL_didLoseVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didLoseVersion:';
    procedure presentedSubitemAtURL_didResolveConflictVersion (url: NSURL; version: NSFileVersion); message 'presentedSubitemAtURL:didResolveConflictVersion:';
  end;
{$endif}

