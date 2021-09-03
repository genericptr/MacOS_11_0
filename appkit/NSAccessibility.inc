{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSAccessibility.h }
{$ifdef CLASSES}

type
  NSObject_NSAccessibility = objccategory external name 'NSAccessibility' (NSObject)
    function accessibilityAttributeNames: NSArray; message 'accessibilityAttributeNames'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
    function accessibilityAttributeValue (attribute: NSAccessibilityAttributeName): id; message 'accessibilityAttributeValue:'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
    function accessibilityIsAttributeSettable (attribute: NSAccessibilityAttributeName): objcbool; message 'accessibilityIsAttributeSettable:'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
    procedure accessibilitySetValue_forAttribute (value: id; attribute: NSAccessibilityAttributeName); message 'accessibilitySetValue:forAttribute:'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
    function accessibilityParameterizedAttributeNames: NSArray; message 'accessibilityParameterizedAttributeNames'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
    function accessibilityAttributeValue_forParameter (attribute: NSAccessibilityParameterizedAttributeName; parameter: id): id; message 'accessibilityAttributeValue:forParameter:'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
    function accessibilityActionNames: NSArray; message 'accessibilityActionNames'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
    function accessibilityActionDescription (action: NSAccessibilityActionName): NSString; message 'accessibilityActionDescription:'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
    procedure accessibilityPerformAction (action: NSAccessibilityActionName); message 'accessibilityPerformAction:'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
    function accessibilityIsIgnored: objcbool; message 'accessibilityIsIgnored'; deprecated 'Use isAccessibilityElement instead';
    function accessibilityHitTest (point: NSPoint): id; message 'accessibilityHitTest:';
    function accessibilityFocusedUIElement: id; message 'accessibilityFocusedUIElement';
    function accessibilityIndexOfChild (child: id): NSUInteger; message 'accessibilityIndexOfChild:';
    function accessibilityArrayAttributeCount (attribute: NSAccessibilityAttributeName): NSUInteger; message 'accessibilityArrayAttributeCount:';
    function accessibilityArrayAttributeValues_index_maxCount (attribute: NSAccessibilityAttributeName; index: NSUInteger; maxCount: NSUInteger): NSArray; message 'accessibilityArrayAttributeValues:index:maxCount:';
    function accessibilityNotifiesWhenDestroyed: objcbool; message 'accessibilityNotifiesWhenDestroyed'; { available in macos  }
  end;

type
  NSWorkspaceAccessibilityDisplay = objccategory external (NSWorkspace)
    function accessibilityDisplayShouldIncreaseContrast: objcbool; message 'accessibilityDisplayShouldIncreaseContrast'; { available in macos  }
    function accessibilityDisplayShouldDifferentiateWithoutColor: objcbool; message 'accessibilityDisplayShouldDifferentiateWithoutColor'; { available in macos  }
    function accessibilityDisplayShouldReduceTransparency: objcbool; message 'accessibilityDisplayShouldReduceTransparency'; { available in macos  }
    function accessibilityDisplayShouldReduceMotion: objcbool; message 'accessibilityDisplayShouldReduceMotion'; { available in macos  }
    function accessibilityDisplayShouldInvertColors: objcbool; message 'accessibilityDisplayShouldInvertColors'; { available in macos  }
  end;

type
  NSWorkspaceAccessibility = objccategory external (NSWorkspace)
    function isVoiceOverEnabled: objcbool; message 'isVoiceOverEnabled'; { available in macos  }
    function isSwitchControlEnabled: objcbool; message 'isSwitchControlEnabled'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSWorkspaceAccessibilityDisplayOptionsDidChangeNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSAccessibilityAdditions = objccategory external (NSObject)
    function accessibilitySetOverrideValue_forAttribute (value: id; attribute: NSAccessibilityAttributeName): objcbool; message 'accessibilitySetOverrideValue:forAttribute:'; deprecated 'Use the NSAccessibility protocol methods instead (see NSAccessibilityProtocols.h)';
  end;
{$endif}

{$ifdef FUNCTIONS}
function NSAccessibilityFrameInView(parentView: NSView; frame: NSRect): NSRect; cdecl; external; { available in macos  }
function NSAccessibilityPointInView(parentView: NSView; point: NSPoint): NSPoint; cdecl; external; { available in macos  }
function NSAccessibilitySetMayContainProtectedContent(flag: objcbool): objcbool; cdecl; external;
function NSAccessibilityRoleDescription(role: NSAccessibilityRole; subrole: NSAccessibilitySubrole): NSString; cdecl; external;
function NSAccessibilityRoleDescriptionForUIElement(element: id): NSString; cdecl; external;
function NSAccessibilityActionDescription(action: NSAccessibilityActionName): NSString; cdecl; external;
function NSAccessibilityRaiseBadArgumentException(element: id; attribute: NSAccessibilityAttributeName; value: id): pointer; cdecl; external; deprecated 'Exceptions are no longer appropriate for indicating errors in accessibility API. Unexpected values should be handled through appropriate type checking.';
function NSAccessibilityUnignoredAncestor(element: id): id; cdecl; external;
function NSAccessibilityUnignoredDescendant(element: id): id; cdecl; external;
function NSAccessibilityUnignoredChildren(originalChildren: NSArray): NSArray; cdecl; external;
function NSAccessibilityUnignoredChildrenForOnlyChild(originalChild: id): NSArray; cdecl; external;
function NSAccessibilityPostNotification(element: id; notification: NSAccessibilityNotificationName): pointer; cdecl; external;
{$endif}

{$ifdef __swift__}
{$ifdef TYPES}
type
  NSAccessibility = record
    _reserved: pointer;
  end;
type
  NSAccessibilityPtr = ^NSAccessibility;
{$endif}

{$endif}
