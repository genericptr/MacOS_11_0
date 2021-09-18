{ Parsed from WebKit.framework WKUserScript.h }

{$ifdef TYPES}
type
  WKUserScriptPtr = ^WKUserScript;
{$endif}

{$ifdef TYPES}
type
  WKUserScriptInjectionTime = NSInteger;
  WKUserScriptInjectionTimePtr = ^WKUserScriptInjectionTime;

const
  WKUserScriptInjectionTimeAtDocumentStart = 0;
  WKUserScriptInjectionTimeAtDocumentEnd = 1;
{$endif}

{$ifdef CLASSES}

type
  WKUserScript = objcclass external (NSObject, NSCopyingProtocol)
  public
    function source: NSString; message 'source';
    function injectionTime: WKUserScriptInjectionTime; message 'injectionTime';
    function isForMainFrameOnly: objcbool; message 'isForMainFrameOnly';
    function initWithSource_injectionTime_forMainFrameOnly (source_: NSString; injectionTime_: WKUserScriptInjectionTime; forMainFrameOnly: objcbool): id; message 'initWithSource:injectionTime:forMainFrameOnly:';
    function initWithSource_injectionTime_forMainFrameOnly_inContentWorld (source_: NSString; injectionTime_: WKUserScriptInjectionTime; forMainFrameOnly: objcbool; contentWorld: WKContentWorld): id; message 'initWithSource:injectionTime:forMainFrameOnly:inContentWorld:'; { available in macos , ios  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

