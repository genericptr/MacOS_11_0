{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSSpellChecker.h }

{ Types from NSSpellChecker }
{$ifdef TYPES}

type
  NSCorrectionResponse = NSInteger;
type
  NSCorrectionResponsePtr = ^NSCorrectionResponse;

const
  NSCorrectionResponseNone = 0;
  NSCorrectionResponseAccepted = 1;
  NSCorrectionResponseRejected = 2;
  NSCorrectionResponseIgnored = 3;
  NSCorrectionResponseEdited = 4;
  NSCorrectionResponseReverted = 5;

type
  NSCorrectionIndicatorType = NSInteger;
type
  NSCorrectionIndicatorTypePtr = ^NSCorrectionIndicatorType;

const
  NSCorrectionIndicatorTypeDefault = 0;
  NSCorrectionIndicatorTypeReversion = 1;
  NSCorrectionIndicatorTypeGuesses = 2;
{$endif}


{$ifdef CALLBACKS}
type
  NSSpellCheckerRequestCheckingOfStringCallback = reference to function (sequenceNumber: NSInteger; results: NSArray; orthography: NSOrthography; wordCount: NSInteger): pointer; cblock; cdecl;
  NSSpellCheckerRequestCandidatesForSelectedRangeCallback = reference to function (sequenceNumber: NSInteger; candidates: NSArray): pointer; cblock; cdecl;
  NSSpellCheckerShowCorrectionIndicatorOfTypeCallback = reference to function (acceptedString: NSString): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSSpellCheckerPtr = ^NSSpellChecker;
{$endif}

