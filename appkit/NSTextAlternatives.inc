{ Parsed from AppKit.framework NSTextAlternatives.h }

{$ifdef TYPES}
type
  NSTextAlternativesPtr = ^NSTextAlternatives;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSTextAlternatives = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function initWithPrimaryString_alternativeStrings (primaryString: NSString; alternativeStrings: NSArray): id; message 'initWithPrimaryString:alternativeStrings:';
    function primaryString: NSString; message 'primaryString';
    function alternativeStrings: NSArray; message 'alternativeStrings';
    procedure noteSelectedAlternativeString (alternativeString: NSString); message 'noteSelectedAlternativeString:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextAlternativesSelectedAlternativeStringNotification: NSNotificationName { available in macos 10.8 }; cvar; external;
{$endif}

{$endif}

{$else}
{$endif}
