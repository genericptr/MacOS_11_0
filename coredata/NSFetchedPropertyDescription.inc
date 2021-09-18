{ Parsed from CoreData.framework NSFetchedPropertyDescription.h }

{$ifdef TYPES}
type
  NSFetchedPropertyDescriptionPtr = ^NSFetchedPropertyDescription;
{$endif}

{$ifdef CLASSES}

type
  NSFetchedPropertyDescription = objcclass external (NSPropertyDescription)
  private
  public
    procedure setFetchRequest(newValue: NSFetchRequest); message 'setFetchRequest:';
    function fetchRequest: NSFetchRequest; message 'fetchRequest';
  end;
{$endif}

