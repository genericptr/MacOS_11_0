{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSFetchRequestExpression.h }

{$ifdef TYPES}
type
  NSFetchRequestExpressionPtr = ^NSFetchRequestExpression;
{$endif}

{$ifdef TYPES}
const
  NSFetchRequestExpressionType = 50;
{$endif}

{$ifdef CLASSES}

type
  NSFetchRequestExpression = objcclass external (NSExpression)
  private
  public
    class function expressionForFetch_context_countOnly (fetch: NSExpression; context: NSExpression; countFlag: objcbool): NSExpression; message 'expressionForFetch:context:countOnly:';
    function requestExpression: NSExpression; message 'requestExpression';
    function contextExpression: NSExpression; message 'contextExpression';
    function isCountOnlyRequest: objcbool; message 'isCountOnlyRequest';
  end;
{$endif}

