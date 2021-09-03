{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKKeyframeSequence.h }

{$ifdef TYPES}
type
  SKKeyframeSequencePtr = ^SKKeyframeSequence;
{$endif}

{$ifdef TYPES}
type
  SKInterpolationMode = NSInteger;
  SKInterpolationModePtr = ^SKInterpolationMode;

const
  SKInterpolationModeLinear = 1;
  SKInterpolationModeSpline = 2;
  SKInterpolationModeStep = 3;

type
  SKRepeatMode = NSInteger;
  SKRepeatModePtr = ^SKRepeatMode;

const
  SKRepeatModeClamp = 1;
  SKRepeatModeLoop = 2;
{$endif}

{$ifdef CLASSES}

type
  SKKeyframeSequence = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function initWithKeyframeValues_times (values: NSArray; times: NSArray): id; message 'initWithKeyframeValues:times:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCapacity (numItems: NSUInteger): id; message 'initWithCapacity:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function count: NSUInteger; message 'count';
    procedure addKeyframeValue_time (value: id; time: CGFloat); message 'addKeyframeValue:time:';
    procedure removeLastKeyframe; message 'removeLastKeyframe';
    procedure removeKeyframeAtIndex (index: NSUInteger); message 'removeKeyframeAtIndex:';
    procedure setKeyframeValue_forIndex (value: id; index: NSUInteger); message 'setKeyframeValue:forIndex:';
    procedure setKeyframeTime_forIndex (time: CGFloat; index: NSUInteger); message 'setKeyframeTime:forIndex:';
    procedure setKeyframeValue_time_forIndex (value: id; time: CGFloat; index: NSUInteger); message 'setKeyframeValue:time:forIndex:';
    function getKeyframeValueForIndex (index: NSUInteger): id; message 'getKeyframeValueForIndex:';
    function getKeyframeTimeForIndex (index: NSUInteger): CGFloat; message 'getKeyframeTimeForIndex:';
    function sampleAtTime (time: CGFloat): id; message 'sampleAtTime:';
    procedure setInterpolationMode(newValue: SKInterpolationMode); message 'setInterpolationMode:';
    function interpolationMode: SKInterpolationMode; message 'interpolationMode';
    procedure setRepeatMode(newValue: SKRepeatMode); message 'setRepeatMode:';
    function repeatMode: SKRepeatMode; message 'repeatMode';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

