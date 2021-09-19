{ Parsed from SpriteKit.framework SKEffectNode.h }

{ Types from SKEffectNode }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  SKEffectNodePtr = ^SKEffectNode;
{$endif}

{$ifdef CLASSES}

type
  SKEffectNode = objcclass external (SKNode, SKWarpableProtocol)
  public
    {$if defined(__NULL_MACRO__)}
    procedure setFilter(newValue: CIFilter); message 'setFilter:';
    function filter: CIFilter; message 'filter';
    {$endif}
    procedure setShouldCenterFilter(newValue: objcbool); message 'setShouldCenterFilter:';
    function shouldCenterFilter: objcbool; message 'shouldCenterFilter';
    procedure setShouldEnableEffects(newValue: objcbool); message 'setShouldEnableEffects:';
    function shouldEnableEffects: objcbool; message 'shouldEnableEffects';
    procedure setShouldRasterize(newValue: objcbool); message 'setShouldRasterize:';
    function shouldRasterize: objcbool; message 'shouldRasterize';
    procedure setBlendMode(newValue: SKBlendMode); message 'setBlendMode:';
    function blendMode: SKBlendMode; message 'blendMode';
    procedure setShader(newValue: SKShader); message 'setShader:';
    function shader: SKShader; message 'shader';
    procedure setAttributeValues(newValue: NSDictionary); message 'setAttributeValues:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    function attributeValues: NSDictionary; message 'attributeValues'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    function valueForAttributeNamed (key: NSString): SKAttributeValue; message 'valueForAttributeNamed:'; { available in ios 10.0, tvos 10.0, watchos 3.0, macos 10.12 }
    procedure setValue_forAttributeNamed (value: SKAttributeValue; key: NSString); message 'setValue:forAttributeNamed:';

    { Adopted protocols }
    procedure setSubdivisionLevels (newValue: NSInteger); message 'setSubdivisionLevels:';
    procedure setWarpGeometry (newValue: SKWarpGeometry); message 'setWarpGeometry:';
    function subdivisionLevels: NSInteger; message 'subdivisionLevels';
    function warpGeometry: SKWarpGeometry; message 'warpGeometry';
  end;
{$endif}

