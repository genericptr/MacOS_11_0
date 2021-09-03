{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebHistoryItem.h }

{$ifdef TYPES}
type
  WebHistoryItemPtr = ^WebHistoryItem;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebHistoryItemChangedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  WebHistoryItem = objcclass external (NSObject, NSCopyingProtocol)
  private
    _private: WebHistoryItemPrivate;
  public
    function initWithURLString_title_lastVisitedTimeInterval (URLString: NSString; title: NSString; time: NSTimeInterval): id; message 'initWithURLString:title:lastVisitedTimeInterval:';
    function originalURLString: NSString; message 'originalURLString';
    function URLString: NSString; message 'URLString';
    function title: NSString; message 'title';
    function lastVisitedTimeInterval: NSTimeInterval; message 'lastVisitedTimeInterval';
    procedure setAlternateTitle(newValue: NSString); message 'setAlternateTitle:';
    function alternateTitle: NSString; message 'alternateTitle';
    function icon: NSImage; message 'icon';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

