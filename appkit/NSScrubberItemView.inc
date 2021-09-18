{ Parsed from AppKit.framework NSScrubberItemView.h }

{$ifdef TYPES}
type
  NSScrubberArrangedViewPtr = ^NSScrubberArrangedView;
  NSScrubberSelectionViewPtr = ^NSScrubberSelectionView;
  NSScrubberItemViewPtr = ^NSScrubberItemView;
  NSScrubberTextItemViewPtr = ^NSScrubberTextItemView;
  NSScrubberImageItemViewPtr = ^NSScrubberImageItemView;
{$endif}

{$ifdef CLASSES}

type
  NSScrubberArrangedView = objcclass external (NSView)
  public
    procedure setSelected(newValue: objcbool); message 'setSelected:';
    function isSelected: objcbool; message 'isSelected';
    procedure setHighlighted(newValue: objcbool); message 'setHighlighted:';
    function isHighlighted: objcbool; message 'isHighlighted';
    procedure applyLayoutAttributes (layoutAttributes: NSScrubberLayoutAttributes); message 'applyLayoutAttributes:'; { NS_REQUIRES_SUPER }
  end;

type
  NSScrubberSelectionView = objcclass external (NSScrubberArrangedView)
  end;

type
  NSScrubberItemView = objcclass external (NSScrubberArrangedView)
  end;

type
  NSScrubberTextItemView = objcclass external (NSScrubberItemView)
  public
    function textField: NSTextField; message 'textField';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
  end;

type
  NSScrubberImageItemView = objcclass external (NSScrubberItemView)
  public
    function imageView: NSImageView; message 'imageView';
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setImageAlignment(newValue: NSImageAlignment); message 'setImageAlignment:';
    function imageAlignment: NSImageAlignment; message 'imageAlignment';
  end;
{$endif}

