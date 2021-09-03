{ Parsed from PushKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PushKit.framework/Headers/PKPushRegistry.h }

{$ifdef CALLBACKS}
type
  PKPushRegistryPushRegistryCallback = reference to function : pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PKPushRegistryPtr = ^PKPushRegistry;
  PKPushRegistryDelegateProtocolPtr = ^PKPushRegistryDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKPushTypeVoIP: PKPushType { unavailable in macos, watchos, tvos }; cvar; external;
  PKPushTypeComplication: PKPushType { unavailable in macos, tvos }; cvar; external;
  PKPushTypeFileProvider: PKPushType { unavailable in watchos, tvos }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PKPushRegistry = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setDesiredPushTypes(newValue: NSSet); message 'setDesiredPushTypes:';
    function desiredPushTypes: NSSet; message 'desiredPushTypes';
    function pushTokenForType (type_: PKPushType): NSData; message 'pushTokenForType:';
    function initWithQueue (queue: dispatch_queue_t): id; message 'initWithQueue:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  PKPushRegistryDelegateProtocol = objcprotocol external name 'PKPushRegistryDelegate' (NSObjectProtocol)
  required
    procedure pushRegistry_didUpdatePushCredentials_forType (registry: PKPushRegistry; pushCredentials: PKPushCredentials; type_: PKPushType); message 'pushRegistry:didUpdatePushCredentials:forType:';
  optional
    procedure pushRegistry_didReceiveIncomingPushWithPayload_forType (registry: PKPushRegistry; payload: PKPushPayload; type_: PKPushType); message 'pushRegistry:didReceiveIncomingPushWithPayload:forType:'; { unavailable in macos, watchos, tvos }
    procedure pushRegistry_didReceiveIncomingPushWithPayload_forType_withCompletionHandler (registry: PKPushRegistry; payload: PKPushPayload; type_: PKPushType; completion: PKPushRegistryPushRegistryCallback); message 'pushRegistry:didReceiveIncomingPushWithPayload:forType:withCompletionHandler:'; { available in macos , macCatalyst , ios , watchos , tvos  }
    procedure pushRegistry_didInvalidatePushTokenForType (registry: PKPushRegistry; type_: PKPushType); message 'pushRegistry:didInvalidatePushTokenForType:';
  end;
{$endif}

