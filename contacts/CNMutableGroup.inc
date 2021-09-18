{ Parsed from Contacts.framework CNMutableGroup.h }

{$ifdef TYPES}
type
  CNMutableGroupPtr = ^CNMutableGroup;
{$endif}

{$ifdef CLASSES}

type
  CNMutableGroup = objcclass external (CNGroup)
  public
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;
{$endif}

