{ Parsed from AppKit.framework NSPressureConfiguration.h }

{$ifdef TYPES}
type
  NSPressureConfigurationPtr = ^NSPressureConfiguration;
{$endif}

{$ifdef CLASSES}

type
  NSPressureConfiguration = objcclass external (NSObject)
  public
    function pressureBehavior: NSPressureBehavior; message 'pressureBehavior';
    function initWithPressureBehavior (pressureBehavior_: NSPressureBehavior): id; message 'initWithPressureBehavior:'; { NS_DESIGNATED_INITIALIZER }
    procedure set_; message 'set';
  end;


type
  NSView_NSPressureConfiguration = objccategory external name 'NSPressureConfiguration' (NSView)
    procedure setPressureConfiguration(newValue: NSPressureConfiguration); message 'setPressureConfiguration:'; { available in macos  }
    function pressureConfiguration: NSPressureConfiguration; message 'pressureConfiguration'; { available in macos  }
  end;
{$endif}

