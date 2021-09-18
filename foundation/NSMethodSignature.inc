{ Parsed from Foundation.framework NSMethodSignature.h }

{$ifdef TYPES}
type
  NSMethodSignaturePtr = ^NSMethodSignature;
{$endif}

{$ifdef CLASSES}

type
  NSMethodSignature = objcclass external (NSObject)
  public
    class function signatureWithObjCTypes (types: PChar): NSMethodSignature; message 'signatureWithObjCTypes:';
    function numberOfArguments: NSUInteger; message 'numberOfArguments';
    function getArgumentTypeAtIndex (idx: NSUInteger): PChar; message 'getArgumentTypeAtIndex:';
    function frameLength: NSUInteger; message 'frameLength';
    function isOneway: objcbool; message 'isOneway';
    function methodReturnType: PChar; message 'methodReturnType';
    function methodReturnLength: NSUInteger; message 'methodReturnLength';
  end;
{$endif}

