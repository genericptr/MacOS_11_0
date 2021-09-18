{ Parsed from Foundation.framework NSPredicate.h }

{$ifdef CALLBACKS}
type
  NSPredicatePredicateWithBlockCallback = reference to function (evaluatedObject: id; bindings: NSDictionary): objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSPredicatePtr = ^NSPredicate;
{$endif}

{$ifdef CLASSES}

type
  NSPredicate = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _predicateFlags: bitpacked record
      case byte of
        0: (_anonBitField__predicateFlags0: cuint);
        1: (
          _evaluationBlocked: 0..1;
          _reservedPredicateFlags: 0..((1 shl 31)-1);
        );
      end;
    {$ifdef __LP64__}
    reserved: cuint32;
    {$endif}
  public
    class function predicateWithFormat_argumentArray (predicateFormat: NSString; arguments: NSArray): NSPredicate; message 'predicateWithFormat:argumentArray:';
    class function predicateWithFormat (predicateFormat: NSString): NSPredicate; varargs; message 'predicateWithFormat:';
    class function predicateWithFormat_arguments (predicateFormat: NSString; argList: va_list): NSPredicate; message 'predicateWithFormat:arguments:';
    class function predicateFromMetadataQueryString (queryString: NSString): NSPredicate; message 'predicateFromMetadataQueryString:'; { unavailable in ios, watchos, tvos }
    class function predicateWithValue (value: objcbool): NSPredicate; message 'predicateWithValue:';
    class function predicateWithBlock (block: NSPredicatePredicateWithBlockCallback): NSPredicate; message 'predicateWithBlock:'; { available in macos , ios , watchos , tvos  }
    function predicateFormat: NSString; message 'predicateFormat';
    function predicateWithSubstitutionVariables (variables: NSDictionary): id; message 'predicateWithSubstitutionVariables:';
    function evaluateWithObject (object_: id): objcbool; message 'evaluateWithObject:';
    function evaluateWithObject_substitutionVariables (object_: id; bindings: NSDictionary): objcbool; message 'evaluateWithObject:substitutionVariables:'; { available in macos , ios , watchos , tvos  }
    procedure allowEvaluation; message 'allowEvaluation'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSArray_NSPredicateSupport = objccategory external name 'NSPredicateSupport' (NSArray)
    function filteredArrayUsingPredicate (predicate: NSPredicate): NSArray; message 'filteredArrayUsingPredicate:';
  end;

type
  NSMutableArray_NSPredicateSupport = objccategory external name 'NSPredicateSupport' (NSMutableArray)
    procedure filterUsingPredicate (predicate: NSPredicate); message 'filterUsingPredicate:';
  end;

type
  NSSet_NSPredicateSupport = objccategory external name 'NSPredicateSupport' (NSSet)
    function filteredSetUsingPredicate (predicate: NSPredicate): NSSet; message 'filteredSetUsingPredicate:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSMutableSet_NSPredicateSupport = objccategory external name 'NSPredicateSupport' (NSMutableSet)
    procedure filterUsingPredicate (predicate: NSPredicate); message 'filterUsingPredicate:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSOrderedSet_NSPredicateSupport = objccategory external name 'NSPredicateSupport' (NSOrderedSet)
    function filteredOrderedSetUsingPredicate (p: NSPredicate): NSOrderedSet; message 'filteredOrderedSetUsingPredicate:'; { available in macos , ios , watchos , tvos  }
  end;

type
  NSPredicateSupport = objccategory external (NSMutableOrderedSet)
    procedure filterUsingPredicate (p: NSPredicate); message 'filterUsingPredicate:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

