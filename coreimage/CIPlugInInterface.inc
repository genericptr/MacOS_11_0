{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIPlugInInterface.h }

{$ifdef TYPES}
type
  CIPlugInRegistrationProtocolPtr = ^CIPlugInRegistrationProtocol;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef PROTOCOLS}

type
  CIPlugInRegistrationProtocol = objcprotocol external name 'CIPlugInRegistration'
    function load (host: pointer): objcbool; message 'load:';
  end;
{$endif}

{$endif}
