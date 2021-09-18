{ Parsed from CalendarStore.framework CalTask.h }

{$ifdef TYPES}
type
  CalTaskPtr = ^CalTask;
{$endif}

{$ifdef TYPES}
const
  CalPriorityNone = 0;
  CalPriorityHigh = 1;
  CalPriorityMedium = 5;
  CalPriorityLow = 9;

type
  CalPriority = NSUInteger;
  CalPriorityPtr = ^CalPriority;
{$endif}

{$ifdef CLASSES}

type
  CalTask = objcclass external (CalCalendarItem)
  private
    _dueDate: NSDate;
    _priority: CalPriority;
    _completedDate: NSDate;
  public
    class function task: id; message 'task';
    procedure setDueDate(newValue: NSDate); message 'setDueDate:'; deprecated 'in 10_5, 10_8';
    function dueDate: NSDate; message 'dueDate'; deprecated 'in 10_5, 10_8';
    procedure setPriority(newValue: CalPriority); message 'setPriority:'; deprecated 'in 10_5, 10_8';
    function priority: CalPriority; message 'priority'; deprecated 'in 10_5, 10_8';
    procedure setIsCompleted(newValue: objcbool); message 'setIsCompleted:'; deprecated 'in 10_5, 10_8';
    function isCompleted: objcbool; message 'isCompleted'; deprecated 'in 10_5, 10_8';
    procedure setCompletedDate(newValue: NSDate); message 'setCompletedDate:'; deprecated 'in 10_5, 10_8';
    function completedDate: NSDate; message 'completedDate'; deprecated 'in 10_5, 10_8';
  end;
{$endif}

