{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSDocumentScripting.h }
{$ifdef CLASSES}

type
  NSDocument_NSScripting = objccategory external name 'NSScripting' (NSDocument)
    procedure setLastComponentOfFileName(newValue: NSString); message 'setLastComponentOfFileName:';
    function lastComponentOfFileName: NSString; message 'lastComponentOfFileName';
    function handleSaveScriptCommand (command: NSScriptCommand): id; message 'handleSaveScriptCommand:';
    function handleCloseScriptCommand (command: NSCloseCommand): id; message 'handleCloseScriptCommand:';
    function handlePrintScriptCommand (command: NSScriptCommand): id; message 'handlePrintScriptCommand:';
    function objectSpecifier: NSScriptObjectSpecifier; message 'objectSpecifier';
  end;
{$endif}

