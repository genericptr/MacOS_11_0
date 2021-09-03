{ Parsed from PushKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PushKit.framework/Headers/PKPushCredentials.h }

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

