{ Parsed from SceneKit.framework SCNParametricGeometry.h }

{$ifdef TYPES}
type
  SCNPlanePtr = ^SCNPlane;
  SCNBoxPtr = ^SCNBox;
  SCNPyramidPtr = ^SCNPyramid;
  SCNSpherePtr = ^SCNSphere;
  SCNCylinderPtr = ^SCNCylinder;
  SCNConePtr = ^SCNCone;
  SCNTubePtr = ^SCNTube;
  SCNCapsulePtr = ^SCNCapsule;
  SCNTorusPtr = ^SCNTorus;
  SCNFloorPtr = ^SCNFloor;
  SCNTextPtr = ^SCNText;
  SCNShapePtr = ^SCNShape;
{$endif}

{$ifdef CLASSES}

type
  SCNPlane = objcclass external (SCNGeometry)
  public
    class function planeWithWidth_height (width: CGFloat; height: CGFloat): id; message 'planeWithWidth:height:';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setWidthSegmentCount(newValue: NSInteger); message 'setWidthSegmentCount:';
    function widthSegmentCount: NSInteger; message 'widthSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
    procedure setCornerRadius(newValue: CGFloat); message 'setCornerRadius:'; { available in macos 10.9 }
    function cornerRadius: CGFloat; message 'cornerRadius'; { available in macos 10.9 }
    procedure setCornerSegmentCount(newValue: NSInteger); message 'setCornerSegmentCount:'; { available in macos 10.9 }
    function cornerSegmentCount: NSInteger; message 'cornerSegmentCount'; { available in macos 10.9 }
  end;

type
  SCNBox = objcclass external (SCNGeometry)
  public
    class function boxWithWidth_height_length_chamferRadius (width: CGFloat; height: CGFloat; length: CGFloat; chamferRadius: CGFloat): id; message 'boxWithWidth:height:length:chamferRadius:';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setLength(newValue: CGFloat); message 'setLength:';
    function length: CGFloat; message 'length';
    procedure setChamferRadius(newValue: CGFloat); message 'setChamferRadius:';
    function chamferRadius: CGFloat; message 'chamferRadius';
    procedure setWidthSegmentCount(newValue: NSInteger); message 'setWidthSegmentCount:';
    function widthSegmentCount: NSInteger; message 'widthSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
    procedure setLengthSegmentCount(newValue: NSInteger); message 'setLengthSegmentCount:';
    function lengthSegmentCount: NSInteger; message 'lengthSegmentCount';
    procedure setChamferSegmentCount(newValue: NSInteger); message 'setChamferSegmentCount:';
    function chamferSegmentCount: NSInteger; message 'chamferSegmentCount';
  end;

type
  SCNPyramid = objcclass external (SCNGeometry)
  public
    class function pyramidWithWidth_height_length (width: CGFloat; height: CGFloat; length: CGFloat): id; message 'pyramidWithWidth:height:length:';
    procedure setWidth(newValue: CGFloat); message 'setWidth:';
    function width: CGFloat; message 'width';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setLength(newValue: CGFloat); message 'setLength:';
    function length: CGFloat; message 'length';
    procedure setWidthSegmentCount(newValue: NSInteger); message 'setWidthSegmentCount:';
    function widthSegmentCount: NSInteger; message 'widthSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
    procedure setLengthSegmentCount(newValue: NSInteger); message 'setLengthSegmentCount:';
    function lengthSegmentCount: NSInteger; message 'lengthSegmentCount';
  end;

type
  SCNSphere = objcclass external (SCNGeometry)
  public
    class function sphereWithRadius (radius: CGFloat): id; message 'sphereWithRadius:';
    procedure setRadius(newValue: CGFloat); message 'setRadius:';
    function radius: CGFloat; message 'radius';
    procedure setGeodesic(newValue: objcbool); message 'setGeodesic:';
    function isGeodesic: objcbool; message 'isGeodesic';
    procedure setSegmentCount(newValue: NSInteger); message 'setSegmentCount:';
    function segmentCount: NSInteger; message 'segmentCount';
  end;

