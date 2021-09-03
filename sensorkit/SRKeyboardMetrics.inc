{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/SRKeyboardMetrics.h }

{$ifdef TYPES}
type
  SRKeyboardMetricsPtr = ^SRKeyboardMetrics;
  SRKeyboardProbabilityMetricPtr = ^SRKeyboardProbabilityMetric;
{$endif}

{$ifdef CLASSES}

type
  SRKeyboardMetrics = objcclass external (NSObject)
  public
    function duration: NSTimeInterval; message 'duration';
    function keyboardIdentifier: NSString; message 'keyboardIdentifier';
    function version: NSString; message 'version';
    function width: NSMeasurement; message 'width';
    function height: NSMeasurement; message 'height';
  end;


type
  ScalarMetrics = objccategory external (SRKeyboardMetrics)
    function totalWords: NSInteger; message 'totalWords';
    function totalAlteredWords: NSInteger; message 'totalAlteredWords';
    function totalTaps: NSInteger; message 'totalTaps';
    function totalDrags: NSInteger; message 'totalDrags';
    function totalDeletes: NSInteger; message 'totalDeletes';
    function totalEmojis: NSInteger; message 'totalEmojis';
    function totalPaths: NSInteger; message 'totalPaths';
    function totalPathTime: NSTimeInterval; message 'totalPathTime';
    function totalPathLength: NSMeasurement; message 'totalPathLength';
    function totalAutoCorrections: NSInteger; message 'totalAutoCorrections';
    function totalSpaceCorrections: NSInteger; message 'totalSpaceCorrections';
    function totalRetroCorrections: NSInteger; message 'totalRetroCorrections';
    function totalTranspositionCorrections: NSInteger; message 'totalTranspositionCorrections';
    function totalInsertKeyCorrections: NSInteger; message 'totalInsertKeyCorrections';
    function totalSkipTouchCorrections: NSInteger; message 'totalSkipTouchCorrections';
    function totalNearKeyCorrections: NSInteger; message 'totalNearKeyCorrections';
    function totalSubstitutionCorrections: NSInteger; message 'totalSubstitutionCorrections';
    function totalHitTestCorrections: NSInteger; message 'totalHitTestCorrections';
    function totalTypingDuration: NSTimeInterval; message 'totalTypingDuration';
  end;


type
  SRKeyboardProbabilityMetric = objcclass external (NSObject)
  public
    function distributionSampleValues: NSArray; message 'distributionSampleValues';
  end;


type
  ProbabilityMetrics = objccategory external (SRKeyboardMetrics)
    function upErrorDistance: SRKeyboardProbabilityMetric; message 'upErrorDistance';
    function downErrorDistance: SRKeyboardProbabilityMetric; message 'downErrorDistance';
    function spaceUpErrorDistance: SRKeyboardProbabilityMetric; message 'spaceUpErrorDistance';
    function spaceDownErrorDistance: SRKeyboardProbabilityMetric; message 'spaceDownErrorDistance';
    function deleteUpErrorDistance: SRKeyboardProbabilityMetric; message 'deleteUpErrorDistance';
    function deleteDownErrorDistance: SRKeyboardProbabilityMetric; message 'deleteDownErrorDistance';
    function shortWordCharKeyUpErrorDistance: SRKeyboardProbabilityMetric; message 'shortWordCharKeyUpErrorDistance';
    function shortWordCharKeyDownErrorDistance: SRKeyboardProbabilityMetric; message 'shortWordCharKeyDownErrorDistance';
    function touchDownUp: SRKeyboardProbabilityMetric; message 'touchDownUp';
    function spaceTouchDownUp: SRKeyboardProbabilityMetric; message 'spaceTouchDownUp';
    function deleteTouchDownUp: SRKeyboardProbabilityMetric; message 'deleteTouchDownUp';
    function shortWordCharKeyTouchDownUp: SRKeyboardProbabilityMetric; message 'shortWordCharKeyTouchDownUp';
    function touchDownDown: SRKeyboardProbabilityMetric; message 'touchDownDown';
    function charKeyToPrediction: SRKeyboardProbabilityMetric; message 'charKeyToPrediction';
    function shortWordCharKeyToCharKey: SRKeyboardProbabilityMetric; message 'shortWordCharKeyToCharKey';
    function charKeyToAnyTapKey: SRKeyboardProbabilityMetric; message 'charKeyToAnyTapKey';
    function anyTapToCharKey: SRKeyboardProbabilityMetric; message 'anyTapToCharKey';
    function spaceToCharKey: SRKeyboardProbabilityMetric; message 'spaceToCharKey';
    function charKeyToSpaceKey: SRKeyboardProbabilityMetric; message 'charKeyToSpaceKey';
    function spaceToDeleteKey: SRKeyboardProbabilityMetric; message 'spaceToDeleteKey';
    function deleteToSpaceKey: SRKeyboardProbabilityMetric; message 'deleteToSpaceKey';
    function spaceToSpaceKey: SRKeyboardProbabilityMetric; message 'spaceToSpaceKey';
    function spaceToShiftKey: SRKeyboardProbabilityMetric; message 'spaceToShiftKey';
    function spaceToPlaneChangeKey: SRKeyboardProbabilityMetric; message 'spaceToPlaneChangeKey';
    function spaceToPredictionKey: SRKeyboardProbabilityMetric; message 'spaceToPredictionKey';
    function deleteToCharKey: SRKeyboardProbabilityMetric; message 'deleteToCharKey';
    function charKeyToDelete: SRKeyboardProbabilityMetric; message 'charKeyToDelete';
    function deleteToDelete: SRKeyboardProbabilityMetric; message 'deleteToDelete';
    function deleteToShiftKey: SRKeyboardProbabilityMetric; message 'deleteToShiftKey';
    function deleteToPlaneChangeKey: SRKeyboardProbabilityMetric; message 'deleteToPlaneChangeKey';
    function anyTapToPlaneChangeKey: SRKeyboardProbabilityMetric; message 'anyTapToPlaneChangeKey';
    function planeChangeToAnyTap: SRKeyboardProbabilityMetric; message 'planeChangeToAnyTap';
    function charKeyToPlaneChangeKey: SRKeyboardProbabilityMetric; message 'charKeyToPlaneChangeKey';
    function planeChangeKeyToCharKey: SRKeyboardProbabilityMetric; message 'planeChangeKeyToCharKey';
    function pathErrorDistanceRatio: NSArray; message 'pathErrorDistanceRatio';
    function deleteToPath: SRKeyboardProbabilityMetric; message 'deleteToPath';
    function pathToDelete: SRKeyboardProbabilityMetric; message 'pathToDelete';
    function spaceToPath: SRKeyboardProbabilityMetric; message 'spaceToPath';
    function pathToSpace: SRKeyboardProbabilityMetric; message 'pathToSpace';
    function pathToPath: SRKeyboardProbabilityMetric; message 'pathToPath';
  end;

type
  PositionalMetrics = objccategory external (SRKeyboardMetrics)
    function longWordUpErrorDistance: NSArray; message 'longWordUpErrorDistance';
    function longWordDownErrorDistance: NSArray; message 'longWordDownErrorDistance';
    function longWordTouchDownUp: NSArray; message 'longWordTouchDownUp';
    function longWordTouchDownDown: NSArray; message 'longWordTouchDownDown';
    function deleteToDeletes: NSArray; message 'deleteToDeletes';
  end;
{$endif}

