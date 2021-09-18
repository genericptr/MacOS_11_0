{ Parsed from Foundation.framework NSDistributedLock.h }

{$ifdef TYPES}
type
  NSDistributedLockPtr = ^NSDistributedLock;
{$endif}

{$ifdef CLASSES}

type
  NSDistributedLock = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    class function lockWithPath (path: NSString): NSDistributedLock; message 'lockWithPath:';
    function init: id; message 'init'; { unavailable in macos, ios, watchos, tvos }
    function initWithPath (path: NSString): id; message 'initWithPath:'; { NS_DESIGNATED_INITIALIZER }
    function tryLock: objcbool; message 'tryLock';
    procedure unlock; message 'unlock';
    procedure breakLock; message 'breakLock';
    function lockDate: NSDate; message 'lockDate';
  end;
{$endif}

