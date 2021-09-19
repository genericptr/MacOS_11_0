{ Parsed from AppKit.framework NSDiffableDataSource.h }

{ Types from NSCollectionViewDiffableDataSource }
{$ifdef TYPES}

type
  NSCollectionViewDiffableDataSourceItemProvider = reference to function (param1: NSCollectionView; param2: NSIndexPath; param3: id): NSCollectionViewItem; cblock; cdecl;

type
  NSCollectionViewDiffableDataSourceSupplementaryViewProvider = reference to function (param1: NSCollectionView; param2: NSString; param3: NSIndexPath): NSView; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSDiffableDataSourceSnapshotPtr = ^NSDiffableDataSourceSnapshot;
  NSCollectionViewDiffableDataSourcePtr = ^NSCollectionViewDiffableDataSource;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSDiffableDataSourceSnapshot = objcclass external (NSObject, NSCopyingProtocol)
  public
    function numberOfItems: NSInteger; message 'numberOfItems';
    function numberOfSections: NSInteger; message 'numberOfSections';
    function sectionIdentifiers: NSArray; message 'sectionIdentifiers';
    function itemIdentifiers: NSArray; message 'itemIdentifiers';
    function numberOfItemsInSection (sectionIdentifier: id): NSInteger; message 'numberOfItemsInSection:';
    function itemIdentifiersInSectionWithIdentifier (sectionIdentifier: id): NSArray; message 'itemIdentifiersInSectionWithIdentifier:';
    function sectionIdentifierForSectionContainingItemIdentifier (itemIdentifier: id): id; message 'sectionIdentifierForSectionContainingItemIdentifier:';
    function indexOfItemIdentifier (itemIdentifier: id): NSInteger; message 'indexOfItemIdentifier:';
    function indexOfSectionIdentifier (sectionIdentifier: id): NSInteger; message 'indexOfSectionIdentifier:';
    procedure appendItemsWithIdentifiers (identifiers: NSArray); message 'appendItemsWithIdentifiers:';
    procedure appendItemsWithIdentifiers_intoSectionWithIdentifier (identifiers: NSArray; sectionIdentifier: id); message 'appendItemsWithIdentifiers:intoSectionWithIdentifier:';
    procedure insertItemsWithIdentifiers_beforeItemWithIdentifier (identifiers: NSArray; itemIdentifier: id); message 'insertItemsWithIdentifiers:beforeItemWithIdentifier:';
    procedure insertItemsWithIdentifiers_afterItemWithIdentifier (identifiers: NSArray; itemIdentifier: id); message 'insertItemsWithIdentifiers:afterItemWithIdentifier:';
    procedure deleteItemsWithIdentifiers (identifiers: NSArray); message 'deleteItemsWithIdentifiers:';
    procedure deleteAllItems; message 'deleteAllItems';
    procedure moveItemWithIdentifier_beforeItemWithIdentifier (fromIdentifier: id; toIdentifier: id); message 'moveItemWithIdentifier:beforeItemWithIdentifier:';
    procedure moveItemWithIdentifier_afterItemWithIdentifier (fromIdentifier: id; toIdentifier: id); message 'moveItemWithIdentifier:afterItemWithIdentifier:';
    procedure reloadItemsWithIdentifiers (identifiers: NSArray); message 'reloadItemsWithIdentifiers:';
    procedure appendSectionsWithIdentifiers (sectionIdentifiers_: NSArray); message 'appendSectionsWithIdentifiers:';
    procedure insertSectionsWithIdentifiers_beforeSectionWithIdentifier (sectionIdentifiers_: NSArray; toSectionIdentifier: id); message 'insertSectionsWithIdentifiers:beforeSectionWithIdentifier:';
    procedure insertSectionsWithIdentifiers_afterSectionWithIdentifier (sectionIdentifiers_: NSArray; toSectionIdentifier: id); message 'insertSectionsWithIdentifiers:afterSectionWithIdentifier:';
    procedure deleteSectionsWithIdentifiers (sectionIdentifiers_: NSArray); message 'deleteSectionsWithIdentifiers:';
    procedure moveSectionWithIdentifier_beforeSectionWithIdentifier (fromSectionIdentifier: id; toSectionIdentifier: id); message 'moveSectionWithIdentifier:beforeSectionWithIdentifier:';
    procedure moveSectionWithIdentifier_afterSectionWithIdentifier (fromSectionIdentifier: id; toSectionIdentifier: id); message 'moveSectionWithIdentifier:afterSectionWithIdentifier:';
    procedure reloadSectionsWithIdentifiers (sectionIdentifiers_: NSArray); message 'reloadSectionsWithIdentifiers:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSCollectionViewDiffableDataSource = objcclass external (NSObject, NSCollectionViewDataSourceProtocol)
  public
    function initWithCollectionView_itemProvider (collectionView: NSCollectionView; itemProvider: NSCollectionViewDiffableDataSourceItemProvider): id; message 'initWithCollectionView:itemProvider:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    function snapshot: NSDiffableDataSourceSnapshot; message 'snapshot';
    procedure applySnapshot_animatingDifferences (snapshot_: NSDiffableDataSourceSnapshot; animatingDifferences: objcbool); message 'applySnapshot:animatingDifferences:';
    function itemIdentifierForIndexPath (indexPath: NSIndexPath): id; message 'itemIdentifierForIndexPath:';
    function indexPathForItemIdentifier (identifier: id): NSIndexPath; message 'indexPathForItemIdentifier:';
    procedure setSupplementaryViewProvider(newValue: NSCollectionViewDiffableDataSourceSupplementaryViewProvider); message 'setSupplementaryViewProvider:';
    function supplementaryViewProvider: NSCollectionViewDiffableDataSourceSupplementaryViewProvider; message 'supplementaryViewProvider';

    { Adopted protocols }
    function collectionView_itemForRepresentedObjectAtIndexPath (collectionView: NSCollectionView; indexPath: NSIndexPath): NSCollectionViewItem; message 'collectionView:itemForRepresentedObjectAtIndexPath:'; { available in macos 10.11 }
    function collectionView_numberOfItemsInSection (collectionView: NSCollectionView; section: NSInteger): NSInteger; message 'collectionView:numberOfItemsInSection:'; { available in macos 10.11 }
    function collectionView_viewForSupplementaryElementOfKind_atIndexPath (collectionView: NSCollectionView; kind: NSCollectionViewSupplementaryElementKind; indexPath: NSIndexPath): NSView; message 'collectionView:viewForSupplementaryElementOfKind:atIndexPath:';
    function numberOfSectionsInCollectionView (collectionView: NSCollectionView): NSInteger; message 'numberOfSectionsInCollectionView:'; { available in macos 10.11 }
  end;
{$endif}

{$endif}
