{ Parsed from AppKit.framework NSTextList.h }

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
  NSTextListMarkerBox: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerCheck: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerCircle: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerDiamond: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerDisc: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerHyphen: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerSquare: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerLowercaseHexadecimal: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerUppercaseHexadecimal: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerOctal: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerLowercaseAlpha: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerUppercaseAlpha: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerLowercaseLatin: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerUppercaseLatin: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerLowercaseRoman: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerUppercaseRoman: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
  NSTextListMarkerDecimal: NSTextListMarkerFormat { available in macos 10.13 }; cvar; external;
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
    procedure setStartingItemNumber(newValue: NSInteger); message 'setStartingItemNumber:'; { available in macos 10.6 }
    function startingItemNumber: NSInteger; message 'startingItemNumber'; { available in macos 10.6 }

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
