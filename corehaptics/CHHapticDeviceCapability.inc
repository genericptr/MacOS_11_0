{ Parsed from CoreHaptics.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreHaptics.framework/Headers/CHHapticDeviceCapability.h }

{$ifdef TYPES}
type
  CHHapticParameterAttributesProtocolPtr = ^CHHapticParameterAttributesProtocol;
  CHHapticDeviceCapabilityProtocolPtr = ^CHHapticDeviceCapabilityProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CHHapticParameterAttributesProtocol = objcprotocol external name 'CHHapticParameterAttributes' (NSObjectProtocol)
    function minValue: single; message 'minValue';
    function maxValue: single; message 'maxValue';
    function defaultValue: single; message 'defaultValue';
  end;

type
  CHHapticDeviceCapabilityProtocol = objcprotocol external name 'CHHapticDeviceCapability'
    function supportsHaptics: objcbool; message 'supportsHaptics';
    function supportsAudio: objcbool; message 'supportsAudio';
    function attributesForEventParameter_eventType_error (inParameter: CHHapticEventParameterID; type_: CHHapticEventType; outError: NSErrorPtr): id; message 'attributesForEventParameter:eventType:error:';
    function attributesForDynamicParameter_error (inParameter: CHHapticDynamicParameterID; outError: NSErrorPtr): id; message 'attributesForDynamicParameter:error:';
  end;
{$endif}

