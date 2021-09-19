{ Parsed from QuartzCore.framework CATransaction.h }

{ Types from CATransaction }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  CATransactionSetCompletionBlockCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  CATransactionPtr = ^CATransaction;
{$endif}

{$ifdef CLASSES}

type
  CATransaction = objcclass external (NSObject)
  public
    class procedure begin_; message 'begin';
    class procedure commit; message 'commit';
    class procedure flush; message 'flush';
    class procedure lock; message 'lock';
    class procedure unlock; message 'unlock';
    class function animationDuration: CFTimeInterval; message 'animationDuration';
    class procedure setAnimationDuration (dur: CFTimeInterval); message 'setAnimationDuration:';
    class function animationTimingFunction: CAMediaTimingFunction; message 'animationTimingFunction';
    class procedure setAnimationTimingFunction (function_: CAMediaTimingFunction); message 'setAnimationTimingFunction:';
    class function disableActions: objcbool; message 'disableActions';
    class procedure setDisableActions (flag: objcbool); message 'setDisableActions:';
    {$if defined(__BLOCKS__)}
    class function completionBlock: CATransactionSetCompletionBlockCallback; message 'completionBlock';
    class procedure setCompletionBlock (block: CATransactionSetCompletionBlockCallback); message 'setCompletionBlock:';
    {$endif}
    class function valueForKey (key: NSString): id; message 'valueForKey:';
    class procedure setValue_forKey (anObject: id; key: NSString); message 'setValue:forKey:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCATransactionAnimationDuration: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransactionDisableActions: NSString { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCATransactionAnimationTimingFunction: NSString { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCATransactionCompletionBlock: NSString { available in macos 10.6, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

