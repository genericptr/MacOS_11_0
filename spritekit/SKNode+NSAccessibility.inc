{ Parsed from SpriteKit.framework SKNode+NSAccessibility.h }
{$ifdef CLASSES}

type
  NSAccessibility = objccategory external (SKNode)
    procedure setAccessibilityElement(newValue: objcbool); message 'setAccessibilityElement:';
    function isAccessibilityElement: objcbool; message 'isAccessibilityElement';
    procedure setAccessibilityRole(newValue: NSString); message 'setAccessibilityRole:';
    function accessibilityRole: NSString; message 'accessibilityRole';
    procedure setAccessibilityRoleDescription(newValue: NSString); message 'setAccessibilityRoleDescription:';
    function accessibilityRoleDescription: NSString; message 'accessibilityRoleDescription';
    procedure setAccessibilitySubrole(newValue: NSString); message 'setAccessibilitySubrole:';
    function accessibilitySubrole: NSString; message 'accessibilitySubrole';
    procedure setAccessibilityFrame(newValue: CGRect); message 'setAccessibilityFrame:';
    function accessibilityFrame: CGRect; message 'accessibilityFrame';
    procedure setAccessibilityParent(newValue: id); message 'setAccessibilityParent:';
    function accessibilityParent: id; message 'accessibilityParent';
    procedure setAccessibilityChildren(newValue: NSArray); message 'setAccessibilityChildren:';
    function accessibilityChildren: NSArray; message 'accessibilityChildren';
    procedure setAccessibilityHelp(newValue: NSString); message 'setAccessibilityHelp:';
    function accessibilityHelp: NSString; message 'accessibilityHelp';
    procedure setAccessibilityLabel(newValue: NSString); message 'setAccessibilityLabel:';
    function accessibilityLabel: NSString; message 'accessibilityLabel';
    procedure setAccessibilityEnabled(newValue: objcbool); message 'setAccessibilityEnabled:';
    function isAccessibilityEnabled: objcbool; message 'isAccessibilityEnabled';
    function accessibilityHitTest (point: CGPoint): id; message 'accessibilityHitTest:';
  end;
{$endif}

