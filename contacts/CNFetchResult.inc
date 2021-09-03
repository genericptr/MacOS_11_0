{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNFetchResult.h }

{$ifdef TYPES}
type
  CNFetchResultPtr = ^CNFetchResult;
{$endif}

{$ifdef CLASSES}

type
  CNFetchResult = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function value: id; message 'value';
    function currentHistoryToken: NSData; message 'currentHistoryToken';
  end;
{$endif}

