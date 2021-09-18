{ Parsed from PushKit.framework PKPushCredentials.h }

{$ifdef TYPES}
type
  PKPushCredentialsPtr = ^PKPushCredentials;
{$endif}

{$ifdef CLASSES}

type
  PKPushCredentials = objcclass external (NSObject)
  public
    function type_: PKPushType; message 'type';
    function token: NSData; message 'token';
  end;
{$endif}

