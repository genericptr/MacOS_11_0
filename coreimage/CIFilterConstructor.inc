{ Parsed from CoreImage.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreImage.framework/Headers/CIFilterConstructor.h }

{$ifdef TYPES}
type
  CIFilterConstructorProtocolPtr = ^CIFilterConstructorProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CIFilterConstructorProtocol = objcprotocol external name 'CIFilterConstructor'
    function filterWithName (name: NSString): CIFilter; message 'filterWithName:';
  end;
{$endif}

