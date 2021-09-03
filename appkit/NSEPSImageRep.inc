{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSEPSImageRep.h }

{$ifdef TYPES}
type
  NSEPSImageRepPtr = ^NSEPSImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSEPSImageRep = objcclass external (NSImageRep)
  public
    class function imageRepWithData (epsData: NSData): id; message 'imageRepWithData:';
    function initWithData (epsData: NSData): id; message 'initWithData:';
    procedure prepareGState; message 'prepareGState'; deprecated;
    function EPSRepresentation: NSData; message 'EPSRepresentation';
    function boundingBox: NSRect; message 'boundingBox';
  end;
{$endif}

