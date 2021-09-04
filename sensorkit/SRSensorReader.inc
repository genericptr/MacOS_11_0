{ Parsed from SensorKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/SensorKit.framework/Headers/SRSensorReader.h }

{$ifdef CALLBACKS}
type
  SRSensorReaderRequestAuthorizationForSensorsCallback = reference to procedure (error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  SRSensorReaderPtr = ^SRSensorReader;
  SRSensorReaderDelegateProtocolPtr = ^SRSensorReaderDelegateProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SRSensorReaderDelegateProtocol = objcprotocol external name 'SRSensorReaderDelegate' (NSObjectProtocol)
  optional
    function sensorReader_fetchingRequest_didFetchResult (reader: SRSensorReader; fetchRequest: SRFetchRequest; result_: SRFetchResult): objcbool; message 'sensorReader:fetchingRequest:didFetchResult:';
    procedure sensorReader_didCompleteFetch (reader: SRSensorReader; fetchRequest: SRFetchRequest); message 'sensorReader:didCompleteFetch:';
    procedure sensorReader_fetchingRequest_failedWithError (reader: SRSensorReader; fetchRequest: SRFetchRequest; error: NSError); message 'sensorReader:fetchingRequest:failedWithError:';
    procedure sensorReader_didChangeAuthorizationStatus (reader: SRSensorReader; authorizationStatus: SRAuthorizationStatus); message 'sensorReader:didChangeAuthorizationStatus:';
    procedure sensorReaderWillStartRecording (reader: SRSensorReader); message 'sensorReaderWillStartRecording:';
    procedure sensorReader_startRecordingFailedWithError (reader: SRSensorReader; error: NSError); message 'sensorReader:startRecordingFailedWithError:';
    procedure sensorReaderDidStopRecording (reader: SRSensorReader); message 'sensorReaderDidStopRecording:';
    procedure sensorReader_stopRecordingFailedWithError (reader: SRSensorReader; error: NSError); message 'sensorReader:stopRecordingFailedWithError:';
    procedure sensorReader_didFetchDevices (reader: SRSensorReader; devices: NSArray); message 'sensorReader:didFetchDevices:';
    procedure sensorReader_fetchDevicesDidFailWithError (reader: SRSensorReader; error: NSError); message 'sensorReader:fetchDevicesDidFailWithError:';
  end;
{$endif}

{$ifdef CLASSES}

type
  SRSensorReader = objcclass external (NSObject)
  public
    function initWithSensor (sensor: SRSensor): id; message 'initWithSensor:';
    function init: id; message 'init';
    class function new_: id; message 'new';
    procedure startRecording; message 'startRecording';
    procedure stopRecording; message 'stopRecording';
    procedure fetchDevices; message 'fetchDevices';
    procedure fetch (request: SRFetchRequest); message 'fetch:';
    function authorizationStatus: SRAuthorizationStatus; message 'authorizationStatus';
    function sensor: SRSensor; message 'sensor';
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    class procedure requestAuthorizationForSensors_completion (sensors: NSSet; completion: SRSensorReaderRequestAuthorizationForSensorsCallback); message 'requestAuthorizationForSensors:completion:';
  end;
{$endif}

