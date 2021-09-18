{ Parsed from AppKit.framework NSPICTImageRep.h }

{$ifdef TYPES}
type
  NSPICTImageRepPtr = ^NSPICTImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSPICTImageRep = objcclass external (NSImageRep)
  public
    class function imageRepWithData (pictData: NSData): id; message 'imageRepWithData:';
    function initWithData (pictData: NSData): id; message 'initWithData:';
    function PICTRepresentation: NSData; message 'PICTRepresentation';
    function boundingBox: NSRect; message 'boundingBox';
  end;
{$endif}

