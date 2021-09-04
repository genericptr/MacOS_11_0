{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSCollectionViewCompositionalLayout.h }

{$ifdef TYPES}
type
  NSCollectionViewCompositionalLayoutConfigurationPtr = ^NSCollectionViewCompositionalLayoutConfiguration;
  NSCollectionViewCompositionalLayoutPtr = ^NSCollectionViewCompositionalLayout;
  NSCollectionLayoutSectionPtr = ^NSCollectionLayoutSection;
  NSCollectionLayoutItemPtr = ^NSCollectionLayoutItem;
  NSCollectionLayoutGroupCustomItemPtr = ^NSCollectionLayoutGroupCustomItem;
  NSCollectionLayoutGroupPtr = ^NSCollectionLayoutGroup;
  NSCollectionLayoutDimensionPtr = ^NSCollectionLayoutDimension;
  NSCollectionLayoutSizePtr = ^NSCollectionLayoutSize;
  NSCollectionLayoutSpacingPtr = ^NSCollectionLayoutSpacing;
  NSCollectionLayoutEdgeSpacingPtr = ^NSCollectionLayoutEdgeSpacing;
  NSCollectionLayoutSupplementaryItemPtr = ^NSCollectionLayoutSupplementaryItem;
  NSCollectionLayoutBoundarySupplementaryItemPtr = ^NSCollectionLayoutBoundarySupplementaryItem;
  NSCollectionLayoutDecorationItemPtr = ^NSCollectionLayoutDecorationItem;
  NSCollectionLayoutAnchorPtr = ^NSCollectionLayoutAnchor;
  NSCollectionLayoutContainerProtocolPtr = ^NSCollectionLayoutContainerProtocol;
  NSCollectionLayoutEnvironmentProtocolPtr = ^NSCollectionLayoutEnvironmentProtocol;
  NSCollectionLayoutVisibleItemProtocolPtr = ^NSCollectionLayoutVisibleItemProtocol;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}

{$ifndef FOUNDATION_HAS_DIRECTIONAL_GEOMETRY}
{$ifdef TYPES}
type
  NSDirectionalRectEdge = NSUInteger;
  NSDirectionalRectEdgePtr = ^NSDirectionalRectEdge;

const
  NSDirectionalRectEdgeNone = 0;
  NSDirectionalRectEdgeTop = 1 shl 0;
  NSDirectionalRectEdgeLeading = 1 shl 1;
  NSDirectionalRectEdgeBottom = 1 shl 2;
  NSDirectionalRectEdgeTrailing = 1 shl 3;
  NSDirectionalRectEdgeAll = NSDirectionalRectEdgeTop + NSDirectionalRectEdgeLeading + NSDirectionalRectEdgeBottom + NSDirectionalRectEdgeTrailing;

type
  NSDirectionalEdgeInsets = record
    top: CGFloat;
    leading: CGFloat;
    bottom: CGFloat;
    trailing: CGFloat;
  end;
