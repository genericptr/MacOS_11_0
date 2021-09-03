{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSDragging.h }

{$ifdef CALLBACKS}
type
  NSDraggingEnumerateDraggingItemsWithOptionsCallback = reference to function (draggingItem: NSDraggingItem; idx: NSInteger; stop: objcboolPtr): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSDraggingInfoProtocolPtr = ^NSDraggingInfoProtocol;
  NSDraggingDestinationProtocolPtr = ^NSDraggingDestinationProtocol;
  NSDraggingSourceProtocolPtr = ^NSDraggingSourceProtocol;
  NSSpringLoadingDestinationProtocolPtr = ^NSSpringLoadingDestinationProtocol;
{$endif}

{$ifdef TYPES}
type
  NSDragOperation = NSUInteger;
  NSDragOperationPtr = ^NSDragOperation;

const
  NSDragOperationNone = 0;
  NSDragOperationCopy = 1;
  NSDragOperationLink = 2;
  NSDragOperationGeneric = 4;
  NSDragOperationPrivate = 8;
  NSDragOperationMove = 16;
  NSDragOperationDelete = 32;
  NSDragOperationEvery = NSUIntegerMax;
  NSDragOperationAll_Obsolete = 15 deprecated;
  NSDragOperationAll = NSDragOperationAll_Obsolete deprecated;

type
  NSDraggingFormation = NSInteger;
  NSDraggingFormationPtr = ^NSDraggingFormation;

const
  NSDraggingFormationDefault = 0;
  NSDraggingFormationNone = 1;
  NSDraggingFormationPile = 2;
  NSDraggingFormationList = 3;
  NSDraggingFormationStack = 4;

type
  NSDraggingContext = NSInteger;
  NSDraggingContextPtr = ^NSDraggingContext;

const
  NSDraggingContextOutsideApplication = 0;
  NSDraggingContextWithinApplication = 1;

type
  NSDraggingItemEnumerationOptions = NSUInteger;
  NSDraggingItemEnumerationOptionsPtr = ^NSDraggingItemEnumerationOptions;

const
  NSDraggingItemEnumerationConcurrent = NSEnumerationConcurrent;
  NSDraggingItemEnumerationClearNonenumeratedImages = 1 shl 16;

type
  NSSpringLoadingHighlight = NSInteger;
  NSSpringLoadingHighlightPtr = ^NSSpringLoadingHighlight;

const
  NSSpringLoadingHighlightNone = 0;
  NSSpringLoadingHighlightStandard = 1;
  NSSpringLoadingHighlightEmphasized = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  NSDraggingInfoProtocol = objcprotocol external name 'NSDraggingInfo' (NSObjectProtocol)
  required
    function draggingDestinationWindow: NSWindow; message 'draggingDestinationWindow';
    function draggingSourceOperationMask: NSDragOperation; message 'draggingSourceOperationMask';
    function draggingLocation: NSPoint; message 'draggingLocation';
    function draggedImageLocation: NSPoint; message 'draggedImageLocation';
    function draggedImage: NSImage; message 'draggedImage'; deprecated 'Use NSDraggingItem objects instead';
    function draggingPasteboard: NSPasteboard; message 'draggingPasteboard';
    function draggingSource: id; message 'draggingSource';
    function draggingSequenceNumber: NSInteger; message 'draggingSequenceNumber';
    procedure slideDraggedImageTo (screenPoint: NSPoint); message 'slideDraggedImageTo:';
    function namesOfPromisedFilesDroppedAtDestination (dropDestination: NSURL): NSArray; message 'namesOfPromisedFilesDroppedAtDestination:'; deprecated 'Use NSFilePromiseReceiver objects instead';
    procedure setDraggingFormation(newValue: NSDraggingFormation); message 'setDraggingFormation:'; { available in macos  }
    function draggingFormation: NSDraggingFormation; message 'draggingFormation'; { available in macos  }
    procedure setAnimatesToDestination(newValue: objcbool); message 'setAnimatesToDestination:'; { available in macos  }
    function animatesToDestination: objcbool; message 'animatesToDestination'; { available in macos  }
    procedure setNumberOfValidItemsForDrop(newValue: NSInteger); message 'setNumberOfValidItemsForDrop:'; { available in macos  }
    function numberOfValidItemsForDrop: NSInteger; message 'numberOfValidItemsForDrop'; { available in macos  }
    procedure enumerateDraggingItemsWithOptions_forView_classes_searchOptions_usingBlock (enumOpts: NSDraggingItemEnumerationOptions; view: NSView; classArray: NSArray; searchOptions: NSDictionary; block: NSDraggingEnumerateDraggingItemsWithOptionsCallback); message 'enumerateDraggingItemsWithOptions:forView:classes:searchOptions:usingBlock:'; { available in macos  }
    function springLoadingHighlight: NSSpringLoadingHighlight; message 'springLoadingHighlight'; { available in macos  }
    procedure resetSpringLoading; message 'resetSpringLoading'; { available in macos  }
  end;

