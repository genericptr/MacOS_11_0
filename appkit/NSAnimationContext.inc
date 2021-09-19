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
    class procedure runAnimationGroup_completionHandler (changes: NSAnimationContextRunAnimationGroupCallback; completionHandler: NSAnimationContextRunAnimationGroupCallback); message 'runAnimationGroup:completionHandler:'; { available in macos 10.7 }
    class procedure runAnimationGroup (changes: NSAnimationContextRunAnimationGroupCallback); message 'runAnimationGroup:'; { available in macos 10.12 }
    class procedure beginGrouping; message 'beginGrouping';
    class procedure endGrouping; message 'endGrouping';
    class function currentContext: NSAnimationContext; message 'currentContext';
    procedure setDuration(newValue: NSTimeInterval); message 'setDuration:';
    function duration: NSTimeInterval; message 'duration';
    procedure setTimingFunction(newValue: CAMediaTimingFunction); message 'setTimingFunction:'; { available in macos 10.7 }
    function timingFunction: CAMediaTimingFunction; message 'timingFunction'; { available in macos 10.7 }
    procedure setCompletionHandler(newValue: NSAnimationContextCompletionHandlerCallback); message 'setCompletionHandler:'; { available in macos 10.7 }
    function completionHandler: NSAnimationContextCompletionHandlerCallback; message 'completionHandler'; { available in macos 10.7 }
    procedure setAllowsImplicitAnimation(newValue: objcbool); message 'setAllowsImplicitAnimation:'; { available in macos 10.8 }
    function allowsImplicitAnimation: objcbool; message 'allowsImplicitAnimation'; { available in macos 10.8 }
  end;
{$endif}

