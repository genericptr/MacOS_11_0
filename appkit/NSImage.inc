{ Parsed from AppKit.framework NSImage.h }

{ Types from NSImage }
{$ifdef TYPES}


{$endif}


{ Types from NSImageCategory_1 }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  NSImageImageWithSizeCallback = reference to function (dstRect: NSRect): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSImagePtr = ^NSImage;
  NSImageSymbolConfigurationPtr = ^NSImageSymbolConfiguration;
  NSImageDelegateProtocolPtr = ^NSImageDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSImageName = NSString { available in ios  };
  NSImageNamePtr = ^NSImageName { available in ios  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSImageHintCTM: NSImageHintKey { available in macos  }; cvar; external;
  NSImageHintInterpolation: NSImageHintKey { available in macos  }; cvar; external;
  NSImageHintUserInterfaceLayoutDirection: NSImageHintKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSImageLoadStatus = NSUInteger;
  NSImageLoadStatusPtr = ^NSImageLoadStatus;

const
  NSImageLoadStatusCompleted = 0;
  NSImageLoadStatusCancelled = 1;
  NSImageLoadStatusInvalidData = 2;
  NSImageLoadStatusUnexpectedEOF = 3;
  NSImageLoadStatusReadError = 4;

type
  NSImageCacheMode = NSUInteger;
  NSImageCacheModePtr = ^NSImageCacheMode;

const
  NSImageCacheDefault = 0;
  NSImageCacheAlways = 1;
  NSImageCacheBySize = 2;
  NSImageCacheNever = 3;

type
  NSImageResizingMode = NSInteger;
  NSImageResizingModePtr = ^NSImageResizingMode;

const
  {$if  not defined(TARGET_ABI_USES_IOS_VALUES)}
  NSImageResizingModeStretch = 0;
  NSImageResizingModeTile = 1;
  {$else}
  NSImageResizingModeTile = 0;
  NSImageResizingModeStretch = 1;
  {$endif}
{$endif}

{$ifdef CLASSES}

type
  NSImage = objcclass external (NSObject)
  public
    {$if defined(NSIMAGE_UNAVAILABLE_MACCATALYST)}
    function init: id; message 'init'; { unavailable in ios }
    class function new_: id; message 'new'; { unavailable in ios }
    class function allocWithZone (zone: NSZonePtr): id; message 'allocWithZone:'; { unavailable in ios }
    class function alloc: id; message 'alloc'; { unavailable in ios }
    {$endif}
    class function imageNamed (name: NSImageName): NSImage; message 'imageNamed:';
    class function imageWithSystemSymbolName_accessibilityDescription (symbolName: NSString; description: NSString): id; message 'imageWithSystemSymbolName:accessibilityDescription:'; { available in macos  }
    function initWithSize (size: NSSize): id; message 'initWithSize:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithData (data: NSData): id; message 'initWithData:';
    function initWithContentsOfFile (fileName: NSString): id; message 'initWithContentsOfFile:';
    function initWithContentsOfURL (url: NSURL): id; message 'initWithContentsOfURL:';
    function initByReferencingFile (fileName: NSString): id; message 'initByReferencingFile:';
    function initByReferencingURL (url: NSURL): id; message 'initByReferencingURL:';
    function initWithPasteboard (pasteboard: NSPasteboard): id; message 'initWithPasteboard:';
    function initWithDataIgnoringOrientation (data: NSData): id; message 'initWithDataIgnoringOrientation:'; { available in macos  }
    class function imageWithSize_flipped_drawingHandler (size: NSSize; drawingHandlerShouldBeCalledWithFlippedContext: objcbool; drawingHandler: NSImageImageWithSizeCallback): id; message 'imageWithSize:flipped:drawingHandler:'; { available in macos  }
    procedure setSize(newValue: NSSize); message 'setSize:';
    function size: NSSize; message 'size';
    function setName (string_: NSImageName): objcbool; message 'setName:';
    function name: NSImageName; message 'name';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setUsesEPSOnResolutionMismatch(newValue: objcbool); message 'setUsesEPSOnResolutionMismatch:';
    function usesEPSOnResolutionMismatch: objcbool; message 'usesEPSOnResolutionMismatch';
    procedure setPrefersColorMatch(newValue: objcbool); message 'setPrefersColorMatch:';
    function prefersColorMatch: objcbool; message 'prefersColorMatch';
    procedure setMatchesOnMultipleResolution(newValue: objcbool); message 'setMatchesOnMultipleResolution:';
    function matchesOnMultipleResolution: objcbool; message 'matchesOnMultipleResolution';
    procedure setMatchesOnlyOnBestFittingAxis(newValue: objcbool); message 'setMatchesOnlyOnBestFittingAxis:'; { available in macos  }
    function matchesOnlyOnBestFittingAxis: objcbool; message 'matchesOnlyOnBestFittingAxis'; { available in macos  }
    procedure drawAtPoint_fromRect_operation_fraction (point: NSPoint; fromRect: NSRect; op: NSCompositingOperation; delta: CGFloat); message 'drawAtPoint:fromRect:operation:fraction:';
    procedure drawInRect_fromRect_operation_fraction (rect: NSRect; fromRect: NSRect; op: NSCompositingOperation; delta: CGFloat); message 'drawInRect:fromRect:operation:fraction:';
    procedure drawInRect_fromRect_operation_fraction_respectFlipped_hints (dstSpacePortionRect: NSRect; srcSpacePortionRect: NSRect; op: NSCompositingOperation; requestedAlpha: CGFloat; respectContextIsFlipped: objcbool; hints: NSDictionary); message 'drawInRect:fromRect:operation:fraction:respectFlipped:hints:'; { available in macos  }
    function drawRepresentation_inRect (imageRep: NSImageRep; rect: NSRect): objcbool; message 'drawRepresentation:inRect:';
    procedure drawInRect (rect: NSRect); message 'drawInRect:'; { available in macos  }
    procedure recache; message 'recache';
    function TIFFRepresentation: NSData; message 'TIFFRepresentation';
    function TIFFRepresentationUsingCompression_factor (comp: NSTIFFCompression; factor: single): NSData; message 'TIFFRepresentationUsingCompression:factor:';
    function representations: NSArray; message 'representations';
    procedure addRepresentations (imageReps: NSArray); message 'addRepresentations:';
    procedure addRepresentation (imageRep: NSImageRep); message 'addRepresentation:';
    procedure removeRepresentation (imageRep: NSImageRep); message 'removeRepresentation:';
    function isValid: objcbool; message 'isValid';
    procedure lockFocus; message 'lockFocus';
    procedure lockFocusFlipped (flipped: objcbool); message 'lockFocusFlipped:'; { available in macos  }
    procedure unlockFocus; message 'unlockFocus';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    class function imageTypes: NSArray; message 'imageTypes'; { available in macos  }
    class function imageUnfilteredTypes: NSArray; message 'imageUnfilteredTypes'; { available in macos  }
    class function canInitWithPasteboard (pasteboard: NSPasteboard): objcbool; message 'canInitWithPasteboard:';
    procedure cancelIncrementalLoad; message 'cancelIncrementalLoad';
    procedure setCacheMode(newValue: NSImageCacheMode); message 'setCacheMode:';
    function cacheMode: NSImageCacheMode; message 'cacheMode';
    procedure setAlignmentRect(newValue: NSRect); message 'setAlignmentRect:'; { available in macos  }
    function alignmentRect: NSRect; message 'alignmentRect'; { available in macos  }
    function isTemplate: objcbool; message 'isTemplate'; { available in macos  }
    procedure setTemplate (isTemplate_: objcbool); message 'setTemplate:'; { available in macos  }
    procedure setAccessibilityDescription(newValue: NSString); message 'setAccessibilityDescription:'; { available in macos  }
    function accessibilityDescription: NSString; message 'accessibilityDescription'; { available in macos  }
    function initWithCGImage_size (cgImage: CGImageRef; size_: NSSize): id; message 'initWithCGImage:size:'; { available in macos  }
    function CGImageForProposedRect_context_hints (proposedDestRect: NSRectPtr; referenceContext: NSGraphicsContext; hints: NSDictionary): CGImageRef; message 'CGImageForProposedRect:context:hints:'; { available in macos  }
    function bestRepresentationForRect_context_hints (rect: NSRect; referenceContext: NSGraphicsContext; hints: NSDictionary): NSImageRep; message 'bestRepresentationForRect:context:hints:'; { available in macos  }
    function hitTestRect_withImageDestinationRect_context_hints_flipped (testRectDestSpace: NSRect; imageRectDestSpace: NSRect; context: NSGraphicsContext; hints: NSDictionary; flipped: objcbool): objcbool; message 'hitTestRect:withImageDestinationRect:context:hints:flipped:'; { available in macos  }
    function recommendedLayerContentsScale (preferredContentsScale: CGFloat): CGFloat; message 'recommendedLayerContentsScale:'; { available in macos  }
    function layerContentsForContentsScale (layerContentsScale: CGFloat): id; message 'layerContentsForContentsScale:'; { available in macos  }
    procedure setCapInsets(newValue: NSEdgeInsets); message 'setCapInsets:'; { available in macos  }
    function capInsets: NSEdgeInsets; message 'capInsets'; { available in macos  }
    procedure setResizingMode(newValue: NSImageResizingMode); message 'setResizingMode:'; { available in macos  }
    function resizingMode: NSImageResizingMode; message 'resizingMode'; { available in macos  }
    function imageWithSymbolConfiguration (configuration: NSImageSymbolConfiguration): NSImage; message 'imageWithSymbolConfiguration:'; { available in macos  }
  end;
{$endif}

{$if  not defined(NSIMAGE_UNAVAILABLE_MACCATALYST)}
{$ifdef CLASSES}

type
  NSImageCategory = objccategory external (NSImage)
  end;
{$endif}

{$endif}
{$ifdef PROTOCOLS}

type
  NSImageDelegateProtocol = objcprotocol external name 'NSImageDelegate' (NSObjectProtocol)
  optional
    function imageDidNotDraw_inRect (sender: NSImage; rect: NSRect): NSImage; message 'imageDidNotDraw:inRect:';
    procedure image_willLoadRepresentation (image: NSImage; rep: NSImageRep); message 'image:willLoadRepresentation:';
    procedure image_didLoadRepresentationHeader (image: NSImage; rep: NSImageRep); message 'image:didLoadRepresentationHeader:';
    procedure image_didLoadPartOfRepresentation_withValidRows (image: NSImage; rep: NSImageRep; rows: NSInteger); message 'image:didLoadPartOfRepresentation:withValidRows:';
    procedure image_didLoadRepresentation_withStatus (image: NSImage; rep: NSImageRep; status: NSImageLoadStatus); message 'image:didLoadRepresentation:withStatus:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSBundleImageExtension = objccategory external (NSBundle)
    function imageForResource (name: NSImageName): NSImage; message 'imageForResource:'; { available in macos  }
    function pathForImageResource (name: NSImageName): NSString; message 'pathForImageResource:';
    function URLForImageResource (name: NSImageName): NSURL; message 'URLForImageResource:'; { available in macos  }
  end;

type
  NSImageCategory_1 = objccategory external (NSImage)
    function bestRepresentationForDevice (deviceDescription: NSDictionary): NSImageRep; message 'bestRepresentationForDevice:'; deprecated 'Use -[NSImage bestRepresentationForRect:context:hints:] instead.  Any deviceDescription dictionary is also a valid hints dictionary.';
    class function imageUnfilteredFileTypes: NSArray; message 'imageUnfilteredFileTypes'; deprecated 'Use +imageUnfilteredTypes instead';
    class function imageUnfilteredPasteboardTypes: NSArray; message 'imageUnfilteredPasteboardTypes'; deprecated 'Use +imageUnfilteredTypes instead';
    class function imageFileTypes: NSArray; message 'imageFileTypes'; deprecated 'Use +imageTypes instead';
    class function imagePasteboardTypes: NSArray; message 'imagePasteboardTypes'; deprecated 'Use +imageTypes instead';
    {$if defined(TARGET_OS_OSX)}
    function initWithIconRef (iconRef_: IconRef): id; message 'initWithIconRef:'; deprecated 'Use -[NSWorkspace iconForFile:], -[NSWorkspace iconForFiles:], -[NSWorkspace iconForFileType:], or +[NSImage imageNamed:] instead.';
    {$endif}
    procedure setFlipped (flag: objcbool); message 'setFlipped:'; deprecated 'The concept of flippedness for NSImage is deprecated.  Please see the AppKit 10.6 release notes for a discussion of why and for how to replace existing usage.';
    function isFlipped: objcbool; message 'isFlipped'; deprecated 'The concept of flippedness for NSImage is deprecated.  Please see the AppKit 10.6 release notes for a discussion of why and for how to replace existing usage.';
    procedure dissolveToPoint_fraction (point: NSPoint; fraction: CGFloat); message 'dissolveToPoint:fraction:'; deprecated 'Use -drawAtPoint:... or -drawInRect:... methods instead';
    procedure dissolveToPoint_fromRect_fraction (point: NSPoint; rect: NSRect; fraction: CGFloat); message 'dissolveToPoint:fromRect:fraction:'; deprecated 'Use -drawAtPoint:... or -drawInRect:... methods instead';
    procedure compositeToPoint_operation (point: NSPoint; op: NSCompositingOperation); message 'compositeToPoint:operation:'; deprecated 'Use -drawAtPoint:... or -drawInRect:... methods instead';
    procedure compositeToPoint_fromRect_operation (point: NSPoint; rect: NSRect; op: NSCompositingOperation); message 'compositeToPoint:fromRect:operation:'; deprecated 'Use -drawAtPoint:... or -drawInRect:... methods instead';
    procedure compositeToPoint_operation_fraction (point: NSPoint; op: NSCompositingOperation; delta: CGFloat); message 'compositeToPoint:operation:fraction:'; deprecated 'Use -drawAtPoint:... or -drawInRect:... methods instead';
    procedure compositeToPoint_fromRect_operation_fraction (point: NSPoint; rect: NSRect; op: NSCompositingOperation; delta: CGFloat); message 'compositeToPoint:fromRect:operation:fraction:'; deprecated 'Use -drawAtPoint:... or -drawInRect:... methods instead';
    procedure lockFocusOnRepresentation (imageRepresentation: NSImageRep); message 'lockFocusOnRepresentation:'; deprecated 'Use -lockFocus followed by -[NSImageRep drawInRect:] instead. See documentation for more info.';
    procedure setScalesWhenResized (flag: objcbool); message 'setScalesWhenResized:'; deprecated 'You should be able to remove use of this method without any replacement.  See 10.6 AppKit release notes for details.';
    function scalesWhenResized: objcbool; message 'scalesWhenResized'; deprecated 'You should be able to remove use of this method without any replacement.  See 10.6 AppKit release notes for details.';
    procedure setDataRetained (flag: objcbool); message 'setDataRetained:'; deprecated 'You should be able to remove use of this method without any replacement.  See 10.6 AppKit release notes for details.';
    function isDataRetained: objcbool; message 'isDataRetained'; deprecated 'You should be able to remove use of this method without any replacement.  See 10.6 AppKit release notes for details.';
    procedure setCachedSeparately (flag: objcbool); message 'setCachedSeparately:'; deprecated 'You should be able to remove use of this method without any replacement.  See 10.6 AppKit release notes for details.';
    function isCachedSeparately: objcbool; message 'isCachedSeparately'; deprecated 'You should be able to remove use of this method without any replacement.  See 10.6 AppKit release notes for details.';
    procedure setCacheDepthMatchesImageDepth (flag: objcbool); message 'setCacheDepthMatchesImageDepth:'; deprecated 'You should be able to remove use of this method without any replacement.  See 10.6 AppKit release notes for details.';
    function cacheDepthMatchesImageDepth: objcbool; message 'cacheDepthMatchesImageDepth'; deprecated 'You should be able to remove use of this method without any replacement.  See 10.6 AppKit release notes for details.';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSImageNameAddTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameBluetoothTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameBonjour: NSImageName { available in macos  }; cvar; external;
  NSImageNameBookmarksTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameCaution: NSImageName { available in macos  }; cvar; external;
  NSImageNameComputer: NSImageName { available in macos  }; cvar; external;
  NSImageNameEnterFullScreenTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameExitFullScreenTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameFolder: NSImageName { available in macos  }; cvar; external;
  NSImageNameFolderBurnable: NSImageName { available in macos  }; cvar; external;
  NSImageNameFolderSmart: NSImageName { available in macos  }; cvar; external;
  NSImageNameFollowLinkFreestandingTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameHomeTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameIChatTheaterTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameLockLockedTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameLockUnlockedTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameNetwork: NSImageName { available in macos  }; cvar; external;
  NSImageNamePathTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameQuickLookTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameRefreshFreestandingTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameRefreshTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameRemoveTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameRevealFreestandingTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameShareTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameSlideshowTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameStatusAvailable: NSImageName { available in macos  }; cvar; external;
  NSImageNameStatusNone: NSImageName { available in macos  }; cvar; external;
  NSImageNameStatusPartiallyAvailable: NSImageName { available in macos  }; cvar; external;
  NSImageNameStatusUnavailable: NSImageName { available in macos  }; cvar; external;
  NSImageNameStopProgressFreestandingTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameStopProgressTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTrashEmpty: NSImageName { available in macos  }; cvar; external;
  NSImageNameTrashFull: NSImageName { available in macos  }; cvar; external;
  NSImageNameActionTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameSmartBadgeTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameIconViewTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameListViewTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameColumnViewTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameFlowViewTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameInvalidDataFreestandingTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameGoForwardTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameGoBackTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameGoRightTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameGoLeftTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameRightFacingTriangleTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameLeftFacingTriangleTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameDotMac: NSImageName deprecated 'replace with NSImageNameMobileMe'; cvar; external;
  NSImageNameMobileMe: NSImageName { available in macos  }; cvar; external;
  NSImageNameMultipleDocuments: NSImageName { available in macos  }; cvar; external;
  NSImageNameUserAccounts: NSImageName { available in macos  }; cvar; external;
  NSImageNamePreferencesGeneral: NSImageName { available in macos  }; cvar; external;
  NSImageNameAdvanced: NSImageName { available in macos  }; cvar; external;
  NSImageNameInfo: NSImageName { available in macos  }; cvar; external;
  NSImageNameFontPanel: NSImageName { available in macos  }; cvar; external;
  NSImageNameColorPanel: NSImageName { available in macos  }; cvar; external;
  NSImageNameUser: NSImageName { available in macos  }; cvar; external;
  NSImageNameUserGroup: NSImageName { available in macos  }; cvar; external;
  NSImageNameEveryone: NSImageName { available in macos  }; cvar; external;
  NSImageNameUserGuest: NSImageName { available in macos  }; cvar; external;
  NSImageNameMenuOnStateTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameMenuMixedStateTemplate: NSImageName { available in macos  }; cvar; external;
  NSImageNameApplicationIcon: NSImageName { available in macos  }; cvar; external;
  NSImageNameTouchBarAddDetailTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarAddTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarAlarmTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarAudioInputMuteTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarAudioInputTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarAudioOutputMuteTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarAudioOutputVolumeHighTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarAudioOutputVolumeLowTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarAudioOutputVolumeMediumTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarAudioOutputVolumeOffTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarBookmarksTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarColorPickerFill: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarColorPickerFont: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarColorPickerStroke: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarCommunicationAudioTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarCommunicationVideoTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarComposeTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarDeleteTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarDownloadTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarEnterFullScreenTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarExitFullScreenTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarFastForwardTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarFolderCopyToTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarFolderMoveToTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarFolderTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarGetInfoTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarGoBackTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarGoDownTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarGoForwardTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarGoUpTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarHistoryTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarIconViewTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarListViewTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarMailTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarNewFolderTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarNewMessageTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarOpenInBrowserTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarPauseTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarPlayPauseTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarPlayTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarQuickLookTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarRecordStartTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarRecordStopTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarRefreshTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarRemoveTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarRewindTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarRotateLeftTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarRotateRightTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSearchTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarShareTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSidebarTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSkipAhead15SecondsTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSkipAhead30SecondsTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSkipAheadTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSkipBack15SecondsTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSkipBack30SecondsTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSkipBackTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSkipToEndTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSkipToStartTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarSlideshowTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTagIconTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextBoldTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextBoxTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextCenterAlignTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextItalicTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextJustifiedAlignTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextLeftAlignTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextListTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextRightAlignTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextStrikethroughTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarTextUnderlineTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarUserAddTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarUserGroupTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarUserTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarVolumeDownTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarVolumeUpTemplate: NSImageName { available in macos , ios  }; cvar; external;
  NSImageNameTouchBarPlayheadTemplate: NSImageName { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSImageSymbolScale = NSInteger;
  NSImageSymbolScalePtr = ^NSImageSymbolScale;

const
  NSImageSymbolScaleSmall = 1;
  NSImageSymbolScaleMedium = 2;
  NSImageSymbolScaleLarge = 3;
{$endif}

{$ifdef CLASSES}

type
  NSImageSymbolConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function configurationWithPointSize_weight_scale (pointSize: CGFloat; weight: NSFontWeight; scale: NSImageSymbolScale): NSImageSymbolConfiguration; message 'configurationWithPointSize:weight:scale:';
    class function configurationWithPointSize_weight (pointSize: CGFloat; weight: NSFontWeight): NSImageSymbolConfiguration; message 'configurationWithPointSize:weight:';
    class function configurationWithTextStyle_scale (style: NSFontTextStyle; scale: NSImageSymbolScale): NSImageSymbolConfiguration; message 'configurationWithTextStyle:scale:';
    class function configurationWithTextStyle (style: NSFontTextStyle): NSImageSymbolConfiguration; message 'configurationWithTextStyle:';
    class function configurationWithScale (scale: NSImageSymbolScale): NSImageSymbolConfiguration; message 'configurationWithScale:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

