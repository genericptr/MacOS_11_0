{ Parsed from Foundation.framework NSNumberFormatter.h }

{ Types from NSNumberFormatter }
{$ifdef TYPES}

type
  NSNumberFormatterStyle = NSUInteger;
type
  NSNumberFormatterStylePtr = ^NSNumberFormatterStyle;

const
  NSNumberFormatterNoStyle = kCFNumberFormatterNoStyle;
  NSNumberFormatterDecimalStyle = kCFNumberFormatterDecimalStyle;
  NSNumberFormatterCurrencyStyle = kCFNumberFormatterCurrencyStyle;
  NSNumberFormatterPercentStyle = kCFNumberFormatterPercentStyle;
  NSNumberFormatterScientificStyle = kCFNumberFormatterScientificStyle;
  NSNumberFormatterSpellOutStyle = kCFNumberFormatterSpellOutStyle;
  //NSNumberFormatterOrdinalStyle = kCFNumberFormatterOrdinalStyle { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 };
  //NSNumberFormatterCurrencyISOCodeStyle = kCFNumberFormatterCurrencyISOCodeStyle { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 };
  //NSNumberFormatterCurrencyPluralStyle = kCFNumberFormatterCurrencyPluralStyle { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 };
  //NSNumberFormatterCurrencyAccountingStyle = kCFNumberFormatterCurrencyAccountingStyle { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 };

type
  NSNumberFormatterPadPosition = NSUInteger;
type
  NSNumberFormatterPadPositionPtr = ^NSNumberFormatterPadPosition;

const
  NSNumberFormatterPadBeforePrefix = kCFNumberFormatterPadBeforePrefix;
  NSNumberFormatterPadAfterPrefix = kCFNumberFormatterPadAfterPrefix;
  NSNumberFormatterPadBeforeSuffix = kCFNumberFormatterPadBeforeSuffix;
  NSNumberFormatterPadAfterSuffix = kCFNumberFormatterPadAfterSuffix;

type
  NSNumberFormatterRoundingMode = NSUInteger;
type
  NSNumberFormatterRoundingModePtr = ^NSNumberFormatterRoundingMode;

const
  NSNumberFormatterRoundCeiling = kCFNumberFormatterRoundCeiling;
  NSNumberFormatterRoundFloor = kCFNumberFormatterRoundFloor;
  NSNumberFormatterRoundDown = kCFNumberFormatterRoundDown;
  NSNumberFormatterRoundUp = kCFNumberFormatterRoundUp;
  NSNumberFormatterRoundHalfEven = kCFNumberFormatterRoundHalfEven;
  NSNumberFormatterRoundHalfDown = kCFNumberFormatterRoundHalfDown;
  NSNumberFormatterRoundHalfUp = kCFNumberFormatterRoundHalfUp;
{$endif}


{$ifdef TYPES}
type
  NSNumberFormatterPtr = ^NSNumberFormatter;
{$endif}

{$ifdef TYPES}
type
  NSNumberFormatterBehavior = NSUInteger;
  NSNumberFormatterBehaviorPtr = ^NSNumberFormatterBehavior;

const
  NSNumberFormatterBehaviorDefault = 0;
  {$if defined(TARGET_OS_OSX)}
  NSNumberFormatterBehavior10_0 = 1000;
  {$endif}
  NSNumberFormatterBehavior10_4 = 1040;
{$endif}

{$ifdef CLASSES}

