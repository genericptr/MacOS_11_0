{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSException.h }

{$ifdef TYPES}
type
  NSExceptionPtr = ^NSException;
  NSAssertionHandlerPtr = ^NSAssertionHandler;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSGenericException: NSExceptionName; cvar; external;
  NSRangeException: NSExceptionName; cvar; external;
  NSInvalidArgumentException: NSExceptionName; cvar; external;
  NSInternalInconsistencyException: NSExceptionName; cvar; external;
  NSMallocException: NSExceptionName; cvar; external;
  NSObjectInaccessibleException: NSExceptionName; cvar; external;
  NSObjectNotAvailableException: NSExceptionName; cvar; external;
  NSDestinationInvalidException: NSExceptionName; cvar; external;
  NSPortTimeoutException: NSExceptionName; cvar; external;
  NSInvalidSendPortException: NSExceptionName; cvar; external;
  NSInvalidReceivePortException: NSExceptionName; cvar; external;
  NSPortSendException: NSExceptionName; cvar; external;
  NSPortReceiveException: NSExceptionName; cvar; external;
  NSOldStyleException: NSExceptionName; cvar; external;
  NSInconsistentArchiveException: NSExceptionName; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSException = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    name: NSString;
    reason: NSString;
    userInfo: NSDictionary;
    reserved: id;
  public
    class function exceptionWithName_reason_userInfo (name_: NSExceptionName; reason_: NSString; userInfo_: NSDictionary): NSException; message 'exceptionWithName:reason:userInfo:';
    function initWithName_reason_userInfo (aName: NSExceptionName; aReason: NSString; aUserInfo: NSDictionary): id; message 'initWithName:reason:userInfo:'; { NS_DESIGNATED_INITIALIZER }
    function name_: NSExceptionName; message 'name';
    function reason_: NSString; message 'reason';
    function userInfo_: NSDictionary; message 'userInfo';
    function callStackReturnAddresses: NSArray; message 'callStackReturnAddresses'; { available in macos , ios , watchos , tvos  }
    function callStackSymbols: NSArray; message 'callStackSymbols'; { available in macos , ios , watchos , tvos  }
    procedure raise_; message 'raise';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSExceptionRaisingConveniences = objccategory external (NSException)
    class procedure raise_format (name__: NSExceptionName; format: NSString); varargs; message 'raise:format:';
    class procedure raise_format_arguments (name__: NSExceptionName; format: NSString; argList: va_list); message 'raise:format:arguments:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSUncaughtExceptionHandler = function (exception: NSException): pointer; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function NSGetUncaughtExceptionHandler: NSUncaughtExceptionHandler; cdecl; external;
function NSSetUncaughtExceptionHandler(param1: NSUncaughtExceptionHandler): pointer; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAssertionHandlerKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAssertionHandler = objcclass external (NSObject)
  private
    _reserved: pointer;
  public
    class function currentHandler: NSAssertionHandler; message 'currentHandler';
    procedure handleFailureInMethod_object_file_lineNumber_description (selector: SEL; object_: id; fileName: NSString; line: NSInteger; format: NSString); varargs; message 'handleFailureInMethod:object:file:lineNumber:description:';
    procedure handleFailureInFunction_file_lineNumber_description (functionName: NSString; fileName: NSString; line: NSInteger; format: NSString); varargs; message 'handleFailureInFunction:file:lineNumber:description:';
  end;
{$endif}

