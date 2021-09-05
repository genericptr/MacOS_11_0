{ Parsed from Metal.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Metal.framework/Headers/MTLEvent.h }

{$ifdef TYPES}
type
  MTLSharedEventListenerPtr = ^MTLSharedEventListener;
  MTLSharedEventHandlePtr = ^MTLSharedEventHandle;
  MTLEventProtocolPtr = ^MTLEventProtocol;
  MTLSharedEventProtocolPtr = ^MTLSharedEventProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLEventProtocol = objcprotocol external name 'MTLEvent' (NSObjectProtocol)
    function device: MTLDeviceProtocol; message 'device';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
  end;
{$endif}

{$ifdef CLASSES}

type
  MTLSharedEventListener = objcclass external (NSObject)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithDispatchQueue (dispatchQueue: dispatch_queue_t): id; message 'initWithDispatchQueue:'; { NS_DESIGNATED_INITIALIZER }
    function dispatchQueue: dispatch_queue_t; message 'dispatchQueue';
  end;
{$endif}

{$ifdef TYPES}
type
  MTLSharedEventNotificationBlock = reference to procedure (param1: id; value: cuint64); cblock; cdecl;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLSharedEventProtocol = objcprotocol external name 'MTLSharedEvent' (MTLEventProtocol)
    procedure notifyListener_atValue_block (listener: MTLSharedEventListener; value: cuint64; block: MTLSharedEventNotificationBlock); message 'notifyListener:atValue:block:';
    function newSharedEventHandle: MTLSharedEventHandle; message 'newSharedEventHandle';
    procedure setSignaledValue(newValue: cuint64); message 'setSignaledValue:';
    function signaledValue: cuint64; message 'signaledValue';
  end;
{$endif}

{$ifdef CLASSES}

type
  MTLSharedEventHandle = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _priv: MTLSharedEventHandlePrivatePtr;
  public
    function label_: NSString; message 'label';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

