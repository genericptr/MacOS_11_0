{ Parsed from Automator.framework AMBundleAction.h }

{$ifdef TYPES}
type
  AMBundleActionPtr = ^AMBundleAction;
{$endif}

{$ifdef CLASSES}

type
  AMBundleAction = objcclass external (AMAction, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _view: NSView;
    _bundle: NSBundle;
    _topLevelObjects: NSArray;
    _reserved: id;
    _reserved2: id;
    _reserved3: id;
    _reserved4: id;
  public
    procedure awakeFromBundle; message 'awakeFromBundle';
    function hasView: objcbool; message 'hasView';
    function view: NSView; message 'view';
    function bundle: NSBundle; message 'bundle';
    procedure setParameters(newValue: NSMutableDictionary); message 'setParameters:';
    function parameters: NSMutableDictionary; message 'parameters';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

