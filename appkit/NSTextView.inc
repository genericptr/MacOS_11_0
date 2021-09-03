{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTextView.h }

{ Types from NSTextView }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  NSTextViewPtr = ^NSTextView;
  NSTextViewDelegateProtocolPtr = ^NSTextViewDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  NSSelectionGranularity = NSUInteger;
  NSSelectionGranularityPtr = ^NSSelectionGranularity;

const
  NSSelectByCharacter = 0;
  NSSelectByWord = 1;
  NSSelectByParagraph = 2;

type
  NSSelectionAffinity = NSUInteger;
  NSSelectionAffinityPtr = ^NSSelectionAffinity;

const
  NSSelectionAffinityUpstream = 0;
  NSSelectionAffinityDownstream = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSAllRomanInputSourcesLocaleIdentifier: NSString { available in macos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSTextView = objcclass external (NSText, NSColorChangingProtocol, NSMenuItemValidationProtocol, NSUserInterfaceValidationsProtocol, NSTextInputClientProtocol, NSTextLayoutOrientationProviderProtocol, NSDraggingSourceProtocol, NSStandardKeyBindingRespondingProtocol, NSTextInputProtocol, NSAccessibilityNavigableStaticTextProtocol, NSTextContentProtocol)
  public
    function initWithFrame_textContainer (frameRect: NSRect; container: NSTextContainer): id; message 'initWithFrame:textContainer:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithFrame (frameRect: NSRect): id; message 'initWithFrame:';
    procedure setTextContainer(newValue: NSTextContainer); message 'setTextContainer:';
    function textContainer: NSTextContainer; message 'textContainer';
    procedure replaceTextContainer (newContainer: NSTextContainer); message 'replaceTextContainer:';
    procedure setTextContainerInset(newValue: NSSize); message 'setTextContainerInset:';
    function textContainerInset: NSSize; message 'textContainerInset';
    function textContainerOrigin: NSPoint; message 'textContainerOrigin';
    procedure invalidateTextContainerOrigin; message 'invalidateTextContainerOrigin';
    function layoutManager: NSLayoutManager; message 'layoutManager';
    function textStorage: NSTextStorage; message 'textStorage';
    procedure insertText (insertString: id); message 'insertText:'; deprecated 'Use -insertText:replacementRange: from NSTextInputClient instead. Since the method is designed to be used solely by the input system, the message should never be sent to a text view from applications. Any content modifications should be via either NSTextStorage or NSText methods.';
    procedure setConstrainedFrameSize (desiredSize: NSSize); message 'setConstrainedFrameSize:';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setAlignment_range (alignment_: NSTextAlignment; range: NSRange); message 'setAlignment:range:';
    procedure setBaseWritingDirection_range (writingDirection: NSWritingDirection; range: NSRange); message 'setBaseWritingDirection:range:';
    {$endif}
    procedure turnOffKerning (sender: id); message 'turnOffKerning:';
    procedure tightenKerning (sender: id); message 'tightenKerning:';
    procedure loosenKerning (sender: id); message 'loosenKerning:';
    procedure useStandardKerning (sender: id); message 'useStandardKerning:';
    procedure turnOffLigatures (sender: id); message 'turnOffLigatures:';
    procedure useStandardLigatures (sender: id); message 'useStandardLigatures:';
    procedure useAllLigatures (sender: id); message 'useAllLigatures:';
    procedure raiseBaseline (sender: id); message 'raiseBaseline:';
    procedure lowerBaseline (sender: id); message 'lowerBaseline:';
    procedure toggleTraditionalCharacterShape (sender: id); message 'toggleTraditionalCharacterShape:'; deprecated 'Use the traditional shaped characters encoded in the Unicode standard. Access the characters via the character palette.';
    procedure outline (sender: id); message 'outline:';
    procedure performFindPanelAction (sender: id); message 'performFindPanelAction:';
    procedure alignJustified (sender: id); message 'alignJustified:';
    procedure changeColor (sender: NSColorPanel); message 'changeColor:';
    procedure changeAttributes (sender: id); message 'changeAttributes:';
    procedure changeDocumentBackgroundColor (sender: id); message 'changeDocumentBackgroundColor:';
    procedure orderFrontSpacingPanel (sender: id); message 'orderFrontSpacingPanel:';
    procedure orderFrontLinkPanel (sender: id); message 'orderFrontLinkPanel:';
    procedure orderFrontListPanel (sender: id); message 'orderFrontListPanel:';
    procedure orderFrontTablePanel (sender: id); message 'orderFrontTablePanel:';
    procedure rulerView_didMoveMarker (ruler: NSRulerView; marker: NSRulerMarker); message 'rulerView:didMoveMarker:';
    procedure rulerView_didRemoveMarker (ruler: NSRulerView; marker: NSRulerMarker); message 'rulerView:didRemoveMarker:';
    procedure rulerView_didAddMarker (ruler: NSRulerView; marker: NSRulerMarker); message 'rulerView:didAddMarker:';
    function rulerView_shouldMoveMarker (ruler: NSRulerView; marker: NSRulerMarker): objcbool; message 'rulerView:shouldMoveMarker:';
    function rulerView_shouldAddMarker (ruler: NSRulerView; marker: NSRulerMarker): objcbool; message 'rulerView:shouldAddMarker:';
    function rulerView_willMoveMarker_toLocation (ruler: NSRulerView; marker: NSRulerMarker; location: CGFloat): CGFloat; message 'rulerView:willMoveMarker:toLocation:';
    function rulerView_shouldRemoveMarker (ruler: NSRulerView; marker: NSRulerMarker): objcbool; message 'rulerView:shouldRemoveMarker:';
    function rulerView_willAddMarker_atLocation (ruler: NSRulerView; marker: NSRulerMarker; location: CGFloat): CGFloat; message 'rulerView:willAddMarker:atLocation:';
    procedure rulerView_handleMouseDown (ruler: NSRulerView; event: NSEvent); message 'rulerView:handleMouseDown:';
    procedure setNeedsDisplayInRect_avoidAdditionalLayout (rect: NSRect; flag: objcbool); message 'setNeedsDisplayInRect:avoidAdditionalLayout:';
    function shouldDrawInsertionPoint: objcbool; message 'shouldDrawInsertionPoint';
    procedure drawInsertionPointInRect_color_turnedOn (rect: NSRect; color: NSColor; flag: objcbool); message 'drawInsertionPointInRect:color:turnedOn:';
    procedure drawViewBackgroundInRect (rect: NSRect); message 'drawViewBackgroundInRect:';
    procedure updateRuler; message 'updateRuler';
    procedure updateFontPanel; message 'updateFontPanel';
    procedure updateDragTypeRegistration; message 'updateDragTypeRegistration';
    function selectionRangeForProposedRange_granularity (proposedCharRange: NSRange; granularity: NSSelectionGranularity): NSRange; message 'selectionRangeForProposedRange:granularity:';
    procedure clickedOnLink_atIndex (link: id; charIndex: NSUInteger); message 'clickedOnLink:atIndex:';
    procedure startSpeaking (sender: id); message 'startSpeaking:';
    procedure stopSpeaking (sender: id); message 'stopSpeaking:';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setLayoutOrientation (orientation: NSTextLayoutOrientation); message 'setLayoutOrientation:'; { available in macos  }
    {$endif}
    procedure changeLayoutOrientation (sender: id); message 'changeLayoutOrientation:'; { available in macos  }
    function characterIndexForInsertionAtPoint (point: NSPoint): NSUInteger; message 'characterIndexForInsertionAtPoint:'; { available in macos  }
    class function stronglyReferencesTextStorage: objcbool; message 'stronglyReferencesTextStorage'; { available in macos  }
    function performValidatedReplacementInRange_withAttributedString (range: NSRange; attributedString: NSAttributedString): objcbool; message 'performValidatedReplacementInRange:withAttributedString:'; { available in macos  }
    procedure setUsesAdaptiveColorMappingForDarkAppearance(newValue: objcbool); message 'setUsesAdaptiveColorMappingForDarkAppearance:'; { available in macos  }
    function usesAdaptiveColorMappingForDarkAppearance: objcbool; message 'usesAdaptiveColorMappingForDarkAppearance'; { available in macos  }

    { Adopted protocols }
    function attributedString: NSAttributedString; message 'attributedString';
    function attributedSubstringForProposedRange_actualRange (range: NSRange; actualRange: NSRangePointer): NSAttributedString; message 'attributedSubstringForProposedRange:actualRange:';
    function attributedSubstringFromRange (range: NSRange): NSAttributedString; message 'attributedSubstringFromRange:'; deprecated;
    function baselineDeltaForCharacterAtIndex (anIndex: NSUInteger): CGFloat; message 'baselineDeltaForCharacterAtIndex:';
    procedure cancelOperation (sender: id); message 'cancelOperation:';
    procedure capitalizeWord (sender: id); message 'capitalizeWord:';
    procedure centerSelectionInVisibleArea (sender: id); message 'centerSelectionInVisibleArea:';
    procedure changeCaseOfLetter (sender: id); message 'changeCaseOfLetter:';
    function characterIndexForPoint (point: NSPoint): NSUInteger; message 'characterIndexForPoint:';
    procedure complete (sender: id); message 'complete:';
    function contentType: NSTextContentType; message 'contentType'; { available in macos  }
    function conversationIdentifier: NSInteger; message 'conversationIdentifier'; deprecated;
    procedure deleteBackward (sender: id); message 'deleteBackward:';
    procedure deleteBackwardByDecomposingPreviousCharacter (sender: id); message 'deleteBackwardByDecomposingPreviousCharacter:';
    procedure deleteForward (sender: id); message 'deleteForward:';
    procedure deleteToBeginningOfLine (sender: id); message 'deleteToBeginningOfLine:';
    procedure deleteToBeginningOfParagraph (sender: id); message 'deleteToBeginningOfParagraph:';
    procedure deleteToEndOfLine (sender: id); message 'deleteToEndOfLine:';
    procedure deleteToEndOfParagraph (sender: id); message 'deleteToEndOfParagraph:';
    procedure deleteToMark (sender: id); message 'deleteToMark:';
    procedure deleteWordBackward (sender: id); message 'deleteWordBackward:';
    procedure deleteWordForward (sender: id); message 'deleteWordForward:';
    procedure doCommandBySelector (selector: SEL); message 'doCommandBySelector:';
    procedure draggingSession_endedAtPoint_operation (session: NSDraggingSession; screenPoint: NSPoint; operation: NSDragOperation); message 'draggingSession:endedAtPoint:operation:';
    procedure draggingSession_movedToPoint (session: NSDraggingSession; screenPoint: NSPoint); message 'draggingSession:movedToPoint:';
    function draggingSession_sourceOperationMaskForDraggingContext (session: NSDraggingSession; context: NSDraggingContext): NSDragOperation; message 'draggingSession:sourceOperationMaskForDraggingContext:';
    procedure draggingSession_willBeginAtPoint (session: NSDraggingSession; screenPoint: NSPoint); message 'draggingSession:willBeginAtPoint:';
    function drawsVerticallyForCharacterAtIndex (charIndex: NSUInteger): objcbool; message 'drawsVerticallyForCharacterAtIndex:'; { available in macos  }
    function firstRectForCharacterRange (range: NSRange): NSRect; message 'firstRectForCharacterRange:'; deprecated;
    function firstRectForCharacterRange_actualRange (range: NSRange; actualRange: NSRangePointer): NSRect; message 'firstRectForCharacterRange:actualRange:';
    function fractionOfDistanceThroughGlyphForPoint (point: NSPoint): CGFloat; message 'fractionOfDistanceThroughGlyphForPoint:';
    function hasMarkedText: objcbool; message 'hasMarkedText';
    function ignoreModifierKeysForDraggingSession (session: NSDraggingSession): objcbool; message 'ignoreModifierKeysForDraggingSession:';
    procedure indent (sender: id); message 'indent:';
    procedure insertBacktab (sender: id); message 'insertBacktab:';
    procedure insertContainerBreak (sender: id); message 'insertContainerBreak:';
    procedure insertDoubleQuoteIgnoringSubstitution (sender: id); message 'insertDoubleQuoteIgnoringSubstitution:'; { available in macos  }
    procedure insertLineBreak (sender: id); message 'insertLineBreak:';
    procedure insertNewline (sender: id); message 'insertNewline:';
    procedure insertNewlineIgnoringFieldEditor (sender: id); message 'insertNewlineIgnoringFieldEditor:';
    procedure insertParagraphSeparator (sender: id); message 'insertParagraphSeparator:';
    procedure insertSingleQuoteIgnoringSubstitution (sender: id); message 'insertSingleQuoteIgnoringSubstitution:'; { available in macos  }
    procedure insertTab (sender: id); message 'insertTab:';
    procedure insertTabIgnoringFieldEditor (sender: id); message 'insertTabIgnoringFieldEditor:';
    procedure insertText_replacementRange (string_: id; replacementRange: NSRange); message 'insertText:replacementRange:';
    function layoutOrientation: NSTextLayoutOrientation; message 'layoutOrientation'; { available in macos , ios , tvos  }
    procedure lowercaseWord (sender: id); message 'lowercaseWord:';
    procedure makeBaseWritingDirectionLeftToRight (sender: id); message 'makeBaseWritingDirectionLeftToRight:'; { available in macos  }
    procedure makeBaseWritingDirectionNatural (sender: id); message 'makeBaseWritingDirectionNatural:'; { available in macos  }
    procedure makeBaseWritingDirectionRightToLeft (sender: id); message 'makeBaseWritingDirectionRightToLeft:'; { available in macos  }
    procedure makeTextWritingDirectionLeftToRight (sender: id); message 'makeTextWritingDirectionLeftToRight:'; { available in macos  }
    procedure makeTextWritingDirectionNatural (sender: id); message 'makeTextWritingDirectionNatural:'; { available in macos  }
    procedure makeTextWritingDirectionRightToLeft (sender: id); message 'makeTextWritingDirectionRightToLeft:'; { available in macos  }
    function markedRange: NSRange; message 'markedRange';
    procedure moveBackward (sender: id); message 'moveBackward:';
    procedure moveBackwardAndModifySelection (sender: id); message 'moveBackwardAndModifySelection:';
    procedure moveDown (sender: id); message 'moveDown:';
    procedure moveDownAndModifySelection (sender: id); message 'moveDownAndModifySelection:';
    procedure moveForward (sender: id); message 'moveForward:';
    procedure moveForwardAndModifySelection (sender: id); message 'moveForwardAndModifySelection:';
    procedure moveLeft (sender: id); message 'moveLeft:';
    procedure moveLeftAndModifySelection (sender: id); message 'moveLeftAndModifySelection:';
    procedure moveParagraphBackwardAndModifySelection (sender: id); message 'moveParagraphBackwardAndModifySelection:';
    procedure moveParagraphForwardAndModifySelection (sender: id); message 'moveParagraphForwardAndModifySelection:';
    procedure moveRight (sender: id); message 'moveRight:';
    procedure moveRightAndModifySelection (sender: id); message 'moveRightAndModifySelection:';
    procedure moveToBeginningOfDocument (sender: id); message 'moveToBeginningOfDocument:';
    procedure moveToBeginningOfDocumentAndModifySelection (sender: id); message 'moveToBeginningOfDocumentAndModifySelection:';
    procedure moveToBeginningOfLine (sender: id); message 'moveToBeginningOfLine:';
    procedure moveToBeginningOfLineAndModifySelection (sender: id); message 'moveToBeginningOfLineAndModifySelection:';
    procedure moveToBeginningOfParagraph (sender: id); message 'moveToBeginningOfParagraph:';
    procedure moveToBeginningOfParagraphAndModifySelection (sender: id); message 'moveToBeginningOfParagraphAndModifySelection:';
    procedure moveToEndOfDocument (sender: id); message 'moveToEndOfDocument:';
    procedure moveToEndOfDocumentAndModifySelection (sender: id); message 'moveToEndOfDocumentAndModifySelection:';
    procedure moveToEndOfLine (sender: id); message 'moveToEndOfLine:';
    procedure moveToEndOfLineAndModifySelection (sender: id); message 'moveToEndOfLineAndModifySelection:';
    procedure moveToEndOfParagraph (sender: id); message 'moveToEndOfParagraph:';
    procedure moveToEndOfParagraphAndModifySelection (sender: id); message 'moveToEndOfParagraphAndModifySelection:';
    procedure moveToLeftEndOfLine (sender: id); message 'moveToLeftEndOfLine:'; { available in macos  }
    procedure moveToLeftEndOfLineAndModifySelection (sender: id); message 'moveToLeftEndOfLineAndModifySelection:'; { available in macos  }
    procedure moveToRightEndOfLine (sender: id); message 'moveToRightEndOfLine:'; { available in macos  }
    procedure moveToRightEndOfLineAndModifySelection (sender: id); message 'moveToRightEndOfLineAndModifySelection:'; { available in macos  }
    procedure moveUp (sender: id); message 'moveUp:';
    procedure moveUpAndModifySelection (sender: id); message 'moveUpAndModifySelection:';
    procedure moveWordBackward (sender: id); message 'moveWordBackward:';
    procedure moveWordBackwardAndModifySelection (sender: id); message 'moveWordBackwardAndModifySelection:';
    procedure moveWordForward (sender: id); message 'moveWordForward:';
    procedure moveWordForwardAndModifySelection (sender: id); message 'moveWordForwardAndModifySelection:';
    procedure moveWordLeft (sender: id); message 'moveWordLeft:';
    procedure moveWordLeftAndModifySelection (sender: id); message 'moveWordLeftAndModifySelection:';
    procedure moveWordRight (sender: id); message 'moveWordRight:';
    procedure moveWordRightAndModifySelection (sender: id); message 'moveWordRightAndModifySelection:';
    procedure pageDown (sender: id); message 'pageDown:';
    procedure pageDownAndModifySelection (sender: id); message 'pageDownAndModifySelection:';
    procedure pageUp (sender: id); message 'pageUp:';
    procedure pageUpAndModifySelection (sender: id); message 'pageUpAndModifySelection:';
    procedure quickLookPreviewItems (sender: id); message 'quickLookPreviewItems:'; { available in macos  }
    procedure scrollLineDown (sender: id); message 'scrollLineDown:';
    procedure scrollLineUp (sender: id); message 'scrollLineUp:';
    procedure scrollPageDown (sender: id); message 'scrollPageDown:';
    procedure scrollPageUp (sender: id); message 'scrollPageUp:';
    procedure scrollToBeginningOfDocument (sender: id); message 'scrollToBeginningOfDocument:';
    procedure scrollToEndOfDocument (sender: id); message 'scrollToEndOfDocument:';
    procedure selectLine (sender: id); message 'selectLine:';
    procedure selectParagraph (sender: id); message 'selectParagraph:';
    procedure selectToMark (sender: id); message 'selectToMark:';
    procedure selectWord (sender: id); message 'selectWord:';
    procedure setContentType (newValue: NSTextContentType); message 'setContentType:'; { available in macos  }
    procedure setMark (sender: id); message 'setMark:';
    procedure setMarkedText_selectedRange (string_: id; selRange: NSRange); message 'setMarkedText:selectedRange:'; deprecated;
    procedure setMarkedText_selectedRange_replacementRange (string_: id; selectedRange: NSRange; replacementRange: NSRange); message 'setMarkedText:selectedRange:replacementRange:';
    procedure swapWithMark (sender: id); message 'swapWithMark:';
    procedure transpose (sender: id); message 'transpose:';
    procedure transposeWords (sender: id); message 'transposeWords:';
    procedure unmarkText; message 'unmarkText';
    procedure uppercaseWord (sender: id); message 'uppercaseWord:';
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
    function validateUserInterfaceItem (item: id): objcbool; message 'validateUserInterfaceItem:';
    function validAttributesForMarkedText: NSArray; message 'validAttributesForMarkedText';
    function windowLevel: NSInteger; message 'windowLevel';
    procedure yank (sender: id); message 'yank:';
    function accessibilityValue: NSString; message 'accessibilityValue';
  end;


type
  NSCompletion = objccategory external (NSTextView)
    procedure complete (sender: id); message 'complete:';
    function rangeForUserCompletion: NSRange; message 'rangeForUserCompletion';
    function completionsForPartialWordRange_indexOfSelectedItem (charRange: NSRange; index: NSIntegerPtr): NSArray; message 'completionsForPartialWordRange:indexOfSelectedItem:';
    procedure insertCompletion_forPartialWordRange_movement_isFinal (word: NSString; charRange: NSRange; movement: NSInteger; flag: objcbool); message 'insertCompletion:forPartialWordRange:movement:isFinal:';
  end;

type
  NSTextView_NSPasteboard = objccategory external name 'NSPasteboard' (NSTextView)
    function writablePasteboardTypes: NSArray; message 'writablePasteboardTypes';
    function writeSelectionToPasteboard_type (pboard: NSPasteboard; type_: NSPasteboardType): objcbool; message 'writeSelectionToPasteboard:type:';
    function writeSelectionToPasteboard_types (pboard: NSPasteboard; types: NSArray): objcbool; message 'writeSelectionToPasteboard:types:';
    function readablePasteboardTypes: NSArray; message 'readablePasteboardTypes';
    function preferredPasteboardTypeFromArray_restrictedToTypesFromArray (availableTypes: NSArray; allowedTypes: NSArray): NSPasteboardType; message 'preferredPasteboardTypeFromArray:restrictedToTypesFromArray:';
    function readSelectionFromPasteboard_type (pboard: NSPasteboard; type_: NSPasteboardType): objcbool; message 'readSelectionFromPasteboard:type:';
    function readSelectionFromPasteboard (pboard: NSPasteboard): objcbool; message 'readSelectionFromPasteboard:';
    class procedure registerForServices; message 'registerForServices';
    function validRequestorForSendType_returnType (sendType: NSPasteboardType; returnType: NSPasteboardType): id; message 'validRequestorForSendType:returnType:';
    procedure pasteAsPlainText (sender: id); message 'pasteAsPlainText:';
    procedure pasteAsRichText (sender: id); message 'pasteAsRichText:';
  end;

type
  NSDragging = objccategory external (NSTextView)
    function dragSelectionWithEvent_offset_slideBack (event: NSEvent; mouseOffset: NSSize; slideBack: objcbool): objcbool; message 'dragSelectionWithEvent:offset:slideBack:';
    function dragImageForSelectionWithEvent_origin (event: NSEvent; origin: NSPointPointer): NSImage; message 'dragImageForSelectionWithEvent:origin:';
    function acceptableDragTypes: NSArray; message 'acceptableDragTypes';
    function dragOperationForDraggingInfo_type (dragInfo: id; type_: NSPasteboardType): NSDragOperation; message 'dragOperationForDraggingInfo:type:';
    procedure cleanUpAfterDragOperation; message 'cleanUpAfterDragOperation';
  end;

type
  NSSharing = objccategory external (NSTextView)
    procedure setSelectedRanges(newValue: NSArray); message 'setSelectedRanges:';
    function selectedRanges: NSArray; message 'selectedRanges';
    procedure setSelectedRanges_affinity_stillSelecting (ranges: NSArray; affinity: NSSelectionAffinity; stillSelectingFlag: objcbool); message 'setSelectedRanges:affinity:stillSelecting:';
    procedure setSelectedRange_affinity_stillSelecting (charRange: NSRange; affinity: NSSelectionAffinity; stillSelectingFlag: objcbool); message 'setSelectedRange:affinity:stillSelecting:';
    function selectionAffinity: NSSelectionAffinity; message 'selectionAffinity';
    procedure setSelectionGranularity(newValue: NSSelectionGranularity); message 'setSelectionGranularity:';
    function selectionGranularity: NSSelectionGranularity; message 'selectionGranularity';
    procedure setSelectedTextAttributes(newValue: NSDictionary); message 'setSelectedTextAttributes:';
    function selectedTextAttributes: NSDictionary; message 'selectedTextAttributes';
    procedure setInsertionPointColor(newValue: NSColor); message 'setInsertionPointColor:';
    function insertionPointColor: NSColor; message 'insertionPointColor';
    procedure updateInsertionPointStateAndRestartTimer (restartFlag: objcbool); message 'updateInsertionPointStateAndRestartTimer:';
    procedure setMarkedTextAttributes(newValue: NSDictionary); message 'setMarkedTextAttributes:';
    function markedTextAttributes: NSDictionary; message 'markedTextAttributes';
    procedure setLinkTextAttributes(newValue: NSDictionary); message 'setLinkTextAttributes:';
    function linkTextAttributes: NSDictionary; message 'linkTextAttributes';
    procedure setDisplaysLinkToolTips(newValue: objcbool); message 'setDisplaysLinkToolTips:'; { available in macos  }
    function displaysLinkToolTips: objcbool; message 'displaysLinkToolTips'; { available in macos  }
    procedure setAcceptsGlyphInfo(newValue: objcbool); message 'setAcceptsGlyphInfo:';
    function acceptsGlyphInfo: objcbool; message 'acceptsGlyphInfo';
    procedure setUsesRuler(newValue: objcbool); message 'setUsesRuler:';
    function usesRuler: objcbool; message 'usesRuler';
    procedure setUsesInspectorBar(newValue: objcbool); message 'setUsesInspectorBar:'; { available in macos  }
    function usesInspectorBar: objcbool; message 'usesInspectorBar'; { available in macos  }
    procedure setContinuousSpellCheckingEnabled(newValue: objcbool); message 'setContinuousSpellCheckingEnabled:';
    function isContinuousSpellCheckingEnabled: objcbool; message 'isContinuousSpellCheckingEnabled';
    procedure toggleContinuousSpellChecking (sender: id); message 'toggleContinuousSpellChecking:';
    function spellCheckerDocumentTag: NSInteger; message 'spellCheckerDocumentTag';
    procedure setGrammarCheckingEnabled(newValue: objcbool); message 'setGrammarCheckingEnabled:'; { available in macos  }
    function isGrammarCheckingEnabled: objcbool; message 'isGrammarCheckingEnabled'; { available in macos  }
    procedure toggleGrammarChecking (sender: id); message 'toggleGrammarChecking:'; { available in macos  }
    procedure setSpellingState_range (value: NSInteger; charRange: NSRange); message 'setSpellingState:range:'; { available in macos  }
    procedure setTypingAttributes(newValue: NSDictionary); message 'setTypingAttributes:';
    function typingAttributes: NSDictionary; message 'typingAttributes';
    function shouldChangeTextInRanges_replacementStrings (affectedRanges: NSArray; replacementStrings: NSArray): objcbool; message 'shouldChangeTextInRanges:replacementStrings:';
    function rangesForUserTextChange: NSArray; message 'rangesForUserTextChange';
    function rangesForUserCharacterAttributeChange: NSArray; message 'rangesForUserCharacterAttributeChange';
    function rangesForUserParagraphAttributeChange: NSArray; message 'rangesForUserParagraphAttributeChange';
    function shouldChangeTextInRange_replacementString (affectedCharRange: NSRange; replacementString: NSString): objcbool; message 'shouldChangeTextInRange:replacementString:';
    procedure didChangeText; message 'didChangeText';
    function rangeForUserTextChange: NSRange; message 'rangeForUserTextChange';
    function rangeForUserCharacterAttributeChange: NSRange; message 'rangeForUserCharacterAttributeChange';
    function rangeForUserParagraphAttributeChange: NSRange; message 'rangeForUserParagraphAttributeChange';
    procedure setAllowsDocumentBackgroundColorChange(newValue: objcbool); message 'setAllowsDocumentBackgroundColorChange:';
    function allowsDocumentBackgroundColorChange: objcbool; message 'allowsDocumentBackgroundColorChange';
    procedure setDefaultParagraphStyle(newValue: NSParagraphStyle); message 'setDefaultParagraphStyle:';
    function defaultParagraphStyle: NSParagraphStyle; message 'defaultParagraphStyle';
    procedure setAllowsUndo(newValue: objcbool); message 'setAllowsUndo:';
    function allowsUndo: objcbool; message 'allowsUndo';
    procedure breakUndoCoalescing; message 'breakUndoCoalescing';
    function isCoalescingUndo: objcbool; message 'isCoalescingUndo'; { available in macos  }
    procedure setAllowsImageEditing(newValue: objcbool); message 'setAllowsImageEditing:'; { available in macos  }
    function allowsImageEditing: objcbool; message 'allowsImageEditing'; { available in macos  }
    procedure showFindIndicatorForRange (charRange: NSRange); message 'showFindIndicatorForRange:'; { available in macos  }
    procedure setUsesRolloverButtonForSelection(newValue: objcbool); message 'setUsesRolloverButtonForSelection:'; { available in macos  }
    function usesRolloverButtonForSelection: objcbool; message 'usesRolloverButtonForSelection'; { available in macos  }
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure setSelectable(newValue: objcbool); message 'setSelectable:';
    function isSelectable: objcbool; message 'isSelectable';
    procedure setRichText(newValue: objcbool); message 'setRichText:';
    function isRichText: objcbool; message 'isRichText';
    procedure setImportsGraphics(newValue: objcbool); message 'setImportsGraphics:';
    function importsGraphics: objcbool; message 'importsGraphics';
    procedure setDrawsBackground(newValue: objcbool); message 'setDrawsBackground:';
    function drawsBackground: objcbool; message 'drawsBackground';
    procedure setBackgroundColor(newValue: NSColor); message 'setBackgroundColor:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setFieldEditor(newValue: objcbool); message 'setFieldEditor:';
    function isFieldEditor: objcbool; message 'isFieldEditor';
    procedure setUsesFontPanel(newValue: objcbool); message 'setUsesFontPanel:';
    function usesFontPanel: objcbool; message 'usesFontPanel';
    procedure setRulerVisible(newValue: objcbool); message 'setRulerVisible:';
    function isRulerVisible: objcbool; message 'isRulerVisible';
    procedure setSelectedRange (charRange: NSRange); message 'setSelectedRange:';
    procedure setAllowedInputSourceLocales(newValue: NSArray); message 'setAllowedInputSourceLocales:'; { available in macos  }
    function allowedInputSourceLocales: NSArray; message 'allowedInputSourceLocales'; { available in macos  }
  end;

type
  NSTextChecking = objccategory external (NSTextView)
    procedure setSmartInsertDeleteEnabled(newValue: objcbool); message 'setSmartInsertDeleteEnabled:';
    function smartInsertDeleteEnabled: objcbool; message 'smartInsertDeleteEnabled';
    function smartDeleteRangeForProposedRange (proposedCharRange: NSRange): NSRange; message 'smartDeleteRangeForProposedRange:';
    procedure toggleSmartInsertDelete (sender: id); message 'toggleSmartInsertDelete:';
    procedure smartInsertForString_replacingRange_beforeString_afterString (pasteString: NSString; charRangeToReplace: NSRange; beforeString: NSStringPtr; afterString: NSStringPtr); message 'smartInsertForString:replacingRange:beforeString:afterString:';
    function smartInsertBeforeStringForString_replacingRange (pasteString: NSString; charRangeToReplace: NSRange): NSString; message 'smartInsertBeforeStringForString:replacingRange:';
    function smartInsertAfterStringForString_replacingRange (pasteString: NSString; charRangeToReplace: NSRange): NSString; message 'smartInsertAfterStringForString:replacingRange:';
    procedure setAutomaticQuoteSubstitutionEnabled(newValue: objcbool); message 'setAutomaticQuoteSubstitutionEnabled:'; { available in macos  }
    function isAutomaticQuoteSubstitutionEnabled: objcbool; message 'isAutomaticQuoteSubstitutionEnabled'; { available in macos  }
    procedure toggleAutomaticQuoteSubstitution (sender: id); message 'toggleAutomaticQuoteSubstitution:'; { available in macos  }
    procedure setAutomaticLinkDetectionEnabled(newValue: objcbool); message 'setAutomaticLinkDetectionEnabled:'; { available in macos  }
    function isAutomaticLinkDetectionEnabled: objcbool; message 'isAutomaticLinkDetectionEnabled'; { available in macos  }
    procedure toggleAutomaticLinkDetection (sender: id); message 'toggleAutomaticLinkDetection:'; { available in macos  }
    procedure setAutomaticDataDetectionEnabled(newValue: objcbool); message 'setAutomaticDataDetectionEnabled:'; { available in macos  }
    function isAutomaticDataDetectionEnabled: objcbool; message 'isAutomaticDataDetectionEnabled'; { available in macos  }
    procedure toggleAutomaticDataDetection (sender: id); message 'toggleAutomaticDataDetection:'; { available in macos  }
    procedure setAutomaticDashSubstitutionEnabled(newValue: objcbool); message 'setAutomaticDashSubstitutionEnabled:'; { available in macos  }
    function isAutomaticDashSubstitutionEnabled: objcbool; message 'isAutomaticDashSubstitutionEnabled'; { available in macos  }
    procedure toggleAutomaticDashSubstitution (sender: id); message 'toggleAutomaticDashSubstitution:'; { available in macos  }
    procedure setAutomaticTextReplacementEnabled(newValue: objcbool); message 'setAutomaticTextReplacementEnabled:'; { available in macos  }
    function isAutomaticTextReplacementEnabled: objcbool; message 'isAutomaticTextReplacementEnabled'; { available in macos  }
    procedure toggleAutomaticTextReplacement (sender: id); message 'toggleAutomaticTextReplacement:'; { available in macos  }
    procedure setAutomaticSpellingCorrectionEnabled(newValue: objcbool); message 'setAutomaticSpellingCorrectionEnabled:'; { available in macos  }
    function isAutomaticSpellingCorrectionEnabled: objcbool; message 'isAutomaticSpellingCorrectionEnabled'; { available in macos  }
    procedure toggleAutomaticSpellingCorrection (sender: id); message 'toggleAutomaticSpellingCorrection:'; { available in macos  }
    procedure setEnabledTextCheckingTypes(newValue: NSTextCheckingTypes); message 'setEnabledTextCheckingTypes:'; { available in macos  }
    function enabledTextCheckingTypes: NSTextCheckingTypes; message 'enabledTextCheckingTypes'; { available in macos  }
    procedure checkTextInRange_types_options (range: NSRange; checkingTypes: NSTextCheckingTypes; options: NSDictionary); message 'checkTextInRange:types:options:'; { available in macos  }
    procedure handleTextCheckingResults_forRange_types_options_orthography_wordCount (results: NSArray; range: NSRange; checkingTypes: NSTextCheckingTypes; options: NSDictionary; orthography: NSOrthography; wordCount: NSInteger); message 'handleTextCheckingResults:forRange:types:options:orthography:wordCount:'; { available in macos  }
    procedure orderFrontSubstitutionsPanel (sender: id); message 'orderFrontSubstitutionsPanel:'; { available in macos  }
    procedure checkTextInSelection (sender: id); message 'checkTextInSelection:'; { available in macos  }
    procedure checkTextInDocument (sender: id); message 'checkTextInDocument:'; { available in macos  }
    procedure setUsesFindPanel(newValue: objcbool); message 'setUsesFindPanel:';
    function usesFindPanel: objcbool; message 'usesFindPanel';
    procedure setUsesFindBar(newValue: objcbool); message 'setUsesFindBar:'; { available in macos  }
    function usesFindBar: objcbool; message 'usesFindBar'; { available in macos  }
    procedure setIncrementalSearchingEnabled(newValue: objcbool); message 'setIncrementalSearchingEnabled:'; { available in macos  }
    function isIncrementalSearchingEnabled: objcbool; message 'isIncrementalSearchingEnabled'; { available in macos  }
  end;

type
  NSQuickLookPreview = objccategory external (NSTextView)
    procedure toggleQuickLookPreviewPanel (sender: id); message 'toggleQuickLookPreviewPanel:'; { available in macos  }
    function quickLookPreviewableItemsInRanges (ranges: NSArray): NSArray; message 'quickLookPreviewableItemsInRanges:'; { available in macos  }
    procedure updateQuickLookPreviewPanel; message 'updateQuickLookPreviewPanel'; { available in macos  }
  end;

type
  NSTextView_SharingService = objccategory external (NSTextView)
    procedure orderFrontSharingServicePicker (sender: id); message 'orderFrontSharingServicePicker:'; { available in macos  }
  end;

type
  NSTextView_TouchBar = objccategory external (NSTextView)
    procedure setAutomaticTextCompletionEnabled(newValue: objcbool); message 'setAutomaticTextCompletionEnabled:'; { available in macos  }
    function isAutomaticTextCompletionEnabled: objcbool; message 'isAutomaticTextCompletionEnabled'; { available in macos  }
    procedure toggleAutomaticTextCompletion (sender: id); message 'toggleAutomaticTextCompletion:'; { available in macos  }
    procedure setAllowsCharacterPickerTouchBarItem(newValue: objcbool); message 'setAllowsCharacterPickerTouchBarItem:'; { available in macos  }
    function allowsCharacterPickerTouchBarItem: objcbool; message 'allowsCharacterPickerTouchBarItem'; { available in macos  }
    procedure updateTouchBarItemIdentifiers; message 'updateTouchBarItemIdentifiers'; { available in macos  }
    procedure updateTextTouchBarItems; message 'updateTextTouchBarItems'; { available in macos  }
    procedure updateCandidates; message 'updateCandidates'; { available in macos  }
    function candidateListTouchBarItem: NSCandidateListTouchBarItem; message 'candidateListTouchBarItem'; { available in macos  }
  end;

type
  NSTextView_Factory = objccategory external (NSTextView)
    class function scrollableTextView: NSScrollView; message 'scrollableTextView'; { available in macos  }
    class function fieldEditor_: id; message 'fieldEditor'; { available in macos  }
    class function scrollableDocumentContentTextView: NSScrollView; message 'scrollableDocumentContentTextView'; { available in macos  }
    class function scrollablePlainDocumentContentTextView: NSScrollView; message 'scrollablePlainDocumentContentTextView'; { available in macos  }
  end;

type
  NSTextView_NSDeprecated = objccategory external name 'NSDeprecated' (NSTextView)
    procedure toggleBaseWritingDirection (sender: id); message 'toggleBaseWritingDirection:'; deprecated 'Use NSResponder''s makeBaseWritingDirectionNatural:, makeBaseWritingDirectionLeftToRight:, and makeBaseWritingDirectionRightToLeft: instead';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextViewDelegateProtocol = objcprotocol external name 'NSTextViewDelegate' (NSTextDelegateProtocol)
  optional
    function textView_clickedOnLink_atIndex (textView: NSTextView; link: id; charIndex: NSUInteger): objcbool; message 'textView:clickedOnLink:atIndex:';
    procedure textView_clickedOnCell_inRect_atIndex (textView: NSTextView; cell: id; cellFrame: NSRect; charIndex: NSUInteger); message 'textView:clickedOnCell:inRect:atIndex:';
    procedure textView_doubleClickedOnCell_inRect_atIndex (textView: NSTextView; cell: id; cellFrame: NSRect; charIndex: NSUInteger); message 'textView:doubleClickedOnCell:inRect:atIndex:';
    procedure textView_draggedCell_inRect_event_atIndex (view: NSTextView; cell: id; rect: NSRect; event: NSEvent; charIndex: NSUInteger); message 'textView:draggedCell:inRect:event:atIndex:';
    function textView_writablePasteboardTypesForCell_atIndex (view: NSTextView; cell: id; charIndex: NSUInteger): NSArray; message 'textView:writablePasteboardTypesForCell:atIndex:';
    function textView_writeCell_atIndex_toPasteboard_type (view: NSTextView; cell: id; charIndex: NSUInteger; pboard: NSPasteboard; type_: NSPasteboardType): objcbool; message 'textView:writeCell:atIndex:toPasteboard:type:';
    function textView_willChangeSelectionFromCharacterRange_toCharacterRange (textView: NSTextView; oldSelectedCharRange: NSRange; newSelectedCharRange: NSRange): NSRange; message 'textView:willChangeSelectionFromCharacterRange:toCharacterRange:';
    function textView_willChangeSelectionFromCharacterRanges_toCharacterRanges (textView: NSTextView; oldSelectedCharRanges: NSArray; newSelectedCharRanges: NSArray): NSArray; message 'textView:willChangeSelectionFromCharacterRanges:toCharacterRanges:';
    function textView_shouldChangeTextInRanges_replacementStrings (textView: NSTextView; affectedRanges: NSArray; replacementStrings: NSArray): objcbool; message 'textView:shouldChangeTextInRanges:replacementStrings:';
    function textView_shouldChangeTypingAttributes_toAttributes (textView: NSTextView; oldTypingAttributes: NSDictionary; newTypingAttributes: NSDictionary): NSDictionary; message 'textView:shouldChangeTypingAttributes:toAttributes:';
    procedure textViewDidChangeSelection (notification: NSNotification); message 'textViewDidChangeSelection:';
    procedure textViewDidChangeTypingAttributes (notification: NSNotification); message 'textViewDidChangeTypingAttributes:';
    function textView_willDisplayToolTip_forCharacterAtIndex (textView: NSTextView; tooltip: NSString; characterIndex: NSUInteger): NSString; message 'textView:willDisplayToolTip:forCharacterAtIndex:';
    function textView_completions_forPartialWordRange_indexOfSelectedItem (textView: NSTextView; words: NSArray; charRange: NSRange; index: NSIntegerPtr): NSArray; message 'textView:completions:forPartialWordRange:indexOfSelectedItem:';
    function textView_shouldChangeTextInRange_replacementString (textView: NSTextView; affectedCharRange: NSRange; replacementString: NSString): objcbool; message 'textView:shouldChangeTextInRange:replacementString:';
    function textView_doCommandBySelector (textView: NSTextView; commandSelector: SEL): objcbool; message 'textView:doCommandBySelector:';
    function textView_shouldSetSpellingState_range (textView: NSTextView; value: NSInteger; affectedCharRange: NSRange): NSInteger; message 'textView:shouldSetSpellingState:range:'; { available in macos  }
    function textView_menu_forEvent_atIndex (view: NSTextView; menu: NSMenu; event: NSEvent; charIndex: NSUInteger): NSMenu; message 'textView:menu:forEvent:atIndex:'; { available in macos  }
    function textView_willCheckTextInRange_options_types (view: NSTextView; range: NSRange; options: NSDictionary; checkingTypes: NSTextCheckingTypesPtr): NSDictionary; message 'textView:willCheckTextInRange:options:types:'; { available in macos  }
    function textView_didCheckTextInRange_types_options_results_orthography_wordCount (view: NSTextView; range: NSRange; checkingTypes: NSTextCheckingTypes; options: NSDictionary; results: NSArray; orthography: NSOrthography; wordCount: NSInteger): NSArray; message 'textView:didCheckTextInRange:types:options:results:orthography:wordCount:'; { available in macos  }
    function textView_URLForContentsOfTextAttachment_atIndex (textView: NSTextView; textAttachment: NSTextAttachment; charIndex: NSUInteger): NSURL; message 'textView:URLForContentsOfTextAttachment:atIndex:'; { available in macos  }
    function textView_willShowSharingServicePicker_forItems (textView: NSTextView; servicePicker: NSSharingServicePicker; items: NSArray): NSSharingServicePicker; message 'textView:willShowSharingServicePicker:forItems:'; { available in macos  }
    function undoManagerForTextView (view: NSTextView): NSUndoManager; message 'undoManagerForTextView:';
    function textView_shouldUpdateTouchBarItemIdentifiers (textView: NSTextView; identifiers: NSArray): NSArray; message 'textView:shouldUpdateTouchBarItemIdentifiers:'; { available in macos  }
    function textView_candidatesForSelectedRange (textView: NSTextView; selectedRange: NSRange): NSArray; message 'textView:candidatesForSelectedRange:'; { available in macos  }
    function textView_candidates_forSelectedRange (textView: NSTextView; candidates: NSArray; selectedRange: NSRange): NSArray; message 'textView:candidates:forSelectedRange:'; { available in macos  }
    function textView_shouldSelectCandidateAtIndex (textView: NSTextView; index: NSUInteger): objcbool; message 'textView:shouldSelectCandidateAtIndex:'; { available in macos  }
    function textView_clickedOnLink (textView: NSTextView; link: id): objcbool; message 'textView:clickedOnLink:'; deprecated 'Use -textView:clickedOnLink:atIndex: instead';
    procedure textView_clickedOnCell_inRect (textView: NSTextView; cell: id; cellFrame: NSRect); message 'textView:clickedOnCell:inRect:'; deprecated 'Use -textView:clickedOnCell:inRect:atIndex: instead';
    procedure textView_doubleClickedOnCell_inRect (textView: NSTextView; cell: id; cellFrame: NSRect); message 'textView:doubleClickedOnCell:inRect:'; deprecated 'Use -textView:doubleClickedOnCell:inRect:atIndex: instead';
    procedure textView_draggedCell_inRect_event (view: NSTextView; cell: id; rect: NSRect; event: NSEvent); message 'textView:draggedCell:inRect:event:'; deprecated 'Use -textView:draggedCell:inRect:event:atIndex: instead';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTouchBarItemIdentifierCharacterPicker: NSTouchBarItemIdentifier { available in macos  }; cvar; external;
  NSTouchBarItemIdentifierTextColorPicker: NSTouchBarItemIdentifier { available in macos  }; cvar; external;
  NSTouchBarItemIdentifierTextStyle: NSTouchBarItemIdentifier { available in macos  }; cvar; external;
  NSTouchBarItemIdentifierTextAlignment: NSTouchBarItemIdentifier { available in macos  }; cvar; external;
  NSTouchBarItemIdentifierTextList: NSTouchBarItemIdentifier { available in macos  }; cvar; external;
  NSTouchBarItemIdentifierTextFormat: NSTouchBarItemIdentifier { available in macos  }; cvar; external;
  NSTextViewWillChangeNotifyingTextViewNotification: NSNotificationName; cvar; external;
  NSTextViewDidChangeSelectionNotification: NSNotificationName; cvar; external;
  NSTextViewDidChangeTypingAttributesNotification: NSNotificationName; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSFindPanelAction = NSUInteger;
  NSFindPanelActionPtr = ^NSFindPanelAction;

const
  NSFindPanelActionShowFindPanel = 1;
  NSFindPanelActionNext = 2;
  NSFindPanelActionPrevious = 3;
  NSFindPanelActionReplaceAll = 4;
  NSFindPanelActionReplace = 5;
  NSFindPanelActionReplaceAndFind = 6;
  NSFindPanelActionSetFindString = 7;
  NSFindPanelActionReplaceAllInSelection = 8;
  NSFindPanelActionSelectAll = 9;
  NSFindPanelActionSelectAllInSelection = 10;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFindPanelSearchOptionsPboardType: NSPasteboardType { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSPasteboardTypeFindPanelSearchOptionKey = NSString;
  NSPasteboardTypeFindPanelSearchOptionKeyPtr = ^NSPasteboardTypeFindPanelSearchOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFindPanelCaseInsensitiveSearch: NSPasteboardTypeFindPanelSearchOptionKey { available in macos  }; cvar; external;
  NSFindPanelSubstringMatch: NSPasteboardTypeFindPanelSearchOptionKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSFindPanelSubstringMatchType = NSUInteger;
  NSFindPanelSubstringMatchTypePtr = ^NSFindPanelSubstringMatchType;

const
  NSFindPanelSubstringMatchTypeContains = 0;
  NSFindPanelSubstringMatchTypeStartsWith = 1;
  NSFindPanelSubstringMatchTypeFullWord = 2;
  NSFindPanelSubstringMatchTypeEndsWith = 3;
{$endif}

