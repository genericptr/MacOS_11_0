{ Parsed from Foundation.framework NSPortCoder.h }

{$ifdef TYPES}
type
  NSPortCoderPtr = ^NSPortCoder;
{$endif}

{$ifdef CLASSES}

type
  NSPortCoder = objcclass external (NSCoder)
  public
    function isBycopy: objcbool; message 'isBycopy';
    function isByref: objcbool; message 'isByref';
    procedure encodePortObject (aport: NSPort); message 'encodePortObject:';
    function decodePortObject: NSPort; message 'decodePortObject';
    function connection: NSConnection; message 'connection'; deprecated;
    class function portCoderWithReceivePort_sendPort_components (rcvPort: NSPort; sndPort: NSPort; comps: NSArray): id; message 'portCoderWithReceivePort:sendPort:components:'; deprecated;
    function initWithReceivePort_sendPort_components (rcvPort: NSPort; sndPort: NSPort; comps: NSArray): id; message 'initWithReceivePort:sendPort:components:'; deprecated;
    procedure dispatch; message 'dispatch'; deprecated;
  end;


type
  NSDistributedObjects = objccategory external (NSObject)
    function classForPortCoder: pobjc_class; message 'classForPortCoder';
    function replacementObjectForPortCoder (coder: NSPortCoder): id; message 'replacementObjectForPortCoder:';
  end;
{$endif}

