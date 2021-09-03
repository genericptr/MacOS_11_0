{$mode delphi}
{$modeswitch objectivec1}
{$modeswitch cvar}
{$packrecords c}

unit DefinedClassesReplayKit;
interface

type
  RPBroadcastActivityController = objcclass external;
  RPBroadcastActivityViewController = objcclass external;
  RPBroadcastConfiguration = objcclass external;
  RPBroadcastController = objcclass external;
  RPBroadcastHandler = objcclass external;
  RPBroadcastMP4ClipHandler = objcclass external;
  RPBroadcastSampleHandler = objcclass external;
  RPPreviewViewController = objcclass external;
  RPScreenRecorder = objcclass external;
  RPSystemBroadcastPickerView = objcclass external;
  RPBroadcastActivityControllerDelegateProtocol = objcprotocol external name 'RPBroadcastActivityControllerDelegate';
  RPBroadcastActivityViewControllerDelegateProtocol = objcprotocol external name 'RPBroadcastActivityViewControllerDelegate';
  RPBroadcastControllerDelegateProtocol = objcprotocol external name 'RPBroadcastControllerDelegate';
  RPPreviewViewControllerDelegateProtocol = objcprotocol external name 'RPPreviewViewControllerDelegate';
  RPScreenRecorderDelegateProtocol = objcprotocol external name 'RPScreenRecorderDelegate';

implementation
end.
