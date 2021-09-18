{ Parsed from EventKit.framework EKSource.h }

{$ifdef TYPES}
type
  EKSourcePtr = ^EKSource;
{$endif}

{$ifdef CLASSES}

type
  EKSource = objcclass external (EKObject)
  public
    function sourceIdentifier: NSString; message 'sourceIdentifier';
    function sourceType: EKSourceType; message 'sourceType';
    function title: NSString; message 'title';
    function calendars: NSSet; message 'calendars'; deprecated 'in NA, NA, 4_0, 6_0';
    function calendarsForEntityType (entityType: EKEntityType): NSSet; message 'calendarsForEntityType:'; { available in 10_8, 6_0 }
  end;
{$endif}

