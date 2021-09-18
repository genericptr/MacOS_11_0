{ Parsed from CoreML.framework MLModelCollectionEntry.h }

{$ifdef TYPES}
type
  MLModelCollectionEntryPtr = ^MLModelCollectionEntry;
{$endif}

{$ifdef CLASSES}

type
  MLModelCollectionEntry = objcclass external (NSObject)
  public
    function modelIdentifier: NSString; message 'modelIdentifier';
    function modelURL: NSURL; message 'modelURL';
    function isEqualToModelCollectionEntry (entry: MLModelCollectionEntry): objcbool; message 'isEqualToModelCollectionEntry:';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

