{ Parsed from Foundation.framework NSScriptCommand.h }

{$ifdef TYPES}
type
  NSScriptCommandPtr = ^NSScriptCommand;
{$endif}

{$ifdef CLASSES}

type
  NSScriptCommand = objcclass external (NSObject, NSCodingProtocol)
  private
    _commandDescription: NSScriptCommandDescription;
    _directParameter: id;
    _receiversSpecifier: NSScriptObjectSpecifier;
    _evaluatedReceivers: id;
    _arguments: NSDictionary;
    _evaluatedArguments: NSMutableDictionary;
    _flags: bitpacked record
      case byte of
        0: (_anonBitField__flags0: cuint);
        1: (
          hasEvaluatedReceivers: 0..1;
          hasEvaluatedArguments: 0..1;
          RESERVED: 0..((1 shl 30)-1);
        );
      end;
    _moreVars: id;
    _reserved: pointer;
  public
    function initWithCommandDescription (commandDef: NSScriptCommandDescription): id; message 'initWithCommandDescription:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:';
    function commandDescription: NSScriptCommandDescription; message 'commandDescription';
    procedure setDirectParameter(newValue: id); message 'setDirectParameter:';
    function directParameter: id; message 'directParameter';
    procedure setReceiversSpecifier(newValue: NSScriptObjectSpecifier); message 'setReceiversSpecifier:';
    function receiversSpecifier: NSScriptObjectSpecifier; message 'receiversSpecifier';
    function evaluatedReceivers: id; message 'evaluatedReceivers';
    procedure setArguments(newValue: NSDictionary); message 'setArguments:';
    function arguments: NSDictionary; message 'arguments';
    function evaluatedArguments: NSDictionary; message 'evaluatedArguments';
    function isWellFormed: objcbool; message 'isWellFormed';
    function performDefaultImplementation: id; message 'performDefaultImplementation';
    function executeCommand: id; message 'executeCommand';
    procedure setScriptErrorNumber(newValue: NSInteger); message 'setScriptErrorNumber:';
    function scriptErrorNumber: NSInteger; message 'scriptErrorNumber';
    procedure setScriptErrorOffendingObjectDescriptor(newValue: NSAppleEventDescriptor); message 'setScriptErrorOffendingObjectDescriptor:'; { unavailable in ios, watchos, tvos } { available in macos 10.5 }
    function scriptErrorOffendingObjectDescriptor: NSAppleEventDescriptor; message 'scriptErrorOffendingObjectDescriptor'; { unavailable in ios, watchos, tvos } { available in macos 10.5 }
    procedure setScriptErrorExpectedTypeDescriptor(newValue: NSAppleEventDescriptor); message 'setScriptErrorExpectedTypeDescriptor:'; { unavailable in ios, watchos, tvos } { available in macos 10.5 }
    function scriptErrorExpectedTypeDescriptor: NSAppleEventDescriptor; message 'scriptErrorExpectedTypeDescriptor'; { unavailable in ios, watchos, tvos } { available in macos 10.5 }
    procedure setScriptErrorString(newValue: NSString); message 'setScriptErrorString:';
    function scriptErrorString: NSString; message 'scriptErrorString';
    class function currentCommand: NSScriptCommand; message 'currentCommand';
    function appleEvent: NSAppleEventDescriptor; message 'appleEvent';
    procedure suspendExecution; message 'suspendExecution';
    procedure resumeExecutionWithResult (result_: id); message 'resumeExecutionWithResult:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

