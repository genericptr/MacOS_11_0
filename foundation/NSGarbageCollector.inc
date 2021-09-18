{ Parsed from Foundation.framework NSGarbageCollector.h }

{$ifdef TYPES}
type
  NSGarbageCollectorPtr = ^NSGarbageCollector;
{$endif}

{$ifdef CLASSES}

type
  NSGarbageCollector = objcclass external (NSObject)
  public
    class function defaultCollector: id; message 'defaultCollector';
    function isCollecting: objcbool; message 'isCollecting'; { unavailable in ios, watchos, tvos }
    procedure disable; message 'disable';
    procedure enable; message 'enable';
    function isEnabled: objcbool; message 'isEnabled';
    procedure collectIfNeeded; message 'collectIfNeeded';
    procedure collectExhaustively; message 'collectExhaustively';
    procedure disableCollectorForPointer (ptr: pointer); message 'disableCollectorForPointer:';
    procedure enableCollectorForPointer (ptr: pointer); message 'enableCollectorForPointer:';
    function zone: NSZonePtr; message 'zone';
  end;
{$endif}

