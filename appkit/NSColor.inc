{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSColor.h }

{$ifdef CALLBACKS}
type
  NSColorColorWithNameCallback = reference to function (param1: NSAppearance): NSColor; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSColorPtr = ^NSColor;
{$endif}

{$ifdef TYPES}
const
  NSAppKitVersionNumberWithPatternColorLeakFix = 641.0;

type
  NSColorType = NSInteger;
  NSColorTypePtr = ^NSColorType;

const
  NSColorTypeComponentBased = 0;
  NSColorTypePattern = 1;
  NSColorTypeCatalog = 2;

type
  NSColorSystemEffect = NSInteger;
  NSColorSystemEffectPtr = ^NSColorSystemEffect;

const
  NSColorSystemEffectNone = 0;
  NSColorSystemEffectPressed = 1;
  NSColorSystemEffectDeepPressed = 2;
  NSColorSystemEffectDisabled = 3;
  NSColorSystemEffectRollover = 4;
{$endif}

{$ifdef CLASSES}

type
  NSColor = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol, NSPasteboardReadingProtocol, NSPasteboardWritingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    class function colorWithColorSpace_components_count (space: NSColorSpace; components: CGFloatPtr; numberOfComponents: NSInteger): NSColor; message 'colorWithColorSpace:components:count:';
    class function colorWithSRGBRed_green_blue_alpha (red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): NSColor; message 'colorWithSRGBRed:green:blue:alpha:'; { available in macos  }
    class function colorWithGenericGamma22White_alpha (white: CGFloat; alpha: CGFloat): NSColor; message 'colorWithGenericGamma22White:alpha:'; { available in macos  }
    class function colorWithDisplayP3Red_green_blue_alpha (red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): NSColor; message 'colorWithDisplayP3Red:green:blue:alpha:'; { available in macos  }
    class function colorWithWhite_alpha (white: CGFloat; alpha: CGFloat): NSColor; message 'colorWithWhite:alpha:'; { available in macos  }
    class function colorWithRed_green_blue_alpha (red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): NSColor; message 'colorWithRed:green:blue:alpha:'; { available in macos  }
    class function colorWithHue_saturation_brightness_alpha (hue: CGFloat; saturation: CGFloat; brightness: CGFloat; alpha: CGFloat): NSColor; message 'colorWithHue:saturation:brightness:alpha:'; { available in macos  }
    class function colorWithColorSpace_hue_saturation_brightness_alpha (space: NSColorSpace; hue: CGFloat; saturation: CGFloat; brightness: CGFloat; alpha: CGFloat): NSColor; message 'colorWithColorSpace:hue:saturation:brightness:alpha:'; { available in macos  }
    class function colorWithCatalogName_colorName (listName: NSColorListName; colorName: NSColorName): NSColor; message 'colorWithCatalogName:colorName:';
    class function colorNamed_bundle (name: NSColorName; bundle: NSBundle): NSColor; message 'colorNamed:bundle:'; { available in macos  }
    class function colorNamed (name: NSColorName): NSColor; message 'colorNamed:'; { available in macos  }
    class function colorWithName_dynamicProvider (colorName: NSColorName; dynamicProvider: NSColorColorWithNameCallback): NSColor; message 'colorWithName:dynamicProvider:'; { available in macos  }
    class function colorWithDeviceWhite_alpha (white: CGFloat; alpha: CGFloat): NSColor; message 'colorWithDeviceWhite:alpha:';
    class function colorWithDeviceRed_green_blue_alpha (red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): NSColor; message 'colorWithDeviceRed:green:blue:alpha:';
    class function colorWithDeviceHue_saturation_brightness_alpha (hue: CGFloat; saturation: CGFloat; brightness: CGFloat; alpha: CGFloat): NSColor; message 'colorWithDeviceHue:saturation:brightness:alpha:';
    class function colorWithDeviceCyan_magenta_yellow_black_alpha (cyan: CGFloat; magenta: CGFloat; yellow: CGFloat; black: CGFloat; alpha: CGFloat): NSColor; message 'colorWithDeviceCyan:magenta:yellow:black:alpha:';
    class function colorWithCalibratedWhite_alpha (white: CGFloat; alpha: CGFloat): NSColor; message 'colorWithCalibratedWhite:alpha:';
    class function colorWithCalibratedRed_green_blue_alpha (red: CGFloat; green: CGFloat; blue: CGFloat; alpha: CGFloat): NSColor; message 'colorWithCalibratedRed:green:blue:alpha:';
    class function colorWithCalibratedHue_saturation_brightness_alpha (hue: CGFloat; saturation: CGFloat; brightness: CGFloat; alpha: CGFloat): NSColor; message 'colorWithCalibratedHue:saturation:brightness:alpha:';
    class function colorWithPatternImage (image: NSImage): NSColor; message 'colorWithPatternImage:';
    function type_: NSColorType; message 'type'; { available in macos  }
    function colorUsingType (type_: NSColorType): NSColor; message 'colorUsingType:'; { available in macos  }
    function colorUsingColorSpace (space: NSColorSpace): NSColor; message 'colorUsingColorSpace:';
    class function blackColor: NSColor; message 'blackColor';
    class function darkGrayColor: NSColor; message 'darkGrayColor';
    class function lightGrayColor: NSColor; message 'lightGrayColor';
    class function whiteColor: NSColor; message 'whiteColor';
    class function grayColor: NSColor; message 'grayColor';
    class function redColor: NSColor; message 'redColor';
    class function greenColor: NSColor; message 'greenColor';
    class function blueColor: NSColor; message 'blueColor';
    class function cyanColor: NSColor; message 'cyanColor';
    class function yellowColor: NSColor; message 'yellowColor';
    class function magentaColor: NSColor; message 'magentaColor';
    class function orangeColor: NSColor; message 'orangeColor';
    class function purpleColor: NSColor; message 'purpleColor';
    class function brownColor: NSColor; message 'brownColor';
    class function clearColor: NSColor; message 'clearColor';
    class function labelColor: NSColor; message 'labelColor'; { available in macos  }
    class function secondaryLabelColor: NSColor; message 'secondaryLabelColor'; { available in macos  }
    class function tertiaryLabelColor: NSColor; message 'tertiaryLabelColor'; { available in macos  }
    class function quaternaryLabelColor: NSColor; message 'quaternaryLabelColor'; { available in macos  }
    class function linkColor: NSColor; message 'linkColor'; { available in macos  }
    class function placeholderTextColor: NSColor; message 'placeholderTextColor'; { available in macos  }
    class function windowFrameTextColor: NSColor; message 'windowFrameTextColor';
    class function selectedMenuItemTextColor: NSColor; message 'selectedMenuItemTextColor';
    class function alternateSelectedControlTextColor: NSColor; message 'alternateSelectedControlTextColor';
    class function headerTextColor: NSColor; message 'headerTextColor';
    class function separatorColor: NSColor; message 'separatorColor'; { available in macos  }
    class function gridColor: NSColor; message 'gridColor';
    class function windowBackgroundColor: NSColor; message 'windowBackgroundColor';
    class function underPageBackgroundColor: NSColor; message 'underPageBackgroundColor'; { available in macos  }
    class function controlBackgroundColor: NSColor; message 'controlBackgroundColor';
    class function selectedContentBackgroundColor: NSColor; message 'selectedContentBackgroundColor'; { available in macos  }
    class function unemphasizedSelectedContentBackgroundColor: NSColor; message 'unemphasizedSelectedContentBackgroundColor'; { available in macos  }
    class function alternatingContentBackgroundColors: NSArray; message 'alternatingContentBackgroundColors'; { available in macos  }
    class function findHighlightColor: NSColor; message 'findHighlightColor'; { available in macos  }
    class function textColor: NSColor; message 'textColor';
    class function textBackgroundColor: NSColor; message 'textBackgroundColor';
    class function selectedTextColor: NSColor; message 'selectedTextColor';
    class function selectedTextBackgroundColor: NSColor; message 'selectedTextBackgroundColor';
    class function unemphasizedSelectedTextBackgroundColor: NSColor; message 'unemphasizedSelectedTextBackgroundColor'; { available in macos  }
    class function unemphasizedSelectedTextColor: NSColor; message 'unemphasizedSelectedTextColor'; { available in macos  }
    class function controlColor: NSColor; message 'controlColor';
    class function controlTextColor: NSColor; message 'controlTextColor';
    class function selectedControlColor: NSColor; message 'selectedControlColor';
    class function selectedControlTextColor: NSColor; message 'selectedControlTextColor';
    class function disabledControlTextColor: NSColor; message 'disabledControlTextColor';
    class function keyboardFocusIndicatorColor: NSColor; message 'keyboardFocusIndicatorColor';
    class function scrubberTexturedBackgroundColor: NSColor; message 'scrubberTexturedBackgroundColor'; { available in macos  }
    class function systemRedColor: NSColor; message 'systemRedColor'; { available in macos  }
    class function systemGreenColor: NSColor; message 'systemGreenColor'; { available in macos  }
    class function systemBlueColor: NSColor; message 'systemBlueColor'; { available in macos  }
    class function systemOrangeColor: NSColor; message 'systemOrangeColor'; { available in macos  }
    class function systemYellowColor: NSColor; message 'systemYellowColor'; { available in macos  }
    class function systemBrownColor: NSColor; message 'systemBrownColor'; { available in macos  }
    class function systemPinkColor: NSColor; message 'systemPinkColor'; { available in macos  }
    class function systemPurpleColor: NSColor; message 'systemPurpleColor'; { available in macos  }
    class function systemGrayColor: NSColor; message 'systemGrayColor'; { available in macos  }
    class function systemTealColor: NSColor; message 'systemTealColor'; { available in macos  }
    class function systemIndigoColor: NSColor; message 'systemIndigoColor'; { available in macos  }
    class function controlAccentColor: NSColor; message 'controlAccentColor'; { available in macos  }
    class function currentControlTint: NSControlTint; message 'currentControlTint';
    class function colorForControlTint (controlTint: NSControlTint): NSColor; message 'colorForControlTint:'; deprecated 'NSControlTint does not describe the full range of available control accent colors. Use +[NSColor controlAccentColor] instead.';
    class function highlightColor: NSColor; message 'highlightColor';
    class function shadowColor: NSColor; message 'shadowColor';
    function highlightWithLevel (val: CGFloat): NSColor; message 'highlightWithLevel:';
    function shadowWithLevel (val: CGFloat): NSColor; message 'shadowWithLevel:';
    function colorWithSystemEffect (systemEffect: NSColorSystemEffect): NSColor; message 'colorWithSystemEffect:'; { available in macos  }
    procedure set_; message 'set';
    procedure setFill; message 'setFill';
    procedure setStroke; message 'setStroke';
    function blendedColorWithFraction_ofColor (fraction: CGFloat; color: NSColor): NSColor; message 'blendedColorWithFraction:ofColor:';
    function colorWithAlphaComponent (alpha: CGFloat): NSColor; message 'colorWithAlphaComponent:';
    function catalogNameComponent: NSColorListName; message 'catalogNameComponent';
    function colorNameComponent: NSColorName; message 'colorNameComponent';
    function localizedCatalogNameComponent: NSString; message 'localizedCatalogNameComponent';
    function localizedColorNameComponent: NSString; message 'localizedColorNameComponent';
    function redComponent: CGFloat; message 'redComponent';
    function greenComponent: CGFloat; message 'greenComponent';
    function blueComponent: CGFloat; message 'blueComponent';
    procedure getRed_green_blue_alpha (red: CGFloatPtr; green: CGFloatPtr; blue: CGFloatPtr; alpha: CGFloatPtr); message 'getRed:green:blue:alpha:';
    function hueComponent: CGFloat; message 'hueComponent';
    function saturationComponent: CGFloat; message 'saturationComponent';
    function brightnessComponent: CGFloat; message 'brightnessComponent';
    procedure getHue_saturation_brightness_alpha (hue: CGFloatPtr; saturation: CGFloatPtr; brightness: CGFloatPtr; alpha: CGFloatPtr); message 'getHue:saturation:brightness:alpha:';
    function whiteComponent: CGFloat; message 'whiteComponent';
    procedure getWhite_alpha (white: CGFloatPtr; alpha: CGFloatPtr); message 'getWhite:alpha:';
    function cyanComponent: CGFloat; message 'cyanComponent';
    function magentaComponent: CGFloat; message 'magentaComponent';
    function yellowComponent: CGFloat; message 'yellowComponent';
    function blackComponent: CGFloat; message 'blackComponent';
    procedure getCyan_magenta_yellow_black_alpha (cyan: CGFloatPtr; magenta: CGFloatPtr; yellow: CGFloatPtr; black: CGFloatPtr; alpha: CGFloatPtr); message 'getCyan:magenta:yellow:black:alpha:';
    function colorSpace: NSColorSpace; message 'colorSpace';
    function numberOfComponents: NSInteger; message 'numberOfComponents';
    procedure getComponents (components: CGFloatPtr); message 'getComponents:';
    function patternImage: NSImage; message 'patternImage';
    function alphaComponent: CGFloat; message 'alphaComponent';
    class function colorFromPasteboard (pasteBoard: NSPasteboard): NSColor; message 'colorFromPasteboard:';
    procedure writeToPasteboard (pasteBoard: NSPasteboard); message 'writeToPasteboard:';
    procedure drawSwatchInRect (rect: NSRect); message 'drawSwatchInRect:';
    class function colorWithCGColor (cgColor: CGColorRef): NSColor; message 'colorWithCGColor:'; { available in macos  }
    function CGColor: CGColorRef; message 'CGColor'; { available in macos  }
    class procedure setIgnoresAlpha(newValue: objcbool); message 'setIgnoresAlpha:';
    class function ignoresAlpha: objcbool; message 'ignoresAlpha';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithPasteboardPropertyList_ofType (propertyList: id; type_: NSPasteboardType): id; message 'initWithPasteboardPropertyList:ofType:';
    function pasteboardPropertyListForType (type_: NSPasteboardType): id; message 'pasteboardPropertyListForType:';
    class function readableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'readableTypesForPasteboard:';
    class function readingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardReadingOptions; message 'readingOptionsForType:pasteboard:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
    function writableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'writableTypesForPasteboard:';
    function writingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardWritingOptions; message 'writingOptionsForType:pasteboard:';
  end;


