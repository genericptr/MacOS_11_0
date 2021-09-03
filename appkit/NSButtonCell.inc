{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSButtonCell.h }

{$ifdef TYPES}
type
  NSButtonCellPtr = ^NSButtonCell;
{$endif}

{$ifdef TYPES}
type
  NSButtonType = NSUInteger;
  NSButtonTypePtr = ^NSButtonType;

const
  NSButtonTypeMomentaryLight = 0;
  NSButtonTypePushOnPushOff = 1;
  NSButtonTypeToggle = 2;
  NSButtonTypeSwitch = 3;
  NSButtonTypeRadio = 4;
  NSButtonTypeMomentaryChange = 5;
  NSButtonTypeOnOff = 6;
  NSButtonTypeMomentaryPushIn = 7;
  NSButtonTypeAccelerator = 8 { available in macos  };
  NSButtonTypeMultiLevelAccelerator = 9 { available in macos  };

type
  NSBezelStyle = NSUInteger;
  NSBezelStylePtr = ^NSBezelStyle;

const
  NSBezelStyleRounded = 1;
  NSBezelStyleRegularSquare = 2;
  NSBezelStyleDisclosure = 5;
  NSBezelStyleShadowlessSquare = 6;
  NSBezelStyleCircular = 7;
  NSBezelStyleTexturedSquare = 8;
  NSBezelStyleHelpButton = 9;
  NSBezelStyleSmallSquare = 10;
  NSBezelStyleTexturedRounded = 11;
  NSBezelStyleRoundRect = 12;
  NSBezelStyleRecessed = 13;
  NSBezelStyleRoundedDisclosure = 14;
  NSBezelStyleInline = 15 { available in macos  };
{$endif}

{$ifdef CLASSES}

type
  NSButtonCell = objcclass external (NSActionCell)
  public
    function initTextCell (string_: NSString): id; message 'initTextCell:'; { NS_DESIGNATED_INITIALIZER }
    function initImageCell (image_: NSImage): id; message 'initImageCell:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setBezelStyle(newValue: NSBezelStyle); message 'setBezelStyle:';
    function bezelStyle: NSBezelStyle; message 'bezelStyle';
    procedure setButtonType (type_: NSButtonType); message 'setButtonType:';
    procedure setHighlightsBy(newValue: NSCellStyleMask); message 'setHighlightsBy:';
    function highlightsBy: NSCellStyleMask; message 'highlightsBy';
    procedure setShowsStateBy(newValue: NSCellStyleMask); message 'setShowsStateBy:';
    function showsStateBy: NSCellStyleMask; message 'showsStateBy';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:';
    function attributedTitle: NSAttributedString; message 'attributedTitle';
    procedure setAlternateTitle(newValue: NSString); message 'setAlternateTitle:';
    function alternateTitle: NSString; message 'alternateTitle';
    procedure setAttributedAlternateTitle(newValue: NSAttributedString); message 'setAttributedAlternateTitle:';
    function attributedAlternateTitle: NSAttributedString; message 'attributedAlternateTitle';
    procedure setAlternateImage(newValue: NSImage); message 'setAlternateImage:';
    function alternateImage: NSImage; message 'alternateImage';
    procedure setImagePosition(newValue: NSCellImagePosition); message 'setImagePosition:';
    function imagePosition: NSCellImagePosition; message 'imagePosition';
    procedure setImageScaling(newValue: NSImageScaling); message 'setImageScaling:'; { available in macos  }
    function imageScaling: NSImageScaling; message 'imageScaling'; { available in macos  }
    procedure setKeyEquivalent(newValue: NSString); message 'setKeyEquivalent:';
    function keyEquivalent: NSString; message 'keyEquivalent';
    procedure setKeyEquivalentModifierMask(newValue: NSEventModifierFlags); message 'setKeyEquivalentModifierMask:';
    function keyEquivalentModifierMask: NSEventModifierFlags; message 'keyEquivalentModifierMask';
    procedure setTransparent(newValue: objcbool); message 'setTransparent:';
    function isTransparent: objcbool; message 'isTransparent';
    function isOpaque: objcbool; message 'isOpaque';
    procedure setImageDimsWhenDisabled(newValue: objcbool); message 'setImageDimsWhenDisabled:';
    function imageDimsWhenDisabled: objcbool; message 'imageDimsWhenDisabled';
    procedure setShowsBorderOnlyWhileMouseInside(newValue: objcbool); message 'setShowsBorderOnlyWhileMouseInside:';
    function showsBorderOnlyWhileMouseInside: objcbool; message 'showsBorderOnlyWhileMouseInside';
    procedure setSound(newValue: NSSound); message 'setSound:';
    function sound: NSSound; message 'sound';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setPeriodicDelay_interval (delay: single; interval: single); message 'setPeriodicDelay:interval:';
    procedure getPeriodicDelay_interval (delay: psingle; interval: psingle); message 'getPeriodicDelay:interval:';
    procedure performClick (sender: id); message 'performClick:';
    procedure mouseEntered (event: NSEvent); message 'mouseEntered:';
    procedure mouseExited (event: NSEvent); message 'mouseExited:';
    procedure drawBezelWithFrame_inView (frame: NSRect; controlView_: NSView); message 'drawBezelWithFrame:inView:';
    procedure drawImage_withFrame_inView (image_: NSImage; frame: NSRect; controlView_: NSView); message 'drawImage:withFrame:inView:';
    function drawTitle_withFrame_inView (title_: NSAttributedString; frame: NSRect; controlView_: NSView): NSRect; message 'drawTitle:withFrame:inView:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSGradientType = NSUInteger;
  NSGradientTypePtr = ^NSGradientType;

