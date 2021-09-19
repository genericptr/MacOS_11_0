{ Parsed from AppKit.framework NSCollectionViewFlowLayout.h }

{$ifdef TYPES}
type
  NSCollectionViewFlowLayoutInvalidationContextPtr = ^NSCollectionViewFlowLayoutInvalidationContext;
  NSCollectionViewFlowLayoutPtr = ^NSCollectionViewFlowLayout;
  NSCollectionViewDelegateFlowLayoutProtocolPtr = ^NSCollectionViewDelegateFlowLayoutProtocol;
{$endif}

{$ifdef TYPES}
type
  NSCollectionViewScrollDirection = NSInteger;
  NSCollectionViewScrollDirectionPtr = ^NSCollectionViewScrollDirection;

const
  NSCollectionViewScrollDirectionVertical = 0;
  NSCollectionViewScrollDirectionHorizontal = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCollectionElementKindSectionHeader: NSCollectionViewSupplementaryElementKind { available in macos 10.11 }; cvar; external;
  NSCollectionElementKindSectionFooter: NSCollectionViewSupplementaryElementKind { available in macos 10.11 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionViewFlowLayoutInvalidationContext = objcclass external (NSCollectionViewLayoutInvalidationContext)
  public
    procedure setInvalidateFlowLayoutDelegateMetrics(newValue: objcbool); message 'setInvalidateFlowLayoutDelegateMetrics:';
    function invalidateFlowLayoutDelegateMetrics: objcbool; message 'invalidateFlowLayoutDelegateMetrics';
    procedure setInvalidateFlowLayoutAttributes(newValue: objcbool); message 'setInvalidateFlowLayoutAttributes:';
    function invalidateFlowLayoutAttributes: objcbool; message 'invalidateFlowLayoutAttributes';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSCollectionViewDelegateFlowLayoutProtocol = objcprotocol external name 'NSCollectionViewDelegateFlowLayout' (NSCollectionViewDelegateProtocol)
  optional
    function collectionView_layout_sizeForItemAtIndexPath (collectionView: NSCollectionView; collectionViewLayout: NSCollectionViewLayout; indexPath: NSIndexPath): NSSize; message 'collectionView:layout:sizeForItemAtIndexPath:';
    function collectionView_layout_insetForSectionAtIndex (collectionView: NSCollectionView; collectionViewLayout: NSCollectionViewLayout; section: NSInteger): NSEdgeInsets; message 'collectionView:layout:insetForSectionAtIndex:';
    function collectionView_layout_minimumLineSpacingForSectionAtIndex (collectionView: NSCollectionView; collectionViewLayout: NSCollectionViewLayout; section: NSInteger): CGFloat; message 'collectionView:layout:minimumLineSpacingForSectionAtIndex:';
    function collectionView_layout_minimumInteritemSpacingForSectionAtIndex (collectionView: NSCollectionView; collectionViewLayout: NSCollectionViewLayout; section: NSInteger): CGFloat; message 'collectionView:layout:minimumInteritemSpacingForSectionAtIndex:';
    function collectionView_layout_referenceSizeForHeaderInSection (collectionView: NSCollectionView; collectionViewLayout: NSCollectionViewLayout; section: NSInteger): NSSize; message 'collectionView:layout:referenceSizeForHeaderInSection:';
    function collectionView_layout_referenceSizeForFooterInSection (collectionView: NSCollectionView; collectionViewLayout: NSCollectionViewLayout; section: NSInteger): NSSize; message 'collectionView:layout:referenceSizeForFooterInSection:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionViewFlowLayout = objcclass external (NSCollectionViewLayout)
  public
    procedure setMinimumLineSpacing(newValue: CGFloat); message 'setMinimumLineSpacing:';
    function minimumLineSpacing: CGFloat; message 'minimumLineSpacing';
    procedure setMinimumInteritemSpacing(newValue: CGFloat); message 'setMinimumInteritemSpacing:';
    function minimumInteritemSpacing: CGFloat; message 'minimumInteritemSpacing';
    procedure setItemSize(newValue: NSSize); message 'setItemSize:';
    function itemSize: NSSize; message 'itemSize';
    procedure setEstimatedItemSize(newValue: NSSize); message 'setEstimatedItemSize:';
    function estimatedItemSize: NSSize; message 'estimatedItemSize';
    procedure setScrollDirection(newValue: NSCollectionViewScrollDirection); message 'setScrollDirection:';
    function scrollDirection: NSCollectionViewScrollDirection; message 'scrollDirection';
    procedure setHeaderReferenceSize(newValue: NSSize); message 'setHeaderReferenceSize:';
    function headerReferenceSize: NSSize; message 'headerReferenceSize';
    procedure setFooterReferenceSize(newValue: NSSize); message 'setFooterReferenceSize:';
    function footerReferenceSize: NSSize; message 'footerReferenceSize';
    procedure setSectionInset(newValue: NSEdgeInsets); message 'setSectionInset:';
    function sectionInset: NSEdgeInsets; message 'sectionInset';
    procedure setSectionHeadersPinToVisibleBounds(newValue: objcbool); message 'setSectionHeadersPinToVisibleBounds:'; { available in macos 10.12 }
    function sectionHeadersPinToVisibleBounds: objcbool; message 'sectionHeadersPinToVisibleBounds'; { available in macos 10.12 }
    procedure setSectionFootersPinToVisibleBounds(newValue: objcbool); message 'setSectionFootersPinToVisibleBounds:'; { available in macos 10.12 }
    function sectionFootersPinToVisibleBounds: objcbool; message 'sectionFootersPinToVisibleBounds'; { available in macos 10.12 }
    function sectionAtIndexIsCollapsed (sectionIndex: NSUInteger): objcbool; message 'sectionAtIndexIsCollapsed:'; { available in macos 10.12 }
    procedure collapseSectionAtIndex (sectionIndex: NSUInteger); message 'collapseSectionAtIndex:'; { available in macos 10.12 }
    procedure expandSectionAtIndex (sectionIndex: NSUInteger); message 'expandSectionAtIndex:'; { available in macos 10.12 }
  end;
{$endif}