type
  NSColor_NSDeprecated = objccategory external name 'NSDeprecated' (NSColor)
    class function controlHighlightColor: NSColor; message 'controlHighlightColor'; deprecated 'Use a color that matches the semantics being used, such as `separatorColor`';
    class function controlLightHighlightColor: NSColor; message 'controlLightHighlightColor'; deprecated 'Use a color that matches the semantics being used, such as `separatorColor`';
    class function controlShadowColor: NSColor; message 'controlShadowColor'; deprecated 'Use a color that matches the semantics being used, such as `separatorColor`';
    class function controlDarkShadowColor: NSColor; message 'controlDarkShadowColor'; deprecated 'Use a color that matches the semantics being used, such as `separatorColor`';
    class function scrollBarColor: NSColor; message 'scrollBarColor'; deprecated 'Use NSScroller instead';
    class function knobColor: NSColor; message 'knobColor'; deprecated 'Use NSScroller instead';
    class function selectedKnobColor: NSColor; message 'selectedKnobColor'; deprecated 'Use NSScroller instead';
    class function windowFrameColor: NSColor; message 'windowFrameColor'; deprecated 'Use NSVisualEffectMaterialTitlebar';
    class function selectedMenuItemColor: NSColor; message 'selectedMenuItemColor'; deprecated 'Use NSVisualEffectMaterialSelection';
    class function headerColor: NSColor; message 'headerColor'; deprecated 'Use NSVisualEffectMaterialHeaderView';
    class function secondarySelectedControlColor: NSColor; message 'secondarySelectedControlColor'; deprecated 'replace with unemphasizedSelectedContentBackgroundColor';
    class function alternateSelectedControlColor: NSColor; message 'alternateSelectedControlColor'; deprecated 'replace with selectedContentBackgroundColor';
    class function controlAlternatingRowBackgroundColors: NSArray; message 'controlAlternatingRowBackgroundColors'; deprecated 'replace with alternatingContentBackgroundColors';
    function colorSpaceName: NSColorSpaceName; message 'colorSpaceName'; deprecated 'Use -type and NSColorType instead';
    function colorUsingColorSpaceName_device (name: NSColorSpaceName; deviceDescription: NSDictionary): NSColor; message 'colorUsingColorSpaceName:device:'; deprecated 'Use -colorUsingType: or -colorUsingColorSpace: instead';
    function colorUsingColorSpaceName (name: NSColorSpaceName): NSColor; message 'colorUsingColorSpaceName:'; deprecated 'Use -colorUsingType: or -colorUsingColorSpace: instead';
  end;

type
  NSQuartzCoreAdditions = objccategory external (NSColor)
    class function colorWithCIColor (color: CIColorPtr): NSColor; message 'colorWithCIColor:';
  end;

type
  CIColor_NSAppKitAdditions = objccategory external name 'NSAppKitAdditions' (CIColor)
    function initWithColor (color: NSColor): id; message 'initWithColor:';
  end;

type
  NSAppKitColorExtensions = objccategory external (NSCoder)
    function decodeNXColor: NSColor; message 'decodeNXColor'; deprecated;
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSystemColorsDidChangeNotification: NSNotificationName; cvar; external;
{$endif}

