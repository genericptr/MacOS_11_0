{ Parsed from SceneKit.framework SCNBoundingVolume.h }

{$ifdef TYPES}
type
  SCNBoundingVolumeProtocolPtr = ^SCNBoundingVolumeProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNBoundingVolumeProtocol = objcprotocol external name 'SCNBoundingVolume' (NSObjectProtocol)
  required
    function getBoundingBoxMin_max (min: SCNVector3Ptr; max: SCNVector3Ptr): objcbool; message 'getBoundingBoxMin:max:';
    procedure setBoundingBoxMin_max (min: SCNVector3Ptr; max: SCNVector3Ptr); message 'setBoundingBoxMin:max:'; { available in macos 10.9 }
    function getBoundingSphereCenter_radius (center: SCNVector3Ptr; radius: CGFloatPtr): objcbool; message 'getBoundingSphereCenter:radius:';
  end;
{$endif}

