{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSharingService.h }

{$ifdef CALLBACKS}
type
  NSSharingServiceInitWithTitleCallback = reference to function : pointer; cblock; cdecl;
  NSSharingServiceRegisterCloudKitShareWithPreparationHandlerCallback = reference to function (param1: OpaqueCBlock): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSSharingServicePtr = ^NSSharingService;
  NSSharingServicePickerPtr = ^NSSharingServicePicker;
  NSSharingServiceDelegateProtocolPtr = ^NSSharingServiceDelegateProtocol;
  NSCloudSharingServiceDelegateProtocolPtr = ^NSCloudSharingServiceDelegateProtocol;
  NSSharingServicePickerDelegateProtocolPtr = ^NSSharingServicePickerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSSharingServiceName = NSString;
  NSSharingServiceNamePtr = ^NSSharingServiceName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSharingServiceNameComposeEmail: NSSharingServiceName { available in macos  }; cvar; external;
  NSSharingServiceNameComposeMessage: NSSharingServiceName { available in macos  }; cvar; external;
  NSSharingServiceNameSendViaAirDrop: NSSharingServiceName { available in macos  }; cvar; external;
  NSSharingServiceNameAddToSafariReadingList: NSSharingServiceName { available in macos  }; cvar; external;
  NSSharingServiceNameAddToIPhoto: NSSharingServiceName { available in macos  }; cvar; external;
  NSSharingServiceNameAddToAperture: NSSharingServiceName { available in macos  }; cvar; external;
  NSSharingServiceNameUseAsDesktopPicture: NSSharingServiceName { available in macos  }; cvar; external;
  NSSharingServiceNamePostOnFacebook: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNamePostOnTwitter: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNamePostOnSinaWeibo: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNamePostOnTencentWeibo: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNamePostOnLinkedIn: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNameUseAsTwitterProfileImage: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNameUseAsFacebookProfileImage: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNameUseAsLinkedInProfileImage: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNamePostImageOnFlickr: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNamePostVideoOnVimeo: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNamePostVideoOnYouku: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNamePostVideoOnTudou: NSSharingServiceName deprecated 'This service is no longer included with the system.'; cvar; external;
  NSSharingServiceNameCloudSharing: NSSharingServiceName { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSSharingService = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function title: NSString; message 'title';
    function image: NSImage; message 'image';
    function alternateImage: NSImage; message 'alternateImage';
    procedure setMenuItemTitle(newValue: NSString); message 'setMenuItemTitle:'; { available in macos  }
    function menuItemTitle: NSString; message 'menuItemTitle'; { available in macos  }
    procedure setRecipients(newValue: NSArray); message 'setRecipients:'; { available in macos  }
    function recipients: NSArray; message 'recipients'; { available in macos  }
    procedure setSubject(newValue: NSString); message 'setSubject:'; { available in macos  }
    function subject: NSString; message 'subject'; { available in macos  }
    function messageBody: NSString; message 'messageBody'; { available in macos  }
    function permanentLink: NSURL; message 'permanentLink'; { available in macos  }
    function accountName: NSString; message 'accountName'; { available in macos  }
    function attachmentFileURLs: NSArray; message 'attachmentFileURLs'; { available in macos  }
    class function sharingServicesForItems (items: NSArray): NSArray; message 'sharingServicesForItems:';
    class function sharingServiceNamed (serviceName: NSSharingServiceName): NSSharingService; message 'sharingServiceNamed:';
    function initWithTitle_image_alternateImage_handler (title_: NSString; image_: NSImage; alternateImage_: NSImage; block: NSSharingServiceInitWithTitleCallback): id; message 'initWithTitle:image:alternateImage:handler:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function canPerformWithItems (items: NSArray): objcbool; message 'canPerformWithItems:';
    procedure performWithItems (items: NSArray); message 'performWithItems:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSSharingContentScope = NSInteger;
  NSSharingContentScopePtr = ^NSSharingContentScope;

const
  NSSharingContentScopeItem = 0;
  NSSharingContentScopePartial = 1;
  NSSharingContentScopeFull = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSharingServiceDelegateProtocol = objcprotocol external name 'NSSharingServiceDelegate' (NSObjectProtocol)
  optional
    procedure sharingService_willShareItems (sharingService: NSSharingService; items: NSArray); message 'sharingService:willShareItems:';
    procedure sharingService_didFailToShareItems_error (sharingService: NSSharingService; items: NSArray; error: NSError); message 'sharingService:didFailToShareItems:error:';
    procedure sharingService_didShareItems (sharingService: NSSharingService; items: NSArray); message 'sharingService:didShareItems:';
    function sharingService_sourceFrameOnScreenForShareItem (sharingService: NSSharingService; item: id): NSRect; message 'sharingService:sourceFrameOnScreenForShareItem:';
    function sharingService_transitionImageForShareItem_contentRect (sharingService: NSSharingService; item: id; contentRect: NSRectPtr): NSImage; message 'sharingService:transitionImageForShareItem:contentRect:';
    function sharingService_sourceWindowForShareItems_sharingContentScope (sharingService: NSSharingService; items: NSArray; sharingContentScope: NSSharingContentScopePtr): NSWindow; message 'sharingService:sourceWindowForShareItems:sharingContentScope:';
    function anchoringViewForSharingService_showRelativeToRect_preferredEdge (sharingService: NSSharingService; positioningRect: NSRectPtr; preferredEdge: NSRectEdgePtr): NSView; message 'anchoringViewForSharingService:showRelativeToRect:preferredEdge:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSCloudKitSharingServiceOptions = NSUInteger;
  NSCloudKitSharingServiceOptionsPtr = ^NSCloudKitSharingServiceOptions;

const
  NSCloudKitSharingServiceStandard = 0;
  NSCloudKitSharingServiceAllowPublic = 1 shl 0;
  NSCloudKitSharingServiceAllowPrivate = 1 shl 1;
  NSCloudKitSharingServiceAllowReadOnly = 1 shl 4;
  NSCloudKitSharingServiceAllowReadWrite = 1 shl 5;
{$endif}

{$ifdef PROTOCOLS}

type
  NSCloudSharingServiceDelegateProtocol = objcprotocol external name 'NSCloudSharingServiceDelegate' (NSSharingServiceDelegateProtocol)
  optional
    procedure sharingService_didCompleteForItems_error (sharingService: NSSharingService; items: NSArray; error: NSError); message 'sharingService:didCompleteForItems:error:';
    function optionsForSharingService_shareProvider (cloudKitSharingService: NSSharingService; provider: NSItemProvider): NSCloudKitSharingServiceOptions; message 'optionsForSharingService:shareProvider:';
    procedure sharingService_didSaveShare (sharingService: NSSharingService; share: CKShare); message 'sharingService:didSaveShare:';
    procedure sharingService_didStopSharing (sharingService: NSSharingService; share: CKShare); message 'sharingService:didStopSharing:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSCloudKitSharing = objccategory external (NSItemProvider)
    procedure registerCloudKitShareWithPreparationHandler (preparationHandler: NSSharingServiceRegisterCloudKitShareWithPreparationHandlerCallback); message 'registerCloudKitShareWithPreparationHandler:'; { available in macos  }
    procedure registerCloudKitShare_container (share: CKShare; container: CKContainer); message 'registerCloudKitShare:container:'; { available in macos  }
  end;


type
  NSSharingServicePicker = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function initWithItems (items: NSArray): id; message 'initWithItems:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    procedure showRelativeToRect_ofView_preferredEdge (rect: NSRect; view: NSView; preferredEdge: NSRectEdge); message 'showRelativeToRect:ofView:preferredEdge:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSharingServicePickerDelegateProtocol = objcprotocol external name 'NSSharingServicePickerDelegate' (NSObjectProtocol)
  optional
    function sharingServicePicker_sharingServicesForItems_proposedSharingServices (sharingServicePicker: NSSharingServicePicker; items: NSArray; proposedServices: NSArray): NSArray; message 'sharingServicePicker:sharingServicesForItems:proposedSharingServices:';
    function sharingServicePicker_delegateForSharingService (sharingServicePicker: NSSharingServicePicker; sharingService: NSSharingService): id; message 'sharingServicePicker:delegateForSharingService:';
    procedure sharingServicePicker_didChooseSharingService (sharingServicePicker: NSSharingServicePicker; service: NSSharingService); message 'sharingServicePicker:didChooseSharingService:';
  end;
{$endif}

