{ Parsed from QuartzCore.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/QuartzCore.framework/Headers/CAConstraintLayoutManager.h }

{$ifdef TYPES}
type
  CAConstraintLayoutManagerPtr = ^CAConstraintLayoutManager;
  CAConstraintPtr = ^CAConstraint;
{$endif}

{$ifdef TYPES}
type
  CAConstraintAttribute = cint;
  CAConstraintAttributePtr = ^CAConstraintAttribute;

const
  kCAConstraintMinX = 0;
  kCAConstraintMidX = 1;
  kCAConstraintMaxX = 2;
  kCAConstraintWidth = 3;
  kCAConstraintMinY = 4;
  kCAConstraintMidY = 5;
  kCAConstraintMaxY = 6;
  kCAConstraintHeight = 7;
{$endif}

{$ifdef CLASSES}

type
  CALayer_CAConstraintLayoutManager = objccategory external name 'CAConstraintLayoutManager' (CALayer)
    procedure setConstraints(newValue: NSArray); message 'setConstraints:';
    function constraints: NSArray; message 'constraints';
    procedure addConstraint (c: CAConstraint); message 'addConstraint:';
  end;


type
  CAConstraintLayoutManager = objcclass external (NSObject, CALayoutManagerProtocol)
  public
    class function layoutManager: id; message 'layoutManager';

    { Adopted protocols }
    procedure invalidateLayoutOfLayer (layer: CALayer); message 'invalidateLayoutOfLayer:';
    procedure layoutSublayersOfLayer (layer: CALayer); message 'layoutSublayersOfLayer:';
    function preferredSizeOfLayer (layer: CALayer): CGSize; message 'preferredSizeOfLayer:';
  end;

type
  CAConstraint = objcclass external (NSObject, NSSecureCodingProtocol)
  private
    _srcId: NSString;
    _anonStruct_CAConstraintLayoutManager0: record
      case byte of
        0: (anonBitField_CAConstraintLayoutManager0: cuint);
        1: (data: bitpacked record
          _srcAttr: 0..((1 shl 16)-1);
          _attr: 0..((1 shl 16)-1);
        end;
      );
    end;
    _scale, _offset: CGFloat;
  public
    class function constraintWithAttribute_relativeTo_attribute_scale_offset (attr: CAConstraintAttribute; srcId: NSString; srcAttr: CAConstraintAttribute; m: CGFloat; c: CGFloat): id; message 'constraintWithAttribute:relativeTo:attribute:scale:offset:';
    class function constraintWithAttribute_relativeTo_attribute_offset (attr: CAConstraintAttribute; srcId: NSString; srcAttr: CAConstraintAttribute; c: CGFloat): id; message 'constraintWithAttribute:relativeTo:attribute:offset:';
    class function constraintWithAttribute_relativeTo_attribute (attr: CAConstraintAttribute; srcId: NSString; srcAttr: CAConstraintAttribute): id; message 'constraintWithAttribute:relativeTo:attribute:';
    function initWithAttribute_relativeTo_attribute_scale_offset (attr: CAConstraintAttribute; srcId: NSString; srcAttr: CAConstraintAttribute; m: CGFloat; c: CGFloat): id; message 'initWithAttribute:relativeTo:attribute:scale:offset:';
    function attribute: CAConstraintAttribute; message 'attribute';
    function sourceName: NSString; message 'sourceName';
    function sourceAttribute: CAConstraintAttribute; message 'sourceAttribute';
    function scale: CGFloat; message 'scale';
    function offset: CGFloat; message 'offset';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

