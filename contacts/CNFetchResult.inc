{ Parsed from Contacts.framework CNFetchResult.h }

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

