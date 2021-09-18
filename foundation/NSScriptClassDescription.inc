{ Parsed from Foundation.framework NSScriptClassDescription.h }

{$ifdef TYPES}
type
  NSScriptClassDescriptionPtr = ^NSScriptClassDescription;
{$endif}

{$ifdef CLASSES}

type
  NSScriptClassDescription = objcclass external (NSClassDescription)
  private
    _suiteName: NSString;
    _objcClassName: NSString;
    _appleEventCode: FourCharCode;
    _superclassNameOrDescription: NSObjectPtr;
    _attributeDescriptions: NSArray;
    _toOneRelationshipDescriptions: NSArray;
    _toManyRelationshipDescriptions: NSArray;
    _commandMethodSelectorsByName: NSDictionary;
    _moreVars: id;
  public
    class function classDescriptionForClass (aClass: pobjc_class): NSScriptClassDescription; message 'classDescriptionForClass:';
    function initWithSuiteName_className_dictionary (suiteName: NSString; className: NSString; classDeclaration: NSDictionary): id; message 'initWithSuiteName:className:dictionary:'; { NS_DESIGNATED_INITIALIZER }
    function suiteName: NSString; message 'suiteName';
    function className: NSString; message 'className';
    function implementationClassName: NSString; message 'implementationClassName';
    function superclassDescription: NSScriptClassDescription; message 'superclassDescription';
    function appleEventCode: FourCharCode; message 'appleEventCode';
    function matchesAppleEventCode (appleEventCode_: FourCharCode): objcbool; message 'matchesAppleEventCode:';
    function supportsCommand (commandDescription: NSScriptCommandDescription): objcbool; message 'supportsCommand:';
    function selectorForCommand (commandDescription: NSScriptCommandDescription): SEL; message 'selectorForCommand:';
    function typeForKey (key: NSString): NSString; message 'typeForKey:';
    function classDescriptionForKey (key: NSString): NSScriptClassDescription; message 'classDescriptionForKey:';
    function appleEventCodeForKey (key: NSString): FourCharCode; message 'appleEventCodeForKey:';
    function keyWithAppleEventCode (appleEventCode_: FourCharCode): NSString; message 'keyWithAppleEventCode:';
    function defaultSubcontainerAttributeKey: NSString; message 'defaultSubcontainerAttributeKey';
    function isLocationRequiredToCreateForKey (toManyRelationshipKey: NSString): objcbool; message 'isLocationRequiredToCreateForKey:';
    function hasPropertyForKey (key: NSString): objcbool; message 'hasPropertyForKey:'; { unavailable in ios, watchos, tvos }
    function hasOrderedToManyRelationshipForKey (key: NSString): objcbool; message 'hasOrderedToManyRelationshipForKey:'; { unavailable in ios, watchos, tvos }
    function hasReadablePropertyForKey (key: NSString): objcbool; message 'hasReadablePropertyForKey:'; { unavailable in ios, watchos, tvos }
    function hasWritablePropertyForKey (key: NSString): objcbool; message 'hasWritablePropertyForKey:'; { unavailable in ios, watchos, tvos }
  end;


type
  NSDeprecated = objccategory external (NSScriptClassDescription)
    function isReadOnlyKey (key: NSString): objcbool; message 'isReadOnlyKey:'; { unavailable in ios, watchos, tvos }
  end;

type
  NSObject_NSScriptClassDescription = objccategory external name 'NSScriptClassDescription' (NSObject)
    function classCode: FourCharCode; message 'classCode';
    function className: NSString; message 'className';
  end;
{$endif}

