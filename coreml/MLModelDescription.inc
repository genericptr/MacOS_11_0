{ Parsed from CoreML.framework MLModelDescription.h }

{$ifdef TYPES}
type
  MLModelDescriptionPtr = ^MLModelDescription;
{$endif}

{$ifdef CLASSES}

type
  MLModelDescription = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function inputDescriptionsByName: NSDictionary; message 'inputDescriptionsByName';
    function outputDescriptionsByName: NSDictionary; message 'outputDescriptionsByName';
    function predictedFeatureName: NSString; message 'predictedFeatureName';
    function predictedProbabilitiesName: NSString; message 'predictedProbabilitiesName';
    function metadata: NSDictionary; message 'metadata';
    function classLabels: NSArray; message 'classLabels'; { available in macos 11.0, ios 14.0, watchos 7.0, tvos 14.0 }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  MLUpdateAdditions = objccategory external (MLModelDescription)
    function isUpdatable: objcbool; message 'isUpdatable';
    function trainingInputDescriptionsByName: NSDictionary; message 'trainingInputDescriptionsByName';
  end;

type
  MLParameters = objccategory external (MLModelDescription)
    function parameterDescriptionsByKey: NSDictionary; message 'parameterDescriptionsByKey';
  end;
{$endif}

