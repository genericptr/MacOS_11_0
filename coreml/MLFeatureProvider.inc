{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLFeatureProvider.h }

{$ifdef TYPES}
type
  MLFeatureProviderProtocolPtr = ^MLFeatureProviderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MLFeatureProviderProtocol = objcprotocol external name 'MLFeatureProvider'
    function featureNames: NSSet; message 'featureNames';
    function featureValueForName (featureName: NSString): MLFeatureValue; message 'featureValueForName:';
  end;
{$endif}

