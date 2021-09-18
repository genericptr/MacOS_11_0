{ Parsed from AppKit.framework NSAppearance.h }

{$ifdef CALLBACKS}
type
  NSAppearancePerformAsCurrentDrawingAppearanceCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSAppearancePtr = ^NSAppearance;
  NSAppearanceCustomizationProtocolPtr = ^NSAppearanceCustomizationProtocol;
{$endif}

{$ifdef TYPES}
type
  NSAppearanceName = NSString;
  NSAppearanceNamePtr = ^NSAppearanceName;
{$endif}

{$ifdef CLASSES}

type
  NSAppearance = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function name: NSAppearanceName; message 'name'; { available in macos  }
    class procedure setCurrentAppearance(newValue: NSAppearance); message 'setCurrentAppearance:'; deprecated 'Use -performAsCurrentDrawingAppearance: to temporarily set the drawing appearance, or +currentDrawingAppearance to access the currently drawing appearance.';
    class function currentAppearance: NSAppearance; message 'currentAppearance'; deprecated 'Use -performAsCurrentDrawingAppearance: to temporarily set the drawing appearance, or +currentDrawingAppearance to access the currently drawing appearance.';
    class function currentDrawingAppearance: NSAppearance; message 'currentDrawingAppearance'; { available in macos  }
    procedure performAsCurrentDrawingAppearance (block: NSAppearancePerformAsCurrentDrawingAppearanceCallback); message 'performAsCurrentDrawingAppearance:'; { available in macos  }
    class function appearanceNamed (name_: NSAppearanceName): NSAppearance; message 'appearanceNamed:';
    function initWithAppearanceNamed_bundle (name_: NSAppearanceName; bundle: NSBundle): id; message 'initWithAppearanceNamed:bundle:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function allowsVibrancy: objcbool; message 'allowsVibrancy'; { available in macos  }
    function bestMatchFromAppearancesWithNames (appearances: NSArray): NSAppearanceName; message 'bestMatchFromAppearancesWithNames:'; { available in macos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAppearanceNameAqua: NSAppearanceName { available in macos  }; cvar; external;
  NSAppearanceNameDarkAqua: NSAppearanceName { available in macos  }; cvar; external;
  NSAppearanceNameLightContent: NSAppearanceName deprecated 'Light content should use the default Aqua apppearance.'; cvar; external;
  NSAppearanceNameVibrantDark: NSAppearanceName { available in macos  }; cvar; external;
  NSAppearanceNameVibrantLight: NSAppearanceName { available in macos  }; cvar; external;
  NSAppearanceNameAccessibilityHighContrastAqua: NSAppearanceName { available in macos  }; cvar; external;
  NSAppearanceNameAccessibilityHighContrastDarkAqua: NSAppearanceName { available in macos  }; cvar; external;
  NSAppearanceNameAccessibilityHighContrastVibrantLight: NSAppearanceName { available in macos  }; cvar; external;
  NSAppearanceNameAccessibilityHighContrastVibrantDark: NSAppearanceName { available in macos  }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  NSAppearanceCustomizationProtocol = objcprotocol external name 'NSAppearanceCustomization' (NSObjectProtocol)
  required
    procedure setAppearance(newValue: NSAppearance); message 'setAppearance:'; { available in macos  }
    function appearance: NSAppearance; message 'appearance'; { available in macos  }
    function effectiveAppearance: NSAppearance; message 'effectiveAppearance'; { available in macos  }
  end;
{$endif}

