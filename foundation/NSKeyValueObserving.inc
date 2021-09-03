{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSKeyValueObserving.h }
{$ifdef TYPES}
type
  NSKeyValueObservingOptions = NSUInteger;
  NSKeyValueObservingOptionsPtr = ^NSKeyValueObservingOptions;

const
  NSKeyValueObservingOptionNew = $01;
  NSKeyValueObservingOptionOld = $02;
  NSKeyValueObservingOptionInitial = $04 { available in macos , ios , watchos , tvos  };
  NSKeyValueObservingOptionPrior = $08 { available in macos , ios , watchos , tvos  };

type
  NSKeyValueChange = NSUInteger;
  NSKeyValueChangePtr = ^NSKeyValueChange;

const
  NSKeyValueChangeSetting = 1;
  NSKeyValueChangeInsertion = 2;
  NSKeyValueChangeRemoval = 3;
  NSKeyValueChangeReplacement = 4;

type
  NSKeyValueSetMutationKind = NSUInteger;
  NSKeyValueSetMutationKindPtr = ^NSKeyValueSetMutationKind;

const
  NSKeyValueUnionSetMutation = 1;
  NSKeyValueMinusSetMutation = 2;
  NSKeyValueIntersectSetMutation = 3;
  NSKeyValueSetSetMutation = 4;

