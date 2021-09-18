{ Parsed from Foundation.framework NSObjCRuntime.h }

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFoundationVersionNumber: double; cvar; external;
{$endif}

{$if defined(TARGET_OS_MAC)}
{$ifdef TYPES}
const
  NSFoundationVersionNumber10_0 = 397.40;
  NSFoundationVersionNumber10_1 = 425.00;
  NSFoundationVersionNumber10_1_1 = 425.00;
  NSFoundationVersionNumber10_1_2 = 425.00;
  NSFoundationVersionNumber10_1_3 = 425.00;
  NSFoundationVersionNumber10_1_4 = 425.00;
  NSFoundationVersionNumber10_2 = 462.00;
  NSFoundationVersionNumber10_2_1 = 462.00;
  NSFoundationVersionNumber10_2_2 = 462.00;
  NSFoundationVersionNumber10_2_3 = 462.00;
  NSFoundationVersionNumber10_2_4 = 462.00;
  NSFoundationVersionNumber10_2_5 = 462.00;
  NSFoundationVersionNumber10_2_6 = 462.00;
  NSFoundationVersionNumber10_2_7 = 462.70;
  NSFoundationVersionNumber10_2_8 = 462.70;
  NSFoundationVersionNumber10_3 = 500.00;
  NSFoundationVersionNumber10_3_1 = 500.00;
  NSFoundationVersionNumber10_3_2 = 500.30;
  NSFoundationVersionNumber10_3_3 = 500.54;
  NSFoundationVersionNumber10_3_4 = 500.56;
  NSFoundationVersionNumber10_3_5 = 500.56;
  NSFoundationVersionNumber10_3_6 = 500.56;
  NSFoundationVersionNumber10_3_7 = 500.56;
  NSFoundationVersionNumber10_3_8 = 500.56;
  NSFoundationVersionNumber10_3_9 = 500.58;
  NSFoundationVersionNumber10_4 = 567.00;
  NSFoundationVersionNumber10_4_1 = 567.00;
  NSFoundationVersionNumber10_4_2 = 567.12;
  NSFoundationVersionNumber10_4_3 = 567.21;
  NSFoundationVersionNumber10_4_4_Intel = 567.23;
  NSFoundationVersionNumber10_4_4_PowerPC = 567.21;
  NSFoundationVersionNumber10_4_5 = 567.25;
  NSFoundationVersionNumber10_4_6 = 567.26;
  NSFoundationVersionNumber10_4_7 = 567.27;
  NSFoundationVersionNumber10_4_8 = 567.28;
  NSFoundationVersionNumber10_4_9 = 567.29;
  NSFoundationVersionNumber10_4_10 = 567.29;
  NSFoundationVersionNumber10_4_11 = 567.36;
  NSFoundationVersionNumber10_5 = 677.00;
  NSFoundationVersionNumber10_5_1 = 677.10;
  NSFoundationVersionNumber10_5_2 = 677.15;
  NSFoundationVersionNumber10_5_3 = 677.19;
  NSFoundationVersionNumber10_5_4 = 677.19;
  NSFoundationVersionNumber10_5_5 = 677.21;
  NSFoundationVersionNumber10_5_6 = 677.22;
  NSFoundationVersionNumber10_5_7 = 677.24;
  NSFoundationVersionNumber10_5_8 = 677.26;
  NSFoundationVersionNumber10_6 = 751.00;
  NSFoundationVersionNumber10_6_1 = 751.00;
  NSFoundationVersionNumber10_6_2 = 751.14;
  NSFoundationVersionNumber10_6_3 = 751.21;
  NSFoundationVersionNumber10_6_4 = 751.29;
  NSFoundationVersionNumber10_6_5 = 751.42;
  NSFoundationVersionNumber10_6_6 = 751.53;
  NSFoundationVersionNumber10_6_7 = 751.53;
  NSFoundationVersionNumber10_6_8 = 751.62;
  NSFoundationVersionNumber10_7 = 833.10;
  NSFoundationVersionNumber10_7_1 = 833.10;
  NSFoundationVersionNumber10_7_2 = 833.20;
  NSFoundationVersionNumber10_7_3 = 833.24;
  NSFoundationVersionNumber10_7_4 = 833.25;
  NSFoundationVersionNumber10_8 = 945.00;
  NSFoundationVersionNumber10_8_1 = 945.00;
  NSFoundationVersionNumber10_8_2 = 945.11;
  NSFoundationVersionNumber10_8_3 = 945.16;
  NSFoundationVersionNumber10_8_4 = 945.18;
  NSFoundationVersionNumber10_9 = 1056;
  NSFoundationVersionNumber10_9_1 = 1056;
  NSFoundationVersionNumber10_9_2 = 1056.13;
  NSFoundationVersionNumber10_10 = 1151.16;
  NSFoundationVersionNumber10_10_1 = 1151.16;
  NSFoundationVersionNumber10_10_2 = 1152.14;
  NSFoundationVersionNumber10_10_3 = 1153.20;
  NSFoundationVersionNumber10_10_4 = 1153.20;
  NSFoundationVersionNumber10_10_5 = 1154;
  NSFoundationVersionNumber10_10_Max = 1199;
  NSFoundationVersionNumber10_11 = 1252;
  NSFoundationVersionNumber10_11_1 = 1255.1;
  NSFoundationVersionNumber10_11_2 = 1256.1;
  NSFoundationVersionNumber10_11_3 = 1256.1;
  NSFoundationVersionNumber10_11_4 = 1258;
  NSFoundationVersionNumber10_11_Max = 1299;
{$endif}

