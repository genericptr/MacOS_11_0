{ Parsed from AppKit.framework NSApplicationScripting.h }
{$ifdef CLASSES}

type
  NSApplication_NSScripting = objccategory external name 'NSScripting' (NSApplication)
    function orderedDocuments: NSArray; message 'orderedDocuments';
    function orderedWindows: NSArray; message 'orderedWindows';
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSApplicationScriptingDelegation = objccategory external (NSObject)
    function application_delegateHandlesKey (sender: NSApplication; key: NSString): objcbool; message 'application:delegateHandlesKey:'; deprecated 'This is now an optional method of the NSApplicationDelegate protocol.';
  end;
{$endif}

{$endif}
