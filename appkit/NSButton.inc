{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSButton.h }

{$ifdef TYPES}
type
  NSButtonPtr = ^NSButton;
{$endif}

{$ifdef CLASSES}

type
  NSButton = objcclass external (NSControl, NSUserInterfaceValidationsProtocol, NSAccessibilityButtonProtocol, NSUserInterfaceCompressionProtocol)
  public
    class function buttonWithTitle_image_target_action (title: NSString; image: NSImage; target_: id; action_: SEL): id; message 'buttonWithTitle:image:target:action:'; { available in macos  }
    class function buttonWithTitle_target_action (title: NSString; target_: id; action_: SEL): id; message 'buttonWithTitle:target:action:'; { available in macos  }
    class function buttonWithImage_target_action (image: NSImage; target_: id; action_: SEL): id; message 'buttonWithImage:target:action:'; { available in macos  }
    class function checkboxWithTitle_target_action (title: NSString; target_: id; action_: SEL): id; message 'checkboxWithTitle:target:action:'; { available in macos  }
    class function radioButtonWithTitle_target_action (title: NSString; target_: id; action_: SEL): id; message 'radioButtonWithTitle:target:action:'; { available in macos  }
    procedure setButtonType (type_: NSButtonType); message 'setButtonType:';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure setAttributedTitle(newValue: NSAttributedString); message 'setAttributedTitle:';
    function attributedTitle: NSAttributedString; message 'attributedTitle';
    procedure setAlternateTitle(newValue: NSString); message 'setAlternateTitle:';
    function alternateTitle: NSString; message 'alternateTitle';
    procedure setAttributedAlternateTitle(newValue: NSAttributedString); message 'setAttributedAlternateTitle:';
    function attributedAlternateTitle: NSAttributedString; message 'attributedAlternateTitle';
    procedure setHasDestructiveAction(newValue: objcbool); message 'setHasDestructiveAction:'; { available in macos  }
    function hasDestructiveAction: objcbool; message 'hasDestructiveAction'; { available in macos  }
    procedure setSound(newValue: NSSound); message 'setSound:';
    function sound: NSSound; message 'sound';
    procedure setSpringLoaded(newValue: objcbool); message 'setSpringLoaded:'; { available in macos  }
    function isSpringLoaded: objcbool; message 'isSpringLoaded'; { available in macos  }
    procedure setMaxAcceleratorLevel(newValue: NSInteger); message 'setMaxAcceleratorLevel:'; { available in macos  }
    function maxAcceleratorLevel: NSInteger; message 'maxAcceleratorLevel'; { available in macos  }
    procedure setPeriodicDelay_interval (delay: single; interval: single); message 'setPeriodicDelay:interval:';
    procedure getPeriodicDelay_interval (delay: psingle; interval: psingle); message 'getPeriodicDelay:interval:';
    procedure setBezelStyle(newValue: NSBezelStyle); message 'setBezelStyle:';
    function bezelStyle: NSBezelStyle; message 'bezelStyle';
    procedure setBordered(newValue: objcbool); message 'setBordered:';
    function isBordered: objcbool; message 'isBordered';
    procedure setTransparent(newValue: objcbool); message 'setTransparent:';
    function isTransparent: objcbool; message 'isTransparent';
    procedure setShowsBorderOnlyWhileMouseInside(newValue: objcbool); message 'setShowsBorderOnlyWhileMouseInside:';
    function showsBorderOnlyWhileMouseInside: objcbool; message 'showsBorderOnlyWhileMouseInside';
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setAlternateImage(newValue: NSImage); message 'setAlternateImage:';
    function alternateImage: NSImage; message 'alternateImage';
    procedure setImagePosition(newValue: NSCellImagePosition); message 'setImagePosition:';
    function imagePosition: NSCellImagePosition; message 'imagePosition';
    procedure setImageScaling(newValue: NSImageScaling); message 'setImageScaling:'; { available in macos  }
    function imageScaling: NSImageScaling; message 'imageScaling'; { available in macos  }
    procedure setImageHugsTitle(newValue: objcbool); message 'setImageHugsTitle:'; { available in macos  }
    function imageHugsTitle: objcbool; message 'imageHugsTitle'; { available in macos  }
    procedure setSymbolConfiguration(newValue: NSImageSymbolConfiguration); message 'setSymbolConfiguration:'; { available in macos  }
    function symbolConfiguration: NSImageSymbolConfiguration; message 'symbolConfiguration'; { available in macos  }
    procedure setBezelColor(newValue: NSColor); message 'setBezelColor:'; { available in macos  }
    function bezelColor: NSColor; message 'bezelColor'; { available in macos  }
    procedure setContentTintColor(newValue: NSColor); message 'setContentTintColor:'; { available in macos  }
    function contentTintColor: NSColor; message 'contentTintColor'; { available in macos  }
    procedure setState(newValue: NSControlStateValue); message 'setState:';
    function state: NSControlStateValue; message 'state';
    procedure setAllowsMixedState(newValue: objcbool); message 'setAllowsMixedState:';
    function allowsMixedState: objcbool; message 'allowsMixedState';
    procedure setNextState; message 'setNextState';
    procedure highlight (flag: objcbool); message 'highlight:';
    procedure setKeyEquivalent(newValue: NSString); message 'setKeyEquivalent:';
    function keyEquivalent: NSString; message 'keyEquivalent';
    procedure setKeyEquivalentModifierMask(newValue: NSEventModifierFlags); message 'setKeyEquivalentModifierMask:';
    function keyEquivalentModifierMask: NSEventModifierFlags; message 'keyEquivalentModifierMask';
    function performKeyEquivalent (key: NSEvent): objcbool; message 'performKeyEquivalent:';
    procedure compressWithPrioritizedCompressionOptions (prioritizedOptions: NSArray); message 'compressWithPrioritizedCompressionOptions:'; { available in macos  }
    function minimumSizeWithPrioritizedCompressionOptions (prioritizedOptions: NSArray): NSSize; message 'minimumSizeWithPrioritizedCompressionOptions:'; { available in macos  }
    function activeCompressionOptions: NSUserInterfaceCompressionOptions; message 'activeCompressionOptions'; { available in macos  }

    { Adopted protocols }
    function activeCompressionOptions_: NSUserInterfaceCompressionOptions; message 'activeCompressionOptions';
    function validateUserInterfaceItem (item: id): objcbool; message 'validateUserInterfaceItem:';
  end;


type
  NSButtonDeprecated = objccategory external (NSButton)
    procedure setTitleWithMnemonic (stringWithAmpersand: NSString); message 'setTitleWithMnemonic:'; deprecated 'Mnemonics are not used on macOS. Set the title property directly instead.';
  end;
{$endif}

