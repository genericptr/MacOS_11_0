{ Parsed from AVFoundation.framework AVAssetSegmentReport.h }

{$ifdef TYPES}
type
  AVAssetSegmentReportPtr = ^AVAssetSegmentReport;
  AVAssetSegmentTrackReportPtr = ^AVAssetSegmentTrackReport;
  AVAssetSegmentReportSampleInformationPtr = ^AVAssetSegmentReportSampleInformation;
{$endif}

{$if defined(__NULL_MACRO__)}
{$ifdef TYPES}
type
  AVAssetSegmentType = NSInteger;
  AVAssetSegmentTypePtr = ^AVAssetSegmentType;

const
  AVAssetSegmentTypeInitialization = 1;
  AVAssetSegmentTypeSeparable = 2;
{$endif}

{$ifdef CLASSES}

type
  AVAssetSegmentReport = objcclass external (NSObject)
  public
    function segmentType: AVAssetSegmentType; message 'segmentType';
    function trackReports: NSArray; message 'trackReports';
  end;

type
  AVAssetSegmentTrackReport = objcclass external (NSObject)
  public
    function trackID: CMPersistentTrackID; message 'trackID';
    function mediaType: AVMediaType; message 'mediaType';
    function earliestPresentationTimeStamp: CMTime; message 'earliestPresentationTimeStamp';
    function duration: CMTime; message 'duration';
    function firstVideoSampleInformation: AVAssetSegmentReportSampleInformation; message 'firstVideoSampleInformation';
  end;

type
  AVAssetSegmentReportSampleInformation = objcclass external (NSObject)
  public
    function presentationTimeStamp: CMTime; message 'presentationTimeStamp';
    function offset: NSInteger; message 'offset';
    function length: NSInteger; message 'length';
    function isSyncSample: objcbool; message 'isSyncSample';
  end;
{$endif}

{$else}
{$endif}