const
  NSGradientNone = 0;
  NSGradientConcaveWeak = 1;
  NSGradientConcaveStrong = 2;
  NSGradientConvexWeak = 3;
  NSGradientConvexStrong = 4;

const
  NSMomentaryLightButton = NSButtonTypeMomentaryLight deprecated 'replace with NSButtonTypeMomentaryLight';
  NSPushOnPushOffButton = NSButtonTypePushOnPushOff deprecated 'replace with NSButtonTypePushOnPushOff';
  NSToggleButton = NSButtonTypeToggle deprecated 'replace with NSButtonTypeToggle';
  NSSwitchButton = NSButtonTypeSwitch deprecated 'replace with NSButtonTypeSwitch';
  NSRadioButton = NSButtonTypeRadio deprecated 'replace with NSButtonTypeRadio';
  NSMomentaryChangeButton = NSButtonTypeMomentaryChange deprecated 'replace with NSButtonTypeMomentaryChange';
  NSOnOffButton = NSButtonTypeOnOff deprecated 'replace with NSButtonTypeOnOff';
  NSMomentaryPushInButton = NSButtonTypeMomentaryPushIn deprecated 'replace with NSButtonTypeMomentaryPushIn';
  NSAcceleratorButton = NSButtonTypeAccelerator deprecated 'replace with NSButtonTypeAccelerator';
  NSMultiLevelAcceleratorButton = NSButtonTypeMultiLevelAccelerator deprecated 'replace with NSButtonTypeMultiLevelAccelerator';
  NSMomentaryPushButton = NSButtonTypeMomentaryLight deprecated 'This constant is misnamed and has the same effect as NSButtonTypeMomentaryLight. Use that name instead, or switch to NSButtonTypeMomentaryPushIn.';
  NSMomentaryLight = NSButtonTypeMomentaryPushIn deprecated 'This constant is misnamed and has the same effect as NSButtonTypeMomentaryPushIn. Use that name instead, or switch to NSButtonTypeMomentaryLight.';
  NSRoundedBezelStyle = NSBezelStyleRounded deprecated 'replace with NSBezelStyleRounded';
  NSRegularSquareBezelStyle = NSBezelStyleRegularSquare deprecated 'replace with NSBezelStyleRegularSquare';
  NSDisclosureBezelStyle = NSBezelStyleDisclosure deprecated 'replace with NSBezelStyleDisclosure';
  NSShadowlessSquareBezelStyle = NSBezelStyleShadowlessSquare deprecated 'replace with NSBezelStyleShadowlessSquare';
  NSCircularBezelStyle = NSBezelStyleCircular deprecated 'replace with NSBezelStyleCircular';
  NSTexturedSquareBezelStyle = NSBezelStyleTexturedSquare deprecated 'replace with NSBezelStyleTexturedSquare';
  NSHelpButtonBezelStyle = NSBezelStyleHelpButton deprecated 'replace with NSBezelStyleHelpButton';
  NSSmallSquareBezelStyle = NSBezelStyleSmallSquare deprecated 'replace with NSBezelStyleSmallSquare';
  NSTexturedRoundedBezelStyle = NSBezelStyleTexturedRounded deprecated 'replace with NSBezelStyleTexturedRounded';
  NSRoundRectBezelStyle = NSBezelStyleRoundRect deprecated 'replace with NSBezelStyleRoundRect';
  NSRecessedBezelStyle = NSBezelStyleRecessed deprecated 'replace with NSBezelStyleRecessed';
  NSRoundedDisclosureBezelStyle = NSBezelStyleRoundedDisclosure deprecated 'replace with NSBezelStyleRoundedDisclosure';
  NSInlineBezelStyle = NSBezelStyleInline deprecated 'replace with NSBezelStyleInline';
  NSSmallIconButtonBezelStyle = 2 deprecated 'This bezel style is obsolete and should not be used.';
  NSThickSquareBezelStyle = 3 deprecated 'replace with NSBezelStyleRegularSquare';
  NSThickerSquareBezelStyle = 4 deprecated 'replace with NSBezelStyleRegularSquare';
{$endif}

