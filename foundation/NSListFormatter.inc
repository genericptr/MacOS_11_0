{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSListFormatter.h }

{$ifdef TYPES}
type
  NSListFormatterPtr = ^NSListFormatter;
{$endif}

{$ifdef CLASSES}

type
  NSListFormatter = objcclass external (NSFormatter)
  private
    _listFormatter: pointer;
    _locale: NSLocale;
    _itemFormatter: NSFormatter;
  public
    procedure setLocale(newValue: NSLocale); message 'setLocale:';
    function locale: NSLocale; message 'locale';
    procedure setItemFormatter(newValue: NSFormatter); message 'setItemFormatter:';
    function itemFormatter: NSFormatter; message 'itemFormatter';
    class function localizedStringByJoiningStrings (strings: NSArray): NSString; message 'localizedStringByJoiningStrings:';
    function stringFromItems (items: NSArray): NSString; message 'stringFromItems:';
    function stringForObjectValue (obj: id): NSString; message 'stringForObjectValue:';
  end;
{$endif}

