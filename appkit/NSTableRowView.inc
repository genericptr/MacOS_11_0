{ Parsed from AppKit.framework NSTableRowView.h }

{$ifdef TYPES}
type
  NSTableRowViewPtr = ^NSTableRowView;
{$endif}

{$ifdef CLASSES}

type
  NSTableRowView = objcclass external (NSView, NSAccessibilityRowProtocol)
  public
    procedure setSelectionHighlightStyle(newValue: NSTableViewSelectionHighlightStyle); message 'setSelectionHighlightStyle:';
    function selectionHighlightStyle: NSTableViewSelectionHighlightStyle; message 'selectionHighlightStyle';
    procedure setEmphasized(newValue: objcbool); message 'setEmphasized:';
    function isEmphasized: objcbool; message 'isEmphasized';
    procedure setGroupRowStyle(newValue: objcbool); message 'setGroupRowStyle:';
    function isGroupRowStyle: objcbool; message 'isGroupRowStyle';
    procedure setSelected(newValue: objcbool); message 'setSelected:';
    function isSelected: objcbool; message 'isSelected';
    procedure setPreviousRowSelected(newValue: objcbool); message 'setPreviousRowSelected:'; { available in macos 10.10 }
    function isPreviousRowSelected: objcbool; message 'isPreviousRowSelected'; { available in macos 10.10 }
    procedure setNextRowSelected(newValue: objcbool); message 'setNextRowSelected:';
    function isNextRowSelected: objcbool; message 'isNextRowSelected';
    procedure setFloating(newValue: objcbool); message 'setFloating:';
    function isFloating: objcbool; message 'isFloating';
    procedure setTargetForDropOperation(newValue: objcbool); message 'setTargetForDropOperation:';
    function isTargetForDropOperation: objcbool; message 'isTargetForDropOperation';
    procedure setDraggingDestinationFeedbackStyle(newValue: NSTableViewDraggingDestinationFeedbackStyle); message 'setDraggingDestinationFeedbackStyle:';
    function draggingDestinationFeedbackStyle: NSTableViewDraggingDestinationFeedbackStyle; message 'draggingDestinationFeedbackStyle';
    procedure setIndentationForDropOperation(newValue: CGFloat); message 'setIndentationForDropOperation:';
    function indentationForDropOperation: CGFloat; message 'indentationForDropOperation';
    function interiorBackgroundStyle: NSBackgroundStyle; message 'interiorBackgroundStyle';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure drawBackgroundInRect (dirtyRect: NSRect); message 'drawBackgroundInRect:';
    procedure drawSelectionInRect (dirtyRect: NSRect); message 'drawSelectionInRect:';
    procedure drawSeparatorInRect (dirtyRect: NSRect); message 'drawSeparatorInRect:';
    procedure drawDraggingDestinationFeedbackInRect (dirtyRect: NSRect); message 'drawDraggingDestinationFeedbackInRect:';
    function viewAtColumn (column: NSInteger): id; message 'viewAtColumn:';
    function numberOfColumns: NSInteger; message 'numberOfColumns';
  end;
{$endif}

