{ Parsed from AppKit.framework NSTextInputClient.h }

{$ifdef TYPES}
type
  NSTextInputClientProtocolPtr = ^NSTextInputClientProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextInputClientProtocol = objcprotocol external name 'NSTextInputClient'
  required
    procedure insertText_replacementRange (string_: id; replacementRange: NSRange); message 'insertText:replacementRange:';
    procedure doCommandBySelector (selector: SEL); message 'doCommandBySelector:';
    procedure setMarkedText_selectedRange_replacementRange (string_: id; selectedRange: NSRange; replacementRange: NSRange); message 'setMarkedText:selectedRange:replacementRange:';
    procedure unmarkText; message 'unmarkText';
    function selectedRange: NSRange; message 'selectedRange';
    function markedRange: NSRange; message 'markedRange';
    function hasMarkedText: objcbool; message 'hasMarkedText';
    function attributedSubstringForProposedRange_actualRange (range: NSRange; actualRange: NSRangePointer): NSAttributedString; message 'attributedSubstringForProposedRange:actualRange:';
    function validAttributesForMarkedText: NSArray; message 'validAttributesForMarkedText';
    function firstRectForCharacterRange_actualRange (range: NSRange; actualRange: NSRangePointer): NSRect; message 'firstRectForCharacterRange:actualRange:';
    function characterIndexForPoint (point: NSPoint): NSUInteger; message 'characterIndexForPoint:';
  optional
    function attributedString: NSAttributedString; message 'attributedString';
    function fractionOfDistanceThroughGlyphForPoint (point: NSPoint): CGFloat; message 'fractionOfDistanceThroughGlyphForPoint:';
    function baselineDeltaForCharacterAtIndex (anIndex: NSUInteger): CGFloat; message 'baselineDeltaForCharacterAtIndex:';
    function windowLevel: NSInteger; message 'windowLevel';
    function drawsVerticallyForCharacterAtIndex (charIndex: NSUInteger): objcbool; message 'drawsVerticallyForCharacterAtIndex:'; { available in macos 10.6 }
  end;
{$endif}