type
  NSDirectionalEdgeInsetsPtr = ^NSDirectionalEdgeInsets;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDirectionalEdgeInsetsZero: NSDirectionalEdgeInsets { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSRectAlignment = NSInteger;
  NSRectAlignmentPtr = ^NSRectAlignment;

const
  NSRectAlignmentNone = 0;
  NSRectAlignmentTop = 1;
  NSRectAlignmentTopLeading = 2;
  NSRectAlignmentLeading = 3;
  NSRectAlignmentBottomLeading = 4;
  NSRectAlignmentBottom = 5;
  NSRectAlignmentBottomTrailing = 6;
  NSRectAlignmentTrailing = 7;
  NSRectAlignmentTopTrailing = 8;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSCollectionViewCompositionalLayoutConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setScrollDirection(newValue: NSCollectionViewScrollDirection); message 'setScrollDirection:';
    function scrollDirection: NSCollectionViewScrollDirection; message 'scrollDirection';
    procedure setInterSectionSpacing(newValue: CGFloat); message 'setInterSectionSpacing:';
    function interSectionSpacing: CGFloat; message 'interSectionSpacing';
    procedure setBoundarySupplementaryItems(newValue: NSArray); message 'setBoundarySupplementaryItems:';
    function boundarySupplementaryItems: NSArray; message 'boundarySupplementaryItems';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSCollectionViewCompositionalLayoutSectionProvider = reference to function (section: NSInteger; param2: id): NSCollectionLayoutSection; cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionViewCompositionalLayout = objcclass external (NSCollectionViewLayout)
  public
    function initWithSection (section: NSCollectionLayoutSection): id; message 'initWithSection:';
    function initWithSection_configuration (section: NSCollectionLayoutSection; configuration: NSCollectionViewCompositionalLayoutConfiguration): id; message 'initWithSection:configuration:';
    function initWithSectionProvider (sectionProvider: NSCollectionViewCompositionalLayoutSectionProvider): id; message 'initWithSectionProvider:';
    function initWithSectionProvider_configuration (sectionProvider: NSCollectionViewCompositionalLayoutSectionProvider; configuration: NSCollectionViewCompositionalLayoutConfiguration): id; message 'initWithSectionProvider:configuration:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setConfiguration(newValue: NSCollectionViewCompositionalLayoutConfiguration); message 'setConfiguration:';
    function configuration: NSCollectionViewCompositionalLayoutConfiguration; message 'configuration';
  end;
{$endif}

{$ifdef TYPES}
type
  NSCollectionLayoutSectionOrthogonalScrollingBehavior = NSInteger;
  NSCollectionLayoutSectionOrthogonalScrollingBehaviorPtr = ^NSCollectionLayoutSectionOrthogonalScrollingBehavior;

const
  NSCollectionLayoutSectionOrthogonalScrollingBehaviorNone = 0;
  NSCollectionLayoutSectionOrthogonalScrollingBehaviorContinuous = 1;
  NSCollectionLayoutSectionOrthogonalScrollingBehaviorContinuousGroupLeadingBoundary = 2;
  NSCollectionLayoutSectionOrthogonalScrollingBehaviorPaging = 3;
  NSCollectionLayoutSectionOrthogonalScrollingBehaviorGroupPaging = 4;
  NSCollectionLayoutSectionOrthogonalScrollingBehaviorGroupPagingCentered = 5;

type
  NSCollectionLayoutSectionVisibleItemsInvalidationHandler = reference to procedure (visibleItems: NSArray; contentOffset: NSPoint; layoutEnvironment: id); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionLayoutSection = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function sectionWithGroup (group: NSCollectionLayoutGroup): id; message 'sectionWithGroup:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setContentInsets(newValue: NSDirectionalEdgeInsets); message 'setContentInsets:';
    function contentInsets: NSDirectionalEdgeInsets; message 'contentInsets';
    procedure setInterGroupSpacing(newValue: CGFloat); message 'setInterGroupSpacing:';
    function interGroupSpacing: CGFloat; message 'interGroupSpacing';
    procedure setOrthogonalScrollingBehavior(newValue: NSCollectionLayoutSectionOrthogonalScrollingBehavior); message 'setOrthogonalScrollingBehavior:';
    function orthogonalScrollingBehavior: NSCollectionLayoutSectionOrthogonalScrollingBehavior; message 'orthogonalScrollingBehavior';
    procedure setBoundarySupplementaryItems(newValue: NSArray); message 'setBoundarySupplementaryItems:';
    function boundarySupplementaryItems: NSArray; message 'boundarySupplementaryItems';
    procedure setSupplementariesFollowContentInsets(newValue: objcbool); message 'setSupplementariesFollowContentInsets:';
    function supplementariesFollowContentInsets: objcbool; message 'supplementariesFollowContentInsets';
    procedure setVisibleItemsInvalidationHandler(newValue: NSCollectionLayoutSectionVisibleItemsInvalidationHandler); message 'setVisibleItemsInvalidationHandler:';
    function visibleItemsInvalidationHandler: NSCollectionLayoutSectionVisibleItemsInvalidationHandler; message 'visibleItemsInvalidationHandler';
    procedure setDecorationItems(newValue: NSArray); message 'setDecorationItems:';
    function decorationItems: NSArray; message 'decorationItems';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSCollectionLayoutItem = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function itemWithLayoutSize (layoutSize: NSCollectionLayoutSize): id; message 'itemWithLayoutSize:';
    class function itemWithLayoutSize_supplementaryItems (layoutSize: NSCollectionLayoutSize; supplementaryItems: NSArray): id; message 'itemWithLayoutSize:supplementaryItems:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setContentInsets(newValue: NSDirectionalEdgeInsets); message 'setContentInsets:';
    function contentInsets: NSDirectionalEdgeInsets; message 'contentInsets';
    procedure setEdgeSpacing(newValue: NSCollectionLayoutEdgeSpacing); message 'setEdgeSpacing:';
    function edgeSpacing: NSCollectionLayoutEdgeSpacing; message 'edgeSpacing';
    function layoutSize: NSCollectionLayoutSize; message 'layoutSize';
    function supplementaryItems: NSArray; message 'supplementaryItems';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSCollectionLayoutGroupCustomItem = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function customItemWithFrame (frame: NSRect): id; message 'customItemWithFrame:';
    class function customItemWithFrame_zIndex (frame: NSRect; zIndex: NSInteger): id; message 'customItemWithFrame:zIndex:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function frame: NSRect; message 'frame';
    function zIndex: NSInteger; message 'zIndex';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSCollectionLayoutGroupCustomItemProvider = reference to function (layoutEnvironment: id): NSArray; cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionLayoutGroup = objcclass external (NSCollectionLayoutItem, NSCopyingProtocol)
  public
    class function horizontalGroupWithLayoutSize_subitem_count (layoutSize_: NSCollectionLayoutSize; subitem: NSCollectionLayoutItem; count: NSInteger): id; message 'horizontalGroupWithLayoutSize:subitem:count:';
    class function horizontalGroupWithLayoutSize_subitems (layoutSize_: NSCollectionLayoutSize; subitems: NSArray): id; message 'horizontalGroupWithLayoutSize:subitems:';
    class function verticalGroupWithLayoutSize_subitem_count (layoutSize_: NSCollectionLayoutSize; subitem: NSCollectionLayoutItem; count: NSInteger): id; message 'verticalGroupWithLayoutSize:subitem:count:';
    class function verticalGroupWithLayoutSize_subitems (layoutSize_: NSCollectionLayoutSize; subitems: NSArray): id; message 'verticalGroupWithLayoutSize:subitems:';
    class function customGroupWithLayoutSize_itemProvider (layoutSize_: NSCollectionLayoutSize; itemProvider: NSCollectionLayoutGroupCustomItemProvider): id; message 'customGroupWithLayoutSize:itemProvider:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setSupplementaryItems(newValue: NSArray); message 'setSupplementaryItems:';
    function supplementaryItems: NSArray; message 'supplementaryItems';
    procedure setInterItemSpacing(newValue: NSCollectionLayoutSpacing); message 'setInterItemSpacing:';
    function interItemSpacing: NSCollectionLayoutSpacing; message 'interItemSpacing';
    function subitems: NSArray; message 'subitems';
    function visualDescription: NSString; message 'visualDescription';
  end;

type
  NSCollectionLayoutDimension = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function fractionalWidthDimension (fractionalWidth: CGFloat): id; message 'fractionalWidthDimension:';
    class function fractionalHeightDimension (fractionalHeight: CGFloat): id; message 'fractionalHeightDimension:';
    class function absoluteDimension (absoluteDimension: CGFloat): id; message 'absoluteDimension:';
    class function estimatedDimension (estimatedDimension: CGFloat): id; message 'estimatedDimension:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function isFractionalWidth: objcbool; message 'isFractionalWidth';
    function isFractionalHeight: objcbool; message 'isFractionalHeight';
    function isAbsolute: objcbool; message 'isAbsolute';
    function isEstimated: objcbool; message 'isEstimated';
    function dimension: CGFloat; message 'dimension';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSCollectionLayoutSize = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function sizeWithWidthDimension_heightDimension (width: NSCollectionLayoutDimension; height: NSCollectionLayoutDimension): id; message 'sizeWithWidthDimension:heightDimension:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function widthDimension: NSCollectionLayoutDimension; message 'widthDimension';
    function heightDimension: NSCollectionLayoutDimension; message 'heightDimension';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSCollectionLayoutSpacing = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function flexibleSpacing (flexibleSpacing: CGFloat): id; message 'flexibleSpacing:';
    class function fixedSpacing (fixedSpacing: CGFloat): id; message 'fixedSpacing:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function spacing: CGFloat; message 'spacing';
    function isFlexibleSpacing: objcbool; message 'isFlexibleSpacing';
    function isFixedSpacing: objcbool; message 'isFixedSpacing';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSCollectionLayoutEdgeSpacing = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function spacingForLeading_top_trailing_bottom (leading: NSCollectionLayoutSpacing; top: NSCollectionLayoutSpacing; trailing: NSCollectionLayoutSpacing; bottom: NSCollectionLayoutSpacing): id; message 'spacingForLeading:top:trailing:bottom:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function leading: NSCollectionLayoutSpacing; message 'leading';
    function top: NSCollectionLayoutSpacing; message 'top';
    function trailing: NSCollectionLayoutSpacing; message 'trailing';
    function bottom: NSCollectionLayoutSpacing; message 'bottom';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSCollectionLayoutSupplementaryItem = objcclass external (NSCollectionLayoutItem, NSCopyingProtocol)
  public
    class function supplementaryItemWithLayoutSize_elementKind_containerAnchor (layoutSize_: NSCollectionLayoutSize; elementKind: NSString; containerAnchor: NSCollectionLayoutAnchor): id; message 'supplementaryItemWithLayoutSize:elementKind:containerAnchor:';
    class function supplementaryItemWithLayoutSize_elementKind_containerAnchor_itemAnchor (layoutSize_: NSCollectionLayoutSize; elementKind: NSString; containerAnchor: NSCollectionLayoutAnchor; itemAnchor: NSCollectionLayoutAnchor): id; message 'supplementaryItemWithLayoutSize:elementKind:containerAnchor:itemAnchor:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setZIndex(newValue: NSInteger); message 'setZIndex:';
    function zIndex: NSInteger; message 'zIndex';
    function elementKind: NSString; message 'elementKind';
    function containerAnchor: NSCollectionLayoutAnchor; message 'containerAnchor';
    function itemAnchor: NSCollectionLayoutAnchor; message 'itemAnchor';
  end;

type
  NSCollectionLayoutBoundarySupplementaryItem = objcclass external (NSCollectionLayoutSupplementaryItem, NSCopyingProtocol)
  public
    class function boundarySupplementaryItemWithLayoutSize_elementKind_alignment (layoutSize_: NSCollectionLayoutSize; elementKind_: NSString; alignment: NSRectAlignment): id; message 'boundarySupplementaryItemWithLayoutSize:elementKind:alignment:';
    class function boundarySupplementaryItemWithLayoutSize_elementKind_alignment_absoluteOffset (layoutSize_: NSCollectionLayoutSize; elementKind_: NSString; alignment: NSRectAlignment; absoluteOffset: NSPoint): id; message 'boundarySupplementaryItemWithLayoutSize:elementKind:alignment:absoluteOffset:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setExtendsBoundary(newValue: objcbool); message 'setExtendsBoundary:';
    function extendsBoundary: objcbool; message 'extendsBoundary';
    procedure setPinToVisibleBounds(newValue: objcbool); message 'setPinToVisibleBounds:';
    function pinToVisibleBounds: objcbool; message 'pinToVisibleBounds';
    function alignment: NSRectAlignment; message 'alignment';
    function offset: NSPoint; message 'offset';
  end;

type
  NSCollectionLayoutDecorationItem = objcclass external (NSCollectionLayoutItem, NSCopyingProtocol)
  public
    class function backgroundDecorationItemWithElementKind (elementKind: NSString): id; message 'backgroundDecorationItemWithElementKind:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure setZIndex(newValue: NSInteger); message 'setZIndex:';
    function zIndex: NSInteger; message 'zIndex';
    function elementKind: NSString; message 'elementKind';
  end;

type
  NSCollectionLayoutAnchor = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function layoutAnchorWithEdges (edges: NSDirectionalRectEdge): id; message 'layoutAnchorWithEdges:';
    class function layoutAnchorWithEdges_absoluteOffset (edges: NSDirectionalRectEdge; absoluteOffset: NSPoint): id; message 'layoutAnchorWithEdges:absoluteOffset:';
    class function layoutAnchorWithEdges_fractionalOffset (edges: NSDirectionalRectEdge; fractionalOffset: NSPoint): id; message 'layoutAnchorWithEdges:fractionalOffset:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function edges: NSDirectionalRectEdge; message 'edges';
    function offset: NSPoint; message 'offset';
    function isAbsoluteOffset: objcbool; message 'isAbsoluteOffset';
    function isFractionalOffset: objcbool; message 'isFractionalOffset';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSCollectionLayoutContainerProtocol = objcprotocol external name 'NSCollectionLayoutContainer' (NSObjectProtocol)
    function contentSize: NSSize; message 'contentSize';
    function effectiveContentSize: NSSize; message 'effectiveContentSize';
    function contentInsets: NSDirectionalEdgeInsets; message 'contentInsets';
    function effectiveContentInsets: NSDirectionalEdgeInsets; message 'effectiveContentInsets';
  end;

type
  NSCollectionLayoutEnvironmentProtocol = objcprotocol external name 'NSCollectionLayoutEnvironment' (NSObjectProtocol)
    function container: id; message 'container';
  end;

type
  NSCollectionLayoutVisibleItemProtocol = objcprotocol external name 'NSCollectionLayoutVisibleItem' (NSObjectProtocol)
    procedure setAlpha(newValue: CGFloat); message 'setAlpha:';
    function alpha: CGFloat; message 'alpha';
    procedure setZIndex(newValue: NSInteger); message 'setZIndex:';
    function zIndex: NSInteger; message 'zIndex';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function isHidden: objcbool; message 'isHidden';
    procedure setCenter(newValue: NSPoint); message 'setCenter:';
    function center: NSPoint; message 'center';
    function name: NSString; message 'name';
    function indexPath: NSIndexPath; message 'indexPath';
    function frame: NSRect; message 'frame';
    function bounds: NSRect; message 'bounds';
    function representedElementCategory: NSCollectionElementCategory; message 'representedElementCategory';
    function representedElementKind: NSString; message 'representedElementKind';
  end;
{$endif}

{$endif}
