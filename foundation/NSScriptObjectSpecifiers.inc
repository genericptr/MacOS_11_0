{ Parsed from Foundation.framework NSScriptObjectSpecifiers.h }

{$ifdef TYPES}
type
  NSScriptObjectSpecifierPtr = ^NSScriptObjectSpecifier;
  NSIndexSpecifierPtr = ^NSIndexSpecifier;
  NSMiddleSpecifierPtr = ^NSMiddleSpecifier;
  NSNameSpecifierPtr = ^NSNameSpecifier;
  NSPositionalSpecifierPtr = ^NSPositionalSpecifier;
  NSPropertySpecifierPtr = ^NSPropertySpecifier;
  NSRandomSpecifierPtr = ^NSRandomSpecifier;
  NSRangeSpecifierPtr = ^NSRangeSpecifier;
  NSRelativeSpecifierPtr = ^NSRelativeSpecifier;
  NSUniqueIDSpecifierPtr = ^NSUniqueIDSpecifier;
  NSWhoseSpecifierPtr = ^NSWhoseSpecifier;
{$endif}

{$ifdef TYPES}
type
  NSInsertionPosition = NSUInteger;
  NSInsertionPositionPtr = ^NSInsertionPosition;

const
  NSPositionAfter = 0;
  NSPositionBefore = 1;
  NSPositionBeginning = 2;
  NSPositionEnd = 3;
  NSPositionReplace = 4;

type
  NSRelativePosition = NSUInteger;
  NSRelativePositionPtr = ^NSRelativePosition;

const
  NSRelativeAfter = 0;
  NSRelativeBefore = 1;

type
  NSWhoseSubelementIdentifier = NSUInteger;
  NSWhoseSubelementIdentifierPtr = ^NSWhoseSubelementIdentifier;

const
  NSIndexSubelement = 0;
  NSEverySubelement = 1;
  NSMiddleSubelement = 2;
  NSRandomSubelement = 3;
  NSNoSubelement = 4;
{$endif}

{$ifdef CLASSES}

