{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSWindowScripting.h }
{$ifdef CLASSES}

type
  NSWindow_NSScripting = objccategory external name 'NSScripting' (NSWindow)
    function hasCloseBox: objcbool; message 'hasCloseBox';
    function hasTitleBar: objcbool; message 'hasTitleBar';
    function isFloatingPanel: objcbool; message 'isFloatingPanel';
    function isMiniaturizable: objcbool; message 'isMiniaturizable';
    function isModalPanel: objcbool; message 'isModalPanel';
    function isResizable: objcbool; message 'isResizable';
    function isZoomable: objcbool; message 'isZoomable';
    procedure setOrderedIndex(newValue: NSInteger); message 'setOrderedIndex:';
    function orderedIndex: NSInteger; message 'orderedIndex';
    procedure setIsMiniaturized (flag: objcbool); message 'setIsMiniaturized:';
    procedure setIsVisible (flag: objcbool); message 'setIsVisible:';
    procedure setIsZoomed (flag: objcbool); message 'setIsZoomed:';
    function handleCloseScriptCommand (command: NSCloseCommand): id; message 'handleCloseScriptCommand:';
    function handlePrintScriptCommand (command: NSScriptCommand): id; message 'handlePrintScriptCommand:';
    function handleSaveScriptCommand (command: NSScriptCommand): id; message 'handleSaveScriptCommand:';
  end;
{$endif}

