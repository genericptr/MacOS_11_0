{ Parsed from QuartzCore.framework CALayer.h }

{$ifdef TYPES}
type
  CALayerPtr = ^CALayer;
  CALayoutManagerProtocolPtr = ^CALayoutManagerProtocol;
  CAActionProtocolPtr = ^CAActionProtocol;
  CALayerDelegateProtocolPtr = ^CALayerDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  CALayerContentsGravity = NSString;
  CALayerContentsGravityPtr = ^CALayerContentsGravity;
  CALayerContentsFormat = NSString;
  CALayerContentsFormatPtr = ^CALayerContentsFormat;
  CALayerContentsFilter = NSString;
  CALayerContentsFilterPtr = ^CALayerContentsFilter;
  CALayerCornerCurve = NSString;
  CALayerCornerCurvePtr = ^CALayerCornerCurve;
  CAAutoresizingMask = cuint;
  CAAutoresizingMaskPtr = ^CAAutoresizingMask;

const
  kCALayerNotSizable = 0;
  kCALayerMinXMargin = 1 shl 0;
  kCALayerWidthSizable = 1 shl 1;
  kCALayerMaxXMargin = 1 shl 2;
  kCALayerMinYMargin = 1 shl 3;
  kCALayerHeightSizable = 1 shl 4;
  kCALayerMaxYMargin = 1 shl 5;

type
  CAEdgeAntialiasingMask = cuint;
  CAEdgeAntialiasingMaskPtr = ^CAEdgeAntialiasingMask;

const
  kCALayerLeftEdge = 1 shl 0;
  kCALayerRightEdge = 1 shl 1;
  kCALayerBottomEdge = 1 shl 2;
  kCALayerTopEdge = 1 shl 3;

type
  CACornerMask = NSUInteger;
  CACornerMaskPtr = ^CACornerMask;

