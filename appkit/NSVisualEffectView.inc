{ Parsed from AppKit.framework NSVisualEffectView.h }

{$ifdef TYPES}
type
  NSVisualEffectViewPtr = ^NSVisualEffectView;
{$endif}

{$ifdef TYPES}
type
  NSVisualEffectMaterial = NSInteger;
  NSVisualEffectMaterialPtr = ^NSVisualEffectMaterial;

const
  NSVisualEffectMaterialTitlebar = 3;
  NSVisualEffectMaterialSelection = 4;
  NSVisualEffectMaterialMenu = 5 { available in macos 10.11 };
  NSVisualEffectMaterialPopover = 6 { available in macos 10.11 };
  NSVisualEffectMaterialSidebar = 7 { available in macos 10.11 };
  NSVisualEffectMaterialHeaderView = 10 { available in macos 10.14 };
  NSVisualEffectMaterialSheet = 11 { available in macos 10.14 };
  NSVisualEffectMaterialWindowBackground = 12 { available in macos 10.14 };
  NSVisualEffectMaterialHUDWindow = 13 { available in macos 10.14 };
  NSVisualEffectMaterialFullScreenUI = 15 { available in macos 10.14 };
  NSVisualEffectMaterialToolTip = 17 { available in macos 10.14 };
  NSVisualEffectMaterialContentBackground = 18 { available in macos 10.14 };
  NSVisualEffectMaterialUnderWindowBackground = 21 { available in macos 10.14 };
  NSVisualEffectMaterialUnderPageBackground = 22 { available in macos 10.14 };
  NSVisualEffectMaterialAppearanceBased = 0 deprecated 'Use a specific semantic material instead.';
  NSVisualEffectMaterialLight = 1 deprecated 'Use a semantic material instead.  To force the appearance of a view hierarchy, set the `appearance` property to an appropriate NSAppearance value.';
  NSVisualEffectMaterialDark = 2 deprecated 'Use a semantic material instead.  To force the appearance of a view hierarchy, set the `appearance` property to an appropriate NSAppearance value.';
  NSVisualEffectMaterialMediumLight = 8 deprecated 'Use a semantic material instead.  To force the appearance of a view hierarchy, set the `appearance` property to an appropriate NSAppearance value.';
  NSVisualEffectMaterialUltraDark = 9 deprecated 'Use a semantic material instead.  To force the appearance of a view hierarchy, set the `appearance` property to an appropriate NSAppearance value.';

type
  NSVisualEffectBlendingMode = NSInteger;
  NSVisualEffectBlendingModePtr = ^NSVisualEffectBlendingMode;

const
  NSVisualEffectBlendingModeBehindWindow = 0;
  NSVisualEffectBlendingModeWithinWindow = 1;

type
  NSVisualEffectState = NSInteger;
  NSVisualEffectStatePtr = ^NSVisualEffectState;

const
  NSVisualEffectStateFollowsWindowActiveState = 0;
  NSVisualEffectStateActive = 1;
  NSVisualEffectStateInactive = 2;
{$endif}

{$ifdef CLASSES}

type
  NSVisualEffectView = objcclass external (NSView)
  public
    procedure setMaterial(newValue: NSVisualEffectMaterial); message 'setMaterial:';
    function material: NSVisualEffectMaterial; message 'material';
    function interiorBackgroundStyle: NSBackgroundStyle; message 'interiorBackgroundStyle';
    procedure setBlendingMode(newValue: NSVisualEffectBlendingMode); message 'setBlendingMode:';
    function blendingMode: NSVisualEffectBlendingMode; message 'blendingMode';
    procedure setState(newValue: NSVisualEffectState); message 'setState:';
    function state: NSVisualEffectState; message 'state';
    procedure setMaskImage(newValue: NSImage); message 'setMaskImage:';
    function maskImage: NSImage; message 'maskImage';
    procedure setEmphasized(newValue: objcbool); message 'setEmphasized:'; { available in macos 10.12 }
    function isEmphasized: objcbool; message 'isEmphasized'; { available in macos 10.12 }
    procedure viewDidMoveToWindow; message 'viewDidMoveToWindow'; { NS_REQUIRES_SUPER }
    procedure viewWillMoveToWindow (newWindow: NSWindow); message 'viewWillMoveToWindow:'; { NS_REQUIRES_SUPER }
  end;
{$endif}

