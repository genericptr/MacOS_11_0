{ Parsed from PushKit.framework PKPushRegistry.h }

{$ifdef CALLBACKS}
type
  PKPushRegistryPushRegistryCallback = reference to procedure; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  PKPushRegistryPtr = ^PKPushRegistry;
  PKPushRegistryDelegateProtocolPtr = ^PKPushRegistryDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PKPushTypeVoIP: PKPushType { unavailable in macos, watchos, tvos } { available in ios 9.0, macCatalyst 14.0 }; cvar; external;
  PKPushTypeComplication: PKPushType { unavailable in macos, tvos } { available in watchos 6.0 }; cvar; external;
  PKPushTypeFileProvider: PKPushType { unavailable in watchos, tvos } { available in macos 10.15, ios 11.0, macCatalyst 13.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PKPushRegistry = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: PKPushRegistryDelegateProtocol); message 'setDelegate:';
    function delegate: PKPushRegistryDelegateProtocol; message 'delegate';
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
    procedure pushRegistry_didReceiveIncomingPushWithPayload_forType_withCompletionHandler (registry: PKPushRegistry; payload: PKPushPayload; type_: PKPushType; completion: PKPushRegistryPushRegistryCallback); message 'pushRegistry:didReceiveIncomingPushWithPayload:forType:withCompletionHandler:'; { available in macos 10.15, macCatalyst 13.0, ios 11.0, watchos 6.0, tvos 13.0 }
    procedure pushRegistry_didInvalidatePushTokenForType (registry: PKPushRegistry; type_: PKPushType); message 'pushRegistry:didInvalidatePushTokenForType:';
  end;
{$endif}