const
  kCALayerMinXMinYCorner = 1 shl 0;
  kCALayerMaxXMinYCorner = 1 shl 1;
  kCALayerMinXMaxYCorner = 1 shl 2;
  kCALayerMaxXMaxYCorner = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  CALayer = objcclass external (NSObject, NSSecureCodingProtocol, CAMediaTimingProtocol)
  private
    _attr: record
      refcount: cint32;
      magic: cuint32;
      layer_: pointer;
    end;
  public
    class function layer: id; message 'layer';
    function init: id; message 'init';
    function initWithLayer (layer_: id): id; message 'initWithLayer:';
    function presentationLayer: id; message 'presentationLayer';
    function modelLayer: id; message 'modelLayer';
    class function defaultValueForKey (key: NSString): id; message 'defaultValueForKey:';
    class function needsDisplayForKey (key: NSString): objcbool; message 'needsDisplayForKey:';
    function shouldArchiveValueForKey (key: NSString): objcbool; message 'shouldArchiveValueForKey:';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';
    procedure setPosition(newValue: CGPoint); message 'setPosition:';
    function position: CGPoint; message 'position';
    procedure setZPosition(newValue: CGFloat); message 'setZPosition:';
    function zPosition: CGFloat; message 'zPosition';
    procedure setAnchorPoint(newValue: CGPoint); message 'setAnchorPoint:';
    function anchorPoint: CGPoint; message 'anchorPoint';
    procedure setAnchorPointZ(newValue: CGFloat); message 'setAnchorPointZ:';
    function anchorPointZ: CGFloat; message 'anchorPointZ';
    procedure setTransform(newValue: CATransform3D); message 'setTransform:';
    function transform: CATransform3D; message 'transform';
    function affineTransform: CGAffineTransform; message 'affineTransform';
    procedure setAffineTransform (m: CGAffineTransform); message 'setAffineTransform:';
    procedure setFrame(newValue: CGRect); message 'setFrame:';
    function frame: CGRect; message 'frame';
    procedure setHidden(newValue: objcbool); message 'setHidden:';
    function isHidden: objcbool; message 'isHidden';
    procedure setDoubleSided(newValue: objcbool); message 'setDoubleSided:';
    function isDoubleSided: objcbool; message 'isDoubleSided';
    procedure setGeometryFlipped(newValue: objcbool); message 'setGeometryFlipped:';
    function isGeometryFlipped: objcbool; message 'isGeometryFlipped';
    function contentsAreFlipped: objcbool; message 'contentsAreFlipped';
    function superlayer: CALayer; message 'superlayer';
    procedure removeFromSuperlayer; message 'removeFromSuperlayer';
    procedure setSublayers(newValue: NSArray); message 'setSublayers:';
    function sublayers: NSArray; message 'sublayers';
    procedure addSublayer (layer_: CALayer); message 'addSublayer:';
    procedure insertSublayer_atIndex (layer_: CALayer; idx: cuint); message 'insertSublayer:atIndex:';
    procedure insertSublayer_below (layer_: CALayer; sibling: CALayer); message 'insertSublayer:below:';
    procedure insertSublayer_above (layer_: CALayer; sibling: CALayer); message 'insertSublayer:above:';
    procedure replaceSublayer_with (oldLayer: CALayer; newLayer: CALayer); message 'replaceSublayer:with:';
    procedure setSublayerTransform(newValue: CATransform3D); message 'setSublayerTransform:';
    function sublayerTransform: CATransform3D; message 'sublayerTransform';
    procedure setMask(newValue: CALayer); message 'setMask:';
    function mask: CALayer; message 'mask';
    procedure setMasksToBounds(newValue: objcbool); message 'setMasksToBounds:';
    function masksToBounds: objcbool; message 'masksToBounds';
    function convertPoint_fromLayer (p: CGPoint; l: CALayer): CGPoint; message 'convertPoint:fromLayer:';
    function convertPoint_toLayer (p: CGPoint; l: CALayer): CGPoint; message 'convertPoint:toLayer:';
    function convertRect_fromLayer (r: CGRect; l: CALayer): CGRect; message 'convertRect:fromLayer:';
    function convertRect_toLayer (r: CGRect; l: CALayer): CGRect; message 'convertRect:toLayer:';
    function convertTime_fromLayer (t: CFTimeInterval; l: CALayer): CFTimeInterval; message 'convertTime:fromLayer:';
    function convertTime_toLayer (t: CFTimeInterval; l: CALayer): CFTimeInterval; message 'convertTime:toLayer:';
    function hitTest (p: CGPoint): CALayer; message 'hitTest:';
    function containsPoint (p: CGPoint): objcbool; message 'containsPoint:';
    procedure setContents(newValue: id); message 'setContents:';
    function contents: id; message 'contents';
    procedure setContentsRect(newValue: CGRect); message 'setContentsRect:';
    function contentsRect: CGRect; message 'contentsRect';
    procedure setContentsGravity(newValue: CALayerContentsGravity); message 'setContentsGravity:';
    function contentsGravity: CALayerContentsGravity; message 'contentsGravity';
    procedure setContentsScale(newValue: CGFloat); message 'setContentsScale:'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    function contentsScale: CGFloat; message 'contentsScale'; { available in macos 10.7, ios 4.0, watchos 2.0, tvos 9.0 }
    procedure setContentsCenter(newValue: CGRect); message 'setContentsCenter:';
    function contentsCenter: CGRect; message 'contentsCenter';
    procedure setContentsFormat(newValue: CALayerContentsFormat); message 'setContentsFormat:'; { available in macos 10.12, ios 10.0, watchos 3.0, tvos 10.0 }
    function contentsFormat: CALayerContentsFormat; message 'contentsFormat'; { available in macos 10.12, ios 10.0, watchos 3.0, tvos 10.0 }
    procedure setMinificationFilter(newValue: CALayerContentsFilter); message 'setMinificationFilter:';
    function minificationFilter: CALayerContentsFilter; message 'minificationFilter';
    procedure setMagnificationFilter(newValue: CALayerContentsFilter); message 'setMagnificationFilter:';
    function magnificationFilter: CALayerContentsFilter; message 'magnificationFilter';
    procedure setMinificationFilterBias(newValue: single); message 'setMinificationFilterBias:';
    function minificationFilterBias: single; message 'minificationFilterBias';
    procedure setOpaque(newValue: objcbool); message 'setOpaque:';
    function isOpaque: objcbool; message 'isOpaque';
    procedure display; message 'display';
    procedure setNeedsDisplay; message 'setNeedsDisplay';
    procedure setNeedsDisplayInRect (r: CGRect); message 'setNeedsDisplayInRect:';
    function needsDisplay: objcbool; message 'needsDisplay';
    procedure displayIfNeeded; message 'displayIfNeeded';
    procedure setNeedsDisplayOnBoundsChange(newValue: objcbool); message 'setNeedsDisplayOnBoundsChange:';
    function needsDisplayOnBoundsChange: objcbool; message 'needsDisplayOnBoundsChange';
    procedure setDrawsAsynchronously(newValue: objcbool); message 'setDrawsAsynchronously:'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    function drawsAsynchronously: objcbool; message 'drawsAsynchronously'; { available in macos 10.8, ios 6.0, watchos 2.0, tvos 9.0 }
    procedure drawInContext (ctx: CGContextRef); message 'drawInContext:';
    procedure renderInContext (ctx: CGContextRef); message 'renderInContext:';
    procedure setEdgeAntialiasingMask(newValue: CAEdgeAntialiasingMask); message 'setEdgeAntialiasingMask:';
    function edgeAntialiasingMask: CAEdgeAntialiasingMask; message 'edgeAntialiasingMask';
    procedure setAllowsEdgeAntialiasing(newValue: objcbool); message 'setAllowsEdgeAntialiasing:'; { available in macos 10.10, ios 2.0, watchos 2.0, tvos 9.0 }
    function allowsEdgeAntialiasing: objcbool; message 'allowsEdgeAntialiasing'; { available in macos 10.10, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setBackgroundColor(newValue: CGColorRef); message 'setBackgroundColor:';
    function backgroundColor: CGColorRef; message 'backgroundColor';
    procedure setCornerRadius(newValue: CGFloat); message 'setCornerRadius:';
    function cornerRadius: CGFloat; message 'cornerRadius';
    procedure setMaskedCorners(newValue: CACornerMask); message 'setMaskedCorners:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function maskedCorners: CACornerMask; message 'maskedCorners'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setCornerCurve(newValue: CALayerCornerCurve); message 'setCornerCurve:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    function cornerCurve: CALayerCornerCurve; message 'cornerCurve'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    class function cornerCurveExpansionFactor (curve: CALayerCornerCurve): CGFloat; message 'cornerCurveExpansionFactor:'; { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }
    procedure setBorderWidth(newValue: CGFloat); message 'setBorderWidth:';
    function borderWidth: CGFloat; message 'borderWidth';
    procedure setBorderColor(newValue: CGColorRef); message 'setBorderColor:';
    function borderColor: CGColorRef; message 'borderColor';
    procedure setOpacity(newValue: single); message 'setOpacity:';
    function opacity: single; message 'opacity';
    procedure setAllowsGroupOpacity(newValue: objcbool); message 'setAllowsGroupOpacity:'; { available in macos 10.10, ios 2.0, watchos 2.0, tvos 9.0 }
    function allowsGroupOpacity: objcbool; message 'allowsGroupOpacity'; { available in macos 10.10, ios 2.0, watchos 2.0, tvos 9.0 }
    procedure setCompositingFilter(newValue: id); message 'setCompositingFilter:';
    function compositingFilter: id; message 'compositingFilter';
    procedure setFilters(newValue: NSArray); message 'setFilters:';
    function filters: NSArray; message 'filters';
    procedure setBackgroundFilters(newValue: NSArray); message 'setBackgroundFilters:';
    function backgroundFilters: NSArray; message 'backgroundFilters';
    procedure setShouldRasterize(newValue: objcbool); message 'setShouldRasterize:';
    function shouldRasterize: objcbool; message 'shouldRasterize';
    procedure setRasterizationScale(newValue: CGFloat); message 'setRasterizationScale:';
    function rasterizationScale: CGFloat; message 'rasterizationScale';
    procedure setShadowColor(newValue: CGColorRef); message 'setShadowColor:';
    function shadowColor: CGColorRef; message 'shadowColor';
    procedure setShadowOpacity(newValue: single); message 'setShadowOpacity:';
    function shadowOpacity: single; message 'shadowOpacity';
    procedure setShadowOffset(newValue: CGSize); message 'setShadowOffset:';
    function shadowOffset: CGSize; message 'shadowOffset';
    procedure setShadowRadius(newValue: CGFloat); message 'setShadowRadius:';
    function shadowRadius: CGFloat; message 'shadowRadius';
    procedure setShadowPath(newValue: CGPathRef); message 'setShadowPath:';
    function shadowPath: CGPathRef; message 'shadowPath';
    procedure setAutoresizingMask(newValue: CAAutoresizingMask); message 'setAutoresizingMask:';
    function autoresizingMask: CAAutoresizingMask; message 'autoresizingMask';
    procedure setLayoutManager(newValue: CALayoutManagerProtocol); message 'setLayoutManager:';
    function layoutManager: CALayoutManagerProtocol; message 'layoutManager';
    function preferredFrameSize: CGSize; message 'preferredFrameSize';
    procedure setNeedsLayout; message 'setNeedsLayout';
    function needsLayout: objcbool; message 'needsLayout';
    procedure layoutIfNeeded; message 'layoutIfNeeded';
    procedure layoutSublayers; message 'layoutSublayers';
    procedure resizeSublayersWithOldSize (size: CGSize); message 'resizeSublayersWithOldSize:';
    procedure resizeWithOldSuperlayerSize (size: CGSize); message 'resizeWithOldSuperlayerSize:';
    class function defaultActionForKey (event: NSString): id; message 'defaultActionForKey:';
    function actionForKey (event: NSString): id; message 'actionForKey:';
    procedure setActions(newValue: NSDictionary); message 'setActions:';
    function actions: NSDictionary; message 'actions';
    procedure addAnimation_forKey (anim: CAAnimation; key: NSString); message 'addAnimation:forKey:';
    procedure removeAllAnimations; message 'removeAllAnimations';
    procedure removeAnimationForKey (key: NSString); message 'removeAnimationForKey:';
    function animationKeys: NSArray; message 'animationKeys';
    function animationForKey (key: NSString): CAAnimation; message 'animationForKey:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setDelegate(newValue: CALayerDelegateProtocol); message 'setDelegate:';
    function delegate: CALayerDelegateProtocol; message 'delegate';
    procedure setStyle(newValue: NSDictionary); message 'setStyle:';
    function style: NSDictionary; message 'style';

    { Adopted protocols }
    function autoreverses: objcbool; message 'autoreverses';
    function beginTime: CFTimeInterval; message 'beginTime';
    function duration: CFTimeInterval; message 'duration';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function fillMode: CAMediaTimingFillMode; message 'fillMode';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    function repeatCount: single; message 'repeatCount';
    function repeatDuration: CFTimeInterval; message 'repeatDuration';
    procedure setAutoreverses (newValue: objcbool); message 'setAutoreverses:';
    procedure setBeginTime (newValue: CFTimeInterval); message 'setBeginTime:';
    procedure setDuration (newValue: CFTimeInterval); message 'setDuration:';
    procedure setFillMode (newValue: CAMediaTimingFillMode); message 'setFillMode:';
    procedure setRepeatCount (newValue: single); message 'setRepeatCount:';
    procedure setRepeatDuration (newValue: CFTimeInterval); message 'setRepeatDuration:';
    procedure setSpeed (newValue: single); message 'setSpeed:';
    procedure setTimeOffset (newValue: CFTimeInterval); message 'setTimeOffset:';
    function speed: single; message 'speed';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
    function timeOffset: CFTimeInterval; message 'timeOffset';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CALayoutManagerProtocol = objcprotocol external name 'CALayoutManager' (NSObjectProtocol)
  optional
    function preferredSizeOfLayer (layer: CALayer): CGSize; message 'preferredSizeOfLayer:';
    procedure invalidateLayoutOfLayer (layer: CALayer); message 'invalidateLayoutOfLayer:';
    procedure layoutSublayersOfLayer (layer: CALayer); message 'layoutSublayersOfLayer:';
  end;

type
  CAActionProtocol = objcprotocol external name 'CAAction'
    procedure runActionForKey_object_arguments (event: NSString; anObject: id; dict: NSDictionary); message 'runActionForKey:object:arguments:';
  end;
{$endif}

{$ifdef CLASSES}

type
  CAActionAdditions = objccategory external (NSNull)
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  CALayerDelegateProtocol = objcprotocol external name 'CALayerDelegate' (NSObjectProtocol)
  optional
    procedure displayLayer (layer: CALayer); message 'displayLayer:';
    procedure drawLayer_inContext (layer: CALayer; ctx: CGContextRef); message 'drawLayer:inContext:';
    procedure layerWillDraw (layer: CALayer); message 'layerWillDraw:'; { available in macos 10.12, ios 10.0, watchos 3.0, tvos 10.0 }
    procedure layoutSublayersOfLayer (layer: CALayer); message 'layoutSublayersOfLayer:';
    function actionForLayer_forKey (layer: CALayer; event: NSString): id; message 'actionForLayer:forKey:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCAGravityCenter: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityTop: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityBottom: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityLeft: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityRight: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityTopLeft: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityTopRight: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityBottomLeft: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityBottomRight: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityResize: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityResizeAspect: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAGravityResizeAspectFill: CALayerContentsGravity { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAContentsFormatRGBA8Uint: CALayerContentsFormat { available in macos 10.12, ios 10.0, watchos 3.0, tvos 10.0 }; cvar; external;
  kCAContentsFormatRGBA16Float: CALayerContentsFormat { available in macos 10.12, ios 10.0, watchos 3.0, tvos 10.0 }; cvar; external;
  kCAContentsFormatGray8Uint: CALayerContentsFormat { available in macos 10.12, ios 10.0, watchos 3.0, tvos 10.0 }; cvar; external;
  kCAFilterNearest: CALayerContentsFilter { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAFilterLinear: CALayerContentsFilter { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAFilterTrilinear: CALayerContentsFilter { available in macos 10.6, ios 3.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCACornerCurveCircular: CALayerCornerCurve { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }; cvar; external;
  kCACornerCurveContinuous: CALayerCornerCurve { available in macos 10.15, ios 13.0, watchos 6.0, tvos 13.0 }; cvar; external;
  kCAOnOrderIn: NSString { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCAOnOrderOut: NSString { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
  kCATransition: NSString { available in macos 10.5, ios 2.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

