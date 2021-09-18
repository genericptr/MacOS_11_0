{ Parsed from Foundation.framework NSPersonNameComponentsFormatter.h }

{$ifdef TYPES}
type
  NSPersonNameComponentsFormatterPtr = ^NSPersonNameComponentsFormatter;
{$endif}

{$ifdef TYPES}
type
  NSPersonNameComponentsFormatterStyle = NSInteger;
  NSPersonNameComponentsFormatterStylePtr = ^NSPersonNameComponentsFormatterStyle;

const
  NSPersonNameComponentsFormatterStyleDefault = 0;
  NSPersonNameComponentsFormatterStyleShort = 1;
  NSPersonNameComponentsFormatterStyleMedium = 2;
  NSPersonNameComponentsFormatterStyleLong = 3;
  NSPersonNameComponentsFormatterStyleAbbreviated = 4;

type
  NSPersonNameComponentsFormatterOptions = NSUInteger;
  NSPersonNameComponentsFormatterOptionsPtr = ^NSPersonNameComponentsFormatterOptions;

const
  NSPersonNameComponentsFormatterPhonetic = 1 shl 1;
{$endif}

{$ifdef CLASSES}

type
  NSPersonNameComponentsFormatter = objcclass external (NSFormatter)
  private
    _private: id;
  public
    procedure setStyle(newValue: NSPersonNameComponentsFormatterStyle); message 'setStyle:';
    function style: NSPersonNameComponentsFormatterStyle; message 'style';
    procedure setPhonetic(newValue: objcbool); message 'setPhonetic:';
    function isPhonetic: objcbool; message 'isPhonetic';
    class function localizedStringFromPersonNameComponents_style_options (components: NSPersonNameComponents; nameFormatStyle: NSPersonNameComponentsFormatterStyle; nameOptions: NSPersonNameComponentsFormatterOptions): NSString; message 'localizedStringFromPersonNameComponents:style:options:';
    function stringFromPersonNameComponents (components: NSPersonNameComponents): NSString; message 'stringFromPersonNameComponents:';
    function annotatedStringFromPersonNameComponents (components: NSPersonNameComponents): NSAttributedString; message 'annotatedStringFromPersonNameComponents:';
    function personNameComponentsFromString (string_: NSString): NSPersonNameComponents; message 'personNameComponentsFromString:'; { available in macosx , ios , watchos , tvos  }
    function getObjectValue_forString_errorDescription (obj: idPtr; string_: NSString; error: NSStringPtr): objcbool; message 'getObjectValue:forString:errorDescription:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPersonNameComponentKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSPersonNameComponentGivenName: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSPersonNameComponentFamilyName: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSPersonNameComponentMiddleName: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSPersonNameComponentPrefix: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSPersonNameComponentSuffix: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSPersonNameComponentNickname: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSPersonNameComponentDelimiter: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

