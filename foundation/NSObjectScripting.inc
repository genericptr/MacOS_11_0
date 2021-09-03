{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSObjectScripting.h }
{$ifdef CLASSES}

type
  NSScripting = objccategory external (NSObject)
    function scriptingValueForSpecifier (objectSpecifier: NSScriptObjectSpecifier): id; message 'scriptingValueForSpecifier:'; { unavailable in ios, watchos, tvos }
    procedure setScriptingProperties(newValue: NSDictionary); message 'setScriptingProperties:';
    function scriptingProperties: NSDictionary; message 'scriptingProperties';
    function copyScriptingValue_forKey_withProperties (value: id; key: NSString; properties: NSDictionary): id; message 'copyScriptingValue:forKey:withProperties:'; { unavailable in ios, watchos, tvos }
    function newScriptingObjectOfClass_forValueForKey_withContentsValue_properties (objectClass: pobjc_class; key: NSString; contentsValue: id; properties: NSDictionary): id; message 'newScriptingObjectOfClass:forValueForKey:withContentsValue:properties:'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

