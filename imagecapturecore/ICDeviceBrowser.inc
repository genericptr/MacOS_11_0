{ Parsed from ImageCaptureCore.framework ICDeviceBrowser.h }

{$ifdef CALLBACKS}
type
  ICDeviceBrowserRequestContentsAuthorizationWithCompletionCallback = reference to procedure (status: ICAuthorizationStatus); cblock; cdecl;
  ICDeviceBrowserRequestControlAuthorizationWithCompletionCallback = reference to procedure (status: ICAuthorizationStatus); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  ICDeviceBrowserPtr = ^ICDeviceBrowser;
  ICDeviceBrowserDelegateProtocolPtr = ^ICDeviceBrowserDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  ICAuthorizationStatus = NSString { available in macos (10.15 };
  ICAuthorizationStatusPtr = ^ICAuthorizationStatus { available in macos (10.15), ios (13.0) };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICAuthorizationStatusNotDetermined: ICAuthorizationStatus { unavailable in macos } { available in ios 14.0 }; cvar; external;
  ICAuthorizationStatusRestricted: ICAuthorizationStatus { unavailable in macos } { available in ios 14.0 }; cvar; external;
  ICAuthorizationStatusDenied: ICAuthorizationStatus { unavailable in macos } { available in ios 14.0 }; cvar; external;
  ICAuthorizationStatusAuthorized: ICAuthorizationStatus { unavailable in macos) IC_AVAILABLE(ios  }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  ICDeviceBrowserDelegateProtocol = objcprotocol external name 'ICDeviceBrowserDelegate' (NSObjectProtocol)
  required
    procedure deviceBrowser_didAddDevice_moreComing (browser: ICDeviceBrowser; device: ICDevice; moreComing: objcbool); message 'deviceBrowser:didAddDevice:moreComing:'; { available in macos 10.4, ios 13.0 }
    procedure deviceBrowser_didRemoveDevice_moreGoing (browser: ICDeviceBrowser; device: ICDevice; moreGoing: objcbool); message 'deviceBrowser:didRemoveDevice:moreGoing:'; { available in macos , ios  }
  optional
    procedure deviceBrowser_deviceDidChangeName (browser: ICDeviceBrowser; device: ICDevice); message 'deviceBrowser:deviceDidChangeName:'; { available in macos , ios  }
    procedure deviceBrowser_deviceDidChangeSharingState (browser: ICDeviceBrowser; device: ICDevice); message 'deviceBrowser:deviceDidChangeSharingState:';
    procedure deviceBrowser_requestsSelectDevice (browser: ICDeviceBrowser; device: ICDevice); message 'deviceBrowser:requestsSelectDevice:'; { unavailable in ios } { available in macos 10.4 }
    procedure deviceBrowserDidEnumerateLocalDevices (browser: ICDeviceBrowser); message 'deviceBrowserDidEnumerateLocalDevices:'; { unavailable in macos } { available in ios 14.0 }
    procedure deviceBrowserWillSuspendOperations (browser: ICDeviceBrowser); message 'deviceBrowserWillSuspendOperations:'; { unavailable in macos } { available in ios 14.0 }
    procedure deviceBrowserDidSuspendOperations (browser: ICDeviceBrowser); message 'deviceBrowserDidSuspendOperations:'; { unavailable in macos } { available in ios 14.0 }
    procedure deviceBrowserDidCancelSuspendOperations (browser: ICDeviceBrowser); message 'deviceBrowserDidCancelSuspendOperations:'; { unavailable in macos } { available in ios 14.0 }
    procedure deviceBrowserDidResumeOperations (browser: ICDeviceBrowser); message 'deviceBrowserDidResumeOperations:'; { unavailable in macos) IC_AVAILABLE(ios  }
  end;
{$endif}

{$ifdef CLASSES}

type
  ICDeviceBrowser = objcclass external (NSObject)
  private
    _privateData: id;
  public
    procedure setDelegate(newValue: ICDeviceBrowserDelegateProtocol); message 'setDelegate:';
    function delegate: ICDeviceBrowserDelegateProtocol; message 'delegate';
    function isBrowsing: objcbool; message 'isBrowsing';
    function isSuspended: objcbool; message 'isSuspended'; { unavailable in ios } { available in macos 10.4 }
    procedure setBrowsedDeviceTypeMask(newValue: ICDeviceTypeMask); message 'setBrowsedDeviceTypeMask:'; { unavailable in ios } { available in macos 10.4 }
    function browsedDeviceTypeMask: ICDeviceTypeMask; message 'browsedDeviceTypeMask'; { unavailable in ios }
    function devices: NSArray; message 'devices'; { available in macos 10.4 }
    function preferredDevice: ICDevice; message 'preferredDevice'; { unavailable in ios }
    function init: id; message 'init'; { available in macos 10.4, ios 13.0 }
    procedure start; message 'start'; { available in macos 10.4, ios 13.0 }
    procedure stop; message 'stop'; { available in ios 14.0 }
    function contentsAuthorizationStatus: ICAuthorizationStatus; message 'contentsAuthorizationStatus'; { unavailable in macos } { available in ios 14.0 }
    procedure requestContentsAuthorizationWithCompletion (completion: ICDeviceBrowserRequestContentsAuthorizationWithCompletionCallback); message 'requestContentsAuthorizationWithCompletion:'; { unavailable in macos } { available in ios 14.0 }
    function controlAuthorizationStatus: ICAuthorizationStatus; message 'controlAuthorizationStatus'; { unavailable in macos } { available in ios 14.0 }
    procedure requestControlAuthorizationWithCompletion (completion: ICDeviceBrowserRequestControlAuthorizationWithCompletionCallback); message 'requestControlAuthorizationWithCompletion:'; { unavailable in macos) IC_AVAILABLE(ios  }
  end;
{$endif}

