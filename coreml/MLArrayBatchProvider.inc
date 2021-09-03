{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLArrayBatchProvider.h }

{$ifdef TYPES}
type
  MLArrayBatchProviderPtr = ^MLArrayBatchProvider;
{$endif}

{$ifdef CLASSES}

type
  MLArrayBatchProvider = objcclass external (NSObject, MLBatchProviderProtocol)
  public
    function array_: NSArray; message 'array';
    function initWithFeatureProviderArray (array_: NSArray): id; message 'initWithFeatureProviderArray:';
    function initWithDictionary_error (dictionary: NSDictionary; error: NSErrorPtr): id; message 'initWithDictionary:error:';

    { Adopted protocols }
    function count: NSInteger; message 'count';
    function featuresAtIndex (index: NSInteger): id; message 'featuresAtIndex:';
  end;
{$endif}

