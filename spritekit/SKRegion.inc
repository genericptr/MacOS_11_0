{ Parsed from SpriteKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SpriteKit.framework/Headers/SKRegion.h }

{$ifdef TYPES}
type
  SKRegionPtr = ^SKRegion;
{$endif}

{$ifdef CLASSES}

type
  SKRegion = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function path: CGPathRef; message 'path';
    class function infiniteRegion: id; message 'infiniteRegion';
    function initWithRadius (radius: single): id; message 'initWithRadius:';
    function initWithSize (size: CGSize): id; message 'initWithSize:';
    function initWithPath (path_: CGPathRef): id; message 'initWithPath:';
    function inverseRegion: id; message 'inverseRegion';
    function regionByUnionWithRegion (region: SKRegion): id; message 'regionByUnionWithRegion:';
    function regionByDifferenceFromRegion (region: SKRegion): id; message 'regionByDifferenceFromRegion:';
    function regionByIntersectionWithRegion (region: SKRegion): id; message 'regionByIntersectionWithRegion:';
    function containsPoint (point: CGPoint): objcbool; message 'containsPoint:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

