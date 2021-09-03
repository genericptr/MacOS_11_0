{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/SRWristDetection.h }

{$ifdef TYPES}
type
  SRWristDetectionPtr = ^SRWristDetection;
{$endif}

{$ifdef TYPES}
type
  SRWristLocation = NSInteger;
  SRWristLocationPtr = ^SRWristLocation;

const
  SRWristLocationLeft = 0;
  SRWristLocationRight = 1;

type
  SRCrownOrientation = NSInteger;
  SRCrownOrientationPtr = ^SRCrownOrientation;

const
  SRCrownOrientationLeft = 0;
  SRCrownOrientationRight = 1;
{$endif}

{$ifdef CLASSES}

type
  SRWristDetection = objcclass external (NSObject)
  public
    function onWrist: objcbool; message 'onWrist';
    function wristLocation: SRWristLocation; message 'wristLocation';
    function crownOrientation: SRCrownOrientation; message 'crownOrientation';
  end;
{$endif}