type
  SCNCylinder = objcclass external (SCNGeometry)
  public
    class function cylinderWithRadius_height (radius: CGFloat; height: CGFloat): id; message 'cylinderWithRadius:height:';
    procedure setRadius(newValue: CGFloat); message 'setRadius:';
    function radius: CGFloat; message 'radius';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setRadialSegmentCount(newValue: NSInteger); message 'setRadialSegmentCount:';
    function radialSegmentCount: NSInteger; message 'radialSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
  end;

type
  SCNCone = objcclass external (SCNGeometry)
  public
    class function coneWithTopRadius_bottomRadius_height (topRadius: CGFloat; bottomRadius: CGFloat; height: CGFloat): id; message 'coneWithTopRadius:bottomRadius:height:';
    procedure setTopRadius(newValue: CGFloat); message 'setTopRadius:';
    function topRadius: CGFloat; message 'topRadius';
    procedure setBottomRadius(newValue: CGFloat); message 'setBottomRadius:';
    function bottomRadius: CGFloat; message 'bottomRadius';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setRadialSegmentCount(newValue: NSInteger); message 'setRadialSegmentCount:';
    function radialSegmentCount: NSInteger; message 'radialSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
  end;

type
  SCNTube = objcclass external (SCNGeometry)
  public
    class function tubeWithInnerRadius_outerRadius_height (innerRadius: CGFloat; outerRadius: CGFloat; height: CGFloat): id; message 'tubeWithInnerRadius:outerRadius:height:';
    procedure setInnerRadius(newValue: CGFloat); message 'setInnerRadius:';
    function innerRadius: CGFloat; message 'innerRadius';
    procedure setOuterRadius(newValue: CGFloat); message 'setOuterRadius:';
    function outerRadius: CGFloat; message 'outerRadius';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setRadialSegmentCount(newValue: NSInteger); message 'setRadialSegmentCount:';
    function radialSegmentCount: NSInteger; message 'radialSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
  end;

type
  SCNCapsule = objcclass external (SCNGeometry)
  public
    class function capsuleWithCapRadius_height (capRadius: CGFloat; height: CGFloat): id; message 'capsuleWithCapRadius:height:';
    procedure setCapRadius(newValue: CGFloat); message 'setCapRadius:';
    function capRadius: CGFloat; message 'capRadius';
    procedure setHeight(newValue: CGFloat); message 'setHeight:';
    function height: CGFloat; message 'height';
    procedure setRadialSegmentCount(newValue: NSInteger); message 'setRadialSegmentCount:';
    function radialSegmentCount: NSInteger; message 'radialSegmentCount';
    procedure setHeightSegmentCount(newValue: NSInteger); message 'setHeightSegmentCount:';
    function heightSegmentCount: NSInteger; message 'heightSegmentCount';
    procedure setCapSegmentCount(newValue: NSInteger); message 'setCapSegmentCount:';
    function capSegmentCount: NSInteger; message 'capSegmentCount';
  end;

type
  SCNTorus = objcclass external (SCNGeometry)
  public
    class function torusWithRingRadius_pipeRadius (ringRadius: CGFloat; pipeRadius: CGFloat): id; message 'torusWithRingRadius:pipeRadius:';
    procedure setRingRadius(newValue: CGFloat); message 'setRingRadius:';
    function ringRadius: CGFloat; message 'ringRadius';
    procedure setPipeRadius(newValue: CGFloat); message 'setPipeRadius:';
    function pipeRadius: CGFloat; message 'pipeRadius';
    procedure setRingSegmentCount(newValue: NSInteger); message 'setRingSegmentCount:';
    function ringSegmentCount: NSInteger; message 'ringSegmentCount';
    procedure setPipeSegmentCount(newValue: NSInteger); message 'setPipeSegmentCount:';
    function pipeSegmentCount: NSInteger; message 'pipeSegmentCount';
  end;

