{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSScriptWhoseTests.h }

{$ifdef TYPES}
type
  NSScriptWhoseTestPtr = ^NSScriptWhoseTest;
  NSLogicalTestPtr = ^NSLogicalTest;
  NSSpecifierTestPtr = ^NSSpecifierTest;
{$endif}

{$ifdef TYPES}
type
  NSTestComparisonOperation = NSUInteger;
  NSTestComparisonOperationPtr = ^NSTestComparisonOperation;

const
  NSEqualToComparison = 0;
  NSLessThanOrEqualToComparison = 1;
  NSLessThanComparison = 2;
  NSGreaterThanOrEqualToComparison = 3;
  NSGreaterThanComparison = 4;
  NSBeginsWithComparison = 5;
  NSEndsWithComparison = 6;
  NSContainsComparison = 7;
{$endif}

{$ifdef CLASSES}

type
  NSScriptWhoseTest = objcclass external (NSObject, NSCodingProtocol)
  private
  public
    function isTrue: objcbool; message 'isTrue';
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;

type
  NSLogicalTest = objcclass external (NSScriptWhoseTest)
  private
    _operator: cint;
    _subTests: id;
  public
    function initAndTestWithTests (subTests: NSArray): id; message 'initAndTestWithTests:'; { NS_DESIGNATED_INITIALIZER }
    function initOrTestWithTests (subTests: NSArray): id; message 'initOrTestWithTests:'; { NS_DESIGNATED_INITIALIZER }
    function initNotTestWithTest (subTest: NSScriptWhoseTest): id; message 'initNotTestWithTest:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSSpecifierTest = objcclass external (NSScriptWhoseTest)
  private
    _comparisonOperator: NSTestComparisonOperation;
    _object1: NSScriptObjectSpecifier;
    _object2: id;
  public
    function init: id; message 'init'; { unavailable in macos, ios, watchos, tvos }
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithObjectSpecifier_comparisonOperator_testObject (obj1: NSScriptObjectSpecifier; compOp: NSTestComparisonOperation; obj2: id): id; message 'initWithObjectSpecifier:comparisonOperator:testObject:'; { NS_DESIGNATED_INITIALIZER }
  end;


type
  NSComparisonMethods = objccategory external (NSObject)
    function isEqualTo (object_: id): objcbool; message 'isEqualTo:';
    function isLessThanOrEqualTo (object_: id): objcbool; message 'isLessThanOrEqualTo:';
    function isLessThan (object_: id): objcbool; message 'isLessThan:';
    function isGreaterThanOrEqualTo (object_: id): objcbool; message 'isGreaterThanOrEqualTo:';
    function isGreaterThan (object_: id): objcbool; message 'isGreaterThan:';
    function isNotEqualTo (object_: id): objcbool; message 'isNotEqualTo:';
    function doesContain (object_: id): objcbool; message 'doesContain:';
    function isLike (object_: NSString): objcbool; message 'isLike:';
    function isCaseInsensitiveLike (object_: NSString): objcbool; message 'isCaseInsensitiveLike:';
  end;

type
  NSScriptingComparisonMethods = objccategory external (NSObject)
    function scriptingIsEqualTo (object_: id): objcbool; message 'scriptingIsEqualTo:';
    function scriptingIsLessThanOrEqualTo (object_: id): objcbool; message 'scriptingIsLessThanOrEqualTo:';
    function scriptingIsLessThan (object_: id): objcbool; message 'scriptingIsLessThan:';
    function scriptingIsGreaterThanOrEqualTo (object_: id): objcbool; message 'scriptingIsGreaterThanOrEqualTo:';
    function scriptingIsGreaterThan (object_: id): objcbool; message 'scriptingIsGreaterThan:';
    function scriptingBeginsWith (object_: id): objcbool; message 'scriptingBeginsWith:';
    function scriptingEndsWith (object_: id): objcbool; message 'scriptingEndsWith:';
    function scriptingContains (object_: id): objcbool; message 'scriptingContains:';
  end;
{$endif}

