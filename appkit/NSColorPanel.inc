{ Parsed from AppKit.framework NSColorPanel.h }

{$ifdef TYPES}
type
  NSColorPanelPtr = ^NSColorPanel;
  NSColorChangingProtocolPtr = ^NSColorChangingProtocol;
{$endif}

{$ifdef TYPES}
type
  NSColorPanelMode = NSInteger;
  NSColorPanelModePtr = ^NSColorPanelMode;

const
  NSColorPanelModeNone = -1 { available in macos  };
  NSColorPanelModeGray = 0;
  NSColorPanelModeRGB = 1;
  NSColorPanelModeCMYK = 2;
  NSColorPanelModeHSB = 3;
  NSColorPanelModeCustomPalette = 4;
  NSColorPanelModeColorList = 5;
  NSColorPanelModeWheel = 6;
  NSColorPanelModeCrayon = 7;

type
  NSColorPanelOptions = NSUInteger;
  NSColorPanelOptionsPtr = ^NSColorPanelOptions;

const
  NSColorPanelGrayModeMask = $00000001;
  NSColorPanelRGBModeMask = $00000002;
  NSColorPanelCMYKModeMask = $00000004;
  NSColorPanelHSBModeMask = $00000008;
  NSColorPanelCustomPaletteModeMask = $00000010;
  NSColorPanelColorListModeMask = $00000020;
  NSColorPanelWheelModeMask = $00000040;
  NSColorPanelCrayonModeMask = $00000080;
  NSColorPanelAllModesMask = $0000ffff;
{$endif}

{$ifdef CLASSES}

type
  NSColorPanel = objcclass external (NSPanel)
  public
    class function sharedColorPanel: NSColorPanel; message 'sharedColorPanel';
    class function sharedColorPanelExists: objcbool; message 'sharedColorPanelExists';
    class function dragColor_withEvent_fromView (color: NSColor; event: NSEvent; sourceView: NSView): objcbool; message 'dragColor:withEvent:fromView:';
    class procedure setPickerMask (mask: NSColorPanelOptions); message 'setPickerMask:';
    class procedure setPickerMode (mode: NSColorPanelMode); message 'setPickerMode:';
    procedure setAccessoryView(newValue: NSView); message 'setAccessoryView:';
    function accessoryView: NSView; message 'accessoryView';
    procedure setContinuous(newValue: objcbool); message 'setContinuous:';
    function isContinuous: objcbool; message 'isContinuous';
    procedure setShowsAlpha(newValue: objcbool); message 'setShowsAlpha:';
    function showsAlpha: objcbool; message 'showsAlpha';
    procedure setMode(newValue: NSColorPanelMode); message 'setMode:';
    function mode: NSColorPanelMode; message 'mode';
    procedure setColor(newValue: NSColor); message 'setColor:';
    function color: NSColor; message 'color';
    function alpha: CGFloat; message 'alpha';
    procedure setAction (selector: SEL); message 'setAction:';
    procedure setTarget (target: id); message 'setTarget:';
    procedure attachColorList (colorList: NSColorList); message 'attachColorList:';
    procedure detachColorList (colorList: NSColorList); message 'detachColorList:';
  end;


type
  NSApplication_NSColorPanel = objccategory external name 'NSColorPanel' (NSApplication)
    procedure orderFrontColorPanel (sender: id); message 'orderFrontColorPanel:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSColorChangingProtocol = objcprotocol external name 'NSColorChanging' (NSObjectProtocol)
    procedure changeColor (sender: NSColorPanel); message 'changeColor:';
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSColorPanelResponderMethod = objccategory external (NSObject)
    procedure changeColor (sender: id); message 'changeColor:'; deprecated 'This is now a method of the NSColorChanging protocol.';
  end;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSColorPanelColorDidChangeNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef TYPES}
const
  NSNoModeColorPanel = NSColorPanelModeNone deprecated 'replace with NSColorPanelModeNone';
  NSGrayModeColorPanel = NSColorPanelModeGray deprecated 'replace with NSColorPanelModeGray';
  NSRGBModeColorPanel = NSColorPanelModeRGB deprecated 'replace with NSColorPanelModeRGB';
  NSCMYKModeColorPanel = NSColorPanelModeCMYK deprecated 'replace with NSColorPanelModeCMYK';
  NSHSBModeColorPanel = NSColorPanelModeHSB deprecated 'replace with NSColorPanelModeHSB';
  NSCustomPaletteModeColorPanel = NSColorPanelModeCustomPalette deprecated 'replace with NSColorPanelModeCustomPalette';
  NSColorListModeColorPanel = NSColorPanelModeColorList deprecated 'replace with NSColorPanelModeColorList';
  NSWheelModeColorPanel = NSColorPanelModeWheel deprecated 'replace with NSColorPanelModeWheel';
  NSCrayonModeColorPanel = NSColorPanelModeCrayon deprecated 'replace with NSColorPanelModeCrayon';
{$endif}

