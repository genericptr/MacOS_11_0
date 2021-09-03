{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSInterfaceStyle.h }
{$ifdef TYPES}
const
  NSNoInterfaceStyle = 0 deprecated;
  NSNextStepInterfaceStyle = 1 deprecated;
  NSWindows95InterfaceStyle = 2 deprecated;
  NSMacintoshInterfaceStyle = 3 deprecated;

type
  NSInterfaceStyle = NSUInteger deprecated;
  NSInterfaceStylePtr = ^NSInterfaceStyle deprecated;
{$endif}

{$ifdef FUNCTIONS}
function NSInterfaceStyleForKey(key: NSString; responder: NSResponder): NSInterfaceStyle; cdecl; external; deprecated;
{$endif}

{$ifdef CLASSES}

type
  NSResponder_NSInterfaceStyle = objccategory external name 'NSInterfaceStyle' (NSResponder)
    function interfaceStyle: NSInterfaceStyle; message 'interfaceStyle'; deprecated;
    procedure setInterfaceStyle (interfaceStyle_: NSInterfaceStyle); message 'setInterfaceStyle:'; deprecated;
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSInterfaceStyleDefault: NSString deprecated; cvar; external;
{$endif}

