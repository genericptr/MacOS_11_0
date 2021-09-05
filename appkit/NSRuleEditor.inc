{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSRuleEditor.h }

{$ifdef TYPES}
type
  NSRuleEditorPtr = ^NSRuleEditor;
  NSRuleEditorDelegateProtocolPtr = ^NSRuleEditorDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSRuleEditorPredicatePartKey = NSString;
  NSRuleEditorPredicatePartKeyPtr = ^NSRuleEditorPredicatePartKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSRuleEditorPredicateLeftExpression: NSRuleEditorPredicatePartKey; cvar; external;
  NSRuleEditorPredicateRightExpression: NSRuleEditorPredicatePartKey; cvar; external;
  NSRuleEditorPredicateComparisonModifier: NSRuleEditorPredicatePartKey; cvar; external;
  NSRuleEditorPredicateOptions: NSRuleEditorPredicatePartKey; cvar; external;
  NSRuleEditorPredicateOperatorType: NSRuleEditorPredicatePartKey; cvar; external;
  NSRuleEditorPredicateCustomSelector: NSRuleEditorPredicatePartKey; cvar; external;
  NSRuleEditorPredicateCompoundType: NSRuleEditorPredicatePartKey; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSRuleEditorNestingMode = NSUInteger;
  NSRuleEditorNestingModePtr = ^NSRuleEditorNestingMode;

const
  NSRuleEditorNestingModeSingle = 0;
  NSRuleEditorNestingModeList = 1;
  NSRuleEditorNestingModeCompound = 2;
  NSRuleEditorNestingModeSimple = 3;

type
  NSRuleEditorRowType = NSUInteger;
  NSRuleEditorRowTypePtr = ^NSRuleEditorRowType;

const
  NSRuleEditorRowTypeSimple = 0;
  NSRuleEditorRowTypeCompound = 1;
{$endif}

{$ifdef CLASSES}

type
  NSRuleEditor = objcclass external (NSControl)
  public
    procedure setDelegate(newValue: NSRuleEditorDelegateProtocol); message 'setDelegate:';
    function delegate: NSRuleEditorDelegateProtocol; message 'delegate';
    procedure setFormattingStringsFilename(newValue: NSString); message 'setFormattingStringsFilename:';
    function formattingStringsFilename: NSString; message 'formattingStringsFilename';
    procedure setFormattingDictionary(newValue: NSDictionary); message 'setFormattingDictionary:';
    function formattingDictionary: NSDictionary; message 'formattingDictionary';
    procedure reloadCriteria; message 'reloadCriteria';
    procedure setNestingMode(newValue: NSRuleEditorNestingMode); message 'setNestingMode:';
    function nestingMode: NSRuleEditorNestingMode; message 'nestingMode';
    procedure setRowHeight(newValue: CGFloat); message 'setRowHeight:';
    function rowHeight: CGFloat; message 'rowHeight';
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure setCanRemoveAllRows(newValue: objcbool); message 'setCanRemoveAllRows:';
    function canRemoveAllRows: objcbool; message 'canRemoveAllRows';
    function predicate: NSPredicate; message 'predicate';
    procedure reloadPredicate; message 'reloadPredicate';
    function predicateForRow (row: NSInteger): NSPredicate; message 'predicateForRow:';
    function numberOfRows: NSInteger; message 'numberOfRows';
    function subrowIndexesForRow (rowIndex: NSInteger): NSIndexSet; message 'subrowIndexesForRow:';
    function criteriaForRow (row: NSInteger): NSArray; message 'criteriaForRow:';
    function displayValuesForRow (row: NSInteger): NSArray; message 'displayValuesForRow:';
    function rowForDisplayValue (displayValue: id): NSInteger; message 'rowForDisplayValue:';
    function rowTypeForRow (rowIndex: NSInteger): NSRuleEditorRowType; message 'rowTypeForRow:';
    function parentRowForRow (rowIndex: NSInteger): NSInteger; message 'parentRowForRow:';
    procedure addRow (sender: id); message 'addRow:';
    procedure insertRowAtIndex_withType_asSubrowOfRow_animate (rowIndex: NSInteger; rowType: NSRuleEditorRowType; parentRow: NSInteger; shouldAnimate: objcbool); message 'insertRowAtIndex:withType:asSubrowOfRow:animate:';
    procedure setCriteria_andDisplayValues_forRowAtIndex (criteria: NSArray; values: NSArray; rowIndex: NSInteger); message 'setCriteria:andDisplayValues:forRowAtIndex:';
    procedure removeRowAtIndex (rowIndex: NSInteger); message 'removeRowAtIndex:';
    procedure removeRowsAtIndexes_includeSubrows (rowIndexes: NSIndexSet; includeSubrows: objcbool); message 'removeRowsAtIndexes:includeSubrows:';
    function selectedRowIndexes: NSIndexSet; message 'selectedRowIndexes';
    procedure selectRowIndexes_byExtendingSelection (indexes: NSIndexSet; extend: objcbool); message 'selectRowIndexes:byExtendingSelection:';
    procedure setRowClass(newValue: pobjc_class); message 'setRowClass:';
    function rowClass: pobjc_class; message 'rowClass';
    procedure setRowTypeKeyPath(newValue: NSString); message 'setRowTypeKeyPath:';
    function rowTypeKeyPath: NSString; message 'rowTypeKeyPath';
    procedure setSubrowsKeyPath(newValue: NSString); message 'setSubrowsKeyPath:';
    function subrowsKeyPath: NSString; message 'subrowsKeyPath';
    procedure setCriteriaKeyPath(newValue: NSString); message 'setCriteriaKeyPath:';
    function criteriaKeyPath: NSString; message 'criteriaKeyPath';
    procedure setDisplayValuesKeyPath(newValue: NSString); message 'setDisplayValuesKeyPath:';
    function displayValuesKeyPath: NSString; message 'displayValuesKeyPath';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSRuleEditorDelegateProtocol = objcprotocol external name 'NSRuleEditorDelegate' (NSObjectProtocol)
  required
    function ruleEditor_numberOfChildrenForCriterion_withRowType (editor: NSRuleEditor; criterion: id; rowType: NSRuleEditorRowType): NSInteger; message 'ruleEditor:numberOfChildrenForCriterion:withRowType:';
    function ruleEditor_child_forCriterion_withRowType (editor: NSRuleEditor; index: NSInteger; criterion: id; rowType: NSRuleEditorRowType): id; message 'ruleEditor:child:forCriterion:withRowType:';
    function ruleEditor_displayValueForCriterion_inRow (editor: NSRuleEditor; criterion: id; row: NSInteger): id; message 'ruleEditor:displayValueForCriterion:inRow:';
  optional
    function ruleEditor_predicatePartsForCriterion_withDisplayValue_inRow (editor: NSRuleEditor; criterion: id; value: id; row: NSInteger): NSDictionary; message 'ruleEditor:predicatePartsForCriterion:withDisplayValue:inRow:';
    procedure ruleEditorRowsDidChange (notification: NSNotification); message 'ruleEditorRowsDidChange:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSRuleEditorRowsDidChangeNotification: NSNotificationName; cvar; external;
{$endif}

