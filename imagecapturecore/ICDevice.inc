{ Parsed from ImageCaptureCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ImageCaptureCore.framework/Headers/ICDevice.h }

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
  ICDeviceTransport = NSString { available in macos , ios  };
  ICDeviceTransportPtr = ^ICDeviceTransport { available in macos , ios  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICTransportTypeUSB: ICDeviceTransport { available in macos ,ios  }; cvar; external;
  ICTransportTypeFireWire: ICDeviceTransport { unavailable in ios }; cvar; external;
  ICTransportTypeBluetooth: ICDeviceTransport { unavailable in ios }; cvar; external;
  ICTransportTypeMassStorage: ICDeviceTransport { available in macos ,ios  }; cvar; external;
  ICTransportTypeExFAT: ICDeviceTransport { unavailable in macos }; cvar; external;
  ICTransportTypeTCPIP: ICDeviceTransport { available in macos ,ios  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICDeviceStatus = NSString;
  ICDeviceStatusPtr = ^ICDeviceStatus;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICStatusNotificationKey: ICDeviceStatus { available in macos ,ios  }; cvar; external;
  ICStatusCodeKey: ICDeviceStatus { unavailable in ios }; cvar; external;
  ICLocalizedStatusNotificationKey: ICDeviceStatus { unavailable in ios }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICDeviceCapability = NSString;
  ICDeviceCapabilityPtr = ^ICDeviceCapability;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICDeviceCanEjectOrDisconnect: ICDeviceCapability { available in macos , ios  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICSessionOptions = NSString { available in macos ,ios  };
  ICSessionOptionsPtr = ^ICSessionOptions { available in macos ,ios  };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICEnumerationChronologicalOrder: ICSessionOptions { available in macos ,ios  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  ICDeviceLocationOptions = NSString;
  ICDeviceLocationOptionsPtr = ^ICDeviceLocationOptions;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICDeviceLocationDescriptionUSB: ICDeviceLocationOptions { unavailable in ios }; cvar; external;
  ICDeviceLocationDescriptionFireWire: ICDeviceLocationOptions { unavailable in ios }; cvar; external;
  ICDeviceLocationDescriptionBluetooth: ICDeviceLocationOptions { unavailable in ios }; cvar; external;
  ICDeviceLocationDescriptionMassStorage: ICDeviceLocationOptions { unavailable in ios }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ICDevice = objcclass external (NSObject)
  public
    procedure setDelegate(newValue: ICDeviceDelegateProtocol); message 'setDelegate:'; { available in macos ,ios  }
    function delegate: ICDeviceDelegateProtocol; message 'delegate'; { available in macos ,ios  }
    function type_: ICDeviceType; message 'type'; { available in macos ,ios  }
    function capabilities: NSArray; message 'capabilities'; { available in macos , ios  }
    function name: NSString; message 'name'; { available in macos , ios  }
    function productKind: NSString; message 'productKind'; { available in macos , ios  }
    function icon: CGImageRef; message 'icon'; { available in macos , ios  }
    function systemSymbolName: NSString; message 'systemSymbolName'; { unavailable in ios }
    function transportType: NSString; message 'transportType'; { available in macos , ios  }
    function UUIDString: NSString; message 'UUIDString'; { available in macos , ios  }
    function locationDescription: NSString; message 'locationDescription'; { unavailable in ios }
    function hasOpenSession: objcbool; message 'hasOpenSession'; { available in macos , ios  }
    function userData: NSMutableDictionary; message 'userData'; { available in macos , ios  }
    function modulePath: NSString; message 'modulePath'; { unavailable in ios }
    function moduleVersion: NSString; message 'moduleVersion'; { unavailable in ios }
    function serialNumberString: NSString; message 'serialNumberString'; { unavailable in ios }
    function usbLocationID: cint; message 'usbLocationID'; { available in macos ,ios  }
    function usbProductID: cint; message 'usbProductID'; { available in macos ,ios  }
    function usbVendorID: cint; message 'usbVendorID'; { available in macos ,ios  }
    procedure requestOpenSession; message 'requestOpenSession'; { available in macos , ios  }
    procedure requestCloseSession; message 'requestCloseSession'; { available in macos , ios  }
    procedure requestEject; message 'requestEject'; { available in macos , ios  }
    procedure requestOpenSessionWithOptions_completion (options: NSDictionary; completion: ICDeviceRequestOpenSessionWithOptionsCallback); message 'requestOpenSessionWithOptions:completion:'; { available in macos , ios  }
    procedure requestCloseSessionWithOptions_completion (options: NSDictionary; completion: ICDeviceRequestCloseSessionWithOptionsCallback); message 'requestCloseSessionWithOptions:completion:'; { available in macos , ios  }
    procedure requestEjectWithCompletion (completion: ICDeviceRequestEjectWithCompletionCallback); message 'requestEjectWithCompletion:'; { available in macos , ios  }
    procedure setAutolaunchApplicationPath(newValue: NSString); message 'setAutolaunchApplicationPath:'; { unavailable in ios }
    function autolaunchApplicationPath: NSString; message 'autolaunchApplicationPath'; { unavailable in ios }
    function isRemote: objcbool; message 'isRemote'; { unavailable in ios }
    function persistentIDString: NSString; message 'persistentIDString'; { unavailable in ios }
    procedure requestSendMessage_outData_maxReturnedDataSize_sendMessageDelegate_didSendMessageSelector_contextInfo (messageCode: cuint; data: NSData; maxReturnedDataSize: cuint; sendMessageDelegate: id; selector: SEL; contextInfo: pointer); message 'requestSendMessage:outData:maxReturnedDataSize:sendMessageDelegate:didSendMessageSelector:contextInfo:'; { unavailable in ios }
    procedure requestEjectOrDisconnect; message 'requestEjectOrDisconnect'; { unavailable in ios }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  ICDeviceDelegateProtocol = objcprotocol external name 'ICDeviceDelegate' (NSObjectProtocol)
  required
    procedure device_didCloseSessionWithError (device: ICDevice; error: NSError); message 'device:didCloseSessionWithError:'; { available in macos ,ios  }
    procedure didRemoveDevice (device: ICDevice); message 'didRemoveDevice:'; { available in macos ,ios  }
    procedure device_didOpenSessionWithError (device: ICDevice; error: NSError); message 'device:didOpenSessionWithError:'; { available in macos ,ios  }
  optional
    procedure deviceDidBecomeReady (device: ICDevice); message 'deviceDidBecomeReady:'; { available in macos ,ios  }
    procedure deviceDidChangeName (device: ICDevice); message 'deviceDidChangeName:'; { unavailable in ios }
    procedure device_didReceiveStatusInformation (device: ICDevice; status: NSDictionary); message 'device:didReceiveStatusInformation:'; { available in macos ,ios  }
    procedure device_didEncounterError (device: ICDevice; error: NSError); message 'device:didEncounterError:'; { available in macos ,ios  }
    procedure device_didEjectWithError (device: ICDevice; error: NSError); message 'device:didEjectWithError:'; { available in macos ,ios  }
    procedure deviceDidChangeSharingState (device: ICDevice); message 'deviceDidChangeSharingState:'; { unavailable in ios }
  end;
{$endif}

