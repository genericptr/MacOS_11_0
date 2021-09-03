{ Parsed from PushKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PushKit.framework/Headers/PKPushPayload.h }

{$ifdef TYPES}
type
  PKPushPayloadPtr = ^PKPushPayload;
{$endif}

{$ifdef CLASSES}

type
  PKPushPayload = objcclass external (NSObject)
  public
    function type_: PKPushType; message 'type';
    function dictionaryPayload: NSDictionary; message 'dictionaryPayload';
  end;
{$endif}

