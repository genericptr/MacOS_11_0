{ Parsed from Automator.framework AMWorkflowController.h }

{$ifdef TYPES}
type
  AMWorkflowControllerPtr = ^AMWorkflowController;
  AMWorkflowControllerDelegateProtocolPtr = ^AMWorkflowControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  AMWorkflowController = objcclass external (NSController)
  private
    workflowView: AMWorkflowView;
    _workflow: AMWorkflow;
    _runner: id;
    _runnerInterface: id;
    _eventMonitor: id;
    _delegate: AMWorkflowControllerDelegateProtocol;
    _flags: bitpacked record
      case byte of
        0: (_anonBitField__flags0: cuint);
      end;
    _delegateRespondTo: bitpacked record
      case byte of
        0: (_anonBitField__delegateRespondTo0: cuint);
      end;
    _future: id;
    _future2: id;
    _future3: id;
    _future4: id;
  public
    procedure setWorkflow(newValue: AMWorkflow); message 'setWorkflow:';
    function workflow: AMWorkflow; message 'workflow';
    procedure setWorkflowView(newValue: AMWorkflowView); message 'setWorkflowView:';
    function workflowView_: AMWorkflowView; message 'workflowView';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function canRun: objcbool; message 'canRun';
    function isRunning: objcbool; message 'isRunning';
    function isPaused: objcbool; message 'isPaused';
    procedure run (sender: id); message 'run:';
    procedure stop (sender: id); message 'stop:';
    procedure pause (sender: id); message 'pause:';
    procedure step (sender: id); message 'step:';
    procedure reset (sender: id); message 'reset:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  AMWorkflowControllerDelegateProtocol = objcprotocol external name 'AMWorkflowControllerDelegate' (NSObjectProtocol)
  optional
    procedure workflowControllerWillRun (controller: AMWorkflowController); message 'workflowControllerWillRun:';
    procedure workflowControllerWillStop (controller: AMWorkflowController); message 'workflowControllerWillStop:';
    procedure workflowControllerDidRun (controller: AMWorkflowController); message 'workflowControllerDidRun:';
    procedure workflowControllerDidStop (controller: AMWorkflowController); message 'workflowControllerDidStop:';
    procedure workflowController_willRunAction (controller: AMWorkflowController; action: AMAction); message 'workflowController:willRunAction:';
    procedure workflowController_didRunAction (controller: AMWorkflowController; action: AMAction); message 'workflowController:didRunAction:';
    procedure workflowController_didError (controller: AMWorkflowController; error: NSError); message 'workflowController:didError:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSObject_AMWorkflowControllerDelegate = objccategory external name 'AMWorkflowControllerDelegate' (NSObject)
    procedure workflowControllerWillRun (controller: AMWorkflowController); message 'workflowControllerWillRun:'; deprecated 'in 10_4, 10_13, "Use AMWorkflowControllerDelegate protocol."';
    procedure workflowControllerWillStop (controller: AMWorkflowController); message 'workflowControllerWillStop:'; deprecated 'in 10_4, 10_13, "Use AMWorkflowControllerDelegate protocol."';
    procedure workflowControllerDidRun (controller: AMWorkflowController); message 'workflowControllerDidRun:'; deprecated 'in 10_4, 10_13, "Use AMWorkflowControllerDelegate protocol."';
    procedure workflowControllerDidStop (controller: AMWorkflowController); message 'workflowControllerDidStop:'; deprecated 'in 10_4, 10_13, "Use AMWorkflowControllerDelegate protocol."';
    procedure workflowController_willRunAction (controller: AMWorkflowController; action: AMAction); message 'workflowController:willRunAction:'; deprecated 'in 10_4, 10_13, "Use AMWorkflowControllerDelegate protocol."';
    procedure workflowController_didRunAction (controller: AMWorkflowController; action: AMAction); message 'workflowController:didRunAction:'; deprecated 'in 10_4, 10_13, "Use AMWorkflowControllerDelegate protocol."';
    procedure workflowController_didError (controller: AMWorkflowController; error: NSError); message 'workflowController:didError:'; deprecated 'in 10_4, 10_13, "Use AMWorkflowControllerDelegate protocol."';
  end;
{$endif}

