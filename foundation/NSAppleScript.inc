{ Parsed from Foundation.framework NSAppleScript.h }

{$ifdef TYPES}
type
  NSAppleScriptPtr = ^NSAppleScript;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAppleScriptErrorMessage: NSString { unavailable in ios, watchos, tvos } { available in macos 10.2 }; cvar; external;
  NSAppleScriptErrorNumber: NSString { unavailable in ios, watchos, tvos } { available in macos 10.2 }; cvar; external;
  NSAppleScriptErrorAppName: NSString { unavailable in ios, watchos, tvos } { available in macos 10.2 }; cvar; external;
  NSAppleScriptErrorBriefMessage: NSString { unavailable in ios, watchos, tvos } { available in macos 10.2 }; cvar; external;
  NSAppleScriptErrorRange: NSString { unavailable in ios, watchos, tvos } { available in macos 10.2 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAppleScript = objcclass external (NSObject, NSCopyingProtocol)
  private
    _source: NSString;
    _compiledScriptID: cuint;
    _reserved1: pointer;
    _reserved2: pointer;
  public
    function initWithContentsOfURL_error (url: NSURL; errorInfo: NSDictionaryPtr): id; message 'initWithContentsOfURL:error:'; { NS_DESIGNATED_INITIALIZER }
    function initWithSource (source: NSString): id; message 'initWithSource:'; { NS_DESIGNATED_INITIALIZER }
    function source: NSString; message 'source';
    function isCompiled: objcbool; message 'isCompiled';
    function compileAndReturnError (errorInfo: NSDictionaryPtr): objcbool; message 'compileAndReturnError:';
    function executeAndReturnError (errorInfo: NSDictionaryPtr): NSAppleEventDescriptor; message 'executeAndReturnError:';
    function executeAppleEvent_error (event: NSAppleEventDescriptor; errorInfo: NSDictionaryPtr): NSAppleEventDescriptor; message 'executeAppleEvent:error:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

