{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPressureConfiguration.h }

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