type
  NSScriptObjectSpecifier = objcclass external (NSObject, NSCodingProtocol)
  private
    _container: NSScriptObjectSpecifier;
    _child: NSScriptObjectSpecifier;
    _key: NSString;
    _containerClassDescription: NSScriptClassDescription;
    _containerIsObjectBeingTested: objcbool;
    _containerIsRangeContainerObject: objcbool;
    _padding:array[0..1] of char;
    _descriptor: NSAppleEventDescriptor;
    _error: NSInteger;
  public
    class function objectSpecifierWithDescriptor (descriptor: NSAppleEventDescriptor): NSScriptObjectSpecifier; message 'objectSpecifierWithDescriptor:'; { unavailable in ios, watchos, tvos } { available in macos 10.5 }
    function initWithContainerSpecifier_key (container: NSScriptObjectSpecifier; property_: NSString): id; message 'initWithContainerSpecifier:key:';
    function initWithContainerClassDescription_containerSpecifier_key (classDesc: NSScriptClassDescription; container: NSScriptObjectSpecifier; property_: NSString): id; message 'initWithContainerClassDescription:containerSpecifier:key:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setChildSpecifier(newValue: NSScriptObjectSpecifier); message 'setChildSpecifier:';
    function childSpecifier: NSScriptObjectSpecifier; message 'childSpecifier';
    procedure setContainerSpecifier(newValue: NSScriptObjectSpecifier); message 'setContainerSpecifier:';
    function containerSpecifier: NSScriptObjectSpecifier; message 'containerSpecifier';
    procedure setContainerIsObjectBeingTested(newValue: objcbool); message 'setContainerIsObjectBeingTested:';
    function containerIsObjectBeingTested: objcbool; message 'containerIsObjectBeingTested';
    procedure setContainerIsRangeContainerObject(newValue: objcbool); message 'setContainerIsRangeContainerObject:';
    function containerIsRangeContainerObject: objcbool; message 'containerIsRangeContainerObject';
    procedure setKey(newValue: NSString); message 'setKey:';
    function key: NSString; message 'key';
    procedure setContainerClassDescription(newValue: NSScriptClassDescription); message 'setContainerClassDescription:';
    function containerClassDescription: NSScriptClassDescription; message 'containerClassDescription';
    function keyClassDescription: NSScriptClassDescription; message 'keyClassDescription';
    function indicesOfObjectsByEvaluatingWithContainer_count (container: id; count: NSIntegerPtr): NSIntegerPtr; message 'indicesOfObjectsByEvaluatingWithContainer:count:';
    function objectsByEvaluatingWithContainers (containers: id): id; message 'objectsByEvaluatingWithContainers:';
    function objectsByEvaluatingSpecifier: id; message 'objectsByEvaluatingSpecifier';
    procedure setEvaluationErrorNumber(newValue: NSInteger); message 'setEvaluationErrorNumber:';
    function evaluationErrorNumber: NSInteger; message 'evaluationErrorNumber';
    function evaluationErrorSpecifier: NSScriptObjectSpecifier; message 'evaluationErrorSpecifier';
    function descriptor: NSAppleEventDescriptor; message 'descriptor'; { unavailable in ios, watchos, tvos } { available in macos 10.5 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;


type
  NSScriptObjectSpecifiers = objccategory external (NSObject)
    function objectSpecifier: NSScriptObjectSpecifier; message 'objectSpecifier';
    function indicesOfObjectsByEvaluatingObjectSpecifier (specifier: NSScriptObjectSpecifier): NSArray; message 'indicesOfObjectsByEvaluatingObjectSpecifier:';
  end;


type
  NSIndexSpecifier = objcclass external (NSScriptObjectSpecifier)
  private
    _index: NSInteger;
  public
    function initWithContainerClassDescription_containerSpecifier_key_index (classDesc: NSScriptClassDescription; container: NSScriptObjectSpecifier; property_: NSString; index: NSInteger): id; message 'initWithContainerClassDescription:containerSpecifier:key:index:'; { NS_DESIGNATED_INITIALIZER }
    procedure setIndex(newValue: NSInteger); message 'setIndex:';
    function index: NSInteger; message 'index';
  end;

type
  NSMiddleSpecifier = objcclass external (NSScriptObjectSpecifier)
  private
  end;

type
  NSNameSpecifier = objcclass external (NSScriptObjectSpecifier)
  private
    _name: NSString;
  public
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContainerClassDescription_containerSpecifier_key_name (classDesc: NSScriptClassDescription; container: NSScriptObjectSpecifier; property_: NSString; name: NSString): id; message 'initWithContainerClassDescription:containerSpecifier:key:name:'; { NS_DESIGNATED_INITIALIZER }
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;

type
  NSPositionalSpecifier = objcclass external (NSObject)
  private
    _specifier: NSScriptObjectSpecifier;
    _unadjustedPosition: NSInsertionPosition;
    _insertionClassDescription: NSScriptClassDescription;
    _moreVars: id;
    _reserved0: pointer;
  public
    function initWithPosition_objectSpecifier (position: NSInsertionPosition; specifier: NSScriptObjectSpecifier): id; message 'initWithPosition:objectSpecifier:'; { NS_DESIGNATED_INITIALIZER }
    function position: NSInsertionPosition; message 'position'; { unavailable in ios, watchos, tvos } { available in macos 10.5 }
    function objectSpecifier: NSScriptObjectSpecifier; message 'objectSpecifier'; { unavailable in ios, watchos, tvos } { available in macos 10.5 }
    procedure setInsertionClassDescription (classDescription: NSScriptClassDescription); message 'setInsertionClassDescription:';
    procedure evaluate; message 'evaluate';
    function insertionContainer: id; message 'insertionContainer';
    function insertionKey: NSString; message 'insertionKey';
    function insertionIndex: NSInteger; message 'insertionIndex';
    function insertionReplaces: objcbool; message 'insertionReplaces';
  end;

type
  NSPropertySpecifier = objcclass external (NSScriptObjectSpecifier)
  private
  end;

type
  NSRandomSpecifier = objcclass external (NSScriptObjectSpecifier)
  private
  end;

type
  NSRangeSpecifier = objcclass external (NSScriptObjectSpecifier)
  private
    _startSpec: NSScriptObjectSpecifier;
    _endSpec: NSScriptObjectSpecifier;
  public
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContainerClassDescription_containerSpecifier_key_startSpecifier_endSpecifier (classDesc: NSScriptClassDescription; container: NSScriptObjectSpecifier; property_: NSString; startSpec: NSScriptObjectSpecifier; endSpec: NSScriptObjectSpecifier): id; message 'initWithContainerClassDescription:containerSpecifier:key:startSpecifier:endSpecifier:'; { NS_DESIGNATED_INITIALIZER }
    procedure setStartSpecifier(newValue: NSScriptObjectSpecifier); message 'setStartSpecifier:';
    function startSpecifier: NSScriptObjectSpecifier; message 'startSpecifier';
    procedure setEndSpecifier(newValue: NSScriptObjectSpecifier); message 'setEndSpecifier:';
    function endSpecifier: NSScriptObjectSpecifier; message 'endSpecifier';
  end;

type
  NSRelativeSpecifier = objcclass external (NSScriptObjectSpecifier)
  private
    _relativePosition: NSRelativePosition;
    _baseSpecifier: NSScriptObjectSpecifier;
  public
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContainerClassDescription_containerSpecifier_key_relativePosition_baseSpecifier (classDesc: NSScriptClassDescription; container: NSScriptObjectSpecifier; property_: NSString; relPos: NSRelativePosition; baseSpecifier: NSScriptObjectSpecifier): id; message 'initWithContainerClassDescription:containerSpecifier:key:relativePosition:baseSpecifier:'; { NS_DESIGNATED_INITIALIZER }
    procedure setRelativePosition(newValue: NSRelativePosition); message 'setRelativePosition:';
    function relativePosition: NSRelativePosition; message 'relativePosition';
    procedure setBaseSpecifier(newValue: NSScriptObjectSpecifier); message 'setBaseSpecifier:';
    function baseSpecifier: NSScriptObjectSpecifier; message 'baseSpecifier';
  end;

type
  NSUniqueIDSpecifier = objcclass external (NSScriptObjectSpecifier)
  private
    _uniqueID: id;
  public
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContainerClassDescription_containerSpecifier_key_uniqueID (classDesc: NSScriptClassDescription; container: NSScriptObjectSpecifier; property_: NSString; uniqueID: id): id; message 'initWithContainerClassDescription:containerSpecifier:key:uniqueID:'; { NS_DESIGNATED_INITIALIZER }
    procedure setUniqueID(newValue: id); message 'setUniqueID:';
    function uniqueID: id; message 'uniqueID';
  end;

type
  NSWhoseSpecifier = objcclass external (NSScriptObjectSpecifier)
  private
    _test: NSScriptWhoseTest;
    _startSubelementIdentifier: NSWhoseSubelementIdentifier;
    _startSubelementIndex: NSInteger;
    _endSubelementIdentifier: NSWhoseSubelementIdentifier;
    _endSubelementIndex: NSInteger;
  public
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContainerClassDescription_containerSpecifier_key_test (classDesc: NSScriptClassDescription; container: NSScriptObjectSpecifier; property_: NSString; test: NSScriptWhoseTest): id; message 'initWithContainerClassDescription:containerSpecifier:key:test:'; { NS_DESIGNATED_INITIALIZER }
    procedure setTest(newValue: NSScriptWhoseTest); message 'setTest:';
    function test: NSScriptWhoseTest; message 'test';
    procedure setStartSubelementIdentifier(newValue: NSWhoseSubelementIdentifier); message 'setStartSubelementIdentifier:';
    function startSubelementIdentifier: NSWhoseSubelementIdentifier; message 'startSubelementIdentifier';
    procedure setStartSubelementIndex(newValue: NSInteger); message 'setStartSubelementIndex:';
    function startSubelementIndex: NSInteger; message 'startSubelementIndex';
    procedure setEndSubelementIdentifier(newValue: NSWhoseSubelementIdentifier); message 'setEndSubelementIdentifier:';
    function endSubelementIdentifier: NSWhoseSubelementIdentifier; message 'endSubelementIdentifier';
    procedure setEndSubelementIndex(newValue: NSInteger); message 'setEndSubelementIndex:';
    function endSubelementIndex: NSInteger; message 'endSubelementIndex';
  end;
{$endif}

