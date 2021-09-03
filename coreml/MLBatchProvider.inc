{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLBatchProvider.h }

{$ifdef TYPES}
type
  MLBatchProviderProtocolPtr = ^MLBatchProviderProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MLBatchProviderProtocol = objcprotocol external name 'MLBatchProvider'
    function count: NSInteger; message 'count';
    function featuresAtIndex (index: NSInteger): id; message 'featuresAtIndex:';
  end;
{$endif}

