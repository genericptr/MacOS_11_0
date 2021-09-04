{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSDraggingSession.h }

{$ifdef CALLBACKS}
type
  NSDraggingSessionEnumerateDraggingItemsWithOptionsCallback = reference to procedure (draggingItem: NSDraggingItem; idx: NSInteger; stop: objcboolPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSDraggingSessionPtr = ^NSDraggingSession;
{$endif}

{$ifdef CLASSES}

type
  NSDraggingSession = objcclass external (NSObject)
  public
    procedure setDraggingFormation(newValue: NSDraggingFormation); message 'setDraggingFormation:';
    function draggingFormation: NSDraggingFormation; message 'draggingFormation';
    procedure setAnimatesToStartingPositionsOnCancelOrFail(newValue: objcbool); message 'setAnimatesToStartingPositionsOnCancelOrFail:';
    function animatesToStartingPositionsOnCancelOrFail: objcbool; message 'animatesToStartingPositionsOnCancelOrFail';
    procedure setDraggingLeaderIndex(newValue: NSInteger); message 'setDraggingLeaderIndex:';
    function draggingLeaderIndex: NSInteger; message 'draggingLeaderIndex';
    function draggingPasteboard: NSPasteboard; message 'draggingPasteboard';
    function draggingSequenceNumber: NSInteger; message 'draggingSequenceNumber';
    function draggingLocation: NSPoint; message 'draggingLocation';
    procedure enumerateDraggingItemsWithOptions_forView_classes_searchOptions_usingBlock (enumOpts: NSDraggingItemEnumerationOptions; view: NSView; classArray: NSArray; searchOptions: NSDictionary; block: NSDraggingSessionEnumerateDraggingItemsWithOptionsCallback); message 'enumerateDraggingItemsWithOptions:forView:classes:searchOptions:usingBlock:';
  end;
{$endif}

