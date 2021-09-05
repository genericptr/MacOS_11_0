{ Parsed from ImageCaptureCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ImageCaptureCore.framework/Headers/ICDeviceBrowser.h }

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
  ICAuthorizationStatus = NSString { available in macos (10.15), ios (13.0) };
  ICAuthorizationStatusPtr = ^ICAuthorizationStatus { available in macos (10.15), ios (13.0) };
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ICAuthorizationStatusNotDetermined: ICAuthorizationStatus { unavailable in macos) IC_AVAILABLE(ios  }; cvar; external;
  ICAuthorizationStatusRestricted: ICAuthorizationStatus { unavailable in macos) IC_AVAILABLE(ios  }; cvar; external;
  ICAuthorizationStatusDenied: ICAuthorizationStatus { unavailable in macos) IC_AVAILABLE(ios  }; cvar; external;
  ICAuthorizationStatusAuthorized: ICAuthorizationStatus { unavailable in macos) IC_AVAILABLE(ios  }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  ICDeviceBrowserDelegateProtocol = objcprotocol external name 'ICDeviceBrowserDelegate' (NSObjectProtocol)
  required
    procedure deviceBrowser_didAddDevice_moreComing (browser: ICDeviceBrowser; device: ICDevice; moreComing: objcbool); message 'deviceBrowser:didAddDevice:moreComing:'; { available in macos , ios  }
    procedure deviceBrowser_didRemoveDevice_moreGoing (browser: ICDeviceBrowser; device: ICDevice; moreGoing: objcbool); message 'deviceBrowser:didRemoveDevice:moreGoing:'; { available in macos , ios  }
  optional
    procedure deviceBrowser_deviceDidChangeName (browser: ICDeviceBrowser; device: ICDevice); message 'deviceBrowser:deviceDidChangeName:'; { available in macos , ios  }
    procedure deviceBrowser_deviceDidChangeSharingState (browser: ICDeviceBrowser; device: ICDevice); message 'deviceBrowser:deviceDidChangeSharingState:';
    procedure deviceBrowser_requestsSelectDevice (browser: ICDeviceBrowser; device: ICDevice); message 'deviceBrowser:requestsSelectDevice:'; { unavailable in ios }
    procedure deviceBrowserDidEnumerateLocalDevices (browser: ICDeviceBrowser); message 'deviceBrowserDidEnumerateLocalDevices:'; { unavailable in ios }
    procedure deviceBrowserWillSuspendOperations (browser: ICDeviceBrowser); message 'deviceBrowserWillSuspendOperations:'; { unavailable in macos) IC_AVAILABLE(ios  }
    procedure deviceBrowserDidSuspendOperations (browser: ICDeviceBrowser); message 'deviceBrowserDidSuspendOperations:'; { unavailable in macos) IC_AVAILABLE(ios  }
    procedure deviceBrowserDidCancelSuspendOperations (browser: ICDeviceBrowser); message 'deviceBrowserDidCancelSuspendOperations:'; { unavailable in macos) IC_AVAILABLE(ios  }
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
    function isSuspended: objcbool; message 'isSuspended'; { unavailable in macos) IC_AVAILABLE(ios  }
    procedure setBrowsedDeviceTypeMask(newValue: ICDeviceTypeMask); message 'setBrowsedDeviceTypeMask:'; { unavailable in ios }
    function browsedDeviceTypeMask: ICDeviceTypeMask; message 'browsedDeviceTypeMask'; { unavailable in ios }
    function devices: NSArray; message 'devices'; { available in macos , ios  }
    function preferredDevice: ICDevice; message 'preferredDevice'; { unavailable in ios }
    function init: id; message 'init'; { available in macos , ios  }
    procedure start; message 'start'; { available in macos , ios  }
    procedure stop; message 'stop'; { available in macos , ios  }
    function contentsAuthorizationStatus: ICAuthorizationStatus; message 'contentsAuthorizationStatus'; { unavailable in macos) IC_AVAILABLE(ios  }
    procedure requestContentsAuthorizationWithCompletion (completion: ICDeviceBrowserRequestContentsAuthorizationWithCompletionCallback); message 'requestContentsAuthorizationWithCompletion:'; { unavailable in macos) IC_AVAILABLE(ios  }
    function controlAuthorizationStatus: ICAuthorizationStatus; message 'controlAuthorizationStatus'; { unavailable in macos) IC_AVAILABLE(ios  }
    procedure requestControlAuthorizationWithCompletion (completion: ICDeviceBrowserRequestControlAuthorizationWithCompletionCallback); message 'requestControlAuthorizationWithCompletion:'; { unavailable in macos) IC_AVAILABLE(ios  }
  end;
{$endif}

