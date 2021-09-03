{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSApplicationScripting.h }
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
