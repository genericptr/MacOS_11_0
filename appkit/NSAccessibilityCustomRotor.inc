{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSAccessibilityCustomRotor.h }

{$ifdef TYPES}
type
  NSAccessibilityCustomRotorPtr = ^NSAccessibilityCustomRotor;
  NSAccessibilityCustomRotorSearchParametersPtr = ^NSAccessibilityCustomRotorSearchParameters;
  NSAccessibilityCustomRotorItemResultPtr = ^NSAccessibilityCustomRotorItemResult;
  NSAccessibilityCustomRotorItemSearchDelegateProtocolPtr = ^NSAccessibilityCustomRotorItemSearchDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSAccessibilityCustomRotorSearchDirection = NSInteger;
  NSAccessibilityCustomRotorSearchDirectionPtr = ^NSAccessibilityCustomRotorSearchDirection;

const
  NSAccessibilityCustomRotorSearchDirectionPrevious = 0;
  NSAccessibilityCustomRotorSearchDirectionNext = 1;

type
  NSAccessibilityCustomRotorType = NSInteger;
  NSAccessibilityCustomRotorTypePtr = ^NSAccessibilityCustomRotorType;

const
  NSAccessibilityCustomRotorTypeCustom = 0;
  NSAccessibilityCustomRotorTypeAny = 1;
  NSAccessibilityCustomRotorTypeAnnotation = 2;
  NSAccessibilityCustomRotorTypeBoldText = 3;
  NSAccessibilityCustomRotorTypeHeading = 4;
  NSAccessibilityCustomRotorTypeHeadingLevel1 = 5;
  NSAccessibilityCustomRotorTypeHeadingLevel2 = 6;
  NSAccessibilityCustomRotorTypeHeadingLevel3 = 7;
  NSAccessibilityCustomRotorTypeHeadingLevel4 = 8;
  NSAccessibilityCustomRotorTypeHeadingLevel5 = 9;
  NSAccessibilityCustomRotorTypeHeadingLevel6 = 10;
  NSAccessibilityCustomRotorTypeImage = 11;
  NSAccessibilityCustomRotorTypeItalicText = 12;
  NSAccessibilityCustomRotorTypeLandmark = 13;
  NSAccessibilityCustomRotorTypeLink = 14;
  NSAccessibilityCustomRotorTypeList = 15;
  NSAccessibilityCustomRotorTypeMisspelledWord = 16;
  NSAccessibilityCustomRotorTypeTable = 17;
  NSAccessibilityCustomRotorTypeTextField = 18;
  NSAccessibilityCustomRotorTypeUnderlinedText = 19;
  NSAccessibilityCustomRotorTypeVisitedLink = 20;
{$endif}

{$ifdef CLASSES}

type
  NSAccessibilityCustomRotor = objcclass external (NSObject)
  public
    function initWithLabel_itemSearchDelegate (label_: NSString; itemSearchDelegate: NSAccessibilityCustomRotorItemSearchDelegateProtocol): id; message 'initWithLabel:itemSearchDelegate:';
    function initWithRotorType_itemSearchDelegate (rotorType: NSAccessibilityCustomRotorType; itemSearchDelegate: NSAccessibilityCustomRotorItemSearchDelegateProtocol): id; message 'initWithRotorType:itemSearchDelegate:';
    procedure setType(newValue: NSAccessibilityCustomRotorType); message 'setType:';
    function type_: NSAccessibilityCustomRotorType; message 'type';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    procedure setItemSearchDelegate(newValue: NSAccessibilityCustomRotorItemSearchDelegateProtocol); message 'setItemSearchDelegate:';
    function itemSearchDelegate: NSAccessibilityCustomRotorItemSearchDelegateProtocol; message 'itemSearchDelegate';
    procedure setItemLoadingDelegate(newValue: NSAccessibilityElementLoadingProtocol); message 'setItemLoadingDelegate:';
    function itemLoadingDelegate: NSAccessibilityElementLoadingProtocol; message 'itemLoadingDelegate';
  end;

type
  NSAccessibilityCustomRotorSearchParameters = objcclass external (NSObject)
  public
    procedure setCurrentItem(newValue: NSAccessibilityCustomRotorItemResult); message 'setCurrentItem:';
    function currentItem: NSAccessibilityCustomRotorItemResult; message 'currentItem';
    procedure setSearchDirection(newValue: NSAccessibilityCustomRotorSearchDirection); message 'setSearchDirection:';
    function searchDirection: NSAccessibilityCustomRotorSearchDirection; message 'searchDirection';
    procedure setFilterString(newValue: NSString); message 'setFilterString:';
    function filterString: NSString; message 'filterString';
  end;

type
  NSAccessibilityCustomRotorItemResult = objcclass external (NSObject)
  public
    class function new_: id; message 'new';
    function init: id; message 'init';
    function initWithTargetElement (targetElement: NSAccessibilityElementProtocol): id; message 'initWithTargetElement:'; { NS_DESIGNATED_INITIALIZER }
    function initWithItemLoadingToken_customLabel (itemLoadingToken: NSAccessibilityLoadingToken; customLabel: NSString): id; message 'initWithItemLoadingToken:customLabel:'; { NS_DESIGNATED_INITIALIZER }
    function targetElement: NSAccessibilityElementProtocol; message 'targetElement';
    function itemLoadingToken: NSAccessibilityLoadingToken; message 'itemLoadingToken';
    procedure setTargetRange(newValue: NSRange); message 'setTargetRange:';
    function targetRange: NSRange; message 'targetRange';
    procedure setCustomLabel(newValue: NSString); message 'setCustomLabel:';
    function customLabel: NSString; message 'customLabel';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSAccessibilityCustomRotorItemSearchDelegateProtocol = objcprotocol external name 'NSAccessibilityCustomRotorItemSearchDelegate' (NSObjectProtocol)
  required
    function rotor_resultForSearchParameters (rotor: NSAccessibilityCustomRotor; searchParameters: NSAccessibilityCustomRotorSearchParameters): NSAccessibilityCustomRotorItemResult; message 'rotor:resultForSearchParameters:';
  end;
{$endif}

