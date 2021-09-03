{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSLinguisticTagger.h }

{$ifdef CALLBACKS}
type
  NSLinguisticTaggerEnumerateTagsInRangeCallback = reference to function (tag: NSLinguisticTag; tokenRange: NSRange; stop: objcboolPtr): pointer; cblock; cdecl;
  NSLinguisticTaggerEnumerateTagsForStringCallback = reference to function (tag: NSLinguisticTag; tokenRange: NSRange; stop: objcboolPtr): pointer; cblock; cdecl;
  NSLinguisticTaggerEnumerateLinguisticTagsInRangeCallback = reference to function (tag: NSLinguisticTag; tokenRange: NSRange; sentenceRange: NSRange; stop: objcboolPtr): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSLinguisticTaggerPtr = ^NSLinguisticTagger;
{$endif}

{$ifdef TYPES}
type
  NSLinguisticTagScheme = NSString;
  NSLinguisticTagSchemePtr = ^NSLinguisticTagScheme;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSLinguisticTagSchemeTokenType: NSLinguisticTagScheme deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagSchemeLexicalClass: NSLinguisticTagScheme deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagSchemeNameType: NSLinguisticTagScheme deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagSchemeNameTypeOrLexicalClass: NSLinguisticTagScheme deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagSchemeLemma: NSLinguisticTagScheme deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagSchemeLanguage: NSLinguisticTagScheme deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagSchemeScript: NSLinguisticTagScheme deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSLinguisticTag = NSString;
  NSLinguisticTagPtr = ^NSLinguisticTag;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSLinguisticTagWord: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagPunctuation: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagWhitespace: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagOther: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagNoun: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagVerb: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagAdjective: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagAdverb: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagPronoun: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagDeterminer: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagParticle: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagPreposition: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagNumber: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagConjunction: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagInterjection: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagClassifier: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagIdiom: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagOtherWord: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagSentenceTerminator: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagOpenQuote: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagCloseQuote: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagOpenParenthesis: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagCloseParenthesis: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagWordJoiner: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagDash: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagOtherPunctuation: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagParagraphBreak: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagOtherWhitespace: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagPersonalName: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagPlaceName: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
  NSLinguisticTagOrganizationName: NSLinguisticTag deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API'; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSLinguisticTaggerUnit = NSInteger;
  NSLinguisticTaggerUnitPtr = ^NSLinguisticTaggerUnit;

const
  NSLinguisticTaggerUnitWord = 0;
  NSLinguisticTaggerUnitSentence = 1;
  NSLinguisticTaggerUnitParagraph = 2;
  NSLinguisticTaggerUnitDocument = 3;

type
  NSLinguisticTaggerOptions = NSUInteger;
  NSLinguisticTaggerOptionsPtr = ^NSLinguisticTaggerOptions;

const
  NSLinguisticTaggerOmitWords = 1 shl 0;
  NSLinguisticTaggerOmitPunctuation = 1 shl 1;
  NSLinguisticTaggerOmitWhitespace = 1 shl 2;
  NSLinguisticTaggerOmitOther = 1 shl 3;
  NSLinguisticTaggerJoinNames = 1 shl 4;
{$endif}

{$ifdef CLASSES}

