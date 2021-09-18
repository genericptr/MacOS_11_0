{ Parsed from Photos.framework PHAdjustmentData.h }

{$ifdef TYPES}
type
  PHAdjustmentDataPtr = ^PHAdjustmentData;
{$endif}

{$ifdef CLASSES}

type
  PHAdjustmentData = objcclass external (NSObject)
  public
    function initWithFormatIdentifier_formatVersion_data (formatIdentifier: NSString; formatVersion: NSString; data: NSData): id; message 'initWithFormatIdentifier:formatVersion:data:';
    function formatIdentifier: NSString; message 'formatIdentifier';
    function formatVersion: NSString; message 'formatVersion';
    function data: NSData; message 'data';
  end;
{$endif}

