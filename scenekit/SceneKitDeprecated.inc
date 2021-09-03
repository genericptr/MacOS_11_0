{ Parsed from SceneKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SceneKit.framework/Headers/SceneKitDeprecated.h }
{$ifdef EXTERNAL_SYMBOLS}
var
  SCNLightAttenuationStartKey: NSString { unavailable in ios, tvos, watchos, macCatalyst }; cvar; external;
  SCNLightAttenuationEndKey: NSString { unavailable in ios, tvos, watchos, macCatalyst }; cvar; external;
  SCNLightAttenuationFalloffExponentKey: NSString { unavailable in ios, tvos, watchos, macCatalyst }; cvar; external;
  SCNLightSpotInnerAngleKey: NSString { unavailable in ios, tvos, watchos, macCatalyst }; cvar; external;
  SCNLightSpotOuterAngleKey: NSString { unavailable in ios, tvos, watchos, macCatalyst }; cvar; external;
  SCNLightShadowNearClippingKey: NSString { unavailable in ios, tvos, watchos, macCatalyst }; cvar; external;
  SCNLightShadowFarClippingKey: NSString { unavailable in ios, tvos, watchos, macCatalyst }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNLight_SCNDeprecated = objccategory external name 'SCNDeprecated' (SCNLight)
    function attributeForKey (key: NSString): id; message 'attributeForKey:'; { unavailable in ios, tvos, watchos, macCatalyst }
    procedure setAttribute_forKey (attribute: id; key: NSString); message 'setAttribute:forKey:'; { unavailable in ios, tvos, watchos, macCatalyst }
  end;

type
  SCNCamera_SCNDeprecated = objccategory external name 'SCNDeprecated' (SCNCamera)
    procedure setFocalBlurRadius(newValue: CGFloat); message 'setFocalBlurRadius:'; deprecated 'Use fStop instead';
    function focalBlurRadius: CGFloat; message 'focalBlurRadius'; deprecated 'Use fStop instead';
    procedure setXFov(newValue: double); message 'setXFov:'; deprecated 'Use -[SCNCamera fieldOfView] or -[SCNCamera focalLength] instead';
    function xFov: double; message 'xFov'; deprecated 'Use -[SCNCamera fieldOfView] or -[SCNCamera focalLength] instead';
    procedure setYFov(newValue: double); message 'setYFov:'; deprecated 'Use -[SCNCamera fieldOfView] or -[SCNCamera focalLength] instead';
    function yFov: double; message 'yFov'; deprecated 'Use -[SCNCamera fieldOfView] or -[SCNCamera focalLength] instead';
    procedure setAperture(newValue: CGFloat); message 'setAperture:'; deprecated 'Use -[SCNCamera fStop] instead with fStop = sensorHeight / aperture.';
    function aperture: CGFloat; message 'aperture'; deprecated 'Use -[SCNCamera fStop] instead with fStop = sensorHeight / aperture.';
    procedure setFocalSize(newValue: CGFloat); message 'setFocalSize:'; deprecated 'replace with -focusDistance';
    function focalSize: CGFloat; message 'focalSize'; deprecated 'replace with -focusDistance';
    procedure setFocalDistance(newValue: CGFloat); message 'setFocalDistance:'; deprecated 'replace with -focusDistance';
    function focalDistance: CGFloat; message 'focalDistance'; deprecated 'replace with -focusDistance';
  end;

type
  SCNRenderer_SCNDeprecated = objccategory external name 'SCNDeprecated' (SCNRenderer)
    procedure render; message 'render'; { unavailable in watchos, tvos, macCatalyst }
  end;

type
  SCNDeprecated = objccategory external (SCNMaterialProperty)
    procedure setBorderColor(newValue: id); message 'setBorderColor:'; { unavailable in watchos, tvos, macCatalyst }
    function borderColor: id; message 'borderColor'; { unavailable in watchos, tvos, macCatalyst }
  end;
{$endif}

