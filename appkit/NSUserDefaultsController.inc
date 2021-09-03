{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSUserDefaultsController.h }

{$ifdef TYPES}
type
  NSUserDefaultsControllerPtr = ^NSUserDefaultsController;
{$endif}

{$ifdef CLASSES}

type
  NSUserDefaultsController = objcclass external (NSController)
  public
    class function sharedUserDefaultsController: NSUserDefaultsController; message 'sharedUserDefaultsController';
    function initWithDefaults_initialValues (defaults: NSUserDefaults; initialValues: NSDictionary): id; message 'initWithDefaults:initialValues:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function defaults: NSUserDefaults; message 'defaults';
    procedure setInitialValues(newValue: NSDictionary); message 'setInitialValues:';
    function initialValues: NSDictionary; message 'initialValues';
    procedure setAppliesImmediately(newValue: objcbool); message 'setAppliesImmediately:';
    function appliesImmediately: objcbool; message 'appliesImmediately';
    function hasUnappliedChanges: objcbool; message 'hasUnappliedChanges';
    function values: id; message 'values';
    procedure revert (sender: id); message 'revert:';
    procedure save (sender: id); message 'save:';
    procedure revertToInitialValues (sender: id); message 'revertToInitialValues:';
  end;
{$endif}

