{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSwitch.h }

{$ifdef TYPES}
type
  NSSwitchPtr = ^NSSwitch;
{$endif}

{$ifdef CLASSES}

type
  NSSwitch = objcclass external (NSControl, NSAccessibilitySwitchProtocol)
  public
    procedure setState(newValue: NSControlStateValue); message 'setState:';
    function state: NSControlStateValue; message 'state';

    { Adopted protocols }
    function accessibilityFrame: NSRect; message 'accessibilityFrame';
    function accessibilityIdentifier: NSString; message 'accessibilityIdentifier';
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    function accessibilityParent: id; message 'accessibilityParent';
    function accessibilityPerformDecrement: objcbool; message 'accessibilityPerformDecrement';
    function accessibilityPerformIncrement: objcbool; message 'accessibilityPerformIncrement';
    function accessibilityPerformPress: objcbool; message 'accessibilityPerformPress';
    function accessibilityValue: NSString; message 'accessibilityValue';
    function isAccessibilityFocused: objcbool; message 'isAccessibilityFocused';
  end;
{$endif}

