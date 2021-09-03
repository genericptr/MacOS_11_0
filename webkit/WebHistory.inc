{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebHistory.h }

{$ifdef TYPES}
type
  WebHistoryPtr = ^WebHistory;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebHistoryItemsAddedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebHistoryItemsRemovedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebHistoryAllItemsRemovedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebHistoryLoadedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebHistorySavedNotification: NSString deprecated 'in 10_3, 10_14'; cvar; external;
  WebHistoryItemsKey: NSString deprecated 'in 10_3, 10_14'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  WebHistory = objcclass external (NSObject)
  private
    _historyPrivate: WebHistoryPrivate;
  public
    class function optionalSharedHistory: WebHistory; message 'optionalSharedHistory';
    class procedure setOptionalSharedHistory (history: WebHistory); message 'setOptionalSharedHistory:';
    function loadFromURL_error (URL: NSURL; error: NSErrorPtr): objcbool; message 'loadFromURL:error:';
    function saveToURL_error (URL: NSURL; error: NSErrorPtr): objcbool; message 'saveToURL:error:';
    procedure addItems (newItems: NSArray); message 'addItems:';
    procedure removeItems (items: NSArray); message 'removeItems:';
    procedure removeAllItems; message 'removeAllItems';
    function orderedLastVisitedDays: NSArray; message 'orderedLastVisitedDays';
    function orderedItemsLastVisitedOnDay (calendarDate: NSCalendarDate): NSArray; message 'orderedItemsLastVisitedOnDay:';
    function itemForURL (URL: NSURL): WebHistoryItem; message 'itemForURL:';
    procedure setHistoryItemLimit(newValue: cint); message 'setHistoryItemLimit:';
    function historyItemLimit: cint; message 'historyItemLimit';
    procedure setHistoryAgeInDaysLimit(newValue: cint); message 'setHistoryAgeInDaysLimit:';
    function historyAgeInDaysLimit: cint; message 'historyAgeInDaysLimit';
  end;
{$endif}

