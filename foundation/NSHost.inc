{ Parsed from Foundation.framework NSHost.h }

{$ifdef TYPES}
type
  NSHostPtr = ^NSHost;
{$endif}

{$ifdef CLASSES}

type
  NSHost = objcclass external (NSObject)
  private
    names: NSArray;
    addresses: NSArray;
    reserved: id;
  public
    class function currentHost: id; message 'currentHost';
    class function hostWithName (name: NSString): id; message 'hostWithName:';
    class function hostWithAddress (address: NSString): id; message 'hostWithAddress:';
    function isEqualToHost (aHost: NSHost): objcbool; message 'isEqualToHost:';
    function name: NSString; message 'name';
    function names_: NSArray; message 'names';
    function address: NSString; message 'address';
    function addresses_: NSArray; message 'addresses';
    function localizedName: NSString; message 'localizedName'; { unavailable in ios, watchos, tvos } { available in macos 10.6 }
    class procedure setHostCacheEnabled (flag: objcbool); message 'setHostCacheEnabled:'; { unavailable in ios, watchos, tvos }
    class function isHostCacheEnabled: objcbool; message 'isHostCacheEnabled'; { unavailable in ios, watchos, tvos }
    class procedure flushHostCache; message 'flushHostCache'; { unavailable in ios, watchos, tvos }
  end;
{$endif}

