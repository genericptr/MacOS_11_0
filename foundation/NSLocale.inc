{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSLocale.h }

{ Types from NSLocaleGeneralInfo }
{$ifdef TYPES}

type
  NSLocaleLanguageDirection = NSUInteger;
type
  NSLocaleLanguageDirectionPtr = ^NSLocaleLanguageDirection;

const
  NSLocaleLanguageDirectionUnknown = kCFLocaleLanguageDirectionUnknown;
  NSLocaleLanguageDirectionLeftToRight = kCFLocaleLanguageDirectionLeftToRight;
  NSLocaleLanguageDirectionRightToLeft = kCFLocaleLanguageDirectionRightToLeft;
  NSLocaleLanguageDirectionTopToBottom = kCFLocaleLanguageDirectionTopToBottom;
  NSLocaleLanguageDirectionBottomToTop = kCFLocaleLanguageDirectionBottomToTop;
{$endif}


{$ifdef TYPES}
type
  NSLocalePtr = ^NSLocale;
{$endif}

{$ifdef TYPES}
type
  NSLocaleKey = NSString;
  NSLocaleKeyPtr = ^NSLocaleKey;
{$endif}

{$ifdef CLASSES}

type
  NSLocale = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function objectForKey (key: NSLocaleKey): id; message 'objectForKey:';
    function displayNameForKey_value (key: NSLocaleKey; value: id): NSString; message 'displayNameForKey:value:';
    function initWithLocaleIdentifier (string_: NSString): id; message 'initWithLocaleIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSExtendedLocale = objccategory external (NSLocale)
    function localeIdentifier: NSString; message 'localeIdentifier';
    function localizedStringForLocaleIdentifier (localeIdentifier_: NSString): NSString; message 'localizedStringForLocaleIdentifier:'; { available in macosx , ios , watchos , tvos  }
    function languageCode: NSString; message 'languageCode'; { available in macosx , ios , watchos , tvos  }
    function localizedStringForLanguageCode (languageCode_: NSString): NSString; message 'localizedStringForLanguageCode:'; { available in macosx , ios , watchos , tvos  }
    function countryCode: NSString; message 'countryCode'; { available in macosx , ios , watchos , tvos  }
    function localizedStringForCountryCode (countryCode_: NSString): NSString; message 'localizedStringForCountryCode:'; { available in macosx , ios , watchos , tvos  }
    function scriptCode: NSString; message 'scriptCode'; { available in macosx , ios , watchos , tvos  }
    function localizedStringForScriptCode (scriptCode_: NSString): NSString; message 'localizedStringForScriptCode:'; { available in macosx , ios , watchos , tvos  }
    function variantCode: NSString; message 'variantCode'; { available in macosx , ios , watchos , tvos  }
    function localizedStringForVariantCode (variantCode_: NSString): NSString; message 'localizedStringForVariantCode:'; { available in macosx , ios , watchos , tvos  }
    function exemplarCharacterSet: NSCharacterSet; message 'exemplarCharacterSet'; { available in macosx , ios , watchos , tvos  }
    function calendarIdentifier: NSString; message 'calendarIdentifier'; { available in macosx , ios , watchos , tvos  }
    function localizedStringForCalendarIdentifier (calendarIdentifier_: NSString): NSString; message 'localizedStringForCalendarIdentifier:'; { available in macosx , ios , watchos , tvos  }
    function collationIdentifier: NSString; message 'collationIdentifier'; { available in macosx , ios , watchos , tvos  }
    function localizedStringForCollationIdentifier (collationIdentifier_: NSString): NSString; message 'localizedStringForCollationIdentifier:'; { available in macosx , ios , watchos , tvos  }
    function usesMetricSystem: objcbool; message 'usesMetricSystem'; { available in macosx , ios , watchos , tvos  }
    function decimalSeparator: NSString; message 'decimalSeparator'; { available in macosx , ios , watchos , tvos  }
    function groupingSeparator: NSString; message 'groupingSeparator'; { available in macosx , ios , watchos , tvos  }
    function currencySymbol: NSString; message 'currencySymbol'; { available in macosx , ios , watchos , tvos  }
    function currencyCode: NSString; message 'currencyCode'; { available in macosx , ios , watchos , tvos  }
    function localizedStringForCurrencyCode (currencyCode_: NSString): NSString; message 'localizedStringForCurrencyCode:'; { available in macosx , ios , watchos , tvos  }
    function collatorIdentifier: NSString; message 'collatorIdentifier'; { available in macosx , ios , watchos , tvos  }
    function localizedStringForCollatorIdentifier (collatorIdentifier_: NSString): NSString; message 'localizedStringForCollatorIdentifier:'; { available in macosx , ios , watchos , tvos  }
    function quotationBeginDelimiter: NSString; message 'quotationBeginDelimiter'; { available in macosx , ios , watchos , tvos  }
    function quotationEndDelimiter: NSString; message 'quotationEndDelimiter'; { available in macosx , ios , watchos , tvos  }
    function alternateQuotationBeginDelimiter: NSString; message 'alternateQuotationBeginDelimiter'; { available in macosx , ios , watchos , tvos  }
    function alternateQuotationEndDelimiter: NSString; message 'alternateQuotationEndDelimiter'; { available in macosx , ios , watchos , tvos  }
  end;

