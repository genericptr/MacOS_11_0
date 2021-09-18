{ Parsed from AppKit.framework NSFontPanel.h }

{$ifdef TYPES}
type
  NSFontPanelPtr = ^NSFontPanel;
  NSFontChangingProtocolPtr = ^NSFontChangingProtocol;
{$endif}

{$ifdef TYPES}
type
  NSFontPanelModeMask = NSUInteger;
  NSFontPanelModeMaskPtr = ^NSFontPanelModeMask;

const
  NSFontPanelModeMaskFace = 1 shl 0;
  NSFontPanelModeMaskSize = 1 shl 1;
  NSFontPanelModeMaskCollection = 1 shl 2;
  NSFontPanelModeMaskUnderlineEffect = 1 shl 8;
  NSFontPanelModeMaskStrikethroughEffect = 1 shl 9;
  NSFontPanelModeMaskTextColorEffect = 1 shl 10;
  NSFontPanelModeMaskDocumentColorEffect = 1 shl 11;
  NSFontPanelModeMaskShadowEffect = 1 shl 12;
  NSFontPanelModeMaskAllEffects = $FFF00;
  NSFontPanelModesMaskStandardModes = $FFFF;
  NSFontPanelModesMaskAllModes = $FFFFFFFF;
{$endif}

{$ifdef PROTOCOLS}

type
  NSFontChangingProtocol = objcprotocol external name 'NSFontChanging' (NSObjectProtocol)
  optional
    procedure changeFont (sender: NSFontManager); message 'changeFont:';
    function validModesForFontPanel (fontPanel: NSFontPanel): NSFontPanelModeMask; message 'validModesForFontPanel:';
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSFontPanelValidationAdditions = objccategory external (NSObject)
    function validModesForFontPanel (fontPanel: NSFontPanel): NSFontPanelModeMask; message 'validModesForFontPanel:'; deprecated 'This is now an optional method of the NSFontChanging protocol.';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSFontPanel = objcclass external (NSPanel)
  public
    class function sharedFontPanel: NSFontPanel; message 'sharedFontPanel';
    class function sharedFontPanelExists: objcbool; message 'sharedFontPanelExists';
    procedure setAccessoryView(newValue: NSView); message 'setAccessoryView:';
    function accessoryView: NSView; message 'accessoryView';
    procedure setPanelFont_isMultiple (fontObj: NSFont; flag: objcbool); message 'setPanelFont:isMultiple:';
    function panelConvertFont (fontObj: NSFont): NSFont; message 'panelConvertFont:';
    procedure setWorksWhenModal(newValue: objcbool); message 'setWorksWhenModal:';
    function worksWhenModal: objcbool; message 'worksWhenModal';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure reloadDefaultFontFamilies; message 'reloadDefaultFontFamilies';
  end;
{$endif}

{$ifdef TYPES}
const
  NSFontPanelFaceModeMask = 1 shl 0;
  NSFontPanelSizeModeMask = 1 shl 1;
  NSFontPanelCollectionModeMask = 1 shl 2;
  NSFontPanelUnderlineEffectModeMask = 1 shl 8;
  NSFontPanelStrikethroughEffectModeMask = 1 shl 9;
  NSFontPanelTextColorEffectModeMask = 1 shl 10;
  NSFontPanelDocumentColorEffectModeMask = 1 shl 11;
  NSFontPanelShadowEffectModeMask = 1 shl 12;
  NSFontPanelAllEffectsModeMask = $FFF00;
  NSFontPanelStandardModesMask = $FFFF;
  NSFontPanelAllModesMask = $FFFFFFFF;
const
  NSFPPreviewButton = 131;
  NSFPRevertButton = 130;
  NSFPSetButton = 132;
  NSFPPreviewField = 128;
  NSFPSizeField = 129;
  NSFPSizeTitle = 133;
  NSFPCurrentField = 134;
{$endif}

