{ Parsed from Foundation.framework NSUndoManager.h }

{$ifdef CALLBACKS}
type
  NSUndoManagerRegisterUndoWithTargetCallback = reference to procedure (target: id); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSUndoManagerPtr = ^NSUndoManager;
{$endif}

{$ifdef TYPES}
const
  NSUndoCloseGroupingRunLoopOrdering = 350000;
{$endif}

{$ifdef CLASSES}

type
  NSUndoManager = objcclass external (NSObject)
  private
    _undoStack: id;
    _redoStack: id;
    _runLoopModes: NSArray;
    _NSUndoManagerPrivate1: cuint64;
    _target: id;
    _proxy: id;
    _NSUndoManagerPrivate2: pointer;
    _NSUndoManagerPrivate3: pointer;
  public
    procedure beginUndoGrouping; message 'beginUndoGrouping';
    procedure endUndoGrouping; message 'endUndoGrouping';
    function groupingLevel: NSInteger; message 'groupingLevel';
    procedure disableUndoRegistration; message 'disableUndoRegistration';
    procedure enableUndoRegistration; message 'enableUndoRegistration';
    function isUndoRegistrationEnabled: objcbool; message 'isUndoRegistrationEnabled';
    procedure setGroupsByEvent(newValue: objcbool); message 'setGroupsByEvent:';
    function groupsByEvent: objcbool; message 'groupsByEvent';
    procedure setLevelsOfUndo(newValue: NSUInteger); message 'setLevelsOfUndo:';
    function levelsOfUndo: NSUInteger; message 'levelsOfUndo';
    procedure setRunLoopModes(newValue: NSArray); message 'setRunLoopModes:';
    function runLoopModes: NSArray; message 'runLoopModes';
    procedure undo; message 'undo';
    procedure redo; message 'redo';
    procedure undoNestedGroup; message 'undoNestedGroup';
    function canUndo: objcbool; message 'canUndo';
    function canRedo: objcbool; message 'canRedo';
    function isUndoing: objcbool; message 'isUndoing';
    function isRedoing: objcbool; message 'isRedoing';
    procedure removeAllActions; message 'removeAllActions';
    procedure removeAllActionsWithTarget (target: id); message 'removeAllActionsWithTarget:';
    procedure registerUndoWithTarget_selector_object (target: id; selector: SEL; anObject: id); message 'registerUndoWithTarget:selector:object:';
    function prepareWithInvocationTarget (target: id): id; message 'prepareWithInvocationTarget:';
    procedure registerUndoWithTarget_handler (target: id; undoHandler: NSUndoManagerRegisterUndoWithTargetCallback); message 'registerUndoWithTarget:handler:'; { available in macos 10.11, ios 9.0, watchos 2.0, tvos 9.0 }
    procedure setActionIsDiscardable (discardable: objcbool); message 'setActionIsDiscardable:'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function undoActionIsDiscardable: objcbool; message 'undoActionIsDiscardable'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function redoActionIsDiscardable: objcbool; message 'redoActionIsDiscardable'; { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }
    function undoActionName: NSString; message 'undoActionName';
    function redoActionName: NSString; message 'redoActionName';
    procedure setActionName (actionName: NSString); message 'setActionName:';
    function undoMenuItemTitle: NSString; message 'undoMenuItemTitle';
    function redoMenuItemTitle: NSString; message 'redoMenuItemTitle';
    function undoMenuTitleForUndoActionName (actionName: NSString): NSString; message 'undoMenuTitleForUndoActionName:';
    function redoMenuTitleForUndoActionName (actionName: NSString): NSString; message 'redoMenuTitleForUndoActionName:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSUndoManagerCheckpointNotification: NSNotificationName { available in macos 10.0, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSUndoManagerWillUndoChangeNotification: NSNotificationName { available in macos 10.0, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSUndoManagerWillRedoChangeNotification: NSNotificationName { available in macos 10.0, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSUndoManagerDidUndoChangeNotification: NSNotificationName { available in macos 10.0, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSUndoManagerDidRedoChangeNotification: NSNotificationName { available in macos 10.0, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSUndoManagerDidOpenUndoGroupNotification: NSNotificationName { available in macos 10.0, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSUndoManagerWillCloseUndoGroupNotification: NSNotificationName { available in macos 10.0, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  NSUndoManagerDidCloseUndoGroupNotification: NSNotificationName { available in macos 10.7, ios 5.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

