{ Parsed from AppKit.framework NSCollectionViewTransitionLayout.h }

{$ifdef TYPES}
type
  NSCollectionViewTransitionLayoutPtr = ^NSCollectionViewTransitionLayout;
{$endif}

{$ifdef TYPES}
type
  NSCollectionViewTransitionLayoutAnimatedKey = NSString;
  NSCollectionViewTransitionLayoutAnimatedKeyPtr = ^NSCollectionViewTransitionLayoutAnimatedKey;
{$endif}

{$ifdef CLASSES}

type
  NSCollectionViewTransitionLayout = objcclass external (NSCollectionViewLayout)
  public
    procedure setTransitionProgress(newValue: CGFloat); message 'setTransitionProgress:';
    function transitionProgress: CGFloat; message 'transitionProgress';
    function currentLayout: NSCollectionViewLayout; message 'currentLayout';
    function nextLayout: NSCollectionViewLayout; message 'nextLayout';
    function initWithCurrentLayout_nextLayout (currentLayout_: NSCollectionViewLayout; newLayout: NSCollectionViewLayout): id; message 'initWithCurrentLayout:nextLayout:';
    procedure updateValue_forAnimatedKey (value: CGFloat; key: NSCollectionViewTransitionLayoutAnimatedKey); message 'updateValue:forAnimatedKey:';
    function valueForAnimatedKey (key: NSCollectionViewTransitionLayoutAnimatedKey): CGFloat; message 'valueForAnimatedKey:';
  end;
{$endif}

