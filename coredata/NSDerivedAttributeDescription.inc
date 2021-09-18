{ Parsed from CoreData.framework NSDerivedAttributeDescription.h }

{$ifdef TYPES}
type
  NSDerivedAttributeDescriptionPtr = ^NSDerivedAttributeDescription;
{$endif}

{$ifdef CLASSES}

type
  NSDerivedAttributeDescription = objcclass external (NSAttributeDescription)
  public
    procedure setDerivationExpression(newValue: NSExpression); message 'setDerivationExpression:';
    function derivationExpression: NSExpression; message 'derivationExpression';
  end;
{$endif}

