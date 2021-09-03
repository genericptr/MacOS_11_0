{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSCollectionViewLayout.h }

{$ifdef TYPES}
type
  NSCollectionViewLayoutAttributesPtr = ^NSCollectionViewLayoutAttributes;
  NSCollectionViewUpdateItemPtr = ^NSCollectionViewUpdateItem;
  NSCollectionViewLayoutInvalidationContextPtr = ^NSCollectionViewLayoutInvalidationContext;
  NSCollectionViewLayoutPtr = ^NSCollectionViewLayout;
{$endif}

{$ifdef TYPES}
type
  NSCollectionElementCategory = NSInteger;
  NSCollectionElementCategoryPtr = ^NSCollectionElementCategory;

const
  NSCollectionElementCategoryItem = 0;
  NSCollectionElementCategorySupplementaryView = 1;
  NSCollectionElementCategoryDecorationView = 2;
  NSCollectionElementCategoryInterItemGap = 3;

type
  NSCollectionViewDecorationElementKind = NSString;
  NSCollectionViewDecorationElementKindPtr = ^NSCollectionViewDecorationElementKind;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCollectionElementKindInterItemGapIndicator: NSCollectionViewSupplementaryElementKind { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionViewLayoutAttributes = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setFrame(newValue: NSRect); message 'setFrame:';
    function frame: NSRect; message 'frame';
    procedure setSize(newValue: NSSize); message 'setSize:';
    function size: NSSize; message 'size';
    procedure setAlpha(newValue: CGFloat); message 'setAlpha:';
    function alpha: CGFloat; message 'alpha';
    procedure setZIndex(newValue: NSInteger); message 'setZIndex:';
    function zIndex: NSInteger; message 'zIndex';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function isHidden: objcbool; message 'isHidden';
    procedure setIndexPath(newValue: NSIndexPath); message 'setIndexPath:';
    function indexPath: NSIndexPath; message 'indexPath';
    function representedElementCategory: NSCollectionElementCategory; message 'representedElementCategory';
    function representedElementKind: NSString; message 'representedElementKind';
    class function layoutAttributesForItemWithIndexPath (indexPath_: NSIndexPath): id; message 'layoutAttributesForItemWithIndexPath:';
    class function layoutAttributesForInterItemGapBeforeIndexPath (indexPath_: NSIndexPath): id; message 'layoutAttributesForInterItemGapBeforeIndexPath:';
    class function layoutAttributesForSupplementaryViewOfKind_withIndexPath (elementKind: NSCollectionViewSupplementaryElementKind; indexPath_: NSIndexPath): id; message 'layoutAttributesForSupplementaryViewOfKind:withIndexPath:';
    class function layoutAttributesForDecorationViewOfKind_withIndexPath (decorationViewKind: NSCollectionViewDecorationElementKind; indexPath_: NSIndexPath): id; message 'layoutAttributesForDecorationViewOfKind:withIndexPath:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSCollectionUpdateAction = NSInteger;
  NSCollectionUpdateActionPtr = ^NSCollectionUpdateAction;

const
  NSCollectionUpdateActionInsert = 0;
  NSCollectionUpdateActionDelete = 1;
  NSCollectionUpdateActionReload = 2;
  NSCollectionUpdateActionMove = 3;
  NSCollectionUpdateActionNone = 4;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionViewUpdateItem = objcclass external (NSObject)
  public
    function indexPathBeforeUpdate: NSIndexPath; message 'indexPathBeforeUpdate';
    function indexPathAfterUpdate: NSIndexPath; message 'indexPathAfterUpdate';
    function updateAction: NSCollectionUpdateAction; message 'updateAction';
  end;

type
  NSCollectionViewLayoutInvalidationContext = objcclass external (NSObject)
  public
    function invalidateEverything: objcbool; message 'invalidateEverything';
    function invalidateDataSourceCounts: objcbool; message 'invalidateDataSourceCounts';
    procedure invalidateItemsAtIndexPaths (indexPaths: NSSet); message 'invalidateItemsAtIndexPaths:';
    procedure invalidateSupplementaryElementsOfKind_atIndexPaths (elementKind: NSCollectionViewSupplementaryElementKind; indexPaths: NSSet); message 'invalidateSupplementaryElementsOfKind:atIndexPaths:';
    procedure invalidateDecorationElementsOfKind_atIndexPaths (elementKind: NSCollectionViewDecorationElementKind; indexPaths: NSSet); message 'invalidateDecorationElementsOfKind:atIndexPaths:';
    function invalidatedItemIndexPaths: NSSet; message 'invalidatedItemIndexPaths';
    function invalidatedSupplementaryIndexPaths: NSDictionary; message 'invalidatedSupplementaryIndexPaths';
    function invalidatedDecorationIndexPaths: NSDictionary; message 'invalidatedDecorationIndexPaths';
    procedure setContentOffsetAdjustment(newValue: NSPoint); message 'setContentOffsetAdjustment:';
    function contentOffsetAdjustment: NSPoint; message 'contentOffsetAdjustment';
    procedure setContentSizeAdjustment(newValue: NSSize); message 'setContentSizeAdjustment:';
    function contentSizeAdjustment: NSSize; message 'contentSizeAdjustment';
  end;

type
  NSCollectionViewLayout = objcclass external (NSObject, NSCodingProtocol)
  public
    function collectionView: NSCollectionView; message 'collectionView';
    procedure invalidateLayout; message 'invalidateLayout';
    procedure invalidateLayoutWithContext (context: NSCollectionViewLayoutInvalidationContext); message 'invalidateLayoutWithContext:';
    procedure registerClass_forDecorationViewOfKind (viewClass: pobjc_class; elementKind: NSCollectionViewDecorationElementKind); message 'registerClass:forDecorationViewOfKind:';
    procedure registerNib_forDecorationViewOfKind (nib: NSNib; elementKind: NSCollectionViewDecorationElementKind); message 'registerNib:forDecorationViewOfKind:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;


type
  NSSubclassingHooks = objccategory external (NSCollectionViewLayout)
    class function layoutAttributesClass: pobjc_class; message 'layoutAttributesClass';
    class function invalidationContextClass: pobjc_class; message 'invalidationContextClass';
    procedure prepareLayout; message 'prepareLayout';
    function layoutAttributesForElementsInRect (rect: NSRect): NSArray; message 'layoutAttributesForElementsInRect:';
    function layoutAttributesForItemAtIndexPath (indexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'layoutAttributesForItemAtIndexPath:';
    function layoutAttributesForSupplementaryViewOfKind_atIndexPath (elementKind: NSCollectionViewSupplementaryElementKind; indexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'layoutAttributesForSupplementaryViewOfKind:atIndexPath:';
    function layoutAttributesForDecorationViewOfKind_atIndexPath (elementKind: NSCollectionViewDecorationElementKind; indexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'layoutAttributesForDecorationViewOfKind:atIndexPath:';
    function layoutAttributesForDropTargetAtPoint (pointInCollectionView: NSPoint): NSCollectionViewLayoutAttributes; message 'layoutAttributesForDropTargetAtPoint:';
    function layoutAttributesForInterItemGapBeforeIndexPath (indexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'layoutAttributesForInterItemGapBeforeIndexPath:';
    function shouldInvalidateLayoutForBoundsChange (newBounds: NSRect): objcbool; message 'shouldInvalidateLayoutForBoundsChange:';
    function invalidationContextForBoundsChange (newBounds: NSRect): NSCollectionViewLayoutInvalidationContext; message 'invalidationContextForBoundsChange:';
    function shouldInvalidateLayoutForPreferredLayoutAttributes_withOriginalAttributes (preferredAttributes: NSCollectionViewLayoutAttributes; originalAttributes: NSCollectionViewLayoutAttributes): objcbool; message 'shouldInvalidateLayoutForPreferredLayoutAttributes:withOriginalAttributes:';
    function invalidationContextForPreferredLayoutAttributes_withOriginalAttributes (preferredAttributes: NSCollectionViewLayoutAttributes; originalAttributes: NSCollectionViewLayoutAttributes): NSCollectionViewLayoutInvalidationContext; message 'invalidationContextForPreferredLayoutAttributes:withOriginalAttributes:';
    function targetContentOffsetForProposedContentOffset_withScrollingVelocity (proposedContentOffset: NSPoint; velocity: NSPoint): NSPoint; message 'targetContentOffsetForProposedContentOffset:withScrollingVelocity:';
    function targetContentOffsetForProposedContentOffset (proposedContentOffset: NSPoint): NSPoint; message 'targetContentOffsetForProposedContentOffset:';
    function collectionViewContentSize: NSSize; message 'collectionViewContentSize';
  end;

type
  NSUpdateSupportHooks = objccategory external (NSCollectionViewLayout)
    procedure prepareForCollectionViewUpdates (updateItems: NSArray); message 'prepareForCollectionViewUpdates:';
    procedure finalizeCollectionViewUpdates; message 'finalizeCollectionViewUpdates';
    procedure prepareForAnimatedBoundsChange (oldBounds: NSRect); message 'prepareForAnimatedBoundsChange:';
    procedure finalizeAnimatedBoundsChange; message 'finalizeAnimatedBoundsChange';
    procedure prepareForTransitionToLayout (newLayout: NSCollectionViewLayout); message 'prepareForTransitionToLayout:';
    procedure prepareForTransitionFromLayout (oldLayout: NSCollectionViewLayout); message 'prepareForTransitionFromLayout:';
    procedure finalizeLayoutTransition; message 'finalizeLayoutTransition';
    function initialLayoutAttributesForAppearingItemAtIndexPath (itemIndexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'initialLayoutAttributesForAppearingItemAtIndexPath:';
    function finalLayoutAttributesForDisappearingItemAtIndexPath (itemIndexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'finalLayoutAttributesForDisappearingItemAtIndexPath:';
    function initialLayoutAttributesForAppearingSupplementaryElementOfKind_atIndexPath (elementKind: NSCollectionViewSupplementaryElementKind; elementIndexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'initialLayoutAttributesForAppearingSupplementaryElementOfKind:atIndexPath:';
    function finalLayoutAttributesForDisappearingSupplementaryElementOfKind_atIndexPath (elementKind: NSCollectionViewSupplementaryElementKind; elementIndexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'finalLayoutAttributesForDisappearingSupplementaryElementOfKind:atIndexPath:';
    function initialLayoutAttributesForAppearingDecorationElementOfKind_atIndexPath (elementKind: NSCollectionViewDecorationElementKind; decorationIndexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'initialLayoutAttributesForAppearingDecorationElementOfKind:atIndexPath:';
    function finalLayoutAttributesForDisappearingDecorationElementOfKind_atIndexPath (elementKind: NSCollectionViewDecorationElementKind; decorationIndexPath: NSIndexPath): NSCollectionViewLayoutAttributes; message 'finalLayoutAttributesForDisappearingDecorationElementOfKind:atIndexPath:';
    function indexPathsToDeleteForSupplementaryViewOfKind (elementKind: NSCollectionViewSupplementaryElementKind): NSSet; message 'indexPathsToDeleteForSupplementaryViewOfKind:';
    function indexPathsToDeleteForDecorationViewOfKind (elementKind: NSCollectionViewDecorationElementKind): NSSet; message 'indexPathsToDeleteForDecorationViewOfKind:';
    function indexPathsToInsertForSupplementaryViewOfKind (elementKind: NSCollectionViewSupplementaryElementKind): NSSet; message 'indexPathsToInsertForSupplementaryViewOfKind:';
    function indexPathsToInsertForDecorationViewOfKind (elementKind: NSCollectionViewDecorationElementKind): NSSet; message 'indexPathsToInsertForDecorationViewOfKind:';
  end;
{$endif}

