{ Parsed from AppKit.framework NSTextInputContext.h }

{$ifdef TYPES}
type
  NSTextInputContextPtr = ^NSTextInputContext;
{$endif}

{$ifdef TYPES}
type
  NSTextInputSourceIdentifier = NSString;
  NSTextInputSourceIdentifierPtr = ^NSTextInputSourceIdentifier;
{$endif}

{$ifdef CLASSES}

type
  NSTextInputContext = objcclass external (NSObject)
  public
    class function currentInputContext: NSTextInputContext; message 'currentInputContext';
    function initWithClient (client: NSTextInputClientProtocol): id; message 'initWithClient:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function client: NSTextInputClientProtocol; message 'client';
    procedure setAcceptsGlyphInfo(newValue: objcbool); message 'setAcceptsGlyphInfo:';
    function acceptsGlyphInfo: objcbool; message 'acceptsGlyphInfo';
    procedure setAllowedInputSourceLocales(newValue: NSArray); message 'setAllowedInputSourceLocales:';
    function allowedInputSourceLocales: NSArray; message 'allowedInputSourceLocales';
    procedure activate; message 'activate';
    procedure deactivate; message 'deactivate';
    function handleEvent (event: NSEvent): objcbool; message 'handleEvent:';
    procedure discardMarkedText; message 'discardMarkedText';
    procedure invalidateCharacterCoordinates; message 'invalidateCharacterCoordinates';
    function keyboardInputSources: NSArray; message 'keyboardInputSources';
    procedure setSelectedKeyboardInputSource(newValue: NSTextInputSourceIdentifier); message 'setSelectedKeyboardInputSource:';
    function selectedKeyboardInputSource: NSTextInputSourceIdentifier; message 'selectedKeyboardInputSource';
    class function localizedNameForInputSource (inputSourceIdentifier: NSTextInputSourceIdentifier): NSString; message 'localizedNameForInputSource:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextInputContextKeyboardSelectionDidChangeNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

