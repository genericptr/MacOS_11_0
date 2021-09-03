{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKLocationSortDescriptor.h }

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

