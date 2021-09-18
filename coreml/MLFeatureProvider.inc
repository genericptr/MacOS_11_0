{ Parsed from CoreML.framework MLFeatureProvider.h }

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

