{ Parsed from ImageCaptureCore.framework ICDevice.h }

{$ifdef CALLBACKS}
type
  ICDeviceRequestOpenSessionWithOptionsCallback = reference to procedure (error: NSError); cblock; cdecl;
  ICDeviceRequestCloseSessionWithOptionsCallback = reference to procedure (error: NSError); cblock; cdecl;
  ICDeviceRequestEjectWithCompletionCallback = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  ICDevicePtr = ^ICDevice;
  ICDeviceDelegateProtocolPtr = ^ICDeviceDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  ICDeviceType = NSUInteger;
  ICDeviceTypePtr = ^ICDeviceType;

const
  ICDeviceTypeCamera = $00000001;
  ICDeviceTypeScanner = $00000002;

type
  ICDeviceLocationType = NSUInteger;
  ICDeviceLocationTypePtr = ^ICDeviceLocationType;

const
  ICDeviceLocationTypeLocal = $00000100;
  ICDeviceLocationTypeShared = $00000200;
  ICDeviceLocationTypeBonjour = $00000400;
  ICDeviceLocationTypeBluetooth = $00000800;

type
  ICDeviceTypeMask = NSUInteger;
  ICDeviceTypeMaskPtr = ^ICDeviceTypeMask;

const
  ICDeviceTypeMaskCamera = $00000001;
  ICDeviceTypeMaskScanner = $00000002;

type
  ICDeviceLocationTypeMask = NSUInteger;
  ICDeviceLocationTypeMaskPtr = ^ICDeviceLocationTypeMask;

const
  ICDeviceLocationTypeMaskLocal = $00000100;
  ICDeviceLocationTypeMaskShared = $00000200;
  ICDeviceLocationTypeMaskBonjour = $00000400;
  ICDeviceLocationTypeMaskBluetooth = $00000800;
  ICDeviceLocationTypeMaskRemote = $0000FE00;

