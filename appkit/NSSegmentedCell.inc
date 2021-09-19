{ Parsed from AppKit.framework NSSegmentedCell.h }

{$ifdef TYPES}
type
  NSSegmentedCellPtr = ^NSSegmentedCell;
{$endif}

{$ifdef CLASSES}

type
  NSSegmentedCell = objcclass external (NSActionCell)
  public
    procedure setSegmentCount(newValue: NSInteger); message 'setSegmentCount:';
    function segmentCount: NSInteger; message 'segmentCount';
    procedure setSelectedSegment(newValue: NSInteger); message 'setSelectedSegment:';
    function selectedSegment: NSInteger; message 'selectedSegment';
    function selectSegmentWithTag (tag_: NSInteger): objcbool; message 'selectSegmentWithTag:';
    procedure makeNextSegmentKey; message 'makeNextSegmentKey';
    procedure makePreviousSegmentKey; message 'makePreviousSegmentKey';
    procedure setTrackingMode(newValue: NSSegmentSwitchTracking); message 'setTrackingMode:';
    function trackingMode: NSSegmentSwitchTracking; message 'trackingMode';
    procedure setWidth_forSegment (width: CGFloat; segment: NSInteger); message 'setWidth:forSegment:';
    function widthForSegment (segment: NSInteger): CGFloat; message 'widthForSegment:';
    procedure setImage_forSegment (image_: NSImage; segment: NSInteger); message 'setImage:forSegment:';
    function imageForSegment (segment: NSInteger): NSImage; message 'imageForSegment:';
    procedure setImageScaling_forSegment (scaling: NSImageScaling; segment: NSInteger); message 'setImageScaling:forSegment:'; { available in macos 10.5 }
    function imageScalingForSegment (segment: NSInteger): NSImageScaling; message 'imageScalingForSegment:'; { available in macos 10.5 }
    procedure setLabel_forSegment (label_: NSString; segment: NSInteger); message 'setLabel:forSegment:';
    function labelForSegment (segment: NSInteger): NSString; message 'labelForSegment:';
    procedure setSelected_forSegment (selected: objcbool; segment: NSInteger); message 'setSelected:forSegment:';
    function isSelectedForSegment (segment: NSInteger): objcbool; message 'isSelectedForSegment:';
    procedure setEnabled_forSegment (enabled: objcbool; segment: NSInteger); message 'setEnabled:forSegment:';
    function isEnabledForSegment (segment: NSInteger): objcbool; message 'isEnabledForSegment:';
    procedure setMenu_forSegment (menu_: NSMenu; segment: NSInteger); message 'setMenu:forSegment:';
    function menuForSegment (segment: NSInteger): NSMenu; message 'menuForSegment:';
    procedure setToolTip_forSegment (toolTip: NSString; segment: NSInteger); message 'setToolTip:forSegment:';
    function toolTipForSegment (segment: NSInteger): NSString; message 'toolTipForSegment:';
    procedure setTag_forSegment (tag_: NSInteger; segment: NSInteger); message 'setTag:forSegment:';
    function tagForSegment (segment: NSInteger): NSInteger; message 'tagForSegment:';
    procedure setSegmentStyle(newValue: NSSegmentStyle); message 'setSegmentStyle:'; { available in macos 10.5 }
    function segmentStyle: NSSegmentStyle; message 'segmentStyle'; { available in macos 10.5 }
    procedure drawSegment_inFrame_withView (segment: NSInteger; frame: NSRect; controlView_: NSView); message 'drawSegment:inFrame:withView:';
  end;


type
  NSSegmentBackgroundStyle = objccategory external (NSSegmentedCell)
    function interiorBackgroundStyleForSegment (segment: NSInteger): NSBackgroundStyle; message 'interiorBackgroundStyleForSegment:'; { available in macos 10.5 }
  end;
{$endif}

