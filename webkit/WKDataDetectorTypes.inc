{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKDataDetectorTypes.h }

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  WKDataDetectorTypes = NSUInteger;
  WKDataDetectorTypesPtr = ^WKDataDetectorTypes;

const
  WKDataDetectorTypeNone = 0;
  WKDataDetectorTypePhoneNumber = 1 shl 0;
  WKDataDetectorTypeLink = 1 shl 1;
  WKDataDetectorTypeAddress = 1 shl 2;
  WKDataDetectorTypeCalendarEvent = 1 shl 3;
  WKDataDetectorTypeTrackingNumber = 1 shl 4;
  WKDataDetectorTypeFlightNumber = 1 shl 5;
  WKDataDetectorTypeLookupSuggestion = 1 shl 6;
  WKDataDetectorTypeAll = NSUIntegerMax;
  WKDataDetectorTypeSpotlightSuggestion = WKDataDetectorTypeLookupSuggestion deprecated 'replace with WKDataDetectorTypeLookupSuggestion';
{$endif}

{$endif}
