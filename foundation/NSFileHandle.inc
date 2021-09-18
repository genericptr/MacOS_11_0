{ Parsed from Foundation.framework NSFileHandle.h }

{ Types from NSFileHandleAsynchronousAccess }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  NSFileHandleReadabilityHandlerCallback = reference to procedure (param1: NSFileHandle); cblock; cdecl;
  NSFileHandleWriteabilityHandlerCallback = reference to procedure (param1: NSFileHandle); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSFileHandlePtr = ^NSFileHandle;
  NSPipePtr = ^NSPipe;
{$endif}

{$ifdef CLASSES}

type
  NSFileHandle = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function availableData: NSData; message 'availableData';
    function initWithFileDescriptor_closeOnDealloc (fd: cint; closeopt: objcbool): id; message 'initWithFileDescriptor:closeOnDealloc:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function readDataToEndOfFileAndReturnError (error: NSErrorPtr): NSData; message 'readDataToEndOfFileAndReturnError:'; { available in macos , ios , watchos , tvos  }
    function readDataUpToLength_error (length: NSUInteger; error: NSErrorPtr): NSData; message 'readDataUpToLength:error:'; { available in macos , ios , watchos , tvos  }
    function writeData_error (data: NSData; error: NSErrorPtr): objcbool; message 'writeData:error:'; { available in macos , ios , watchos , tvos  }
    function getOffset_error (offsetInFile: pculonglong; error: NSErrorPtr): objcbool; message 'getOffset:error:'; { available in macos , ios , watchos , tvos  }
    function seekToEndReturningOffset_error (offsetInFile: pculonglong; error: NSErrorPtr): objcbool; message 'seekToEndReturningOffset:error:'; { available in macos , ios , watchos , tvos  }
    function seekToOffset_error (offset: culonglong; error: NSErrorPtr): objcbool; message 'seekToOffset:error:'; { available in macos , ios , watchos , tvos  }
    function truncateAtOffset_error (offset: culonglong; error: NSErrorPtr): objcbool; message 'truncateAtOffset:error:'; { available in macos , ios , watchos , tvos  }
    function synchronizeAndReturnError (error: NSErrorPtr): objcbool; message 'synchronizeAndReturnError:'; { available in macos , ios , watchos , tvos  }
    function closeAndReturnError (error: NSErrorPtr): objcbool; message 'closeAndReturnError:'; { available in macos , ios , watchos , tvos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSFileHandleCreation = objccategory external (NSFileHandle)
    class function fileHandleWithStandardInput: NSFileHandle; message 'fileHandleWithStandardInput';
    class function fileHandleWithStandardOutput: NSFileHandle; message 'fileHandleWithStandardOutput';
    class function fileHandleWithStandardError: NSFileHandle; message 'fileHandleWithStandardError';
    class function fileHandleWithNullDevice: NSFileHandle; message 'fileHandleWithNullDevice';
    class function fileHandleForReadingAtPath (path: NSString): id; message 'fileHandleForReadingAtPath:';
    class function fileHandleForWritingAtPath (path: NSString): id; message 'fileHandleForWritingAtPath:';
    class function fileHandleForUpdatingAtPath (path: NSString): id; message 'fileHandleForUpdatingAtPath:';
    class function fileHandleForReadingFromURL_error (url: NSURL; error: NSErrorPtr): id; message 'fileHandleForReadingFromURL:error:'; { available in macos , ios , watchos , tvos  }
    class function fileHandleForWritingToURL_error (url: NSURL; error: NSErrorPtr): id; message 'fileHandleForWritingToURL:error:'; { available in macos , ios , watchos , tvos  }
    class function fileHandleForUpdatingURL_error (url: NSURL; error: NSErrorPtr): id; message 'fileHandleForUpdatingURL:error:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFileHandleOperationException: NSExceptionName; cvar; external;
  NSFileHandleReadCompletionNotification: NSNotificationName; cvar; external;
  NSFileHandleReadToEndOfFileCompletionNotification: NSNotificationName; cvar; external;
  NSFileHandleConnectionAcceptedNotification: NSNotificationName; cvar; external;
  NSFileHandleDataAvailableNotification: NSNotificationName; cvar; external;
  NSFileHandleNotificationDataItem: NSString; cvar; external;
  NSFileHandleNotificationFileHandleItem: NSString; cvar; external;
  NSFileHandleNotificationMonitorModes: NSString deprecated 'Not supported'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSFileHandleAsynchronousAccess = objccategory external (NSFileHandle)
    procedure readInBackgroundAndNotifyForModes (modes: NSArray); message 'readInBackgroundAndNotifyForModes:';
    procedure readInBackgroundAndNotify; message 'readInBackgroundAndNotify';
    procedure readToEndOfFileInBackgroundAndNotifyForModes (modes: NSArray); message 'readToEndOfFileInBackgroundAndNotifyForModes:';
    procedure readToEndOfFileInBackgroundAndNotify; message 'readToEndOfFileInBackgroundAndNotify';
    procedure acceptConnectionInBackgroundAndNotifyForModes (modes: NSArray); message 'acceptConnectionInBackgroundAndNotifyForModes:';
    procedure acceptConnectionInBackgroundAndNotify; message 'acceptConnectionInBackgroundAndNotify';
    procedure waitForDataInBackgroundAndNotifyForModes (modes: NSArray); message 'waitForDataInBackgroundAndNotifyForModes:';
    procedure waitForDataInBackgroundAndNotify; message 'waitForDataInBackgroundAndNotify';
    {$ifdef __BLOCKS__}
    procedure setReadabilityHandler(newValue: NSFileHandleReadabilityHandlerCallback); message 'setReadabilityHandler:'; { available in macos , ios , watchos , tvos  }
    function readabilityHandler: NSFileHandleReadabilityHandlerCallback; message 'readabilityHandler'; { available in macos , ios , watchos , tvos  }
    procedure setWriteabilityHandler(newValue: NSFileHandleWriteabilityHandlerCallback); message 'setWriteabilityHandler:'; { available in macos , ios , watchos , tvos  }
    function writeabilityHandler: NSFileHandleWriteabilityHandlerCallback; message 'writeabilityHandler'; { available in macos , ios , watchos , tvos  }
    {$endif}
  end;

type
  NSFileHandlePlatformSpecific = objccategory external (NSFileHandle)
    function initWithFileDescriptor (fd: cint): id; message 'initWithFileDescriptor:';
    function fileDescriptor: cint; message 'fileDescriptor';
  end;

type
  NSFileHandleCategory = objccategory external (NSFileHandle)
    function readDataToEndOfFile: NSData; message 'readDataToEndOfFile'; deprecated 'replace with readDataToEndOfFileAndReturnError:';
    function readDataOfLength (length: NSUInteger): NSData; message 'readDataOfLength:'; deprecated 'replace with readDataUpToLength:error:';
    procedure writeData (data: NSData); message 'writeData:'; deprecated 'replace with writeData:error:';
    function offsetInFile: culonglong; message 'offsetInFile'; deprecated 'replace with getOffset:error:';
    function seekToEndOfFile: culonglong; message 'seekToEndOfFile'; deprecated 'replace with seekToEndReturningOffset:error:';
    procedure seekToFileOffset (offset: culonglong); message 'seekToFileOffset:'; deprecated 'replace with seekToOffset:error:';
    procedure truncateFileAtOffset (offset: culonglong); message 'truncateFileAtOffset:'; deprecated 'replace with truncateAtOffset:error:';
    procedure synchronizeFile; message 'synchronizeFile'; deprecated 'replace with synchronizeAndReturnError:';
    procedure closeFile; message 'closeFile'; deprecated 'replace with closeAndReturnError:';
  end;


type
  NSPipe = objcclass external (NSObject)
  public
    function fileHandleForReading: NSFileHandle; message 'fileHandleForReading';
    function fileHandleForWriting: NSFileHandle; message 'fileHandleForWriting';
    class function pipe: NSPipe; message 'pipe';
  end;
{$endif}

