{ Parsed from GameplayKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/GameplayKit.framework/Headers/GKPath.h }

{ Types from GKPath }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GKPathPtr = ^GKPath;
{$endif}

{$ifdef CLASSES}

type
  GKPath = objcclass external (NSObject)
  public
    procedure setRadius(newValue: single); message 'setRadius:';
    function radius: single; message 'radius';
    function numPoints: NSUInteger; message 'numPoints';
    procedure setCyclical(newValue: objcbool); message 'setCyclical:';
    function isCyclical: objcbool; message 'isCyclical';
    {$if ((defined(SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH)) and (SWIFT_SDK_OVERLAY_GAMEPLAYKIT_EPOCH >= 1))}
    class function pathWithPoints_count_radius_cyclical (points: vector_float2Ptr; count: size_t; radius_: single; cyclical: objcbool): id; message 'pathWithPoints:count:radius:cyclical:';
    function initWithPoints_count_radius_cyclical (points: vector_float2Ptr; count: size_t; radius_: single; cyclical: objcbool): id; message 'initWithPoints:count:radius:cyclical:';
    class function pathWithFloat3Points_count_radius_cyclical (points: vector_float3Ptr; count: size_t; radius_: single; cyclical: objcbool): id; message 'pathWithFloat3Points:count:radius:cyclical:'; { available in 10_12, 10_0 }
    function initWithFloat3Points_count_radius_cyclical (points: vector_float3Ptr; count: size_t; radius_: single; cyclical: objcbool): id; message 'initWithFloat3Points:count:radius:cyclical:'; { available in 10_12, 10_0 }
    {$else}
    class function pathWithPoints_count_radius_cyclical (points: vector_float2Ptr; count: size_t; radius_: single; cyclical: objcbool): id; message 'pathWithPoints:count:radius:cyclical:';
    function initWithPoints_count_radius_cyclical (points: vector_float2Ptr; count: size_t; radius_: single; cyclical: objcbool): id; message 'initWithPoints:count:radius:cyclical:';
    class function pathWithFloat3Points_count_radius_cyclical (points: vector_float3Ptr; count: size_t; radius_: single; cyclical: objcbool): id; message 'pathWithFloat3Points:count:radius:cyclical:'; { available in 10_12, 10_0 }
    function initWithFloat3Points_count_radius_cyclical (points: vector_float3Ptr; count: size_t; radius_: single; cyclical: objcbool): id; message 'initWithFloat3Points:count:radius:cyclical:'; { available in 10_12, 10_0 }
    {$endif}
    class function pathWithGraphNodes_radius (graphNodes: NSArray; radius_: single): id; message 'pathWithGraphNodes:radius:';
    function initWithGraphNodes_radius (graphNodes: NSArray; radius_: single): id; message 'initWithGraphNodes:radius:';
    function pointAtIndex (index: NSUInteger): vector_float2; message 'pointAtIndex:'; deprecated 'in 10_11, 10_12, 9_0, 10_0';
    function float2AtIndex (index: NSUInteger): vector_float2; message 'float2AtIndex:'; { available in 10_12, 10_0 }
    function float3AtIndex (index: NSUInteger): vector_float3; message 'float3AtIndex:'; { available in 10_12, 10_0 }
  end;
{$endif}

