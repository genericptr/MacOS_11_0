{ Parsed from Foundation.framework NSStream.h }

{ Types from NSSocketStreamCreationExtensions }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSStreamPtr = ^NSStream;
  NSInputStreamPtr = ^NSInputStream;
  NSOutputStreamPtr = ^NSOutputStream;
  NSStreamDelegateProtocolPtr = ^NSStreamDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSStreamPropertyKey = NSString;
  NSStreamPropertyKeyPtr = ^NSStreamPropertyKey;
  NSStreamStatus = NSUInteger;
  NSStreamStatusPtr = ^NSStreamStatus;

const
  NSStreamStatusNotOpen = 0;
  NSStreamStatusOpening = 1;
  NSStreamStatusOpen = 2;
  NSStreamStatusReading = 3;
  NSStreamStatusWriting = 4;
  NSStreamStatusAtEnd = 5;
  NSStreamStatusClosed = 6;
  NSStreamStatusError = 7;

type
  NSStreamEvent = NSUInteger;
  NSStreamEventPtr = ^NSStreamEvent;

const
  NSStreamEventNone = 0;
  NSStreamEventOpenCompleted = 1 shl 0;
  NSStreamEventHasBytesAvailable = 1 shl 1;
  NSStreamEventHasSpaceAvailable = 1 shl 2;
  NSStreamEventErrorOccurred = 1 shl 3;
  NSStreamEventEndEncountered = 1 shl 4;
{$endif}

{$ifdef CLASSES}

type
  NSStream = objcclass external (NSObject)
  public
    procedure open; message 'open';
    procedure close; message 'close';
    procedure setDelegate(newValue: NSStreamDelegateProtocol); message 'setDelegate:';
    function delegate: NSStreamDelegateProtocol; message 'delegate';
    function propertyForKey (key: NSStreamPropertyKey): id; message 'propertyForKey:';
    function setProperty_forKey (property_: id; key: NSStreamPropertyKey): objcbool; message 'setProperty:forKey:';
    procedure scheduleInRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'scheduleInRunLoop:forMode:';
    procedure removeFromRunLoop_forMode (aRunLoop: NSRunLoop; mode: NSRunLoopMode); message 'removeFromRunLoop:forMode:';
    function streamStatus: NSStreamStatus; message 'streamStatus';
    function streamError: NSError; message 'streamError';
  end;

type
  NSInputStream = objcclass external (NSStream)
  public
    function read_maxLength (buffer: pbyte; len: NSUInteger): NSInteger; message 'read:maxLength:';
    function getBuffer_length (buffer: pbyte; len: NSUIntegerPtr): objcbool; message 'getBuffer:length:';
    function hasBytesAvailable: objcbool; message 'hasBytesAvailable';
    function initWithData (data: NSData): id; message 'initWithData:'; { NS_DESIGNATED_INITIALIZER }
    function initWithURL (url: NSURL): id; message 'initWithURL:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSOutputStream = objcclass external (NSStream)
  public
    function write_maxLength (buffer: pbyte; len: NSUInteger): NSInteger; message 'write:maxLength:';
    function hasSpaceAvailable: objcbool; message 'hasSpaceAvailable';
    function initToMemory: id; message 'initToMemory'; { NS_DESIGNATED_INITIALIZER }
    function initToBuffer_capacity (buffer: pbyte; capacity: NSUInteger): id; message 'initToBuffer:capacity:'; { NS_DESIGNATED_INITIALIZER }
    function initWithURL_append (url: NSURL; shouldAppend: objcbool): id; message 'initWithURL:append:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
  end;


type
  NSSocketStreamCreationExtensions = objccategory external (NSStream)
    class procedure getStreamsToHostWithName_port_inputStream_outputStream (hostname: NSString; port: NSInteger; inputStream: NSInputStreamPtr; outputStream: NSOutputStreamPtr); message 'getStreamsToHostWithName:port:inputStream:outputStream:'; { unavailable in watchos } { available in macos 10.10, ios 8.0, tvos 9.0 }
    {$if defined(TARGET_OS_OSX)}
    class procedure getStreamsToHost_port_inputStream_outputStream (host: NSHost; port: NSInteger; inputStream: NSInputStreamPtr; outputStream: NSOutputStreamPtr); message 'getStreamsToHost:port:inputStream:outputStream:'; { unavailable in ios, watchos, tvos }
    {$endif}
  end;

