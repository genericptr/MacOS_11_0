{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKDecisionTree.h }

{$ifdef TYPES}
type
  GKDecisionNodePtr = ^GKDecisionNode;
  GKDecisionTreePtr = ^GKDecisionTree;
{$endif}

{$ifdef CLASSES}

type
  GKDecisionNode = objcclass external (NSObject)
  public
    function createBranchWithValue_attribute (value: NSNumber; attribute: NSObjectProtocol): id; message 'createBranchWithValue:attribute:';
    function createBranchWithPredicate_attribute (predicate: NSPredicate; attribute: NSObjectProtocol): id; message 'createBranchWithPredicate:attribute:';
    function createBranchWithWeight_attribute (weight: NSInteger; attribute: NSObjectProtocol): id; message 'createBranchWithWeight:attribute:';
  end;

type
  GKDecisionTree = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function rootNode: GKDecisionNode; message 'rootNode';
    procedure setRandomSource(newValue: GKRandomSource); message 'setRandomSource:';
    function randomSource: GKRandomSource; message 'randomSource';
    function initWithAttribute (attribute: NSObjectProtocol): id; message 'initWithAttribute:';
    function initWithExamples_actions_attributes (examples: NSArray; actions: NSArray; attributes: NSArray): id; message 'initWithExamples:actions:attributes:';
    function initWithURL_error (url: NSURL; error: NSError): id; message 'initWithURL:error:';
    function exportToURL_error (url: NSURL; error: NSError): objcbool; message 'exportToURL:error:';
    function findActionForAnswers (answers: NSDictionary): id; message 'findActionForAnswers:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

