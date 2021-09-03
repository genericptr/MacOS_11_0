{ Parsed from Automator.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Automator.framework/Headers/AMWorkflowView.h }

{$ifdef TYPES}
type
  AMWorkflowViewPtr = ^AMWorkflowView;
{$endif}

{$ifdef CLASSES}

type
  AMWorkflowView = objcclass external (NSView)
  private
    _workflowController: AMWorkflowController;
    _actionViewControllers: NSMutableArray;
    _draggedActionViews: NSArray;
    _messageString: NSString;
    _unused: id;
    _variablesEditorController: id;
    _showWhenRunController: id;
    _flags: bitpacked record
      case byte of
        0: (_anonBitField__flags0: cuint);
      end;
    _draggingIndex: NSUInteger;
    _selectionRect: NSRect;
    _future:array[0..3] of id;
  public
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure setWorkflowController(newValue: AMWorkflowController); message 'setWorkflowController:';
    function workflowController: AMWorkflowController; message 'workflowController';
  end;
{$endif}

