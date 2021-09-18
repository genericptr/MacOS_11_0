{ Parsed from CoreML.framework MLBatchProvider.h }

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

