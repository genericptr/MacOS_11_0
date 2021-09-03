{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLDictionaryFeatureProvider.h }

{$ifdef TYPES}
type
  MLDictionaryFeatureProviderPtr = ^MLDictionaryFeatureProvider;
{$endif}

{$ifdef CLASSES}

type
  MLDictionaryFeatureProvider = objcclass external (NSObject, MLFeatureProviderProtocol, NSFastEnumerationProtocol, NSSecureCodingProtocol)
  public
    function dictionary: NSDictionary; message 'dictionary';
    function initWithDictionary_error (dictionary_: NSDictionary; error: NSErrorPtr): id; message 'initWithDictionary:error:';
    function objectForKeyedSubscript (featureName: NSString): MLFeatureValue; message 'objectForKeyedSubscript:';

    { Adopted protocols }
    function countByEnumeratingWithState_objects_count (state: NSFastEnumerationStatePtr; buffer: idPtr { variable size array of id }; len: NSUInteger): NSUInteger; message 'countByEnumeratingWithState:objects:count:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function featureNames: NSSet; message 'featureNames';
    function featureValueForName (featureName: NSString): MLFeatureValue; message 'featureValueForName:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