{$ifdef TYPES}
type
  NSTextCheckingOptionKey = NSString;
  NSTextCheckingOptionKeyPtr = ^NSTextCheckingOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextCheckingOrthographyKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
  NSTextCheckingQuotesKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
  NSTextCheckingReplacementsKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
  NSTextCheckingReferenceDateKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
  NSTextCheckingReferenceTimeZoneKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
  NSTextCheckingDocumentURLKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
  NSTextCheckingDocumentTitleKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
  NSTextCheckingDocumentAuthorKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
  NSTextCheckingRegularExpressionsKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
  NSTextCheckingSelectedRangeKey: NSTextCheckingOptionKey { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSSpellChecker = objcclass external (NSObject)
  public
    class function sharedSpellChecker: NSSpellChecker; message 'sharedSpellChecker';
    class function sharedSpellCheckerExists: objcbool; message 'sharedSpellCheckerExists';
    class function uniqueSpellDocumentTag: NSInteger; message 'uniqueSpellDocumentTag';
    function checkSpellingOfString_startingAt_language_wrap_inSpellDocumentWithTag_wordCount (stringToCheck: NSString; startingOffset: NSInteger; language: NSString; wrapFlag: objcbool; tag: NSInteger; wordCount: NSIntegerPtr): NSRange; message 'checkSpellingOfString:startingAt:language:wrap:inSpellDocumentWithTag:wordCount:';
    function checkSpellingOfString_startingAt (stringToCheck: NSString; startingOffset: NSInteger): NSRange; message 'checkSpellingOfString:startingAt:';
    function countWordsInString_language (stringToCount: NSString; language: NSString): NSInteger; message 'countWordsInString:language:';
    function checkGrammarOfString_startingAt_language_wrap_inSpellDocumentWithTag_details (stringToCheck: NSString; startingOffset: NSInteger; language: NSString; wrapFlag: objcbool; tag: NSInteger; details: NSArrayPtr): NSRange; message 'checkGrammarOfString:startingAt:language:wrap:inSpellDocumentWithTag:details:'; { available in macos  }
    function checkString_range_types_options_inSpellDocumentWithTag_orthography_wordCount (stringToCheck: NSString; range: NSRange; checkingTypes: NSTextCheckingTypes; options: NSDictionary; tag: NSInteger; orthography: NSOrthographyPtr; wordCount: NSIntegerPtr): NSArray; message 'checkString:range:types:options:inSpellDocumentWithTag:orthography:wordCount:'; { available in macos  }
    function requestCheckingOfString_range_types_options_inSpellDocumentWithTag_completionHandler (stringToCheck: NSString; range: NSRange; checkingTypes: NSTextCheckingTypes; options: NSDictionary; tag: NSInteger; completionHandler: NSSpellCheckerRequestCheckingOfStringCallback): NSInteger; message 'requestCheckingOfString:range:types:options:inSpellDocumentWithTag:completionHandler:'; { available in macos  }
    function requestCandidatesForSelectedRange_inString_types_options_inSpellDocumentWithTag_completionHandler (selectedRange: NSRange; stringToCheck: NSString; checkingTypes: NSTextCheckingTypes; options: NSDictionary; tag: NSInteger; completionHandler: NSSpellCheckerRequestCandidatesForSelectedRangeCallback): NSInteger; message 'requestCandidatesForSelectedRange:inString:types:options:inSpellDocumentWithTag:completionHandler:'; { available in macos  }
    function menuForResult_string_options_atLocation_inView (result_: NSTextCheckingResult; checkedString: NSString; options: NSDictionary; location: NSPoint; view: NSView): NSMenu; message 'menuForResult:string:options:atLocation:inView:'; { available in macos  }
    function userQuotesArrayForLanguage (language: NSString): NSArray; message 'userQuotesArrayForLanguage:'; { available in macos  }
    function userReplacementsDictionary: NSDictionary; message 'userReplacementsDictionary'; { available in macos  }
    procedure updateSpellingPanelWithMisspelledWord (word: NSString); message 'updateSpellingPanelWithMisspelledWord:';
    procedure updateSpellingPanelWithGrammarString_detail (string_: NSString; detail: NSDictionary); message 'updateSpellingPanelWithGrammarString:detail:'; { available in macos  }
    function spellingPanel: NSPanel; message 'spellingPanel';
    procedure setAccessoryView(newValue: NSView); message 'setAccessoryView:';
    function accessoryView: NSView; message 'accessoryView';
    function substitutionsPanel: NSPanel; message 'substitutionsPanel'; { available in macos  }
    procedure setSubstitutionsPanelAccessoryViewController(newValue: NSViewController); message 'setSubstitutionsPanelAccessoryViewController:'; { available in macos  }
    function substitutionsPanelAccessoryViewController: NSViewController; message 'substitutionsPanelAccessoryViewController'; { available in macos  }
    procedure updatePanels; message 'updatePanels'; { available in macos  }
    procedure ignoreWord_inSpellDocumentWithTag (wordToIgnore: NSString; tag: NSInteger); message 'ignoreWord:inSpellDocumentWithTag:';
    function ignoredWordsInSpellDocumentWithTag (tag: NSInteger): NSArray; message 'ignoredWordsInSpellDocumentWithTag:';
    procedure setIgnoredWords_inSpellDocumentWithTag (words: NSArray; tag: NSInteger); message 'setIgnoredWords:inSpellDocumentWithTag:';
    function guessesForWordRange_inString_language_inSpellDocumentWithTag (range: NSRange; string_: NSString; language: NSString; tag: NSInteger): NSArray; message 'guessesForWordRange:inString:language:inSpellDocumentWithTag:'; { available in macos  }
    function correctionForWordRange_inString_language_inSpellDocumentWithTag (range: NSRange; string_: NSString; language: NSString; tag: NSInteger): NSString; message 'correctionForWordRange:inString:language:inSpellDocumentWithTag:'; { available in macos  }
    function completionsForPartialWordRange_inString_language_inSpellDocumentWithTag (range: NSRange; string_: NSString; language: NSString; tag: NSInteger): NSArray; message 'completionsForPartialWordRange:inString:language:inSpellDocumentWithTag:';
    function languageForWordRange_inString_orthography (range: NSRange; string_: NSString; orthography: NSOrthography): NSString; message 'languageForWordRange:inString:orthography:'; { available in macos  }
    procedure closeSpellDocumentWithTag (tag: NSInteger); message 'closeSpellDocumentWithTag:';
    procedure recordResponse_toCorrection_forWord_language_inSpellDocumentWithTag (response: NSCorrectionResponse; correction: NSString; word: NSString; language: NSString; tag: NSInteger); message 'recordResponse:toCorrection:forWord:language:inSpellDocumentWithTag:'; { available in macos  }
    procedure showCorrectionIndicatorOfType_primaryString_alternativeStrings_forStringInRect_view_completionHandler (type_: NSCorrectionIndicatorType; primaryString: NSString; alternativeStrings: NSArray; rectOfTypedString: NSRect; view: NSView; completionBlock: NSSpellCheckerShowCorrectionIndicatorOfTypeCallback); message 'showCorrectionIndicatorOfType:primaryString:alternativeStrings:forStringInRect:view:completionHandler:'; { available in macos  }
    procedure dismissCorrectionIndicatorForView (view: NSView); message 'dismissCorrectionIndicatorForView:'; { available in macos  }
    function preventsAutocorrectionBeforeString_language (string_: NSString; language: NSString): objcbool; message 'preventsAutocorrectionBeforeString:language:'; { available in macos  }
    function deletesAutospaceBetweenString_andString_language (precedingString: NSString; followingString: NSString; language: NSString): objcbool; message 'deletesAutospaceBetweenString:andString:language:'; { available in macos  }
    function availableLanguages: NSArray; message 'availableLanguages'; { available in macos  }
    function userPreferredLanguages: NSArray; message 'userPreferredLanguages'; { available in macos  }
    procedure setAutomaticallyIdentifiesLanguages(newValue: objcbool); message 'setAutomaticallyIdentifiesLanguages:'; { available in macos  }
    function automaticallyIdentifiesLanguages: objcbool; message 'automaticallyIdentifiesLanguages'; { available in macos  }
    procedure setWordFieldStringValue (string_: NSString); message 'setWordFieldStringValue:';
    procedure learnWord (word: NSString); message 'learnWord:';
    function hasLearnedWord (word: NSString): objcbool; message 'hasLearnedWord:'; { available in macos  }
    procedure unlearnWord (word: NSString); message 'unlearnWord:'; { available in macos  }
    class function isAutomaticTextReplacementEnabled: objcbool; message 'isAutomaticTextReplacementEnabled'; { available in macos  }
    class function isAutomaticSpellingCorrectionEnabled: objcbool; message 'isAutomaticSpellingCorrectionEnabled'; { available in macos  }
    class function isAutomaticQuoteSubstitutionEnabled: objcbool; message 'isAutomaticQuoteSubstitutionEnabled'; { available in macos  }
    class function isAutomaticDashSubstitutionEnabled: objcbool; message 'isAutomaticDashSubstitutionEnabled'; { available in macos  }
    class function isAutomaticCapitalizationEnabled: objcbool; message 'isAutomaticCapitalizationEnabled'; { available in macos  }
    class function isAutomaticPeriodSubstitutionEnabled: objcbool; message 'isAutomaticPeriodSubstitutionEnabled'; { available in macos  }
    class function isAutomaticTextCompletionEnabled: objcbool; message 'isAutomaticTextCompletionEnabled'; { available in macos  }
    function language: NSString; message 'language';
    function setLanguage (language_: NSString): objcbool; message 'setLanguage:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSSpellCheckerDidChangeAutomaticSpellingCorrectionNotification: NSNotificationName { available in macos  }; cvar; external;
  NSSpellCheckerDidChangeAutomaticTextReplacementNotification: NSNotificationName { available in macos  }; cvar; external;
  NSSpellCheckerDidChangeAutomaticQuoteSubstitutionNotification: NSNotificationName { available in macos  }; cvar; external;
  NSSpellCheckerDidChangeAutomaticDashSubstitutionNotification: NSNotificationName { available in macos  }; cvar; external;
  NSSpellCheckerDidChangeAutomaticCapitalizationNotification: NSNotificationName { available in macos  }; cvar; external;
  NSSpellCheckerDidChangeAutomaticPeriodSubstitutionNotification: NSNotificationName { available in macos  }; cvar; external;
  NSSpellCheckerDidChangeAutomaticTextCompletionNotification: NSNotificationName { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSSpellChecker_NSDeprecated = objccategory external name 'NSDeprecated' (NSSpellChecker)
    function guessesForWord (word: NSString): NSArray; message 'guessesForWord:'; deprecated 'Use -guessesForWordRange:inString:language:inSpellDocumentWithTag instead';
    procedure forgetWord (word: NSString); message 'forgetWord:'; deprecated 'replace with unlearnWord:';
  end;
{$endif}

