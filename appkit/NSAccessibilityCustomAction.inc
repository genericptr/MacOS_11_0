{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSAccessibilityCustomAction.h }

{$ifdef CALLBACKS}
type
  NSAccessibilityCustomActionInitWithNameCallback = reference to function : objcbool; cblock; cdecl;
  NSAccessibilityCustomActionHandlerCallback = reference to function : objcbool; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSAccessibilityCustomActionPtr = ^NSAccessibilityCustomAction;
{$endif}

{$ifdef CLASSES}

type
  NSAccessibilityCustomAction = objcclass external (NSObject)
  public
    function initWithName_handler (name: NSString; handler: NSAccessibilityCustomActionInitWithNameCallback): id; message 'initWithName:handler:';
    function initWithName_target_selector (name: NSString; target: NSObjectProtocol; selector: SEL): id; message 'initWithName:target:selector:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setHandler(newValue: NSAccessibilityCustomActionHandlerCallback); message 'setHandler:';
    function handler: NSAccessibilityCustomActionHandlerCallback; message 'handler';
    procedure setTarget(newValue: NSObjectProtocol); message 'setTarget:';
    function target: NSObjectProtocol; message 'target';
    procedure setSelector(newValue: SEL); message 'setSelector:';
    function selector: SEL; message 'selector';
  end;
{$endif}

