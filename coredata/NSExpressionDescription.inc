{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSExpressionDescription.h }

{$ifdef TYPES}
type
  NSExpressionDescriptionPtr = ^NSExpressionDescription;
{$endif}

{$ifdef CLASSES}

type
  NSExpressionDescription = objcclass external (NSPropertyDescription)
  private
  public
    procedure setExpression(newValue: NSExpression); message 'setExpression:';
    function expression: NSExpression; message 'expression';
    procedure setExpressionResultType(newValue: NSAttributeType); message 'setExpressionResultType:';
    function expressionResultType: NSAttributeType; message 'expressionResultType';
  end;
{$endif}

