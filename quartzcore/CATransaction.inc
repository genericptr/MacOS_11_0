{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CATransaction.h }

{ Types from CATransaction }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  CATransactionSetCompletionBlockCallback = reference to function : pointer; cblock; cdecl;
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
  kCATransactionDisableActions: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransactionAnimationTimingFunction: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  kCATransactionCompletionBlock: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

