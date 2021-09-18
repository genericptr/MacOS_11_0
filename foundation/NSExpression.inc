{ Parsed from Foundation.framework NSExpression.h }

{$ifdef CALLBACKS}
type
  NSExpressionExpressionForBlockCallback = reference to function (evaluatedObject: id; expressions: NSArray; context: NSMutableDictionary): id; cblock; cdecl;
  NSExpressionExpressionBlockCallback = reference to function (param1: id; param2: NSArray; param3: NSMutableDictionary): id; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSExpressionPtr = ^NSExpression;
{$endif}

{$ifdef TYPES}
type
  NSExpressionType = NSUInteger;
  NSExpressionTypePtr = ^NSExpressionType;

const
  NSConstantValueExpressionType = 0;
  NSEvaluatedObjectExpressionType = 1;
  NSVariableExpressionType = 2;
  NSKeyPathExpressionType = 3;
  NSFunctionExpressionType = 4;
  NSUnionSetExpressionType = 5 { available in macos , ios , watchos , tvos  };
  NSIntersectSetExpressionType = 6 { available in macos , ios , watchos , tvos  };
  NSMinusSetExpressionType = 7 { available in macos , ios , watchos , tvos  };
  NSSubqueryExpressionType = 13 { available in macos , ios , watchos , tvos  };
  NSAggregateExpressionType = 14 { available in macos , ios , watchos , tvos  };
  NSAnyKeyExpressionType = 15 { available in macos , ios , watchos , tvos  };
  NSBlockExpressionType = 19;
  NSConditionalExpressionType = 20 { available in macos , ios , watchos , tvos  };
{$endif}

{$ifdef CLASSES}

type
  NSExpression = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  private
    _expressionFlags: bitpacked record
      case byte of
        0: (_anonBitField__expressionFlags0: cuint);
        1: (
          _evaluationBlocked: 0..1;
          _reservedExpressionFlags: 0..((1 shl 31)-1);
        );
      end;
    {$ifdef __LP64__}
    reserved: cuint32;
    {$endif}
    _expressionType: NSExpressionType;
  public
    class function expressionWithFormat_argumentArray (expressionFormat: NSString; arguments: NSArray): NSExpression; message 'expressionWithFormat:argumentArray:'; { available in macos , ios , watchos , tvos  }
    class function expressionWithFormat (expressionFormat: NSString): NSExpression; varargs; message 'expressionWithFormat:'; { available in macos , ios , watchos , tvos  }
    class function expressionWithFormat_arguments (expressionFormat: NSString; argList: va_list): NSExpression; message 'expressionWithFormat:arguments:'; { available in macos , ios , watchos , tvos  }
    class function expressionForConstantValue (obj: id): NSExpression; message 'expressionForConstantValue:';
    class function expressionForEvaluatedObject: NSExpression; message 'expressionForEvaluatedObject';
    class function expressionForVariable (string_: NSString): NSExpression; message 'expressionForVariable:';
    class function expressionForKeyPath (keyPath: NSString): NSExpression; message 'expressionForKeyPath:';
    class function expressionForFunction_arguments (name: NSString; parameters: NSArray): NSExpression; message 'expressionForFunction:arguments:';
    class function expressionForAggregate (subexpressions: NSArray): NSExpression; message 'expressionForAggregate:'; { available in macos , ios , watchos , tvos  }
    class function expressionForUnionSet_with (left: NSExpression; right: NSExpression): NSExpression; message 'expressionForUnionSet:with:'; { available in macos , ios , watchos , tvos  }
    class function expressionForIntersectSet_with (left: NSExpression; right: NSExpression): NSExpression; message 'expressionForIntersectSet:with:'; { available in macos , ios , watchos , tvos  }
    class function expressionForMinusSet_with (left: NSExpression; right: NSExpression): NSExpression; message 'expressionForMinusSet:with:'; { available in macos , ios , watchos , tvos  }
    class function expressionForSubquery_usingIteratorVariable_predicate (expression: NSExpression; variable: NSString; predicate: NSPredicate): NSExpression; message 'expressionForSubquery:usingIteratorVariable:predicate:'; { available in macos , ios , watchos , tvos  }
    class function expressionForFunction_selectorName_arguments (target: NSExpression; name: NSString; parameters: NSArray): NSExpression; message 'expressionForFunction:selectorName:arguments:'; { available in macos , ios , watchos , tvos  }
    class function expressionForAnyKey: NSExpression; message 'expressionForAnyKey'; { available in macos , ios , watchos , tvos  }
    class function expressionForBlock_arguments (block: NSExpressionExpressionForBlockCallback; arguments: NSArray): NSExpression; message 'expressionForBlock:arguments:'; { available in macos , ios , watchos , tvos  }
    class function expressionForConditional_trueExpression_falseExpression (predicate: NSPredicate; trueExpression: NSExpression; falseExpression: NSExpression): NSExpression; message 'expressionForConditional:trueExpression:falseExpression:'; { available in macos , ios , watchos , tvos  }
    function initWithExpressionType (type_: NSExpressionType): id; message 'initWithExpressionType:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function expressionType: NSExpressionType; message 'expressionType';
    function constantValue: id; message 'constantValue';
    function keyPath: NSString; message 'keyPath';
    function function_: NSString; message 'function';
    function variable: NSString; message 'variable';
    function operand: NSExpression; message 'operand';
    function arguments: NSArray; message 'arguments';
    function collection: id; message 'collection'; { available in macos , ios , watchos , tvos  }
    function predicate: NSPredicate; message 'predicate'; { available in macos , ios , watchos , tvos  }
    function leftExpression: NSExpression; message 'leftExpression'; { available in macos , ios , watchos , tvos  }
    function rightExpression: NSExpression; message 'rightExpression'; { available in macos , ios , watchos , tvos  }
    function trueExpression: NSExpression; message 'trueExpression'; { available in macos , ios , watchos , tvos  }
    function falseExpression: NSExpression; message 'falseExpression'; { available in macos , ios , watchos , tvos  }
    procedure setExpressionBlock(newValue: NSExpressionExpressionBlockCallback); message 'setExpressionBlock:'; { available in macos , ios , watchos , tvos  }
    function expressionBlock: NSExpressionExpressionBlockCallback; message 'expressionBlock'; { available in macos , ios , watchos , tvos  }
    function expressionValueWithObject_context (object_: id; context: NSMutableDictionary): id; message 'expressionValueWithObject:context:';
    procedure allowEvaluation; message 'allowEvaluation'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

