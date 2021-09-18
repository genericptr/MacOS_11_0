{ Parsed from AppKit.framework NSPredicateEditor.h }

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

