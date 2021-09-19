{ Parsed from Foundation.framework NSNotification.h }

{$ifdef CALLBACKS}
type
  NSNotificationAddObserverForNameCallback = reference to procedure (note: NSNotification); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSNotificationPtr = ^NSNotification;
  NSNotificationCenterPtr = ^NSNotificationCenter;
{$endif}

{$ifdef TYPES}
type
  NSNotificationName = NSString;
  NSNotificationNamePtr = ^NSNotificationName;
{$endif}

{$ifdef CLASSES}

type
  NSNotification = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function name: NSNotificationName; message 'name';
    function object_: id; message 'object';
    function userInfo: NSDictionary; message 'userInfo';
    function initWithName_object_userInfo (name_: NSNotificationName; object_: id; userInfo_: NSDictionary): id; message 'initWithName:object:userInfo:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;


type
  NSNotificationCreation = objccategory external (NSNotification)
    class function notificationWithName_object (aName: NSNotificationName; anObject: id): id; message 'notificationWithName:object:';
    class function notificationWithName_object_userInfo (aName: NSNotificationName; anObject: id; aUserInfo: NSDictionary): id; message 'notificationWithName:object:userInfo:';
    function init: id; message 'init';
  end;


type
  NSNotificationCenter = objcclass external (NSObject)
  private
    _impl: pointer;
    _callback: pointer;
    _pad:array[0..10] of pointer;
  public
    class function defaultCenter: NSNotificationCenter; message 'defaultCenter';
    procedure addObserver_selector_name_object (observer: id; aSelector: SEL; aName: NSNotificationName; anObject: id); message 'addObserver:selector:name:object:';
    procedure postNotification (notification: NSNotification); message 'postNotification:';
    procedure postNotificationName_object (aName: NSNotificationName; anObject: id); message 'postNotificationName:object:';
    procedure postNotificationName_object_userInfo (aName: NSNotificationName; anObject: id; aUserInfo: NSDictionary); message 'postNotificationName:object:userInfo:';
    procedure removeObserver (observer: id); message 'removeObserver:';
    procedure removeObserver_name_object (observer: id; aName: NSNotificationName; anObject: id); message 'removeObserver:name:object:';
    function addObserverForName_object_queue_usingBlock (name: NSNotificationName; obj: id; queue: NSOperationQueue; block: NSNotificationAddObserverForNameCallback): id; message 'addObserverForName:object:queue:usingBlock:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

