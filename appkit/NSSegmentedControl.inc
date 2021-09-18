{ Parsed from AppKit.framework NSSegmentedControl.h }

{ Types from NSSegmentedControl }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSSegmentedControlPtr = ^NSSegmentedControl;
{$endif}

{$ifdef TYPES}
type
  NSSegmentSwitchTracking = NSUInteger;
  NSSegmentSwitchTrackingPtr = ^NSSegmentSwitchTracking;

const
  NSSegmentSwitchTrackingSelectOne = 0;
  NSSegmentSwitchTrackingSelectAny = 1;
  NSSegmentSwitchTrackingMomentary = 2;
  NSSegmentSwitchTrackingMomentaryAccelerator = 3 { available in macos  };

type
  NSSegmentStyle = NSInteger;
  NSSegmentStylePtr = ^NSSegmentStyle;

const
  NSSegmentStyleAutomatic = 0;
  NSSegmentStyleRounded = 1;
  NSSegmentStyleRoundRect = 3;
  NSSegmentStyleTexturedSquare = 4;
  NSSegmentStyleSmallSquare = 6;
  NSSegmentStyleSeparated = 8 { available in macos  };
  NSSegmentStyleTexturedRounded = 2 { available in macos  };
  NSSegmentStyleCapsule = 5 { available in macos  };

type
  NSSegmentDistribution = NSInteger;
  NSSegmentDistributionPtr = ^NSSegmentDistribution;

const
  NSSegmentDistributionFit = 0;
  NSSegmentDistributionFill = 1;
  NSSegmentDistributionFillEqually = 2;
  NSSegmentDistributionFillProportionally = 3;
{$endif}

{$ifdef CLASSES}

type
  NSSegmentedControl = objcclass external (NSControl, NSUserInterfaceCompressionProtocol)
  public
    procedure setSegmentCount(newValue: NSInteger); message 'setSegmentCount:';
    function segmentCount: NSInteger; message 'segmentCount';
    procedure setSelectedSegment(newValue: NSInteger); message 'setSelectedSegment:';
    function selectedSegment: NSInteger; message 'selectedSegment';
    function selectSegmentWithTag (tag_: NSInteger): objcbool; message 'selectSegmentWithTag:';
    procedure setWidth_forSegment (width: CGFloat; segment: NSInteger); message 'setWidth:forSegment:';
    function widthForSegment (segment: NSInteger): CGFloat; message 'widthForSegment:';
    procedure setImage_forSegment (image: NSImage; segment: NSInteger); message 'setImage:forSegment:';
    function imageForSegment (segment: NSInteger): NSImage; message 'imageForSegment:';
    procedure setImageScaling_forSegment (scaling: NSImageScaling; segment: NSInteger); message 'setImageScaling:forSegment:'; { available in macos  }
    function imageScalingForSegment (segment: NSInteger): NSImageScaling; message 'imageScalingForSegment:'; { available in macos  }
    procedure setLabel_forSegment (label_: NSString; segment: NSInteger); message 'setLabel:forSegment:';
    function labelForSegment (segment: NSInteger): NSString; message 'labelForSegment:';
    procedure setMenu_forSegment (menu_: NSMenu; segment: NSInteger); message 'setMenu:forSegment:';
    function menuForSegment (segment: NSInteger): NSMenu; message 'menuForSegment:';
    procedure setSelected_forSegment (selected: objcbool; segment: NSInteger); message 'setSelected:forSegment:';
    function isSelectedForSegment (segment: NSInteger): objcbool; message 'isSelectedForSegment:';
    procedure setEnabled_forSegment (enabled: objcbool; segment: NSInteger); message 'setEnabled:forSegment:';
    function isEnabledForSegment (segment: NSInteger): objcbool; message 'isEnabledForSegment:';
    procedure setToolTip_forSegment (toolTip_: NSString; segment: NSInteger); message 'setToolTip:forSegment:'; { available in macos  }
    function toolTipForSegment (segment: NSInteger): NSString; message 'toolTipForSegment:'; { available in macos  }
    procedure setTag_forSegment (tag_: NSInteger; segment: NSInteger); message 'setTag:forSegment:'; { available in macos  }
    function tagForSegment (segment: NSInteger): NSInteger; message 'tagForSegment:'; { available in macos  }
    procedure setShowsMenuIndicator_forSegment (showsMenuIndicator: objcbool; segment: NSInteger); message 'setShowsMenuIndicator:forSegment:'; { available in macos  }
    function showsMenuIndicatorForSegment (segment: NSInteger): objcbool; message 'showsMenuIndicatorForSegment:'; { available in macos  }
    procedure setSegmentStyle(newValue: NSSegmentStyle); message 'setSegmentStyle:'; { available in macos  }
    function segmentStyle: NSSegmentStyle; message 'segmentStyle'; { available in macos  }
    procedure setSpringLoaded(newValue: objcbool); message 'setSpringLoaded:'; { available in macos  }
    function isSpringLoaded: objcbool; message 'isSpringLoaded'; { available in macos  }
    procedure setTrackingMode(newValue: NSSegmentSwitchTracking); message 'setTrackingMode:'; { available in macos  }
    function trackingMode: NSSegmentSwitchTracking; message 'trackingMode'; { available in macos  }
    function doubleValueForSelectedSegment: double; message 'doubleValueForSelectedSegment'; { available in macos  }
    procedure setSelectedSegmentBezelColor(newValue: NSColor); message 'setSelectedSegmentBezelColor:'; { available in macos  }
    function selectedSegmentBezelColor: NSColor; message 'selectedSegmentBezelColor'; { available in macos  }
    function indexOfSelectedItem: NSInteger; message 'indexOfSelectedItem'; { available in macos  }
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setAlignment_forSegment (alignment_: NSTextAlignment; segment: NSInteger); message 'setAlignment:forSegment:'; { available in macos  }
    function alignmentForSegment (segment: NSInteger): NSTextAlignment; message 'alignmentForSegment:'; { available in macos  }
    {$endif}
    procedure setSegmentDistribution(newValue: NSSegmentDistribution); message 'setSegmentDistribution:'; { available in macos  }
    function segmentDistribution: NSSegmentDistribution; message 'segmentDistribution'; { available in macos  }
    procedure compressWithPrioritizedCompressionOptions (prioritizedOptions: NSArray); message 'compressWithPrioritizedCompressionOptions:'; { available in macos  }
    function minimumSizeWithPrioritizedCompressionOptions (prioritizedOptions: NSArray): NSSize; message 'minimumSizeWithPrioritizedCompressionOptions:'; { available in macos  }
    function activeCompressionOptions: NSUserInterfaceCompressionOptions; message 'activeCompressionOptions'; { available in macos  }

    { Adopted protocols }
    function activeCompressionOptions_: NSUserInterfaceCompressionOptions; message 'activeCompressionOptions';
  end;


type
  NSSegmentedControlConvenience = objccategory external (NSSegmentedControl)
    class function segmentedControlWithLabels_trackingMode_target_action (labels: NSArray; trackingMode_: NSSegmentSwitchTracking; target_: id; action_: SEL): id; message 'segmentedControlWithLabels:trackingMode:target:action:'; { available in macos  }
    class function segmentedControlWithImages_trackingMode_target_action (images: NSArray; trackingMode_: NSSegmentSwitchTracking; target_: id; action_: SEL): id; message 'segmentedControlWithImages:trackingMode:target:action:'; { available in macos  }
  end;
{$endif}