type
  NSKeyValueChangeKey = NSString;
  NSKeyValueChangeKeyPtr = ^NSKeyValueChangeKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSKeyValueChangeKindKey: NSKeyValueChangeKey; cvar; external;
  NSKeyValueChangeNewKey: NSKeyValueChangeKey; cvar; external;
  NSKeyValueChangeOldKey: NSKeyValueChangeKey; cvar; external;
  NSKeyValueChangeIndexesKey: NSKeyValueChangeKey; cvar; external;
  NSKeyValueChangeNotificationIsPriorKey: NSKeyValueChangeKey { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSKeyValueObserving = objccategory external (NSObject)
    procedure observeValueForKeyPath_ofObject_change_context (keyPath: NSString; object_: id; change: NSDictionary; context: pointer); message 'observeValueForKeyPath:ofObject:change:context:';
  end;

type
  NSObject_NSKeyValueObserverRegistration = objccategory external name 'NSKeyValueObserverRegistration' (NSObject)
    procedure addObserver_forKeyPath_options_context (observer: NSObjectPtr; keyPath: NSString; options: NSKeyValueObservingOptions; context: pointer); message 'addObserver:forKeyPath:options:context:';
    procedure removeObserver_forKeyPath_context (observer: NSObjectPtr; keyPath: NSString; context: pointer); message 'removeObserver:forKeyPath:context:'; { available in macos , ios , watchos , tvos  }
    procedure removeObserver_forKeyPath (observer: NSObjectPtr; keyPath: NSString); message 'removeObserver:forKeyPath:';
  end;

type
  NSArray_NSKeyValueObserverRegistration = objccategory external name 'NSKeyValueObserverRegistration' (NSArray)
    procedure addObserver_toObjectsAtIndexes_forKeyPath_options_context (observer: NSObjectPtr; indexes: NSIndexSet; keyPath: NSString; options: NSKeyValueObservingOptions; context: pointer); message 'addObserver:toObjectsAtIndexes:forKeyPath:options:context:';
    procedure removeObserver_fromObjectsAtIndexes_forKeyPath_context (observer: NSObjectPtr; indexes: NSIndexSet; keyPath: NSString; context: pointer); message 'removeObserver:fromObjectsAtIndexes:forKeyPath:context:'; { available in macos , ios , watchos , tvos  }
    procedure removeObserver_fromObjectsAtIndexes_forKeyPath (observer: NSObjectPtr; indexes: NSIndexSet; keyPath: NSString); message 'removeObserver:fromObjectsAtIndexes:forKeyPath:';
    procedure addObserver_forKeyPath_options_context (observer: NSObjectPtr; keyPath: NSString; options: NSKeyValueObservingOptions; context: pointer); message 'addObserver:forKeyPath:options:context:';
    procedure removeObserver_forKeyPath_context (observer: NSObjectPtr; keyPath: NSString; context: pointer); message 'removeObserver:forKeyPath:context:'; { available in macos , ios , watchos , tvos  }
    procedure removeObserver_forKeyPath (observer: NSObjectPtr; keyPath: NSString); message 'removeObserver:forKeyPath:';
  end;

type
  NSOrderedSet_NSKeyValueObserverRegistration = objccategory external name 'NSKeyValueObserverRegistration' (NSOrderedSet)
    procedure addObserver_forKeyPath_options_context (observer: NSObjectPtr; keyPath: NSString; options: NSKeyValueObservingOptions; context: pointer); message 'addObserver:forKeyPath:options:context:';
    procedure removeObserver_forKeyPath_context (observer: NSObjectPtr; keyPath: NSString; context: pointer); message 'removeObserver:forKeyPath:context:'; { available in macos , ios , watchos , tvos  }
    procedure removeObserver_forKeyPath (observer: NSObjectPtr; keyPath: NSString); message 'removeObserver:forKeyPath:';
  end;

type
  NSKeyValueObserverRegistration = objccategory external (NSSet)
    procedure addObserver_forKeyPath_options_context (observer: NSObjectPtr; keyPath: NSString; options: NSKeyValueObservingOptions; context: pointer); message 'addObserver:forKeyPath:options:context:';
    procedure removeObserver_forKeyPath_context (observer: NSObjectPtr; keyPath: NSString; context: pointer); message 'removeObserver:forKeyPath:context:'; { available in macos , ios , watchos , tvos  }
    procedure removeObserver_forKeyPath (observer: NSObjectPtr; keyPath: NSString); message 'removeObserver:forKeyPath:';
  end;

type
  NSKeyValueObserverNotification = objccategory external (NSObject)
    procedure willChangeValueForKey (key: NSString); message 'willChangeValueForKey:';
    procedure didChangeValueForKey (key: NSString); message 'didChangeValueForKey:';
    procedure willChange_valuesAtIndexes_forKey (changeKind: NSKeyValueChange; indexes: NSIndexSet; key: NSString); message 'willChange:valuesAtIndexes:forKey:';
    procedure didChange_valuesAtIndexes_forKey (changeKind: NSKeyValueChange; indexes: NSIndexSet; key: NSString); message 'didChange:valuesAtIndexes:forKey:';
    procedure willChangeValueForKey_withSetMutation_usingObjects (key: NSString; mutationKind: NSKeyValueSetMutationKind; objects: NSSet); message 'willChangeValueForKey:withSetMutation:usingObjects:';
    procedure didChangeValueForKey_withSetMutation_usingObjects (key: NSString; mutationKind: NSKeyValueSetMutationKind; objects: NSSet); message 'didChangeValueForKey:withSetMutation:usingObjects:';
  end;

type
  NSKeyValueObservingCustomization = objccategory external (NSObject)
    class function keyPathsForValuesAffectingValueForKey (key: NSString): NSSet; message 'keyPathsForValuesAffectingValueForKey:'; { available in macos , ios , watchos , tvos  }
    class function automaticallyNotifiesObserversForKey (key: NSString): objcbool; message 'automaticallyNotifiesObserversForKey:';
    procedure setObservationInfo(newValue: pointer); message 'setObservationInfo:';
    function observationInfo: pointer; message 'observationInfo';
  end;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  NSDeprecatedKeyValueObservingCustomization = objccategory external (NSObject)
    class procedure setKeys_triggerChangeNotificationsForDependentKey (keys: NSArray; dependentKey: NSString); message 'setKeys:triggerChangeNotificationsForDependentKey:'; deprecated 'Use +keyPathsForValuesAffectingValueForKey instead';
  end;
{$endif}

{$endif}
