{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSliderAccessory.h }

{ Types from NSSliderAccessory }
{$ifdef TYPES}

{$endif}


{$ifdef CALLBACKS}
type
  NSSliderAccessoryBehaviorWithHandlerCallback = reference to function (param1: NSSliderAccessory): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSSliderAccessoryPtr = ^NSSliderAccessory;
  NSSliderAccessoryBehaviorPtr = ^NSSliderAccessoryBehavior;
{$endif}

{$ifdef CLASSES}

type
  NSSliderAccessory = objcclass external (NSObject, NSCodingProtocol)
  public
    {$if  not defined(TARGET_OS_IPHONE)}
    class function accessoryWithImage (image: NSImage): NSSliderAccessory; message 'accessoryWithImage:';
    {$else}
    class function accessoryWithImage (image: UIImage): NSSliderAccessory; message 'accessoryWithImage:'; { available in ios  }
    {$endif}
    procedure setBehavior(newValue: NSSliderAccessoryBehavior); message 'setBehavior:';
    function behavior: NSSliderAccessoryBehavior; message 'behavior';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSSliderAccessoryCategory = objccategory external (NSSliderAccessory)
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  NSSliderAccessoryBehavior = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  public
    class function automaticBehavior: NSSliderAccessoryBehavior; message 'automaticBehavior';
    class function valueStepBehavior: NSSliderAccessoryBehavior; message 'valueStepBehavior';
    class function valueResetBehavior: NSSliderAccessoryBehavior; message 'valueResetBehavior';
    class function behaviorWithTarget_action (target: id; action: SEL): NSSliderAccessoryBehavior; message 'behaviorWithTarget:action:';
    class function behaviorWithHandler (handler: NSSliderAccessoryBehaviorWithHandlerCallback): NSSliderAccessoryBehavior; message 'behaviorWithHandler:';
    procedure handleAction (sender: NSSliderAccessory); message 'handleAction:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

