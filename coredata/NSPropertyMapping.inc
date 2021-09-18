{ Parsed from CoreData.framework NSPropertyMapping.h }

{$ifdef TYPES}
type
  NSPropertyMappingPtr = ^NSPropertyMapping;
{$endif}

{$ifdef CLASSES}

type
  NSPropertyMapping = objcclass external (NSObject)
  private
  public
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setValueExpression(newValue: NSExpression); message 'setValueExpression:';
    function valueExpression: NSExpression; message 'valueExpression';
    procedure setUserInfo(newValue: NSDictionary); message 'setUserInfo:';
    function userInfo: NSDictionary; message 'userInfo';
  end;
{$endif}

