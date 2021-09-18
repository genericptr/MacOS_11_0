{ Parsed from CloudKit.framework CKLocationSortDescriptor.h }

{$ifdef TYPES}
type
  CKLocationSortDescriptorPtr = ^CKLocationSortDescriptor;
{$endif}

{$ifdef CLASSES}

type
  CKLocationSortDescriptor = objcclass external (NSSortDescriptor, NSSecureCodingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithKey_relativeLocation (key_: NSString; relativeLocation: CLLocation): id; message 'initWithKey:relativeLocation:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function relativeLocation: CLLocation; message 'relativeLocation';
  end;
{$endif}