type
  ICDeviceTransport = NSString { available in macos 10.4, ios 13.0 };
  ICDeviceTransportPtr = ^ICDeviceTransport { available in macos 10.4, ios 13.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICTransportTypeUSB: ICDeviceTransport { available in macos 10.4,ios 13.0 }; cvar; external;
  ICTransportTypeFireWire: ICDeviceTransport { unavailable in ios } { available in macos 10.4 }; cvar; external;
  ICTransportTypeBluetooth: ICDeviceTransport { unavailable in ios } { available in macos 10.4 }; cvar; external;
  ICTransportTypeMassStorage: ICDeviceTransport { available in macos 10.4,ios 13.0 }; cvar; external;
  ICTransportTypeExFAT: ICDeviceTransport { unavailable in macos } { available in ios 10.0 }; cvar; external;
  ICTransportTypeTCPIP: ICDeviceTransport { available in macos 10.4,ios 13.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICDeviceStatus = NSString;
  ICDeviceStatusPtr = ^ICDeviceStatus;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICStatusNotificationKey: ICDeviceStatus { available in macos 10.4,ios 13.0 }; cvar; external;
  ICStatusCodeKey: ICDeviceStatus { unavailable in ios } { available in macos 10.4 }; cvar; external;
  ICLocalizedStatusNotificationKey: ICDeviceStatus { unavailable in ios } { available in macos 10.4 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICDeviceCapability = NSString;
  ICDeviceCapabilityPtr = ^ICDeviceCapability;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICDeviceCanEjectOrDisconnect: ICDeviceCapability { available in macos 10.4, ios 13.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICSessionOptions = NSString { available in macos 10.15,ios 13.0 };
  ICSessionOptionsPtr = ^ICSessionOptions { available in macos 10.15,ios 13.0 };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICEnumerationChronologicalOrder: ICSessionOptions { available in macos 10.15,ios 13.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICDeviceLocationOptions = NSString;
  ICDeviceLocationOptionsPtr = ^ICDeviceLocationOptions;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICDeviceLocationDescriptionUSB: ICDeviceLocationOptions { unavailable in ios } { available in macos 10.4 }; cvar; external;
  ICDeviceLocationDescriptionFireWire: ICDeviceLocationOptions { unavailable in ios } { available in macos 10.4 }; cvar; external;
  ICDeviceLocationDescriptionBluetooth: ICDeviceLocationOptions { unavailable in ios } { available in macos 10.4 }; cvar; external;
  ICDeviceLocationDescriptionMassStorage: ICDeviceLocationOptions { unavailable in ios } { available in macos 10.4 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ICDevice = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: ICDeviceDelegateProtocol); message 'setDelegate:'; { available in macos 10.4,ios 13.0 }
    function delegate: ICDeviceDelegateProtocol; message 'delegate'; { available in macos 10.4,ios 13.0 }
    function type_: ICDeviceType; message 'type'; { available in macos 10.4,ios 13.0 }
    function capabilities: NSArray; message 'capabilities'; { available in macos 10.4, ios 13.0 }
    function name: NSString; message 'name'; { available in macos 10.4, ios 13.0 }
    function productKind: NSString; message 'productKind'; { available in macos 10.4, ios 13.0 }
    function icon: CGImageRef; message 'icon'; { available in macos 10.4, ios 13.0 }
    function systemSymbolName: NSString; message 'systemSymbolName'; { unavailable in ios } { available in macos 11.0 }
    function transportType: NSString; message 'transportType'; { available in macos 10.4, ios 13.0 }
    function UUIDString: NSString; message 'UUIDString'; { available in macos 10.4, ios 13.0 }
    function locationDescription: NSString; message 'locationDescription'; { unavailable in ios } { available in macos 10.4 }
    function hasOpenSession: objcbool; message 'hasOpenSession'; { available in macos 10.4, ios 13.0 }
    function userData: NSMutableDictionary; message 'userData'; { available in macos 10.4, ios 13.0 }
    function modulePath: NSString; message 'modulePath'; { unavailable in ios } { available in macos 10.4 }
    function moduleVersion: NSString; message 'moduleVersion'; { unavailable in ios } { available in macos 10.4 }
    function serialNumberString: NSString; message 'serialNumberString'; { unavailable in ios } { available in macos 10.4 }
    function usbLocationID: cint; message 'usbLocationID'; { available in macos 10.4,ios 13.0 }
    function usbProductID: cint; message 'usbProductID'; { available in macos 10.4,ios 13.0 }
    function usbVendorID: cint; message 'usbVendorID'; { available in macos 10.4,ios 13.0 }
    procedure requestOpenSession; message 'requestOpenSession'; { available in macos 10.4, ios 13.0 }
    procedure requestCloseSession; message 'requestCloseSession'; { available in macos 10.4, ios 13.0 }
    procedure requestEject; message 'requestEject'; { available in macos 10.4, ios 13.0 }
    procedure requestOpenSessionWithOptions_completion (options: NSDictionary; completion: ICDeviceRequestOpenSessionWithOptionsCallback); message 'requestOpenSessionWithOptions:completion:'; { available in macos 10.15, ios 13.0 }
    procedure requestCloseSessionWithOptions_completion (options: NSDictionary; completion: ICDeviceRequestCloseSessionWithOptionsCallback); message 'requestCloseSessionWithOptions:completion:'; { available in macos 10.15, ios 13.0 }
    procedure requestEjectWithCompletion (completion: ICDeviceRequestEjectWithCompletionCallback); message 'requestEjectWithCompletion:'; { available in macos 10.15, ios 13.0 }
    procedure setAutolaunchApplicationPath(newValue: NSString); message 'setAutolaunchApplicationPath:'; { unavailable in ios } { available in macos 10.4 }
    function autolaunchApplicationPath: NSString; message 'autolaunchApplicationPath'; { unavailable in ios } { available in macos 10.4 }
    function isRemote: objcbool; message 'isRemote'; { unavailable in ios } { available in macos 10.4 }
    function persistentIDString: NSString; message 'persistentIDString'; { unavailable in ios } { available in macos 10.4 }
    procedure requestSendMessage_outData_maxReturnedDataSize_sendMessageDelegate_didSendMessageSelector_contextInfo (messageCode: cuint; data: NSData; maxReturnedDataSize: cuint; sendMessageDelegate: id; selector: SEL; contextInfo: pointer); message 'requestSendMessage:outData:maxReturnedDataSize:sendMessageDelegate:didSendMessageSelector:contextInfo:'; { unavailable in ios } { available in macos 10.4 }
    procedure requestEjectOrDisconnect; message 'requestEjectOrDisconnect'; { unavailable in ios }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  ICDeviceDelegateProtocol = objcprotocol external name 'ICDeviceDelegate' (NSObjectProtocol)
  required
    procedure device_didCloseSessionWithError (device: ICDevice; error: NSError); message 'device:didCloseSessionWithError:'; { available in macos ,ios  }
    procedure didRemoveDevice (device: ICDevice); message 'didRemoveDevice:'; { available in macos ,ios  }
    procedure device_didOpenSessionWithError (device: ICDevice; error: NSError); message 'device:didOpenSessionWithError:'; { available in macos 10.4,ios 13.0 }
  optional
    procedure deviceDidBecomeReady (device: ICDevice); message 'deviceDidBecomeReady:'; { available in macos 10.4,ios 13.0 }
    procedure deviceDidChangeName (device: ICDevice); message 'deviceDidChangeName:'; { unavailable in ios }
    procedure device_didReceiveStatusInformation (device: ICDevice; status: NSDictionary); message 'device:didReceiveStatusInformation:'; { available in macos 10.4,ios 13.0 }
    procedure device_didEncounterError (device: ICDevice; error: NSError); message 'device:didEncounterError:'; { available in macos 10.4 }
    procedure device_didEjectWithError (device: ICDevice; error: NSError); message 'device:didEjectWithError:'; { available in macos 10.4,ios 13.0 }
    procedure deviceDidChangeSharingState (device: ICDevice); message 'deviceDidChangeSharingState:'; { unavailable in ios }
  end;
{$endif}