type
  NSStreamBoundPairCreationExtensions = objccategory external (NSStream)
    class procedure getBoundStreamsWithBufferSize_inputStream_outputStream (bufferSize: NSUInteger; inputStream: NSInputStreamPtr; outputStream: NSOutputStreamPtr); message 'getBoundStreamsWithBufferSize:inputStream:outputStream:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSInputStreamExtensions = objccategory external (NSInputStream)
    function initWithFileAtPath (path: NSString): id; message 'initWithFileAtPath:';
    class function inputStreamWithData (data: NSData): id; message 'inputStreamWithData:';
    class function inputStreamWithFileAtPath (path: NSString): id; message 'inputStreamWithFileAtPath:';
    class function inputStreamWithURL (url: NSURL): id; message 'inputStreamWithURL:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSOutputStreamExtensions = objccategory external (NSOutputStream)
    function initToFileAtPath_append (path: NSString; shouldAppend: objcbool): id; message 'initToFileAtPath:append:';
    class function outputStreamToMemory: id; message 'outputStreamToMemory';
    class function outputStreamToBuffer_capacity (buffer: pbyte; capacity: NSUInteger): id; message 'outputStreamToBuffer:capacity:';
    class function outputStreamToFileAtPath_append (path: NSString; shouldAppend: objcbool): id; message 'outputStreamToFileAtPath:append:';
    class function outputStreamWithURL_append (url: NSURL; shouldAppend: objcbool): id; message 'outputStreamWithURL:append:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSStreamDelegateProtocol = objcprotocol external name 'NSStreamDelegate' (NSObjectProtocol)
  optional
    procedure stream_handleEvent (aStream: NSStream; eventCode: NSStreamEvent); message 'stream:handleEvent:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamSocketSecurityLevelKey: NSStreamPropertyKey { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSStreamSocketSecurityLevel = NSString;
  NSStreamSocketSecurityLevelPtr = ^NSStreamSocketSecurityLevel;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamSocketSecurityLevelNone: NSStreamSocketSecurityLevel { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSocketSecurityLevelSSLv2: NSStreamSocketSecurityLevel { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSocketSecurityLevelSSLv3: NSStreamSocketSecurityLevel { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSocketSecurityLevelTLSv1: NSStreamSocketSecurityLevel { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSocketSecurityLevelNegotiatedSSL: NSStreamSocketSecurityLevel { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSOCKSProxyConfigurationKey: NSStreamPropertyKey { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSStreamSOCKSProxyConfiguration = NSString;
  NSStreamSOCKSProxyConfigurationPtr = ^NSStreamSOCKSProxyConfiguration;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamSOCKSProxyHostKey: NSStreamSOCKSProxyConfiguration { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSOCKSProxyPortKey: NSStreamSOCKSProxyConfiguration { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSOCKSProxyVersionKey: NSStreamSOCKSProxyConfiguration { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSOCKSProxyUserKey: NSStreamSOCKSProxyConfiguration { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSOCKSProxyPasswordKey: NSStreamSOCKSProxyConfiguration { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSStreamSOCKSProxyVersion = NSString;
  NSStreamSOCKSProxyVersionPtr = ^NSStreamSOCKSProxyVersion;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamSOCKSProxyVersion4: NSStreamSOCKSProxyVersion { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSOCKSProxyVersion5: NSStreamSOCKSProxyVersion { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamDataWrittenToMemoryStreamKey: NSStreamPropertyKey { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamFileCurrentOffsetKey: NSStreamPropertyKey { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSocketSSLErrorDomain: NSErrorDomain { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamSOCKSErrorDomain: NSErrorDomain { available in macos 10.3, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamNetworkServiceType: NSStreamPropertyKey { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSStreamNetworkServiceTypeValue = NSString;
  NSStreamNetworkServiceTypeValuePtr = ^NSStreamNetworkServiceTypeValue;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStreamNetworkServiceTypeVoIP: NSStreamNetworkServiceTypeValue { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamNetworkServiceTypeVideo: NSStreamNetworkServiceTypeValue { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamNetworkServiceTypeBackground: NSStreamNetworkServiceTypeValue { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamNetworkServiceTypeVoice: NSStreamNetworkServiceTypeValue { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSStreamNetworkServiceTypeCallSignaling: NSStreamNetworkServiceTypeValue { available in macosx 10.12, ios 10.0, watchos 3.0, tvos 10.0 }; cvar; external;
{$endif}