type
  SCNFloor = objcclass external (SCNGeometry)
  public
    class function floor: id; message 'floor';
    procedure setReflectivity(newValue: CGFloat); message 'setReflectivity:';
    function reflectivity: CGFloat; message 'reflectivity';
    procedure setReflectionFalloffStart(newValue: CGFloat); message 'setReflectionFalloffStart:';
    function reflectionFalloffStart: CGFloat; message 'reflectionFalloffStart';
    procedure setReflectionFalloffEnd(newValue: CGFloat); message 'setReflectionFalloffEnd:';
    function reflectionFalloffEnd: CGFloat; message 'reflectionFalloffEnd';
    procedure setReflectionCategoryBitMask(newValue: NSUInteger); message 'setReflectionCategoryBitMask:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function reflectionCategoryBitMask: NSUInteger; message 'reflectionCategoryBitMask'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setWidth(newValue: CGFloat); message 'setWidth:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function width: CGFloat; message 'width'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setLength(newValue: CGFloat); message 'setLength:'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    function length: CGFloat; message 'length'; { available in macos 10.12, ios 10.0, tvos 10.0 }
    procedure setReflectionResolutionScaleFactor(newValue: CGFloat); message 'setReflectionResolutionScaleFactor:'; { available in macos 10.10 }
    function reflectionResolutionScaleFactor: CGFloat; message 'reflectionResolutionScaleFactor'; { available in macos 10.10 }
  end;

type
  SCNText = objcclass external (SCNGeometry)
  public
    class function textWithString_extrusionDepth (string_: id; extrusionDepth: CGFloat): id; message 'textWithString:extrusionDepth:';
    procedure setExtrusionDepth(newValue: CGFloat); message 'setExtrusionDepth:';
    function extrusionDepth: CGFloat; message 'extrusionDepth';
    procedure setString(newValue: id); message 'setString:';
    function string_: id; message 'string';
    procedure setFont(newValue: NSFont); message 'setFont:';
    function font: NSFont; message 'font';
    procedure setWrapped(newValue: objcbool); message 'setWrapped:';
    function isWrapped: objcbool; message 'isWrapped';
    procedure setContainerFrame(newValue: CGRect); message 'setContainerFrame:';
    function containerFrame: CGRect; message 'containerFrame';
    function textSize: CGSize; message 'textSize';
    procedure setTruncationMode(newValue: NSString); message 'setTruncationMode:';
    function truncationMode: NSString; message 'truncationMode';
    procedure setAlignmentMode(newValue: NSString); message 'setAlignmentMode:';
    function alignmentMode: NSString; message 'alignmentMode';
    procedure setChamferRadius(newValue: CGFloat); message 'setChamferRadius:';
    function chamferRadius: CGFloat; message 'chamferRadius';
    procedure setChamferSegmentCount(newValue: NSInteger); message 'setChamferSegmentCount:'; { unavailable in ios, tvos, watchos, macCatalyst }
    function chamferSegmentCount: NSInteger; message 'chamferSegmentCount'; { unavailable in ios, tvos, watchos, macCatalyst }
    procedure setChamferProfile(newValue: NSBezierPath); message 'setChamferProfile:'; { available in macos 10.9 }
    function chamferProfile: NSBezierPath; message 'chamferProfile'; { available in macos 10.9 }
    procedure setFlatness(newValue: CGFloat); message 'setFlatness:'; { available in macos 10.9 }
    function flatness: CGFloat; message 'flatness'; { available in macos 10.9 }
  end;
{$endif}

{$ifdef TYPES}
type
  SCNChamferMode = NSInteger;
  SCNChamferModePtr = ^SCNChamferMode;

const
  SCNChamferModeBoth = 0;
  SCNChamferModeFront = 1;
  SCNChamferModeBack = 2;
{$endif}

{$ifdef CLASSES}

type
  SCNShape = objcclass external (SCNGeometry)
  public
    class function shapeWithPath_extrusionDepth (path: NSBezierPath; extrusionDepth: CGFloat): id; message 'shapeWithPath:extrusionDepth:';
    procedure setPath(newValue: NSBezierPath); message 'setPath:';
    function path: NSBezierPath; message 'path';
    procedure setExtrusionDepth(newValue: CGFloat); message 'setExtrusionDepth:';
    function extrusionDepth: CGFloat; message 'extrusionDepth';
    procedure setChamferMode(newValue: SCNChamferMode); message 'setChamferMode:';
    function chamferMode: SCNChamferMode; message 'chamferMode';
    procedure setChamferRadius(newValue: CGFloat); message 'setChamferRadius:';
    function chamferRadius: CGFloat; message 'chamferRadius';
    procedure setChamferProfile(newValue: NSBezierPath); message 'setChamferProfile:';
    function chamferProfile: NSBezierPath; message 'chamferProfile';
  end;
{$endif}

