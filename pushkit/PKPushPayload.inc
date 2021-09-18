{ Parsed from PushKit.framework PKPushPayload.h }

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

