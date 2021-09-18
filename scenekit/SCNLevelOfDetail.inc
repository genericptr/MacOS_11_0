{ Parsed from SceneKit.framework SCNLevelOfDetail.h }

{$ifdef TYPES}
type
  SCNLevelOfDetailPtr = ^SCNLevelOfDetail;
{$endif}

{$ifdef CLASSES}

type
  SCNLevelOfDetail = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function levelOfDetailWithGeometry_screenSpaceRadius (geometry: SCNGeometry; radius: CGFloat): id; message 'levelOfDetailWithGeometry:screenSpaceRadius:';
    class function levelOfDetailWithGeometry_worldSpaceDistance (geometry: SCNGeometry; distance: CGFloat): id; message 'levelOfDetailWithGeometry:worldSpaceDistance:';
    function geometry: SCNGeometry; message 'geometry';
    function screenSpaceRadius: CGFloat; message 'screenSpaceRadius';
    function worldSpaceDistance: CGFloat; message 'worldSpaceDistance';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

