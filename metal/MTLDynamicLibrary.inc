{ Parsed from Metal.framework MTLDynamicLibrary.h }

{$ifdef TYPES}
type
  MTLDynamicLibraryProtocolPtr = ^MTLDynamicLibraryProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MTLDynamicLibraryDomain: NSErrorDomain { available in macos 11.0, ios 14.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MTLDynamicLibraryError = NSUInteger;
  MTLDynamicLibraryErrorPtr = ^MTLDynamicLibraryError;

const
  MTLDynamicLibraryErrorNone = 0;
  MTLDynamicLibraryErrorInvalidFile = 1;
  MTLDynamicLibraryErrorCompilationFailure = 2;
  MTLDynamicLibraryErrorUnresolvedInstallName = 3;
  MTLDynamicLibraryErrorDependencyLoadFailure = 4;
  MTLDynamicLibraryErrorUnsupported = 5;
{$endif}

{$ifdef PROTOCOLS}

type
  MTLDynamicLibraryProtocol = objcprotocol external name 'MTLDynamicLibrary' (NSObjectProtocol)
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
    function device: MTLDeviceProtocol; message 'device';
    function installName: NSString; message 'installName';
    function serializeToURL_error (url: NSURL; error: NSErrorPtr): objcbool; message 'serializeToURL:error:';
  end;
{$endif}

