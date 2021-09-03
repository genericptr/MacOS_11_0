{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMObject.h }

{$ifdef TYPES}
type
  DOMObjectPtr = ^DOMObject;
{$endif}

{$ifdef TYPES}
type
  DOMTimeStamp = culonglong;
  DOMTimeStampPtr = ^DOMTimeStamp;
  DOMObjectInternal = OpaqueType deprecated 'in 10_4, 10_14';
  DOMObjectInternalPtr = ^DOMObjectInternal deprecated 'in 10_4, 10_14';
{$endif}

{$ifdef CLASSES}

type
  DOMObject = objcclass external (WebScriptObject, NSCopyingProtocol)
  private
    _internal: DOMObjectInternalPtr;
  public
    function init: id; message 'init';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;


type
  DOMLinkStyle = objccategory external (DOMObject)
    function sheet: DOMStyleSheet; message 'sheet'; { available in 10_4 }
  end;
{$endif}

