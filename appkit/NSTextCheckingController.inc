{ Parsed from AppKit.framework NSTextCheckingController.h }

{$ifdef TYPES}
type
  NSTextCheckingControllerPtr = ^NSTextCheckingController;
{$endif}

{$ifdef CLASSES}

type
  NSTextCheckingController = objcclass external (NSObject)
  public
    function initWithClient (client: NSTextCheckingClientProtocol): id; message 'initWithClient:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function client: NSTextCheckingClientProtocol; message 'client';
    procedure invalidate; message 'invalidate';
    procedure didChangeTextInRange (range: NSRange); message 'didChangeTextInRange:';
    procedure insertedTextInRange (range: NSRange); message 'insertedTextInRange:';
    procedure didChangeSelectedRange; message 'didChangeSelectedRange';
    procedure considerTextCheckingForRange (range: NSRange); message 'considerTextCheckingForRange:';
    procedure checkTextInRange_types_options (range: NSRange; checkingTypes: NSTextCheckingTypes; options: NSDictionary); message 'checkTextInRange:types:options:';
    procedure checkTextInSelection (sender: id); message 'checkTextInSelection:';
    procedure checkTextInDocument (sender: id); message 'checkTextInDocument:';
    procedure orderFrontSubstitutionsPanel (sender: id); message 'orderFrontSubstitutionsPanel:';
    procedure checkSpelling (sender: id); message 'checkSpelling:';
    procedure showGuessPanel (sender: id); message 'showGuessPanel:';
    procedure changeSpelling (sender: id); message 'changeSpelling:';
    procedure ignoreSpelling (sender: id); message 'ignoreSpelling:';
    procedure updateCandidates; message 'updateCandidates';
    function validAnnotations: NSArray; message 'validAnnotations';
    function menuAtIndex_clickedOnSelection_effectiveRange (location: NSUInteger; clickedOnSelection: objcbool; effectiveRange: NSRangePointer): NSMenu; message 'menuAtIndex:clickedOnSelection:effectiveRange:';
    procedure setSpellCheckerDocumentTag(newValue: NSInteger); message 'setSpellCheckerDocumentTag:';
    function spellCheckerDocumentTag: NSInteger; message 'spellCheckerDocumentTag';
  end;
{$endif}