{$ifdef CLASSES}

type
  NSButtonCell_NSDeprecated = objccategory external name 'NSDeprecated' (NSButtonCell)
    procedure setGradientType(newValue: NSGradientType); message 'setGradientType:'; deprecated 'The gradientType property is unused, and setting it has no effect.';
    function gradientType: NSGradientType; message 'gradientType'; deprecated 'The gradientType property is unused, and setting it has no effect.';
    procedure setTitleWithMnemonic (stringWithAmpersand: NSString); message 'setTitleWithMnemonic:'; deprecated 'Mnemonics are not used on macOS. Set the title property directly instead.';
    procedure setAlternateTitleWithMnemonic (stringWithAmpersand: NSString); message 'setAlternateTitleWithMnemonic:'; deprecated 'Mnemonics are not used on macOS. Set the alternateTitle property directly instead.';
    procedure setAlternateMnemonicLocation (location: NSUInteger); message 'setAlternateMnemonicLocation:'; deprecated 'Mnemonics are not used on macOS. Calling this method has no effect.';
    function alternateMnemonicLocation: NSUInteger; message 'alternateMnemonicLocation'; deprecated 'Mnemonics are not used on macOS. This property always returns NSNotFound.';
    function alternateMnemonic: NSString; message 'alternateMnemonic'; deprecated 'Mnemonics are not used on macOS. This property always returns an empty string.';
    procedure setKeyEquivalentFont(newValue: NSFont); message 'setKeyEquivalentFont:'; deprecated 'The keyEquivalentFont property is no longer used. It always returns the NSButtonCell''s font, and setting it has no effect.';
    function keyEquivalentFont: NSFont; message 'keyEquivalentFont'; deprecated 'The keyEquivalentFont property is no longer used. It always returns the NSButtonCell''s font, and setting it has no effect.';
    procedure setKeyEquivalentFont_size (fontName: NSString; fontSize: CGFloat); message 'setKeyEquivalentFont:size:'; deprecated 'The keyEquivalentFont property is no longer used. Setting it has no effect.';
  end;
{$endif}

