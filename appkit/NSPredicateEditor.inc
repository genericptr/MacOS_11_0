{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPredicateEditor.h }

{$ifdef TYPES}
type
  NSPredicateEditorPtr = ^NSPredicateEditor;
{$endif}

{$ifdef CLASSES}

type
  NSPredicateEditor = objcclass external (NSRuleEditor)
  public
    procedure setRowTemplates(newValue: NSArray); message 'setRowTemplates:';
    function rowTemplates: NSArray; message 'rowTemplates';
  end;
{$endif}