type
  NSDraggingDestinationProtocol = objcprotocol external name 'NSDraggingDestination' (NSObjectProtocol)
  optional
    function draggingEntered (sender: id): NSDragOperation; message 'draggingEntered:';
    function draggingUpdated (sender: id): NSDragOperation; message 'draggingUpdated:';
    procedure draggingExited (sender: id); message 'draggingExited:';
    function prepareForDragOperation (sender: id): objcbool; message 'prepareForDragOperation:';
    function performDragOperation (sender: id): objcbool; message 'performDragOperation:';
    procedure concludeDragOperation (sender: id); message 'concludeDragOperation:';
    procedure draggingEnded (sender: id); message 'draggingEnded:';
    function wantsPeriodicDraggingUpdates: objcbool; message 'wantsPeriodicDraggingUpdates';
    procedure updateDraggingItemsForDrag (sender: id); message 'updateDraggingItemsForDrag:'; { available in macos  }
  end;

type
  NSDraggingSourceProtocol = objcprotocol external name 'NSDraggingSource' (NSObjectProtocol)
  required
    function draggingSession_sourceOperationMaskForDraggingContext (session: NSDraggingSession; context: NSDraggingContext): NSDragOperation; message 'draggingSession:sourceOperationMaskForDraggingContext:';
  optional
    procedure draggingSession_willBeginAtPoint (session: NSDraggingSession; screenPoint: NSPoint); message 'draggingSession:willBeginAtPoint:';
    procedure draggingSession_movedToPoint (session: NSDraggingSession; screenPoint: NSPoint); message 'draggingSession:movedToPoint:';
    procedure draggingSession_endedAtPoint_operation (session: NSDraggingSession; screenPoint: NSPoint; operation: NSDragOperation); message 'draggingSession:endedAtPoint:operation:';
    function ignoreModifierKeysForDraggingSession (session: NSDraggingSession): objcbool; message 'ignoreModifierKeysForDraggingSession:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSSpringLoadingOptions = NSUInteger;
  NSSpringLoadingOptionsPtr = ^NSSpringLoadingOptions;

const
  NSSpringLoadingDisabled = 0;
  NSSpringLoadingEnabled = 1 shl 0;
  NSSpringLoadingContinuousActivation = 1 shl 1;
  NSSpringLoadingNoHover = 1 shl 3;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSpringLoadingDestinationProtocol = objcprotocol external name 'NSSpringLoadingDestination' (NSObjectProtocol)
  required
    procedure springLoadingActivated_draggingInfo (activated: objcbool; draggingInfo: id); message 'springLoadingActivated:draggingInfo:'; { available in macos  }
    procedure springLoadingHighlightChanged (draggingInfo: id); message 'springLoadingHighlightChanged:'; { available in macos  }
  optional
    function springLoadingEntered (draggingInfo: id): NSSpringLoadingOptions; message 'springLoadingEntered:'; { available in macos  }
    function springLoadingUpdated (draggingInfo: id): NSSpringLoadingOptions; message 'springLoadingUpdated:'; { available in macos  }
    procedure springLoadingExited (draggingInfo: id); message 'springLoadingExited:'; { available in macos  }
    procedure draggingEnded (draggingInfo: id); message 'draggingEnded:'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSDraggingSourceDeprecated = objccategory external (NSObject)
    function namesOfPromisedFilesDroppedAtDestination (dropDestination: NSURL): NSArray; message 'namesOfPromisedFilesDroppedAtDestination:'; deprecated 'Use NSFilePromiseProvider objects instead';
    function draggingSourceOperationMaskForLocal (flag: objcbool): NSDragOperation; message 'draggingSourceOperationMaskForLocal:'; deprecated 'Use -draggingSession:sourceOperationMaskForDraggingContext: instead';
    procedure draggedImage_beganAt (image: NSImage; screenPoint: NSPoint); message 'draggedImage:beganAt:'; deprecated 'Use -draggingSession:willBeginAtPoint: instead';
    procedure draggedImage_endedAt_operation (image: NSImage; screenPoint: NSPoint; operation: NSDragOperation); message 'draggedImage:endedAt:operation:'; deprecated 'Use -draggingSession:endedAtPoint:operation: instead';
    procedure draggedImage_movedTo (image: NSImage; screenPoint: NSPoint); message 'draggedImage:movedTo:'; deprecated 'Use -draggingSession:movedToPoint: instead';
    function ignoreModifierKeysWhileDragging: objcbool; message 'ignoreModifierKeysWhileDragging'; deprecated 'Use -ignoreModifierKeysForDraggingSession: instead';
    procedure draggedImage_endedAt_deposited (image: NSImage; screenPoint: NSPoint; flag: objcbool); message 'draggedImage:endedAt:deposited:'; deprecated 'in 10.1 and later';
  end;
{$endif}

