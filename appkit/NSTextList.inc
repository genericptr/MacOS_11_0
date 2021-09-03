{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTextList.h }

{$ifdef TYPES}
type
  NSTextListPtr = ^NSTextList;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  NSTextListMarkerFormat = NSString;
  NSTextListMarkerFormatPtr = ^NSTextListMarkerFormat;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextListMarkerBox: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerCheck: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerCircle: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerDiamond: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerDisc: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerHyphen: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerSquare: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerLowercaseHexadecimal: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerUppercaseHexadecimal: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerOctal: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerLowercaseAlpha: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerUppercaseAlpha: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerLowercaseLatin: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerUppercaseLatin: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerLowercaseRoman: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerUppercaseRoman: NSTextListMarkerFormat { available in macos  }; cvar; external;
  NSTextListMarkerDecimal: NSTextListMarkerFormat { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSTextListOptions = NSUInteger;
  NSTextListOptionsPtr = ^NSTextListOptions;

const
  NSTextListPrependEnclosingMarker = 1 shl 0;
{$endif}

{$ifdef CLASSES}

type
  NSTextList = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithMarkerFormat_options (format: NSTextListMarkerFormat; mask: NSUInteger): id; message 'initWithMarkerFormat:options:';
    function markerFormat: NSTextListMarkerFormat; message 'markerFormat';
    function listOptions: NSTextListOptions; message 'listOptions';
    function markerForItemNumber (itemNum: NSInteger): NSString; message 'markerForItemNumber:';
    procedure setStartingItemNumber(newValue: NSInteger); message 'setStartingItemNumber:'; { available in macos  }
    function startingItemNumber: NSInteger; message 'startingItemNumber'; { available in macos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}

{$else}
{$endif}
