{ Parsed from AppKit.framework NSScreen.h }

{$ifdef TYPES}
type
  NSScreenPtr = ^NSScreen;
{$endif}

{$ifdef CLASSES}

type
  NSScreen = objcclass external (NSObject)
  public
    class function screens: NSArray; message 'screens';
    class function mainScreen: NSScreen; message 'mainScreen';
    class function deepestScreen: NSScreen; message 'deepestScreen';
    class function screensHaveSeparateSpaces: objcbool; message 'screensHaveSeparateSpaces'; { available in macos 10.9 }
    function depth: NSWindowDepth; message 'depth';
    function frame: NSRect; message 'frame';
    function visibleFrame: NSRect; message 'visibleFrame';
    function deviceDescription: NSDictionary; message 'deviceDescription';
    function colorSpace: NSColorSpace; message 'colorSpace'; { available in macos 10.6 }
    function supportedWindowDepths: NSWindowDepthPtr; message 'supportedWindowDepths';
    function canRepresentDisplayGamut (displayGamut: NSDisplayGamut): objcbool; message 'canRepresentDisplayGamut:'; { available in macos 10.12 }
    function convertRectToBacking (rect: NSRect): NSRect; message 'convertRectToBacking:'; { available in macos 10.7 }
    function convertRectFromBacking (rect: NSRect): NSRect; message 'convertRectFromBacking:'; { available in macos 10.7 }
    function backingAlignedRect_options (rect: NSRect; options: NSAlignmentOptions): NSRect; message 'backingAlignedRect:options:'; { available in macos 10.7 }
    function backingScaleFactor: CGFloat; message 'backingScaleFactor'; { available in macos 10.7 }
    function localizedName: NSString; message 'localizedName'; { available in macos 10.15 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSScreenColorSpaceDidChangeNotification: NSNotificationName { available in macos 10.6 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSScreenCategory = objccategory external (NSScreen)
    function maximumExtendedDynamicRangeColorComponentValue: CGFloat; message 'maximumExtendedDynamicRangeColorComponentValue'; { available in macos 10.11 }
    function maximumPotentialExtendedDynamicRangeColorComponentValue: CGFloat; message 'maximumPotentialExtendedDynamicRangeColorComponentValue'; { available in macos 10.15 }
    function maximumReferenceExtendedDynamicRangeColorComponentValue: CGFloat; message 'maximumReferenceExtendedDynamicRangeColorComponentValue'; { available in macos 10.15 }
  end;

type
  NSScreen_NSDeprecated = objccategory external name 'NSDeprecated' (NSScreen)
    function userSpaceScaleFactor: CGFloat; message 'userSpaceScaleFactor'; deprecated 'Use -convertRectToBacking: or -backingScaleFactor instead';
  end;
{$endif}