type
  NSNumberFormatter = objcclass external (NSFormatter)
  private
    _attributes: NSMutableDictionary;
    _formatter: CFNumberFormatterRef;
    _counter: NSUInteger;
    _behavior: NSNumberFormatterBehavior;
    _lock: NSRecursiveLock;
    _stateBitMask: culong;
    _cacheGeneration: NSInteger;
    _reserved:array[0..7] of pointer;
  public
    procedure setFormattingContext(newValue: NSFormattingContext); message 'setFormattingContext:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function formattingContext: NSFormattingContext; message 'formattingContext'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
    function getObjectValue_forString_range_error (obj: idPtr; string_: NSString; rangep: NSRangePtr; error: NSErrorPtr): objcbool; message 'getObjectValue:forString:range:error:';
    function stringFromNumber (number: NSNumber): NSString; message 'stringFromNumber:';
    function numberFromString (string_: NSString): NSNumber; message 'numberFromString:';
    class function localizedStringFromNumber_numberStyle (num: NSNumber; nstyle: NSNumberFormatterStyle): NSString; message 'localizedStringFromNumber:numberStyle:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    class function defaultFormatterBehavior: NSNumberFormatterBehavior; message 'defaultFormatterBehavior';
    class procedure setDefaultFormatterBehavior (behavior: NSNumberFormatterBehavior); message 'setDefaultFormatterBehavior:';
    procedure setNumberStyle(newValue: NSNumberFormatterStyle); message 'setNumberStyle:';
    function numberStyle: NSNumberFormatterStyle; message 'numberStyle';
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setGeneratesDecimalNumbers(newValue: objcbool); message 'setGeneratesDecimalNumbers:';
    function generatesDecimalNumbers: objcbool; message 'generatesDecimalNumbers';
    procedure setFormatterBehavior(newValue: NSNumberFormatterBehavior); message 'setFormatterBehavior:';
    function formatterBehavior: NSNumberFormatterBehavior; message 'formatterBehavior';
    procedure setNegativeFormat(newValue: NSString); message 'setNegativeFormat:';
    function negativeFormat: NSString; message 'negativeFormat';
    procedure setTextAttributesForNegativeValues(newValue: NSDictionary); message 'setTextAttributesForNegativeValues:';
    function textAttributesForNegativeValues: NSDictionary; message 'textAttributesForNegativeValues';
    procedure setPositiveFormat(newValue: NSString); message 'setPositiveFormat:';
    function positiveFormat: NSString; message 'positiveFormat';
    procedure setTextAttributesForPositiveValues(newValue: NSDictionary); message 'setTextAttributesForPositiveValues:';
    function textAttributesForPositiveValues: NSDictionary; message 'textAttributesForPositiveValues';
    procedure setAllowsFloats(newValue: objcbool); message 'setAllowsFloats:';
    function allowsFloats: objcbool; message 'allowsFloats';
    procedure setDecimalSeparator(newValue: NSString); message 'setDecimalSeparator:';
    function decimalSeparator: NSString; message 'decimalSeparator';
    procedure setAlwaysShowsDecimalSeparator(newValue: objcbool); message 'setAlwaysShowsDecimalSeparator:';
    function alwaysShowsDecimalSeparator: objcbool; message 'alwaysShowsDecimalSeparator';
    procedure setCurrencyDecimalSeparator(newValue: NSString); message 'setCurrencyDecimalSeparator:';
    function currencyDecimalSeparator: NSString; message 'currencyDecimalSeparator';
    procedure setUsesGroupingSeparator(newValue: objcbool); message 'setUsesGroupingSeparator:';
    function usesGroupingSeparator: objcbool; message 'usesGroupingSeparator';
    procedure setGroupingSeparator(newValue: NSString); message 'setGroupingSeparator:';
    function groupingSeparator: NSString; message 'groupingSeparator';
    procedure setZeroSymbol(newValue: NSString); message 'setZeroSymbol:';
    function zeroSymbol: NSString; message 'zeroSymbol';
    procedure setTextAttributesForZero(newValue: NSDictionary); message 'setTextAttributesForZero:';
    function textAttributesForZero: NSDictionary; message 'textAttributesForZero';
    procedure setNilSymbol(newValue: NSString); message 'setNilSymbol:';
    function nilSymbol: NSString; message 'nilSymbol';
    procedure setTextAttributesForNil(newValue: NSDictionary); message 'setTextAttributesForNil:';
    function textAttributesForNil: NSDictionary; message 'textAttributesForNil';
    procedure setNotANumberSymbol(newValue: NSString); message 'setNotANumberSymbol:';
    function notANumberSymbol: NSString; message 'notANumberSymbol';
    procedure setTextAttributesForNotANumber(newValue: NSDictionary); message 'setTextAttributesForNotANumber:';
    function textAttributesForNotANumber: NSDictionary; message 'textAttributesForNotANumber';
    procedure setPositiveInfinitySymbol(newValue: NSString); message 'setPositiveInfinitySymbol:';
    function positiveInfinitySymbol: NSString; message 'positiveInfinitySymbol';
    procedure setTextAttributesForPositiveInfinity(newValue: NSDictionary); message 'setTextAttributesForPositiveInfinity:';
    function textAttributesForPositiveInfinity: NSDictionary; message 'textAttributesForPositiveInfinity';
    procedure setNegativeInfinitySymbol(newValue: NSString); message 'setNegativeInfinitySymbol:';
    function negativeInfinitySymbol: NSString; message 'negativeInfinitySymbol';
    procedure setTextAttributesForNegativeInfinity(newValue: NSDictionary); message 'setTextAttributesForNegativeInfinity:';
    function textAttributesForNegativeInfinity: NSDictionary; message 'textAttributesForNegativeInfinity';
    procedure setPositivePrefix(newValue: NSString); message 'setPositivePrefix:';
    function positivePrefix: NSString; message 'positivePrefix';
    procedure setPositiveSuffix(newValue: NSString); message 'setPositiveSuffix:';
    function positiveSuffix: NSString; message 'positiveSuffix';
    procedure setNegativePrefix(newValue: NSString); message 'setNegativePrefix:';
    function negativePrefix: NSString; message 'negativePrefix';
    procedure setNegativeSuffix(newValue: NSString); message 'setNegativeSuffix:';
    function negativeSuffix: NSString; message 'negativeSuffix';
    procedure setCurrencyCode(newValue: NSString); message 'setCurrencyCode:';
    function currencyCode: NSString; message 'currencyCode';
    procedure setCurrencySymbol(newValue: NSString); message 'setCurrencySymbol:';
    function currencySymbol: NSString; message 'currencySymbol';
    procedure setInternationalCurrencySymbol(newValue: NSString); message 'setInternationalCurrencySymbol:';
    function internationalCurrencySymbol: NSString; message 'internationalCurrencySymbol';
    procedure setPercentSymbol(newValue: NSString); message 'setPercentSymbol:';
    function percentSymbol: NSString; message 'percentSymbol';
    procedure setPerMillSymbol(newValue: NSString); message 'setPerMillSymbol:';
    function perMillSymbol: NSString; message 'perMillSymbol';
    procedure setMinusSign(newValue: NSString); message 'setMinusSign:';
    function minusSign: NSString; message 'minusSign';
    procedure setPlusSign(newValue: NSString); message 'setPlusSign:';
    function plusSign: NSString; message 'plusSign';
    procedure setExponentSymbol(newValue: NSString); message 'setExponentSymbol:';
    function exponentSymbol: NSString; message 'exponentSymbol';
    procedure setGroupingSize(newValue: NSUInteger); message 'setGroupingSize:';
    function groupingSize: NSUInteger; message 'groupingSize';
    procedure setSecondaryGroupingSize(newValue: NSUInteger); message 'setSecondaryGroupingSize:';
    function secondaryGroupingSize: NSUInteger; message 'secondaryGroupingSize';
    procedure setMultiplier(newValue: NSNumber); message 'setMultiplier:';
    function multiplier: NSNumber; message 'multiplier';
    procedure setFormatWidth(newValue: NSUInteger); message 'setFormatWidth:';
    function formatWidth: NSUInteger; message 'formatWidth';
    procedure setPaddingCharacter(newValue: NSString); message 'setPaddingCharacter:';
    function paddingCharacter: NSString; message 'paddingCharacter';
    procedure setPaddingPosition(newValue: NSNumberFormatterPadPosition); message 'setPaddingPosition:';
    function paddingPosition: NSNumberFormatterPadPosition; message 'paddingPosition';
    procedure setRoundingMode(newValue: NSNumberFormatterRoundingMode); message 'setRoundingMode:';
    function roundingMode: NSNumberFormatterRoundingMode; message 'roundingMode';
    procedure setRoundingIncrement(newValue: NSNumber); message 'setRoundingIncrement:';
    function roundingIncrement: NSNumber; message 'roundingIncrement';
    procedure setMinimumIntegerDigits(newValue: NSUInteger); message 'setMinimumIntegerDigits:';
    function minimumIntegerDigits: NSUInteger; message 'minimumIntegerDigits';
    procedure setMaximumIntegerDigits(newValue: NSUInteger); message 'setMaximumIntegerDigits:';
    function maximumIntegerDigits: NSUInteger; message 'maximumIntegerDigits';
    procedure setMinimumFractionDigits(newValue: NSUInteger); message 'setMinimumFractionDigits:';
    function minimumFractionDigits: NSUInteger; message 'minimumFractionDigits';
    procedure setMaximumFractionDigits(newValue: NSUInteger); message 'setMaximumFractionDigits:';
    function maximumFractionDigits: NSUInteger; message 'maximumFractionDigits';
    procedure setMinimum(newValue: NSNumber); message 'setMinimum:';
    function minimum: NSNumber; message 'minimum';
    procedure setMaximum(newValue: NSNumber); message 'setMaximum:';
    function maximum: NSNumber; message 'maximum';
    procedure setCurrencyGroupingSeparator(newValue: NSString); message 'setCurrencyGroupingSeparator:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function currencyGroupingSeparator: NSString; message 'currencyGroupingSeparator'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setLenient(newValue: objcbool); message 'setLenient:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function isLenient: objcbool; message 'isLenient'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setUsesSignificantDigits(newValue: objcbool); message 'setUsesSignificantDigits:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function usesSignificantDigits: objcbool; message 'usesSignificantDigits'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setMinimumSignificantDigits(newValue: NSUInteger); message 'setMinimumSignificantDigits:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function minimumSignificantDigits: NSUInteger; message 'minimumSignificantDigits'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setMaximumSignificantDigits(newValue: NSUInteger); message 'setMaximumSignificantDigits:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function maximumSignificantDigits: NSUInteger; message 'maximumSignificantDigits'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setPartialStringValidationEnabled(newValue: objcbool); message 'setPartialStringValidationEnabled:'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
    function isPartialStringValidationEnabled: objcbool; message 'isPartialStringValidationEnabled'; { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  NSNumberFormatterCompatibility = objccategory external (NSNumberFormatter)
    procedure setHasThousandSeparators(newValue: objcbool); message 'setHasThousandSeparators:';
    function hasThousandSeparators: objcbool; message 'hasThousandSeparators';
    procedure setThousandSeparator(newValue: NSString); message 'setThousandSeparator:';
    function thousandSeparator: NSString; message 'thousandSeparator';
    procedure setLocalizesFormat(newValue: objcbool); message 'setLocalizesFormat:';
    function localizesFormat: objcbool; message 'localizesFormat';
    procedure setFormat(newValue: NSString); message 'setFormat:';
    function format: NSString; message 'format';
    procedure setAttributedStringForZero(newValue: NSAttributedString); message 'setAttributedStringForZero:';
    function attributedStringForZero: NSAttributedString; message 'attributedStringForZero';
    procedure setAttributedStringForNil(newValue: NSAttributedString); message 'setAttributedStringForNil:';
    function attributedStringForNil: NSAttributedString; message 'attributedStringForNil';
    procedure setAttributedStringForNotANumber(newValue: NSAttributedString); message 'setAttributedStringForNotANumber:';
    function attributedStringForNotANumber: NSAttributedString; message 'attributedStringForNotANumber';
    procedure setRoundingBehavior(newValue: NSDecimalNumberHandler); message 'setRoundingBehavior:';
    function roundingBehavior: NSDecimalNumberHandler; message 'roundingBehavior';
  end;
{$endif}

{$endif}
