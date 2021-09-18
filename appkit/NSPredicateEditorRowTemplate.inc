{ Parsed from AppKit.framework NSPredicateEditorRowTemplate.h }

{$ifdef TYPES}
type
  NSPredicateEditorRowTemplatePtr = ^NSPredicateEditorRowTemplate;
{$endif}

{$ifdef CLASSES}

type
  NSPredicateEditorRowTemplate = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  public
    function matchForPredicate (predicate: NSPredicate): double; message 'matchForPredicate:';
    function templateViews: NSArray; message 'templateViews';
    procedure setPredicate (predicate: NSPredicate); message 'setPredicate:';
    function predicateWithSubpredicates (subpredicates: NSArray): NSPredicate; message 'predicateWithSubpredicates:';
    function displayableSubpredicatesOfPredicate (predicate: NSPredicate): NSArray; message 'displayableSubpredicatesOfPredicate:';
    function initWithLeftExpressions_rightExpressions_modifier_operators_options (leftExpressions: NSArray; rightExpressions: NSArray; modifier: NSComparisonPredicateModifier; operators: NSArray; options: NSUInteger): id; message 'initWithLeftExpressions:rightExpressions:modifier:operators:options:';
    function initWithLeftExpressions_rightExpressionAttributeType_modifier_operators_options (leftExpressions: NSArray; attributeType: NSAttributeType; modifier: NSComparisonPredicateModifier; operators: NSArray; options: NSUInteger): id; message 'initWithLeftExpressions:rightExpressionAttributeType:modifier:operators:options:';
    function initWithCompoundTypes (compoundTypes: NSArray): id; message 'initWithCompoundTypes:';
    function leftExpressions: NSArray; message 'leftExpressions';
    function rightExpressions: NSArray; message 'rightExpressions';
    function rightExpressionAttributeType: NSAttributeType; message 'rightExpressionAttributeType';
    function modifier: NSComparisonPredicateModifier; message 'modifier';
    function operators: NSArray; message 'operators';
    function options: NSUInteger; message 'options';
    function compoundTypes: NSArray; message 'compoundTypes';
    class function templatesWithAttributeKeyPaths_inEntityDescription (keyPaths: NSArray; entityDescription: NSEntityDescription): NSArray; message 'templatesWithAttributeKeyPaths:inEntityDescription:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

