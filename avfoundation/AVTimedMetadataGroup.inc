{ Parsed from AVFoundation.framework AVTimedMetadataGroup.h }

{$ifdef TYPES}
type
  AVMetadataGroupPtr = ^AVMetadataGroup;
  AVTimedMetadataGroupPtr = ^AVTimedMetadataGroup;
  AVMutableTimedMetadataGroupPtr = ^AVMutableTimedMetadataGroup;
  AVDateRangeMetadataGroupPtr = ^AVDateRangeMetadataGroup;
  AVMutableDateRangeMetadataGroupPtr = ^AVMutableDateRangeMetadataGroup;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef CLASSES}

type
  AVMetadataGroup = objcclass external (NSObject)
  public
    function items: NSArray; message 'items';
  end;


type
  AVMetadataGroupIdentification = objccategory external (AVMetadataGroup)
    function classifyingLabel: NSString; message 'classifyingLabel'; { available in macos , ios , tvos , watchos  }
    function uniqueID: NSString; message 'uniqueID'; { available in macos , ios , tvos , watchos  }
  end;


type
  AVTimedMetadataGroup = objcclass external (AVMetadataGroup, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _priv: AVTimedMetadataGroupInternal;
  public
    function initWithItems_timeRange (items_: NSArray; timeRange: CMTimeRange): id; message 'initWithItems:timeRange:';
    function initWithSampleBuffer (sampleBuffer: CMSampleBufferRef): id; message 'initWithSampleBuffer:'; { available in macos , ios , tvos , watchos  }
    function timeRange: CMTimeRange; message 'timeRange';
    function items: NSArray; message 'items';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;


type
  AVTimedMetadataGroupSerializationSupport = objccategory external (AVTimedMetadataGroup)
    function copyFormatDescription: CMMetadataFormatDescriptionRef; message 'copyFormatDescription'; { available in macos , ios , tvos , watchos  }
  end;


type
  AVMutableTimedMetadataGroup = objcclass external (AVTimedMetadataGroup)
  private
    _mutablePriv: AVTimedMetadataGroupInternal;
  public
    procedure setTimeRange(newValue: CMTimeRange); message 'setTimeRange:';
    function timeRange: CMTimeRange; message 'timeRange';
    procedure setItems(newValue: NSArray); message 'setItems:';
    function items: NSArray; message 'items';
  end;

type
  AVDateRangeMetadataGroup = objcclass external (AVMetadataGroup, NSCopyingProtocol, NSMutableCopyingProtocol)
  private
    _priv: AVDateRangeMetadataGroupInternal;
  public
    function initWithItems_startDate_endDate (items_: NSArray; startDate: NSDate; endDate: NSDate): id; message 'initWithItems:startDate:endDate:';
    function startDate: NSDate; message 'startDate';
    function endDate: NSDate; message 'endDate';
    function items: NSArray; message 'items';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  AVMutableDateRangeMetadataGroup = objcclass external (AVDateRangeMetadataGroup)
  private
    _mutablePriv: AVDateRangeMetadataGroupInternal;
  public
    procedure setStartDate(newValue: NSDate); message 'setStartDate:';
    function startDate: NSDate; message 'startDate';
    procedure setEndDate(newValue: NSDate); message 'setEndDate:';
    function endDate: NSDate; message 'endDate';
    procedure setItems(newValue: NSArray); message 'setItems:';
    function items: NSArray; message 'items';
  end;
{$endif}

{$else}
{$endif}
