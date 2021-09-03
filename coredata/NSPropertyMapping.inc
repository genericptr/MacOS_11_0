{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSPropertyMapping.h }

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