type
  NSLinguisticTagger = objcclass external (NSObject)
  private
    _schemes: NSArray;
    _options: NSUInteger;
    _string: NSString;
    _orthographyArray: id;
    _tokenArray: id;
    _reserved: pointer;
  public
    function initWithTagSchemes_options (tagSchemes: NSArray; opts: NSUInteger): id; message 'initWithTagSchemes:options:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function tagSchemes: NSArray; message 'tagSchemes'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    procedure setString(newValue: NSString); message 'setString:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function string_: NSString; message 'string'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    class function availableTagSchemesForUnit_language (unit_: NSLinguisticTaggerUnit; language: NSString): NSArray; message 'availableTagSchemesForUnit:language:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    class function availableTagSchemesForLanguage (language: NSString): NSArray; message 'availableTagSchemesForLanguage:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    procedure setOrthography_range (orthography: NSOrthography; range: NSRange); message 'setOrthography:range:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function orthographyAtIndex_effectiveRange (charIndex: NSUInteger; effectiveRange: NSRangePointer): NSOrthography; message 'orthographyAtIndex:effectiveRange:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    procedure stringEditedInRange_changeInLength (newRange: NSRange; delta: NSInteger); message 'stringEditedInRange:changeInLength:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function tokenRangeAtIndex_unit (charIndex: NSUInteger; unit_: NSLinguisticTaggerUnit): NSRange; message 'tokenRangeAtIndex:unit:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function sentenceRangeForRange (range: NSRange): NSRange; message 'sentenceRangeForRange:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    procedure enumerateTagsInRange_unit_scheme_options_usingBlock (range: NSRange; unit_: NSLinguisticTaggerUnit; scheme: NSLinguisticTagScheme; options: NSLinguisticTaggerOptions; block: NSLinguisticTaggerEnumerateTagsInRangeCallback); message 'enumerateTagsInRange:unit:scheme:options:usingBlock:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function tagAtIndex_unit_scheme_tokenRange (charIndex: NSUInteger; unit_: NSLinguisticTaggerUnit; scheme: NSLinguisticTagScheme; tokenRange: NSRangePointer): NSLinguisticTag; message 'tagAtIndex:unit:scheme:tokenRange:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function tagsInRange_unit_scheme_options_tokenRanges (range: NSRange; unit_: NSLinguisticTaggerUnit; scheme: NSLinguisticTagScheme; options: NSLinguisticTaggerOptions; tokenRanges: NSArrayPtr): NSArray; message 'tagsInRange:unit:scheme:options:tokenRanges:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    procedure enumerateTagsInRange_scheme_options_usingBlock (range: NSRange; tagScheme: NSLinguisticTagScheme; opts: NSLinguisticTaggerOptions; block: NSLinguisticTaggerEnumerateTagsInRangeCallback); message 'enumerateTagsInRange:scheme:options:usingBlock:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function tagAtIndex_scheme_tokenRange_sentenceRange (charIndex: NSUInteger; scheme: NSLinguisticTagScheme; tokenRange: NSRangePointer; sentenceRange: NSRangePointer): NSLinguisticTag; message 'tagAtIndex:scheme:tokenRange:sentenceRange:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function tagsInRange_scheme_options_tokenRanges (range: NSRange; tagScheme: NSString; opts: NSLinguisticTaggerOptions; tokenRanges: NSArrayPtr): NSArray; message 'tagsInRange:scheme:options:tokenRanges:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function dominantLanguage: NSString; message 'dominantLanguage'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    class function dominantLanguageForString (string_: NSString): NSString; message 'dominantLanguageForString:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    class function tagForString_atIndex_unit_scheme_orthography_tokenRange (string_: NSString; charIndex: NSUInteger; unit_: NSLinguisticTaggerUnit; scheme: NSLinguisticTagScheme; orthography: NSOrthography; tokenRange: NSRangePointer): NSLinguisticTag; message 'tagForString:atIndex:unit:scheme:orthography:tokenRange:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    class function tagsForString_range_unit_scheme_options_orthography_tokenRanges (string_: NSString; range: NSRange; unit_: NSLinguisticTaggerUnit; scheme: NSLinguisticTagScheme; options: NSLinguisticTaggerOptions; orthography: NSOrthography; tokenRanges: NSArrayPtr): NSArray; message 'tagsForString:range:unit:scheme:options:orthography:tokenRanges:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    class procedure enumerateTagsForString_range_unit_scheme_options_orthography_usingBlock (string_: NSString; range: NSRange; unit_: NSLinguisticTaggerUnit; scheme: NSLinguisticTagScheme; options: NSLinguisticTaggerOptions; orthography: NSOrthography; block: NSLinguisticTaggerEnumerateTagsForStringCallback); message 'enumerateTagsForString:range:unit:scheme:options:orthography:usingBlock:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    function possibleTagsAtIndex_scheme_tokenRange_sentenceRange_scores (charIndex: NSUInteger; tagScheme: NSString; tokenRange: NSRangePointer; sentenceRange: NSRangePointer; scores: NSArrayPtr): NSArray; message 'possibleTagsAtIndex:scheme:tokenRange:sentenceRange:scores:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
  end;


type
  NSLinguisticAnalysis = objccategory external (NSString)
    function linguisticTagsInRange_scheme_options_orthography_tokenRanges (range: NSRange; scheme: NSLinguisticTagScheme; options: NSLinguisticTaggerOptions; orthography: NSOrthography; tokenRanges: NSArrayPtr): NSArray; message 'linguisticTagsInRange:scheme:options:orthography:tokenRanges:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
    procedure enumerateLinguisticTagsInRange_scheme_options_orthography_usingBlock (range: NSRange; scheme: NSLinguisticTagScheme; options: NSLinguisticTaggerOptions; orthography: NSOrthography; block: NSLinguisticTaggerEnumerateLinguisticTagsInRangeCallback); message 'enumerateLinguisticTagsInRange:scheme:options:orthography:usingBlock:'; deprecated 'All NSLinguisticTagger API should be replaced with NaturalLanguage.framework API';
  end;
{$endif}

