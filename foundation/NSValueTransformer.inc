{ Parsed from Foundation.framework NSValueTransformer.h }

{$ifdef TYPES}
type
  NSValueTransformerPtr = ^NSValueTransformer;
  NSSecureUnarchiveFromDataTransformerPtr = ^NSSecureUnarchiveFromDataTransformer;
{$endif}

{$ifdef TYPES}
type
  NSValueTransformerName = NSString;
  NSValueTransformerNamePtr = ^NSValueTransformerName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSNegateBooleanTransformerName: NSValueTransformerName { available in macos , ios , watchos , tvos  }; cvar; external;
  NSIsNilTransformerName: NSValueTransformerName { available in macos , ios , watchos , tvos  }; cvar; external;
  NSIsNotNilTransformerName: NSValueTransformerName { available in macos , ios , watchos , tvos  }; cvar; external;
  NSUnarchiveFromDataTransformerName: NSValueTransformerName deprecated 'replace with NSSecureUnarchiveFromDataTransformerName'; cvar; external;
  NSKeyedUnarchiveFromDataTransformerName: NSValueTransformerName deprecated 'replace with NSSecureUnarchiveFromDataTransformerName'; cvar; external;
  NSSecureUnarchiveFromDataTransformerName: NSValueTransformerName { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSValueTransformer = objcclass external (NSObject)
  private
  public
    class procedure setValueTransformer_forName (transformer: NSValueTransformer; name: NSValueTransformerName); message 'setValueTransformer:forName:';
    class function valueTransformerForName (name: NSValueTransformerName): NSValueTransformer; message 'valueTransformerForName:';
    class function valueTransformerNames: NSArray; message 'valueTransformerNames';
    class function transformedValueClass: pobjc_class; message 'transformedValueClass';
    class function allowsReverseTransformation: objcbool; message 'allowsReverseTransformation';
    function transformedValue (value: id): id; message 'transformedValue:';
    function reverseTransformedValue (value: id): id; message 'reverseTransformedValue:';
  end;

type
  NSSecureUnarchiveFromDataTransformer = objcclass external (NSValueTransformer)
  public
    class function allowedTopLevelClasses: NSArray; message 'allowedTopLevelClasses';
  end;
{$endif}

