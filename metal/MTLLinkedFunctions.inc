{ Parsed from Metal.framework MTLLinkedFunctions.h }

{$ifdef TYPES}
type
  MTLLinkedFunctionsPtr = ^MTLLinkedFunctions;
{$endif}

{$ifdef CLASSES}

type
  MTLLinkedFunctions = objcclass external (NSObject, NSCopyingProtocol)
  public
    class function linkedFunctions: MTLLinkedFunctions; message 'linkedFunctions';
    procedure setFunctions(newValue: NSArray); message 'setFunctions:';
    function functions: NSArray; message 'functions';
    procedure setBinaryFunctions(newValue: NSArray); message 'setBinaryFunctions:';
    function binaryFunctions: NSArray; message 'binaryFunctions';
    procedure setGroups(newValue: NSDictionary); message 'setGroups:';
    function groups: NSDictionary; message 'groups';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

