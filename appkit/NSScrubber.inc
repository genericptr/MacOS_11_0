{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSScrubber.h }

{$ifdef CALLBACKS}
type
  NSScrubberPerformSequentialBatchUpdatesCallback = reference to function : pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSScrubberSelectionStylePtr = ^NSScrubberSelectionStyle;
  NSScrubberPtr = ^NSScrubber;
  NSScrubberDataSourceProtocolPtr = ^NSScrubberDataSourceProtocol;
  NSScrubberDelegateProtocolPtr = ^NSScrubberDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSScrubberDataSourceProtocol = objcprotocol external name 'NSScrubberDataSource' (NSObjectProtocol)
  required
    function numberOfItemsForScrubber (scrubber: NSScrubber): NSInteger; message 'numberOfItemsForScrubber:'; { available in macos  }
    function scrubber_viewForItemAtIndex (scrubber: NSScrubber; index: NSInteger): NSScrubberItemView; message 'scrubber:viewForItemAtIndex:'; { available in macos  }
  end;

type
  NSScrubberDelegateProtocol = objcprotocol external name 'NSScrubberDelegate' (NSObjectProtocol)
  optional
    procedure scrubber_didSelectItemAtIndex (scrubber: NSScrubber; selectedIndex: NSInteger); message 'scrubber:didSelectItemAtIndex:'; { available in macos  }
    procedure scrubber_didHighlightItemAtIndex (scrubber: NSScrubber; highlightedIndex: NSInteger); message 'scrubber:didHighlightItemAtIndex:'; { available in macos  }
    procedure scrubber_didChangeVisibleRange (scrubber: NSScrubber; visibleRange: NSRange); message 'scrubber:didChangeVisibleRange:'; { available in macos  }
    procedure didBeginInteractingWithScrubber (scrubber: NSScrubber); message 'didBeginInteractingWithScrubber:'; { available in macos  }
    procedure didFinishInteractingWithScrubber (scrubber: NSScrubber); message 'didFinishInteractingWithScrubber:'; { available in macos  }
    procedure didCancelInteractingWithScrubber (scrubber: NSScrubber); message 'didCancelInteractingWithScrubber:'; { available in macos  }
  end;
{$endif}

{$ifdef TYPES}
type
  NSScrubberMode = NSInteger;
  NSScrubberModePtr = ^NSScrubberMode;

const
  NSScrubberModeFixed = 0;
  NSScrubberModeFree = 1;

type
  NSScrubberAlignment = NSInteger;
  NSScrubberAlignmentPtr = ^NSScrubberAlignment;

const
  NSScrubberAlignmentNone = 0;
  NSScrubberAlignmentLeading = 1;
  NSScrubberAlignmentTrailing = 2;
  NSScrubberAlignmentCenter = 3;
{$endif}

{$ifdef CLASSES}

type
  NSScrubberSelectionStyle = objcclass external (NSObject, NSCodingProtocol)
  public
    class function outlineOverlayStyle: NSScrubberSelectionStyle; message 'outlineOverlayStyle';
    class function roundedBackgroundStyle: NSScrubberSelectionStyle; message 'roundedBackgroundStyle';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function makeSelectionView: NSScrubberSelectionView; message 'makeSelectionView';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;

type
  NSScrubber = objcclass external (NSView)
  public
    procedure setDataSource(newValue: id); message 'setDataSource:';
    function dataSource: id; message 'dataSource';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setScrubberLayout(newValue: NSScrubberLayout); message 'setScrubberLayout:';
    function scrubberLayout: NSScrubberLayout; message 'scrubberLayout';
    function numberOfItems: NSInteger; message 'numberOfItems';
    function highlightedIndex: NSInteger; message 'highlightedIndex';
    procedure setSelectedIndex(newValue: NSInteger); message 'setSelectedIndex:';
    function selectedIndex: NSInteger; message 'selectedIndex';
    procedure setMode(newValue: NSScrubberMode); message 'setMode:';
    function mode: NSScrubberMode; message 'mode';
    procedure setItemAlignment(newValue: NSScrubberAlignment); message 'setItemAlignment:';
    function itemAlignment: NSScrubberAlignment; message 'itemAlignment';
    procedure setContinuous(newValue: objcbool); message 'setContinuous:';
    function isContinuous: objcbool; message 'isContinuous';
    procedure setFloatsSelectionViews(newValue: objcbool); message 'setFloatsSelectionViews:';
    function floatsSelectionViews: objcbool; message 'floatsSelectionViews';
    procedure setSelectionBackgroundStyle(newValue: NSScrubberSelectionStyle); message 'setSelectionBackgroundStyle:';
    function selectionBackgroundStyle: NSScrubberSelectionStyle; message 'selectionBackgroundStyle';
    procedure setSelectionOverlayStyle(newValue: NSScrubberSelectionStyle); message 'setSelectionOverlayStyle:';
    function selectionOverlayStyle: NSScrubberSelectionStyle; message 'selectionOverlayStyle';
    procedure setShowsArrowButtons(newValue: objcbool); message 'setShowsArrowButtons:';
    function showsArrowButtons: objcbool; message 'showsArrowButtons';
    procedure setShowsAdditionalContentIndicators(newValue: objcbool); message 'setShowsAdditionalContentIndicators:';
    function showsAdditionalContentIndicators: objcbool; message 'showsAdditionalContentIndicators';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setBackgroundView(newValue: NSView); message 'setBackgroundView:';
    function backgroundView: NSView; message 'backgroundView';
    function initWithFrame (frameRect: NSRect): id; message 'initWithFrame:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure reloadData; message 'reloadData';
    procedure performSequentialBatchUpdates (updateBlock: NSScrubberPerformSequentialBatchUpdatesCallback); message 'performSequentialBatchUpdates:';
    procedure insertItemsAtIndexes (indexes: NSIndexSet); message 'insertItemsAtIndexes:';
    procedure removeItemsAtIndexes (indexes: NSIndexSet); message 'removeItemsAtIndexes:';
    procedure reloadItemsAtIndexes (indexes: NSIndexSet); message 'reloadItemsAtIndexes:';
    procedure moveItemAtIndex_toIndex (oldIndex: NSInteger; newIndex: NSInteger); message 'moveItemAtIndex:toIndex:';
    procedure scrollItemAtIndex_toAlignment (index: NSInteger; alignment: NSScrubberAlignment); message 'scrollItemAtIndex:toAlignment:';
    function itemViewForItemAtIndex (index: NSInteger): NSScrubberItemView; message 'itemViewForItemAtIndex:';
    procedure registerClass_forItemIdentifier (itemViewClass: pobjc_class; itemIdentifier: NSUserInterfaceItemIdentifier); message 'registerClass:forItemIdentifier:';
    procedure registerNib_forItemIdentifier (nib: NSNib; itemIdentifier: NSUserInterfaceItemIdentifier); message 'registerNib:forItemIdentifier:';
    function makeItemWithIdentifier_owner (itemIdentifier: NSUserInterfaceItemIdentifier; owner: id): NSScrubberItemView; message 'makeItemWithIdentifier:owner:';
  end;
{$endif}

