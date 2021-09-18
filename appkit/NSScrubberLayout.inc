{ Parsed from AppKit.framework NSScrubberLayout.h }

{$ifdef TYPES}
type
  NSScrubberLayoutAttributesPtr = ^NSScrubberLayoutAttributes;
  NSScrubberLayoutPtr = ^NSScrubberLayout;
  NSScrubberFlowLayoutPtr = ^NSScrubberFlowLayout;
  NSScrubberProportionalLayoutPtr = ^NSScrubberProportionalLayout;
  NSScrubberFlowLayoutDelegateProtocolPtr = ^NSScrubberFlowLayoutDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSScrubberLayoutAttributes = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setItemIndex(newValue: NSInteger); message 'setItemIndex:';
    function itemIndex: NSInteger; message 'itemIndex';
    procedure setFrame(newValue: NSRect); message 'setFrame:';
    function frame: NSRect; message 'frame';
    procedure setAlpha(newValue: CGFloat); message 'setAlpha:';
    function alpha: CGFloat; message 'alpha';
    class function layoutAttributesForItemAtIndex (index: NSInteger): id; message 'layoutAttributesForItemAtIndex:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSScrubberLayout = objcclass external (NSObject, NSCodingProtocol)
  public
    class function layoutAttributesClass: pobjc_class; message 'layoutAttributesClass';
    function scrubber: NSScrubber; message 'scrubber';
    function visibleRect: NSRect; message 'visibleRect';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure invalidateLayout; message 'invalidateLayout'; { NS_REQUIRES_SUPER }
    procedure prepareLayout; message 'prepareLayout';
    function scrubberContentSize: NSSize; message 'scrubberContentSize';
    function layoutAttributesForItemAtIndex (index: NSInteger): NSScrubberLayoutAttributes; message 'layoutAttributesForItemAtIndex:';
    function layoutAttributesForItemsInRect (rect: NSRect): NSSet; message 'layoutAttributesForItemsInRect:';
    function shouldInvalidateLayoutForSelectionChange: objcbool; message 'shouldInvalidateLayoutForSelectionChange';
    function shouldInvalidateLayoutForHighlightChange: objcbool; message 'shouldInvalidateLayoutForHighlightChange';
    function shouldInvalidateLayoutForChangeFromVisibleRect_toVisibleRect (fromVisibleRect: NSRect; toVisibleRect: NSRect): objcbool; message 'shouldInvalidateLayoutForChangeFromVisibleRect:toVisibleRect:';
    function automaticallyMirrorsInRightToLeftLayout: objcbool; message 'automaticallyMirrorsInRightToLeftLayout';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSScrubberFlowLayoutDelegateProtocol = objcprotocol external name 'NSScrubberFlowLayoutDelegate' (NSScrubberDelegateProtocol)
  optional
    function scrubber_layout_sizeForItemAtIndex (scrubber: NSScrubber; layout: NSScrubberFlowLayout; itemIndex: NSInteger): NSSize; message 'scrubber:layout:sizeForItemAtIndex:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSScrubberFlowLayout = objcclass external (NSScrubberLayout)
  public
    procedure setItemSpacing(newValue: CGFloat); message 'setItemSpacing:';
    function itemSpacing: CGFloat; message 'itemSpacing';
    procedure setItemSize(newValue: NSSize); message 'setItemSize:';
    function itemSize: NSSize; message 'itemSize';
    procedure invalidateLayoutForItemsAtIndexes (invalidItemIndexes: NSIndexSet); message 'invalidateLayoutForItemsAtIndexes:';
  end;

type
  NSScrubberProportionalLayout = objcclass external (NSScrubberLayout)
  public
    procedure setNumberOfVisibleItems(newValue: NSInteger); message 'setNumberOfVisibleItems:';
    function numberOfVisibleItems: NSInteger; message 'numberOfVisibleItems';
    function initWithNumberOfVisibleItems (numberOfVisibleItems_: NSInteger): id; message 'initWithNumberOfVisibleItems:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
  end;
{$endif}