type
  NSLocaleCreation = objccategory external (NSLocale)
    class function autoupdatingCurrentLocale: NSLocale; message 'autoupdatingCurrentLocale'; { available in macos , ios , watchos , tvos  }
    class function currentLocale: NSLocale; message 'currentLocale';
    class function systemLocale: NSLocale; message 'systemLocale';
    class function localeWithLocaleIdentifier (ident: NSString): id; message 'localeWithLocaleIdentifier:'; { available in macos , ios , watchos , tvos  }
    function init: id; message 'init'; { unavailable in macos, ios, watchos, tvos }
  end;

type
  NSLocaleGeneralInfo = objccategory external (NSLocale)
    class function availableLocaleIdentifiers: NSArray; message 'availableLocaleIdentifiers';
    class function ISOLanguageCodes: NSArray; message 'ISOLanguageCodes';
    class function ISOCountryCodes: NSArray; message 'ISOCountryCodes';
    class function ISOCurrencyCodes: NSArray; message 'ISOCurrencyCodes';
    class function commonISOCurrencyCodes: NSArray; message 'commonISOCurrencyCodes'; { available in macos , ios , watchos , tvos  }
    class function preferredLanguages: NSArray; message 'preferredLanguages'; { available in macos , ios , watchos , tvos  }
    class function componentsFromLocaleIdentifier (string_: NSString): NSDictionary; message 'componentsFromLocaleIdentifier:';
    class function localeIdentifierFromComponents (dict: NSDictionary): NSString; message 'localeIdentifierFromComponents:';
    class function canonicalLocaleIdentifierFromString (string_: NSString): NSString; message 'canonicalLocaleIdentifierFromString:';
    class function canonicalLanguageIdentifierFromString (string_: NSString): NSString; message 'canonicalLanguageIdentifierFromString:';
    class function localeIdentifierFromWindowsLocaleCode (lcid: cuint32): NSString; message 'localeIdentifierFromWindowsLocaleCode:'; { available in macos , ios , watchos , tvos  }
    class function windowsLocaleCodeFromLocaleIdentifier (localeIdentifier: NSString): cuint32; message 'windowsLocaleCodeFromLocaleIdentifier:'; { available in macos , ios , watchos , tvos  }
    class function characterDirectionForLanguage (isoLangCode: NSString): NSLocaleLanguageDirection; message 'characterDirectionForLanguage:'; { available in macos , ios , watchos , tvos  }
    class function lineDirectionForLanguage (isoLangCode: NSString): NSLocaleLanguageDirection; message 'lineDirectionForLanguage:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCurrentLocaleDidChangeNotification: NSNotificationName { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLocaleIdentifier: NSLocaleKey; cvar; external;
  NSLocaleLanguageCode: NSLocaleKey; cvar; external;
  NSLocaleCountryCode: NSLocaleKey; cvar; external;
  NSLocaleScriptCode: NSLocaleKey; cvar; external;
  NSLocaleVariantCode: NSLocaleKey; cvar; external;
  NSLocaleExemplarCharacterSet: NSLocaleKey; cvar; external;
  NSLocaleCalendar: NSLocaleKey; cvar; external;
  NSLocaleCollationIdentifier: NSLocaleKey; cvar; external;
  NSLocaleUsesMetricSystem: NSLocaleKey; cvar; external;
  NSLocaleMeasurementSystem: NSLocaleKey; cvar; external;
  NSLocaleDecimalSeparator: NSLocaleKey; cvar; external;
  NSLocaleGroupingSeparator: NSLocaleKey; cvar; external;
  NSLocaleCurrencySymbol: NSLocaleKey; cvar; external;
  NSLocaleCurrencyCode: NSLocaleKey; cvar; external;
  NSLocaleCollatorIdentifier: NSLocaleKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLocaleQuotationBeginDelimiterKey: NSLocaleKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLocaleQuotationEndDelimiterKey: NSLocaleKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLocaleAlternateQuotationBeginDelimiterKey: NSLocaleKey { available in macos , ios , watchos , tvos  }; cvar; external;
  NSLocaleAlternateQuotationEndDelimiterKey: NSLocaleKey { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSGregorianCalendar: NSString deprecated 'replace with NSCalendarIdentifierGregorian'; cvar; external;
  NSBuddhistCalendar: NSString deprecated 'replace with NSCalendarIdentifierBuddhist'; cvar; external;
  NSChineseCalendar: NSString deprecated 'replace with NSCalendarIdentifierChinese'; cvar; external;
  NSHebrewCalendar: NSString deprecated 'replace with NSCalendarIdentifierHebrew'; cvar; external;
  NSIslamicCalendar: NSString deprecated 'replace with NSCalendarIdentifierIslamic'; cvar; external;
  NSIslamicCivilCalendar: NSString deprecated 'replace with NSCalendarIdentifierIslamicCivil'; cvar; external;
  NSJapaneseCalendar: NSString deprecated 'replace with NSCalendarIdentifierJapanese'; cvar; external;
  NSRepublicOfChinaCalendar: NSString deprecated 'replace with NSCalendarIdentifierRepublicOfChina'; cvar; external;
  NSPersianCalendar: NSString deprecated 'replace with NSCalendarIdentifierPersian'; cvar; external;
  NSIndianCalendar: NSString deprecated 'replace with NSCalendarIdentifierIndian'; cvar; external;
  NSISO8601Calendar: NSString deprecated 'replace with NSCalendarIdentifierISO8601'; cvar; external;
{$endif}

