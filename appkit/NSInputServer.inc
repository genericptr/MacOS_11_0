{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSInputServer.h }

{$ifdef TYPES}
type
  NSInputServerPtr = ^NSInputServer;
  NSInputServiceProviderProtocolPtr = ^NSInputServiceProviderProtocol;
  NSInputServerMouseTrackerProtocolPtr = ^NSInputServerMouseTrackerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSInputServiceProviderProtocol = objcprotocol external name 'NSInputServiceProvider'
    procedure insertText_client (string_: id; sender: id); message 'insertText:client:'; deprecated;
    procedure doCommandBySelector_client (selector: SEL; sender: id); message 'doCommandBySelector:client:'; deprecated;
    procedure markedTextAbandoned (sender: id); message 'markedTextAbandoned:'; deprecated;
    procedure markedTextSelectionChanged_client (newSel: NSRange; sender: id); message 'markedTextSelectionChanged:client:'; deprecated;
    procedure terminate (sender: id); message 'terminate:'; deprecated;
    function canBeDisabled: objcbool; message 'canBeDisabled'; deprecated;
    function wantsToInterpretAllKeystrokes: objcbool; message 'wantsToInterpretAllKeystrokes'; deprecated;
    function wantsToHandleMouseEvents: objcbool; message 'wantsToHandleMouseEvents'; deprecated;
    function wantsToDelayTextChangeNotifications: objcbool; message 'wantsToDelayTextChangeNotifications'; deprecated;
    procedure inputClientBecomeActive (sender: id); message 'inputClientBecomeActive:'; deprecated;
    procedure inputClientResignActive (sender: id); message 'inputClientResignActive:'; deprecated;
    procedure inputClientEnabled (sender: id); message 'inputClientEnabled:'; deprecated;
    procedure inputClientDisabled (sender: id); message 'inputClientDisabled:'; deprecated;
    procedure activeConversationWillChange_fromOldConversation (sender: id; oldConversation: NSInteger); message 'activeConversationWillChange:fromOldConversation:'; deprecated;
    procedure activeConversationChanged_toNewConversation (sender: id; newConversation: NSInteger); message 'activeConversationChanged:toNewConversation:'; deprecated;
  end;

type
  NSInputServerMouseTrackerProtocol = objcprotocol external name 'NSInputServerMouseTracker'
    function mouseDownOnCharacterIndex_atCoordinate_withModifier_client (index: NSUInteger; point: NSPoint; flags: NSUInteger; sender: id): objcbool; message 'mouseDownOnCharacterIndex:atCoordinate:withModifier:client:'; deprecated;
    function mouseDraggedOnCharacterIndex_atCoordinate_withModifier_client (index: NSUInteger; point: NSPoint; flags: NSUInteger; sender: id): objcbool; message 'mouseDraggedOnCharacterIndex:atCoordinate:withModifier:client:'; deprecated;
    procedure mouseUpOnCharacterIndex_atCoordinate_withModifier_client (index: NSUInteger; point: NSPoint; flags: NSUInteger; sender: id); message 'mouseUpOnCharacterIndex:atCoordinate:withModifier:client:'; deprecated;
  end;
{$endif}

{$ifdef CLASSES}

type
  NSInputServer = objcclass external (NSObject, NSInputServiceProviderProtocol, NSInputServerMouseTrackerProtocol)
  public
    function initWithDelegate_name (delegate: id; name: NSString): id; message 'initWithDelegate:name:'; deprecated;

    { Adopted protocols }
    procedure activeConversationChanged_toNewConversation (sender: id; newConversation: NSInteger); message 'activeConversationChanged:toNewConversation:'; deprecated;
    procedure activeConversationWillChange_fromOldConversation (sender: id; oldConversation: NSInteger); message 'activeConversationWillChange:fromOldConversation:'; deprecated;
    function canBeDisabled: objcbool; message 'canBeDisabled'; deprecated;
    procedure doCommandBySelector_client (selector: SEL; sender: id); message 'doCommandBySelector:client:'; deprecated;
    procedure inputClientBecomeActive (sender: id); message 'inputClientBecomeActive:'; deprecated;
    procedure inputClientDisabled (sender: id); message 'inputClientDisabled:'; deprecated;
    procedure inputClientEnabled (sender: id); message 'inputClientEnabled:'; deprecated;
    procedure inputClientResignActive (sender: id); message 'inputClientResignActive:'; deprecated;
    procedure insertText_client (string_: id; sender: id); message 'insertText:client:'; deprecated;
    procedure markedTextAbandoned (sender: id); message 'markedTextAbandoned:'; deprecated;
    procedure markedTextSelectionChanged_client (newSel: NSRange; sender: id); message 'markedTextSelectionChanged:client:'; deprecated;
    function mouseDownOnCharacterIndex_atCoordinate_withModifier_client (index: NSUInteger; point: NSPoint; flags: NSUInteger; sender: id): objcbool; message 'mouseDownOnCharacterIndex:atCoordinate:withModifier:client:'; deprecated;
    function mouseDraggedOnCharacterIndex_atCoordinate_withModifier_client (index: NSUInteger; point: NSPoint; flags: NSUInteger; sender: id): objcbool; message 'mouseDraggedOnCharacterIndex:atCoordinate:withModifier:client:'; deprecated;
    procedure mouseUpOnCharacterIndex_atCoordinate_withModifier_client (index: NSUInteger; point: NSPoint; flags: NSUInteger; sender: id); message 'mouseUpOnCharacterIndex:atCoordinate:withModifier:client:'; deprecated;
    procedure terminate (sender: id); message 'terminate:'; deprecated;
    function wantsToDelayTextChangeNotifications: objcbool; message 'wantsToDelayTextChangeNotifications'; deprecated;
    function wantsToHandleMouseEvents: objcbool; message 'wantsToHandleMouseEvents'; deprecated;
    function wantsToInterpretAllKeystrokes: objcbool; message 'wantsToInterpretAllKeystrokes'; deprecated;
  end;
{$endif}

