{ Parsed from MetricKit.framework MXMetricManager.h }

{$ifdef TYPES}
type
  MXMetricManagerPtr = ^MXMetricManager;
  MXMetricManagerSubscriberProtocolPtr = ^MXMetricManagerSubscriberProtocol;
{$endif}

{$ifdef CLASSES}

type
  MXMetricManager = objcclass external (NSObject)
  public
    function pastPayloads: NSArray; message 'pastPayloads';
    function pastDiagnosticPayloads: NSArray; message 'pastDiagnosticPayloads'; { unavailable in macos, tvos, watchos } { available in ios 14.0 }
    class function sharedManager: MXMetricManager; message 'sharedManager';
    class function makeLogHandleWithCategory (category: NSString): os_log_t; message 'makeLogHandleWithCategory:';
    procedure addSubscriber (subscriber: MXMetricManagerSubscriberProtocol); message 'addSubscriber:';
    procedure removeSubscriber (subscriber: MXMetricManagerSubscriberProtocol); message 'removeSubscriber:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  MXMetricManagerSubscriberProtocol = objcprotocol external name 'MXMetricManagerSubscriber' (NSObjectProtocol)
  required
    procedure didReceiveMetricPayloads (payloads: NSArray); message 'didReceiveMetricPayloads:';
  optional
    procedure didReceiveDiagnosticPayloads (payloads: NSArray); message 'didReceiveDiagnosticPayloads:'; { unavailable in macos, tvos, watchos } { available in ios 14.0 }
  end;
{$endif}

