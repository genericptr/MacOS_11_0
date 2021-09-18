{ Parsed from AppKit.framework NSAnimationContext.h }

{$ifdef CALLBACKS}
type
  NSAnimationContextRunAnimationGroupCallback = reference to procedure (context: NSAnimationContext); cblock; cdecl;
  NSAnimationContextCompletionHandlerCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSAnimationContextPtr = ^NSAnimationContext;
{$endif}

{$ifdef CLASSES}

type
  NSAnimationContext = objcclass external (NSObject)
  public
    class procedure runAnimationGroup_completionHandler (changes: NSAnimationContextRunAnimationGroupCallback; completionHandler: NSAnimationContextRunAnimationGroupCallback); message 'runAnimationGroup:completionHandler:'; { available in macos  }
    class procedure runAnimationGroup (changes: NSAnimationContextRunAnimationGroupCallback); message 'runAnimationGroup:'; { available in macos  }
    class procedure beginGrouping; message 'beginGrouping';
    class procedure endGrouping; message 'endGrouping';
    class function currentContext: NSAnimationContext; message 'currentContext';
    procedure setDuration(newValue: NSTimeInterval); message 'setDuration:';
    function duration: NSTimeInterval; message 'duration';
    procedure setTimingFunction(newValue: CAMediaTimingFunction); message 'setTimingFunction:'; { available in macos  }
    function timingFunction: CAMediaTimingFunction; message 'timingFunction'; { available in macos  }
    procedure setCompletionHandler(newValue: NSAnimationContextCompletionHandlerCallback); message 'setCompletionHandler:'; { available in macos  }
    function completionHandler: NSAnimationContextCompletionHandlerCallback; message 'completionHandler'; { available in macos  }
    procedure setAllowsImplicitAnimation(newValue: objcbool); message 'setAllowsImplicitAnimation:'; { available in macos  }
    function allowsImplicitAnimation: objcbool; message 'allowsImplicitAnimation'; { available in macos  }
  end;
{$endif}

