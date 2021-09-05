{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSFileCoordinator.h }

{$ifdef CALLBACKS}
type
  NSFileCoordinatorCoordinateAccessWithIntentsCallback = reference to procedure (error: NSError); cblock; cdecl;
  NSFileCoordinatorCoordinateReadingItemAtURLCallback = reference to procedure (newURL: NSURL); cblock; cdecl;
  NSFileCoordinatorCoordinateWritingItemAtURLCallback = reference to procedure (newURL: NSURL); cblock; cdecl;
  NSFileCoordinatorPrepareForReadingItemsAtURLsCallback = reference to procedure (param1: OpaqueCBlock); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSFileAccessIntentPtr = ^NSFileAccessIntent;
  NSFileCoordinatorPtr = ^NSFileCoordinator;
{$endif}

{$ifdef TYPES}
type
  NSFileCoordinatorReadingOptions = NSUInteger;
  NSFileCoordinatorReadingOptionsPtr = ^NSFileCoordinatorReadingOptions;

const
  NSFileCoordinatorReadingWithoutChanges = 1 shl 0;
  NSFileCoordinatorReadingResolvesSymbolicLink = 1 shl 1;
  NSFileCoordinatorReadingImmediatelyAvailableMetadataOnly = 1 shl 2 { available in macos , ios , watchos , tvos  };
  NSFileCoordinatorReadingForUploading = 1 shl 3 { available in macos , ios , watchos , tvos  };

type
  NSFileCoordinatorWritingOptions = NSUInteger;
  NSFileCoordinatorWritingOptionsPtr = ^NSFileCoordinatorWritingOptions;

const
  NSFileCoordinatorWritingForDeleting = 1 shl 0;
  NSFileCoordinatorWritingForMoving = 1 shl 1;
  NSFileCoordinatorWritingForMerging = 1 shl 2;
  NSFileCoordinatorWritingForReplacing = 1 shl 3;
  NSFileCoordinatorWritingContentIndependentMetadataOnly = 1 shl 4 { available in macos , ios , watchos , tvos  };
{$endif}

{$ifdef CLASSES}

type
  NSFileAccessIntent = objcclass external (NSObject)
  private
    _url: NSURL;
    _isRead: objcbool;
    _options: NSInteger;
  public
    class function readingIntentWithURL_options (url: NSURL; options: NSFileCoordinatorReadingOptions): id; message 'readingIntentWithURL:options:';
    class function writingIntentWithURL_options (url: NSURL; options: NSFileCoordinatorWritingOptions): id; message 'writingIntentWithURL:options:';
    function URL: NSURL; message 'URL';
  end;

type
  NSFileCoordinator = objcclass external (NSObject)
  private
    _accessArbiter: id;
    _fileReactor: id;
    _purposeID: id;
    _recentFilePresenterURL: NSURL;
    _accessClaimIDOrIDs: id;
    _isCancelled: objcbool;
    _movedItems: NSMutableDictionary;
  public
    class procedure addFilePresenter (filePresenter: NSFilePresenterProtocol); message 'addFilePresenter:';
    class procedure removeFilePresenter (filePresenter: NSFilePresenterProtocol); message 'removeFilePresenter:';
    class function filePresenters: NSArray; message 'filePresenters';
    function initWithFilePresenter (filePresenterOrNil: NSFilePresenterProtocol): id; message 'initWithFilePresenter:'; { NS_DESIGNATED_INITIALIZER }
    procedure setPurposeIdentifier(newValue: NSString); message 'setPurposeIdentifier:'; { available in macos , ios , watchos , tvos  }
    function purposeIdentifier: NSString; message 'purposeIdentifier'; { available in macos , ios , watchos , tvos  }
    procedure coordinateAccessWithIntents_queue_byAccessor (intents: NSArray; queue: NSOperationQueue; accessor: NSFileCoordinatorCoordinateAccessWithIntentsCallback); message 'coordinateAccessWithIntents:queue:byAccessor:'; { available in macos , ios , watchos , tvos  }
    procedure coordinateReadingItemAtURL_options_error_byAccessor (url: NSURL; options: NSFileCoordinatorReadingOptions; outError: NSErrorPtr; reader: NSFileCoordinatorCoordinateReadingItemAtURLCallback); message 'coordinateReadingItemAtURL:options:error:byAccessor:';
    procedure coordinateWritingItemAtURL_options_error_byAccessor (url: NSURL; options: NSFileCoordinatorWritingOptions; outError: NSErrorPtr; writer: NSFileCoordinatorCoordinateWritingItemAtURLCallback); message 'coordinateWritingItemAtURL:options:error:byAccessor:';
    procedure coordinateReadingItemAtURL_options_writingItemAtURL_options_error_byAccessor (readingURL: NSURL; readingOptions: NSFileCoordinatorReadingOptions; writingURL: NSURL; writingOptions: NSFileCoordinatorWritingOptions; outError: NSErrorPtr; readerWriter: NSFileCoordinatorCoordinateReadingItemAtURLCallback); message 'coordinateReadingItemAtURL:options:writingItemAtURL:options:error:byAccessor:';
    procedure coordinateWritingItemAtURL_options_writingItemAtURL_options_error_byAccessor (url1: NSURL; options1: NSFileCoordinatorWritingOptions; url2: NSURL; options2: NSFileCoordinatorWritingOptions; outError: NSErrorPtr; writer: NSFileCoordinatorCoordinateWritingItemAtURLCallback); message 'coordinateWritingItemAtURL:options:writingItemAtURL:options:error:byAccessor:';
    procedure prepareForReadingItemsAtURLs_options_writingItemsAtURLs_options_error_byAccessor (readingURLs: NSArray; readingOptions: NSFileCoordinatorReadingOptions; writingURLs: NSArray; writingOptions: NSFileCoordinatorWritingOptions; outError: NSErrorPtr; batchAccessor: NSFileCoordinatorPrepareForReadingItemsAtURLsCallback); message 'prepareForReadingItemsAtURLs:options:writingItemsAtURLs:options:error:byAccessor:';
    procedure itemAtURL_willMoveToURL (oldURL: NSURL; newURL: NSURL); message 'itemAtURL:willMoveToURL:'; { available in macos , ios , watchos , tvos  }
    procedure itemAtURL_didMoveToURL (oldURL: NSURL; newURL: NSURL); message 'itemAtURL:didMoveToURL:';
    procedure itemAtURL_didChangeUbiquityAttributes (url: NSURL; attributes: NSSet); message 'itemAtURL:didChangeUbiquityAttributes:'; { unavailable in watchos, tvos }
    procedure cancel; message 'cancel';
  end;
{$endif}

