{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPICTImageRep.h }

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

