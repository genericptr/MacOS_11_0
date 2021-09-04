{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SCNTransaction.h }

{$ifdef CALLBACKS}
type
  SCNTransactionCompletionBlockCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SCNTransactionPtr = ^SCNTransaction;
{$endif}

{$ifdef CLASSES}

type
  SCNTransaction = objcclass external (NSObject)
  public
    class procedure begin_; message 'begin';
    class procedure commit; message 'commit';
    class procedure flush; message 'flush';
    class procedure lock; message 'lock';
    class procedure unlock; message 'unlock';
    class procedure setAnimationDuration(newValue: CFTimeInterval); message 'setAnimationDuration:';
    class function animationDuration: CFTimeInterval; message 'animationDuration';
    class procedure setAnimationTimingFunction(newValue: CAMediaTimingFunction); message 'setAnimationTimingFunction:'; { unavailable in watchos }
    class function animationTimingFunction: CAMediaTimingFunction; message 'animationTimingFunction'; { unavailable in watchos }
    class procedure setDisableActions(newValue: objcbool); message 'setDisableActions:';
    class function disableActions: objcbool; message 'disableActions';
    procedure setCompletionBlock(newValue: SCNTransactionCompletionBlockCallback); message 'setCompletionBlock:';
    function completionBlock: SCNTransactionCompletionBlockCallback; message 'completionBlock';
    class function valueForKey (key: NSString): id; message 'valueForKey:';
    class procedure setValue_forKey (value: id; key: NSString); message 'setValue:forKey:';
  end;
{$endif}

