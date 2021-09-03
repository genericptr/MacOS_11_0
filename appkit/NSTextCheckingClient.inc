{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTextCheckingClient.h }

{$ifdef TYPES}
type
  NSTextInputTraitsProtocolPtr = ^NSTextInputTraitsProtocol;
  NSTextCheckingClientProtocolPtr = ^NSTextCheckingClientProtocol;
{$endif}

{$ifdef TYPES}
type
  NSTextInputTraitType = NSInteger;
  NSTextInputTraitTypePtr = ^NSTextInputTraitType;

const
  NSTextInputTraitTypeDefault = 0;
  NSTextInputTraitTypeNo = 1;
  NSTextInputTraitTypeYes = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextInputTraitsProtocol = objcprotocol external name 'NSTextInputTraits'
  optional
    procedure setAutocorrectionType(newValue: NSTextInputTraitType); message 'setAutocorrectionType:';
    function autocorrectionType: NSTextInputTraitType; message 'autocorrectionType';
    procedure setSpellCheckingType(newValue: NSTextInputTraitType); message 'setSpellCheckingType:';
    function spellCheckingType: NSTextInputTraitType; message 'spellCheckingType';
    procedure setGrammarCheckingType(newValue: NSTextInputTraitType); message 'setGrammarCheckingType:';
    function grammarCheckingType: NSTextInputTraitType; message 'grammarCheckingType';
    procedure setSmartQuotesType(newValue: NSTextInputTraitType); message 'setSmartQuotesType:';
    function smartQuotesType: NSTextInputTraitType; message 'smartQuotesType';
    procedure setSmartDashesType(newValue: NSTextInputTraitType); message 'setSmartDashesType:';
    function smartDashesType: NSTextInputTraitType; message 'smartDashesType';
    procedure setSmartInsertDeleteType(newValue: NSTextInputTraitType); message 'setSmartInsertDeleteType:';
    function smartInsertDeleteType: NSTextInputTraitType; message 'smartInsertDeleteType';
    procedure setTextReplacementType(newValue: NSTextInputTraitType); message 'setTextReplacementType:';
    function textReplacementType: NSTextInputTraitType; message 'textReplacementType';
    procedure setDataDetectionType(newValue: NSTextInputTraitType); message 'setDataDetectionType:';
    function dataDetectionType: NSTextInputTraitType; message 'dataDetectionType';
    procedure setLinkDetectionType(newValue: NSTextInputTraitType); message 'setLinkDetectionType:';
    function linkDetectionType: NSTextInputTraitType; message 'linkDetectionType';
    procedure setTextCompletionType(newValue: NSTextInputTraitType); message 'setTextCompletionType:';
    function textCompletionType: NSTextInputTraitType; message 'textCompletionType';
  end;

type
  NSTextCheckingClientProtocol = objcprotocol external name 'NSTextCheckingClient' (NSTextInputClientProtocol, NSTextInputTraitsProtocol)
  required
    function annotatedSubstringForProposedRange_actualRange (range: NSRange; actualRange: NSRangePointer): NSAttributedString; message 'annotatedSubstringForProposedRange:actualRange:';
    procedure setAnnotations_range (annotations: NSDictionary; range: NSRange); message 'setAnnotations:range:';
    procedure addAnnotations_range (annotations: NSDictionary; range: NSRange); message 'addAnnotations:range:';
    procedure removeAnnotation_range (annotationName: NSAttributedStringKey; range: NSRange); message 'removeAnnotation:range:';
    procedure replaceCharactersInRange_withAnnotatedString (range: NSRange; annotatedString: NSAttributedString); message 'replaceCharactersInRange:withAnnotatedString:';
    procedure selectAndShowRange (range: NSRange); message 'selectAndShowRange:';
    function viewForRange_firstRect_actualRange (range: NSRange; firstRect: NSRectPointer; actualRange: NSRangePointer): NSView; message 'viewForRange:firstRect:actualRange:';
    function candidateListTouchBarItem: NSCandidateListTouchBarItem; message 'candidateListTouchBarItem';
  end;
{$endif}

