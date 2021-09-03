{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSPortMessage.h }

{$ifdef TYPES}
type
  NSPortMessagePtr = ^NSPortMessage;
{$endif}

{$ifdef CLASSES}

type
  NSPortMessage = objcclass external (NSObject)
  private
    localPort: NSPort;
    remotePort: NSPort;
    components: NSMutableArray;
    msgid: cuint32;
    reserved2: pointer;
    reserved: pointer;
  public
    function initWithSendPort_receivePort_components (sendPort: NSPort; replyPort: NSPort; components_: NSArray): id; message 'initWithSendPort:receivePort:components:'; { NS_DESIGNATED_INITIALIZER }
    function components_: NSArray; message 'components';
    function receivePort: NSPort; message 'receivePort';
    function sendPort: NSPort; message 'sendPort';
    function sendBeforeDate (date: NSDate): objcbool; message 'sendBeforeDate:';
    procedure setMsgid(newValue: cuint32); message 'setMsgid:';
    function msgid_: cuint32; message 'msgid';
  end;
{$endif}