{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  NSFoundationVersionNumber_iPhoneOS_2_0 = 678.24;
  NSFoundationVersionNumber_iPhoneOS_2_1 = 678.26;
  NSFoundationVersionNumber_iPhoneOS_2_2 = 678.29;
  NSFoundationVersionNumber_iPhoneOS_3_0 = 678.47;
  NSFoundationVersionNumber_iPhoneOS_3_1 = 678.51;
  NSFoundationVersionNumber_iPhoneOS_3_2 = 678.60;
  NSFoundationVersionNumber_iOS_4_0 = 751.32;
  NSFoundationVersionNumber_iOS_4_1 = 751.37;
  NSFoundationVersionNumber_iOS_4_2 = 751.49;
  NSFoundationVersionNumber_iOS_4_3 = 751.49;
  NSFoundationVersionNumber_iOS_5_0 = 881.00;
  NSFoundationVersionNumber_iOS_5_1 = 890.10;
  NSFoundationVersionNumber_iOS_6_0 = 992.00;
  NSFoundationVersionNumber_iOS_6_1 = 993.00;
  NSFoundationVersionNumber_iOS_7_0 = 1047.20;
  NSFoundationVersionNumber_iOS_7_1 = 1047.25;
  NSFoundationVersionNumber_iOS_8_0 = 1140.11;
  NSFoundationVersionNumber_iOS_8_1 = 1141.1;
  NSFoundationVersionNumber_iOS_8_2 = 1142.14;
  NSFoundationVersionNumber_iOS_8_3 = 1144.17;
  NSFoundationVersionNumber_iOS_8_4 = 1144.17;
  NSFoundationVersionNumber_iOS_8_x_Max = 1199;
  NSFoundationVersionNumber_iOS_9_0 = 1240.1;
  NSFoundationVersionNumber_iOS_9_1 = 1241.14;
  NSFoundationVersionNumber_iOS_9_2 = 1242.12;
  NSFoundationVersionNumber_iOS_9_3 = 1242.12;
  NSFoundationVersionNumber_iOS_9_4 = 1280.25;
  NSFoundationVersionNumber_iOS_9_x_Max = 1299;
{$endif}

{$endif}
{$ifdef TYPES}
type
  NSExceptionName = NSString;
  NSExceptionNamePtr = ^NSExceptionName;
  NSRunLoopMode = NSString;
  NSRunLoopModePtr = ^NSRunLoopMode;
{$endif}

{$ifdef FUNCTIONS}
function NSStringFromSelector(aSelector: SEL): NSString; cdecl; external;
function NSSelectorFromString(aSelectorName: NSString): SEL; cdecl; external;
function NSStringFromClass(aClass: pobjc_class): NSString; cdecl; external;
function NSClassFromString(aClassName: NSString): pobjc_class; cdecl; external;
function NSStringFromProtocol(proto: Protocol): NSString; cdecl; external; { available in macos , ios , watchos , tvos  }
function NSProtocolFromString(namestr: NSString): Protocol; cdecl; external; { available in macos , ios , watchos , tvos  }
function NSGetSizeAndAlignment(typePtr: PChar; sizep: NSUIntegerPtr; alignp: NSUIntegerPtr): PChar; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  NSComparisonResult = NSInteger;
  NSComparisonResultPtr = ^NSComparisonResult;
{$endif}

{$if defined(NS_BLOCKS_AVAILABLE)}
{$ifdef TYPES}
type
  NSComparator = reference to function (obj1: id; obj2: id): NSComparisonResult; cblock; cdecl;
{$endif}

{$endif}

{$ifdef TYPES}
const
  NSIntegerMax = LONG_MAX;
  NSIntegerMin = LONG_MIN;
  NSUIntegerMax = ULONG_MAX;

const
  NSEnumerationConcurrent = 1 shl 0;
  NSEnumerationReverse = 1 shl 1;

const
  NSSortConcurrent = 1 shl 0;
  NSSortStable = 1 shl 4;

const
  NSQualityOfServiceUserInteractive = $21;
  NSQualityOfServiceUserInitiated = $19;
  NSQualityOfServiceUtility = $11;
  NSQualityOfServiceBackground = $09;
  NSQualityOfServiceDefault = -1;

type
  NSEnumerationOptions = NSUInteger;
  NSEnumerationOptionsPtr = ^NSEnumerationOptions;
  NSSortOptions = NSUInteger;
  NSSortOptionsPtr = ^NSSortOptions;
  NSQualityOfService = NSInteger;
  NSQualityOfServicePtr = ^NSQualityOfService;

const
  NSNotFound = NSIntegerMax;
{$endif}

