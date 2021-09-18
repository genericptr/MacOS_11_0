{ Parsed from CoreImage.framework CIPlugInInterface.h }

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
