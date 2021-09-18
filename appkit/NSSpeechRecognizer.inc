{ Parsed from AppKit.framework NSSpeechRecognizer.h }

{$ifdef TYPES}
type
  NSSpeechRecognizerPtr = ^NSSpeechRecognizer;
  NSSpeechRecognizerDelegateProtocolPtr = ^NSSpeechRecognizerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSSpeechRecognizer = objcclass external (NSObject)
  public
    function init: id; message 'init';
    procedure startListening; message 'startListening';
    procedure stopListening; message 'stopListening';
    procedure setDelegate(newValue: NSSpeechRecognizerDelegateProtocol); message 'setDelegate:';
    function delegate: NSSpeechRecognizerDelegateProtocol; message 'delegate';
    procedure setCommands(newValue: NSArray); message 'setCommands:';
    function commands: NSArray; message 'commands';
    procedure setDisplayedCommandsTitle(newValue: NSString); message 'setDisplayedCommandsTitle:';
    function displayedCommandsTitle: NSString; message 'displayedCommandsTitle';
    procedure setListensInForegroundOnly(newValue: objcbool); message 'setListensInForegroundOnly:';
    function listensInForegroundOnly: objcbool; message 'listensInForegroundOnly';
    procedure setBlocksOtherRecognizers(newValue: objcbool); message 'setBlocksOtherRecognizers:';
    function blocksOtherRecognizers: objcbool; message 'blocksOtherRecognizers';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSpeechRecognizerDelegateProtocol = objcprotocol external name 'NSSpeechRecognizerDelegate' (NSObjectProtocol)
  optional
    procedure speechRecognizer_didRecognizeCommand (sender: NSSpeechRecognizer; command: NSString); message 'speechRecognizer:didRecognizeCommand:';
  end;
{$endif}

