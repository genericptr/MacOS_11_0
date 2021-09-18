{ Parsed from EventKit.framework EKObject.h }

{ Types from EKObject }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  EKObjectPtr = ^EKObject;
{$endif}

{$ifdef CLASSES}

type
  EKObject = objcclass external (NSObject)
  public
    function hasChanges: objcbool; message 'hasChanges';
    function isNew: objcbool; message 'isNew';
    procedure reset; message 'reset';
    procedure rollback; message 'rollback';
    function refresh: objcbool; message 'refresh';
  end;
{$endif}

