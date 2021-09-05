{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKRuleSystem.h }

{$ifdef CALLBACKS}
type
  GKRuleSystemRuleWithBlockPredicateCallback = reference to function (param1: GKRuleSystem): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  GKRuleSystemPtr = ^GKRuleSystem;
  GKRulePtr = ^GKRule;
  GKNSPredicateRulePtr = ^GKNSPredicateRule;
{$endif}

{$ifdef CLASSES}

type
  GKRuleSystem = objcclass external (NSObject)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure evaluate; message 'evaluate';
    function state: NSMutableDictionary; message 'state';
    function rules: NSArray; message 'rules';
    procedure addRule (rule: GKRule); message 'addRule:';
    procedure addRulesFromArray (rules_: NSArray); message 'addRulesFromArray:';
    procedure removeAllRules; message 'removeAllRules';
    function agenda: NSArray; message 'agenda';
    function executed: NSArray; message 'executed';
    function facts: NSArray; message 'facts';
    function gradeForFact (fact: NSObjectProtocol): single; message 'gradeForFact:';
    function minimumGradeForFacts (facts_: NSArray): single; message 'minimumGradeForFacts:';
    function maximumGradeForFacts (facts_: NSArray): single; message 'maximumGradeForFacts:';
    procedure assertFact (fact: NSObjectProtocol); message 'assertFact:';
    procedure assertFact_grade (fact: NSObjectProtocol; grade: single); message 'assertFact:grade:';
    procedure retractFact (fact: NSObjectProtocol); message 'retractFact:';
    procedure retractFact_grade (fact: NSObjectProtocol; grade: single); message 'retractFact:grade:';
    procedure reset; message 'reset';
  end;

type
  GKRule = objcclass external (NSObject)
  public
    procedure setSalience(newValue: NSInteger); message 'setSalience:';
    function salience: NSInteger; message 'salience';
    function evaluatePredicateWithSystem (system: GKRuleSystem): objcbool; message 'evaluatePredicateWithSystem:';
    procedure performActionWithSystem (system: GKRuleSystem); message 'performActionWithSystem:';
    class function ruleWithPredicate_assertingFact_grade (predicate: NSPredicate; fact: NSObjectProtocol; grade: single): id; message 'ruleWithPredicate:assertingFact:grade:';
    class function ruleWithPredicate_retractingFact_grade (predicate: NSPredicate; fact: NSObjectProtocol; grade: single): id; message 'ruleWithPredicate:retractingFact:grade:';
    class function ruleWithBlockPredicate_action (predicate: GKRuleSystemRuleWithBlockPredicateCallback; action: GKRuleSystemRuleWithBlockPredicateCallback): id; message 'ruleWithBlockPredicate:action:';
  end;

type
  GKNSPredicateRule = objcclass external (GKRule)
  public
    function predicate: NSPredicate; message 'predicate';
    function initWithPredicate (predicate_: NSPredicate): id; message 'initWithPredicate:';
    function evaluatePredicateWithSystem (system: GKRuleSystem): objcbool; message 'evaluatePredicateWithSystem:';
  end;
{$endif}

