{ Parsed from Foundation.framework NSComparisonPredicate.h }

{$ifdef TYPES}
type
  NSComparisonPredicatePtr = ^NSComparisonPredicate;
{$endif}

{$ifdef TYPES}
type
  NSComparisonPredicateOptions = NSUInteger;
  NSComparisonPredicateOptionsPtr = ^NSComparisonPredicateOptions;

const
  NSCaseInsensitivePredicateOption = $01;
  NSDiacriticInsensitivePredicateOption = $02;
  NSNormalizedPredicateOption = $04 { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 };

type
  NSComparisonPredicateModifier = NSUInteger;
  NSComparisonPredicateModifierPtr = ^NSComparisonPredicateModifier;

const
  NSDirectPredicateModifier = 0;
  NSAllPredicateModifier = 1;
  NSAnyPredicateModifier = 2;

type
  NSPredicateOperatorType = NSUInteger;
  NSPredicateOperatorTypePtr = ^NSPredicateOperatorType;

const
  NSLessThanPredicateOperatorType = 0;
  NSLessThanOrEqualToPredicateOperatorType = 1;
  NSGreaterThanPredicateOperatorType = 2;
  NSGreaterThanOrEqualToPredicateOperatorType = 3;
  NSEqualToPredicateOperatorType = 4;
  NSNotEqualToPredicateOperatorType = 5;
  NSMatchesPredicateOperatorType = 6;
  NSLikePredicateOperatorType = 7;
  NSBeginsWithPredicateOperatorType = 8;
  NSEndsWithPredicateOperatorType = 9;
  NSInPredicateOperatorType = 10;
  NSCustomSelectorPredicateOperatorType = 11;
  NSContainsPredicateOperatorType = 99 { available in macos 10.5, ios 3.0, watchos 2.0, tvos 9.0 };
  NSBetweenPredicateOperatorType = 100 { available in macos 10.5, ios 3.0, watchos 2.0, tvos 9.0 };
{$endif}

{$ifdef CLASSES}

type
  NSComparisonPredicate = objcclass external (NSPredicate)
  private
    _reserved2: pointer;
    _predicateOperator: NSPredicateOperator;
    _lhs: NSExpression;
    _rhs: NSExpression;
  public
    class function predicateWithLeftExpression_rightExpression_modifier_type_options (lhs: NSExpression; rhs: NSExpression; modifier: NSComparisonPredicateModifier; type_: NSPredicateOperatorType; options: NSComparisonPredicateOptions): NSComparisonPredicate; message 'predicateWithLeftExpression:rightExpression:modifier:type:options:';
    class function predicateWithLeftExpression_rightExpression_customSelector (lhs: NSExpression; rhs: NSExpression; selector: SEL): NSComparisonPredicate; message 'predicateWithLeftExpression:rightExpression:customSelector:';
    function initWithLeftExpression_rightExpression_modifier_type_options (lhs: NSExpression; rhs: NSExpression; modifier: NSComparisonPredicateModifier; type_: NSPredicateOperatorType; options: NSComparisonPredicateOptions): id; message 'initWithLeftExpression:rightExpression:modifier:type:options:'; { NS_DESIGNATED_INITIALIZER }
    function initWithLeftExpression_rightExpression_customSelector (lhs: NSExpression; rhs: NSExpression; selector: SEL): id; message 'initWithLeftExpression:rightExpression:customSelector:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function predicateOperatorType: NSPredicateOperatorType; message 'predicateOperatorType';
    function comparisonPredicateModifier: NSComparisonPredicateModifier; message 'comparisonPredicateModifier';
    function leftExpression: NSExpression; message 'leftExpression';
    function rightExpression: NSExpression; message 'rightExpression';
    function customSelector: SEL; message 'customSelector';
    function options: NSComparisonPredicateOptions; message 'options';
  end;
{$endif}

