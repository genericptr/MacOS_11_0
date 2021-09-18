{ Parsed from AppKit.framework NSController.h }

{$ifdef TYPES}
type
  NSControllerPtr = ^NSController;
{$endif}

{$ifdef CLASSES}

type
  NSController = objcclass external (NSObject, NSCodingProtocol, NSEditorProtocol, NSEditorRegistrationProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure objectDidBeginEditing (editor: NSEditorProtocol); message 'objectDidBeginEditing:';
    procedure objectDidEndEditing (editor: NSEditorProtocol); message 'objectDidEndEditing:';
    procedure discardEditing; message 'discardEditing';
    function commitEditing: objcbool; message 'commitEditing';
    procedure commitEditingWithDelegate_didCommitSelector_contextInfo (delegate: id; didCommitSelector: SEL; contextInfo: pointer); message 'commitEditingWithDelegate:didCommitSelector:contextInfo:';
    function isEditing: objcbool; message 'isEditing';

    { Adopted protocols }
    function commitEditingAndReturnError (error: NSErrorPtr): objcbool; message 'commitEditingAndReturnError:'; { available in macos  }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

