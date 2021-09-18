{ Parsed from Metal.framework MTLCaptureManager.h }

{$ifdef TYPES}
type
  MTLCaptureDescriptorPtr = ^MTLCaptureDescriptor;
  MTLCaptureManagerPtr = ^MTLCaptureManager;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLCaptureErrorDomain: NSErrorDomain; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLCaptureError = NSInteger;
  MTLCaptureErrorPtr = ^MTLCaptureError;

const
  MTLCaptureErrorNotSupported = 1;
  MTLCaptureErrorAlreadyCapturing = 2;
  MTLCaptureErrorInvalidDescriptor = 3;

type
  MTLCaptureDestination = NSInteger;
  MTLCaptureDestinationPtr = ^MTLCaptureDestination;

const
  MTLCaptureDestinationDeveloperTools = 1;
  MTLCaptureDestinationGPUTraceDocument = 2;
{$endif}

{$ifdef CLASSES}

type
  MTLCaptureDescriptor = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setCaptureObject(newValue: id); message 'setCaptureObject:';
    function captureObject: id; message 'captureObject';
    procedure setDestination(newValue: MTLCaptureDestination); message 'setDestination:';
    function destination: MTLCaptureDestination; message 'destination';
    procedure setOutputURL(newValue: NSURL); message 'setOutputURL:';
    function outputURL: NSURL; message 'outputURL';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  MTLCaptureManager = objcclass external (NSObject)
  public
    class function sharedCaptureManager: MTLCaptureManager; message 'sharedCaptureManager';
    function init: id; message 'init'; { unavailable in macos, ios }
    function newCaptureScopeWithDevice (device: id): id; message 'newCaptureScopeWithDevice:';
    function newCaptureScopeWithCommandQueue (commandQueue: id): id; message 'newCaptureScopeWithCommandQueue:';
    function supportsDestination (destination: MTLCaptureDestination): objcbool; message 'supportsDestination:'; { available in macos , ios  }
    function startCaptureWithDescriptor_error (descriptor: MTLCaptureDescriptor; error: NSErrorPtr): objcbool; message 'startCaptureWithDescriptor:error:'; { available in macos , ios  }
    procedure startCaptureWithDevice (device: id); message 'startCaptureWithDevice:'; deprecated 'Use startCaptureWithDescriptor:error: instead';
    procedure startCaptureWithCommandQueue (commandQueue: id); message 'startCaptureWithCommandQueue:'; deprecated 'Use startCaptureWithDescriptor:error: instead';
    procedure startCaptureWithScope (captureScope: id); message 'startCaptureWithScope:'; deprecated 'Use startCaptureWithDescriptor:error: instead';
    procedure stopCapture; message 'stopCapture';
    procedure setDefaultCaptureScope(newValue: id); message 'setDefaultCaptureScope:';
    function defaultCaptureScope: id; message 'defaultCaptureScope';
    function isCapturing: objcbool; message 'isCapturing';
  end;
{$endif}

