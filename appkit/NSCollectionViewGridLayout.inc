{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSCollectionViewGridLayout.h }

{$ifdef TYPES}
type
  NSCollectionViewGridLayoutPtr = ^NSCollectionViewGridLayout;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionViewGridLayout = objcclass external (NSCollectionViewLayout)
  public
    procedure setMargins(newValue: NSEdgeInsets); message 'setMargins:';
    function margins: NSEdgeInsets; message 'margins';
    procedure setMinimumInteritemSpacing(newValue: CGFloat); message 'setMinimumInteritemSpacing:';
    function minimumInteritemSpacing: CGFloat; message 'minimumInteritemSpacing';
    procedure setMinimumLineSpacing(newValue: CGFloat); message 'setMinimumLineSpacing:';
    function minimumLineSpacing: CGFloat; message 'minimumLineSpacing';
    procedure setMaximumNumberOfRows(newValue: NSUInteger); message 'setMaximumNumberOfRows:';
    function maximumNumberOfRows: NSUInteger; message 'maximumNumberOfRows';
    procedure setMaximumNumberOfColumns(newValue: NSUInteger); message 'setMaximumNumberOfColumns:';
    function maximumNumberOfColumns: NSUInteger; message 'maximumNumberOfColumns';
    procedure setMinimumItemSize(newValue: NSSize); message 'setMinimumItemSize:';
    function minimumItemSize: NSSize; message 'minimumItemSize';
    procedure setMaximumItemSize(newValue: NSSize); message 'setMaximumItemSize:';
    function maximumItemSize: NSSize; message 'maximumItemSize';
    procedure setBackgroundColors(newValue: NSArray); message 'setBackgroundColors:';
    function backgroundColors: NSArray; message 'backgroundColors';
  end;
{$endif}

