{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSDictionaryController.h }

{$ifdef TYPES}
type
  NSDictionaryControllerKeyValuePairPtr = ^NSDictionaryControllerKeyValuePair;
  NSDictionaryControllerPtr = ^NSDictionaryController;
{$endif}

{$ifdef CLASSES}

type
  NSDictionaryControllerKeyValuePair = objcclass external (NSObject)
  public
    function init: id; message 'init';
    procedure setKey(newValue: NSString); message 'setKey:';
    function key: NSString; message 'key';
    procedure setValue(newValue: id); message 'setValue:';
    function value: id; message 'value';
    procedure setLocalizedKey(newValue: NSString); message 'setLocalizedKey:';
    function localizedKey: NSString; message 'localizedKey';
    function isExplicitlyIncluded: objcbool; message 'isExplicitlyIncluded';
  end;

type
  NSDictionaryController = objcclass external (NSArrayController)
  public
    function newObject: NSDictionaryControllerKeyValuePair; message 'newObject';
    procedure setInitialKey(newValue: NSString); message 'setInitialKey:';
    function initialKey: NSString; message 'initialKey';
    procedure setInitialValue(newValue: id); message 'setInitialValue:';
    function initialValue: id; message 'initialValue';
    procedure setIncludedKeys(newValue: NSArray); message 'setIncludedKeys:';
    function includedKeys: NSArray; message 'includedKeys';
    procedure setExcludedKeys(newValue: NSArray); message 'setExcludedKeys:';
    function excludedKeys: NSArray; message 'excludedKeys';
    procedure setLocalizedKeyDictionary(newValue: NSDictionary); message 'setLocalizedKeyDictionary:';
    function localizedKeyDictionary: NSDictionary; message 'localizedKeyDictionary';
    procedure setLocalizedKeyTable(newValue: NSString); message 'setLocalizedKeyTable:';
    function localizedKeyTable: NSString; message 'localizedKeyTable';
  end;
{$endif}

