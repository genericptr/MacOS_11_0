{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSScreen.h }

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
    class function screensHaveSeparateSpaces: objcbool; message 'screensHaveSeparateSpaces'; { available in macos  }
    function depth: NSWindowDepth; message 'depth';
    function frame: NSRect; message 'frame';
    function visibleFrame: NSRect; message 'visibleFrame';
    function deviceDescription: NSDictionary; message 'deviceDescription';
    function colorSpace: NSColorSpace; message 'colorSpace'; { available in macos  }
    function supportedWindowDepths: NSWindowDepthPtr; message 'supportedWindowDepths';
    function canRepresentDisplayGamut (displayGamut: NSDisplayGamut): objcbool; message 'canRepresentDisplayGamut:'; { available in macos  }
    function convertRectToBacking (rect: NSRect): NSRect; message 'convertRectToBacking:'; { available in macos  }
    function convertRectFromBacking (rect: NSRect): NSRect; message 'convertRectFromBacking:'; { available in macos  }
    function backingAlignedRect_options (rect: NSRect; options: NSAlignmentOptions): NSRect; message 'backingAlignedRect:options:'; { available in macos  }
    function backingScaleFactor: CGFloat; message 'backingScaleFactor'; { available in macos  }
    function localizedName: NSString; message 'localizedName'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSScreenColorSpaceDidChangeNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSScreenCategory = objccategory external (NSScreen)
    function maximumExtendedDynamicRangeColorComponentValue: CGFloat; message 'maximumExtendedDynamicRangeColorComponentValue'; { available in macos  }
    function maximumPotentialExtendedDynamicRangeColorComponentValue: CGFloat; message 'maximumPotentialExtendedDynamicRangeColorComponentValue'; { available in macos  }
    function maximumReferenceExtendedDynamicRangeColorComponentValue: CGFloat; message 'maximumReferenceExtendedDynamicRangeColorComponentValue'; { available in macos  }
  end;

type
  NSScreen_NSDeprecated = objccategory external name 'NSDeprecated' (NSScreen)
    function userSpaceScaleFactor: CGFloat; message 'userSpaceScaleFactor'; deprecated 'Use -convertRectToBacking: or -backingScaleFactor instead';
  end;
{$endif}

