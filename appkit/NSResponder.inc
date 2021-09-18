{ Parsed from AppKit.framework NSResponder.h }

{$ifdef TYPES}
type
  NSResponderPtr = ^NSResponder;
  NSStandardKeyBindingRespondingProtocolPtr = ^NSStandardKeyBindingRespondingProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSResponder = objcclass external (NSObject, NSCodingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setNextResponder(newValue: NSResponder); message 'setNextResponder:';
    function nextResponder: NSResponder; message 'nextResponder';
    function tryToPerform_with (action: SEL; object_: id): objcbool; message 'tryToPerform:with:';
    function performKeyEquivalent (event: NSEvent): objcbool; message 'performKeyEquivalent:';
    function validRequestorForSendType_returnType (sendType: NSPasteboardType; returnType: NSPasteboardType): id; message 'validRequestorForSendType:returnType:';
    procedure mouseDown (event: NSEvent); message 'mouseDown:';
    procedure rightMouseDown (event: NSEvent); message 'rightMouseDown:';
    procedure otherMouseDown (event: NSEvent); message 'otherMouseDown:';
    procedure mouseUp (event: NSEvent); message 'mouseUp:';
    procedure rightMouseUp (event: NSEvent); message 'rightMouseUp:';
    procedure otherMouseUp (event: NSEvent); message 'otherMouseUp:';
    procedure mouseMoved (event: NSEvent); message 'mouseMoved:';
    procedure mouseDragged (event: NSEvent); message 'mouseDragged:';
    procedure scrollWheel (event: NSEvent); message 'scrollWheel:';
    procedure rightMouseDragged (event: NSEvent); message 'rightMouseDragged:';
    procedure otherMouseDragged (event: NSEvent); message 'otherMouseDragged:';
    procedure mouseEntered (event: NSEvent); message 'mouseEntered:';
    procedure mouseExited (event: NSEvent); message 'mouseExited:';
    procedure keyDown (event: NSEvent); message 'keyDown:';
    procedure keyUp (event: NSEvent); message 'keyUp:';
    procedure flagsChanged (event: NSEvent); message 'flagsChanged:';
    procedure tabletPoint (event: NSEvent); message 'tabletPoint:';
    procedure tabletProximity (event: NSEvent); message 'tabletProximity:';
    procedure cursorUpdate (event: NSEvent); message 'cursorUpdate:'; { available in macos  }
    procedure magnifyWithEvent (event: NSEvent); message 'magnifyWithEvent:'; { available in macos  }
    procedure rotateWithEvent (event: NSEvent); message 'rotateWithEvent:'; { available in macos  }
    procedure swipeWithEvent (event: NSEvent); message 'swipeWithEvent:'; { available in macos  }
    procedure beginGestureWithEvent (event: NSEvent); message 'beginGestureWithEvent:'; { available in macos  }
    procedure endGestureWithEvent (event: NSEvent); message 'endGestureWithEvent:'; { available in macos  }
    procedure smartMagnifyWithEvent (event: NSEvent); message 'smartMagnifyWithEvent:'; { available in macos  }
    procedure changeModeWithEvent (event: NSEvent); message 'changeModeWithEvent:'; { available in macos  }
    procedure touchesBeganWithEvent (event: NSEvent); message 'touchesBeganWithEvent:'; { available in macos  }
    procedure touchesMovedWithEvent (event: NSEvent); message 'touchesMovedWithEvent:'; { available in macos  }
    procedure touchesEndedWithEvent (event: NSEvent); message 'touchesEndedWithEvent:'; { available in macos  }
    procedure touchesCancelledWithEvent (event: NSEvent); message 'touchesCancelledWithEvent:'; { available in macos  }
    procedure quickLookWithEvent (event: NSEvent); message 'quickLookWithEvent:'; { available in macos  }
    procedure pressureChangeWithEvent (event: NSEvent); message 'pressureChangeWithEvent:'; { available in macos  }
    procedure noResponderFor (eventSelector: SEL); message 'noResponderFor:';
    function acceptsFirstResponder: objcbool; message 'acceptsFirstResponder';
    function becomeFirstResponder: objcbool; message 'becomeFirstResponder';
    function resignFirstResponder: objcbool; message 'resignFirstResponder';
    procedure interpretKeyEvents (eventArray: NSArray); message 'interpretKeyEvents:';
    procedure flushBufferedKeyEvents; message 'flushBufferedKeyEvents';
    procedure setMenu(newValue: NSMenu); message 'setMenu:';
    function menu: NSMenu; message 'menu';
    procedure showContextHelp (sender: id); message 'showContextHelp:';
    procedure helpRequested (eventPtr: NSEvent); message 'helpRequested:';
    function shouldBeTreatedAsInkEvent (event: NSEvent): objcbool; message 'shouldBeTreatedAsInkEvent:';
    function wantsScrollEventsForSwipeTrackingOnAxis (axis: NSEventGestureAxis): objcbool; message 'wantsScrollEventsForSwipeTrackingOnAxis:'; { available in macos  }
    function wantsForwardedScrollEventsForAxis (axis: NSEventGestureAxis): objcbool; message 'wantsForwardedScrollEventsForAxis:'; { available in macos  }
    function supplementalTargetForAction_sender (action: SEL; sender: id): id; message 'supplementalTargetForAction:sender:'; { available in macos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSStandardKeyBindingRespondingProtocol = objcprotocol external name 'NSStandardKeyBindingResponding' (NSObjectProtocol)
  optional
    procedure insertText (insertString: id); message 'insertText:';
    procedure doCommandBySelector (selector: SEL); message 'doCommandBySelector:';
    procedure moveForward (sender: id); message 'moveForward:';
    procedure moveRight (sender: id); message 'moveRight:';
    procedure moveBackward (sender: id); message 'moveBackward:';
    procedure moveLeft (sender: id); message 'moveLeft:';
    procedure moveUp (sender: id); message 'moveUp:';
    procedure moveDown (sender: id); message 'moveDown:';
    procedure moveWordForward (sender: id); message 'moveWordForward:';
    procedure moveWordBackward (sender: id); message 'moveWordBackward:';
    procedure moveToBeginningOfLine (sender: id); message 'moveToBeginningOfLine:';
    procedure moveToEndOfLine (sender: id); message 'moveToEndOfLine:';
    procedure moveToBeginningOfParagraph (sender: id); message 'moveToBeginningOfParagraph:';
    procedure moveToEndOfParagraph (sender: id); message 'moveToEndOfParagraph:';
    procedure moveToEndOfDocument (sender: id); message 'moveToEndOfDocument:';
    procedure moveToBeginningOfDocument (sender: id); message 'moveToBeginningOfDocument:';
    procedure pageDown (sender: id); message 'pageDown:';
    procedure pageUp (sender: id); message 'pageUp:';
    procedure centerSelectionInVisibleArea (sender: id); message 'centerSelectionInVisibleArea:';
    procedure moveBackwardAndModifySelection (sender: id); message 'moveBackwardAndModifySelection:';
    procedure moveForwardAndModifySelection (sender: id); message 'moveForwardAndModifySelection:';
    procedure moveWordForwardAndModifySelection (sender: id); message 'moveWordForwardAndModifySelection:';
    procedure moveWordBackwardAndModifySelection (sender: id); message 'moveWordBackwardAndModifySelection:';
    procedure moveUpAndModifySelection (sender: id); message 'moveUpAndModifySelection:';
    procedure moveDownAndModifySelection (sender: id); message 'moveDownAndModifySelection:';
    procedure moveToBeginningOfLineAndModifySelection (sender: id); message 'moveToBeginningOfLineAndModifySelection:';
    procedure moveToEndOfLineAndModifySelection (sender: id); message 'moveToEndOfLineAndModifySelection:';
    procedure moveToBeginningOfParagraphAndModifySelection (sender: id); message 'moveToBeginningOfParagraphAndModifySelection:';
    procedure moveToEndOfParagraphAndModifySelection (sender: id); message 'moveToEndOfParagraphAndModifySelection:';
    procedure moveToEndOfDocumentAndModifySelection (sender: id); message 'moveToEndOfDocumentAndModifySelection:';
    procedure moveToBeginningOfDocumentAndModifySelection (sender: id); message 'moveToBeginningOfDocumentAndModifySelection:';
    procedure pageDownAndModifySelection (sender: id); message 'pageDownAndModifySelection:';
    procedure pageUpAndModifySelection (sender: id); message 'pageUpAndModifySelection:';
    procedure moveParagraphForwardAndModifySelection (sender: id); message 'moveParagraphForwardAndModifySelection:';
    procedure moveParagraphBackwardAndModifySelection (sender: id); message 'moveParagraphBackwardAndModifySelection:';
    procedure moveWordRight (sender: id); message 'moveWordRight:';
    procedure moveWordLeft (sender: id); message 'moveWordLeft:';
    procedure moveRightAndModifySelection (sender: id); message 'moveRightAndModifySelection:';
    procedure moveLeftAndModifySelection (sender: id); message 'moveLeftAndModifySelection:';
    procedure moveWordRightAndModifySelection (sender: id); message 'moveWordRightAndModifySelection:';
    procedure moveWordLeftAndModifySelection (sender: id); message 'moveWordLeftAndModifySelection:';
    procedure moveToLeftEndOfLine (sender: id); message 'moveToLeftEndOfLine:'; { available in macos  }
    procedure moveToRightEndOfLine (sender: id); message 'moveToRightEndOfLine:'; { available in macos  }
    procedure moveToLeftEndOfLineAndModifySelection (sender: id); message 'moveToLeftEndOfLineAndModifySelection:'; { available in macos  }
    procedure moveToRightEndOfLineAndModifySelection (sender: id); message 'moveToRightEndOfLineAndModifySelection:'; { available in macos  }
    procedure scrollPageUp (sender: id); message 'scrollPageUp:';
    procedure scrollPageDown (sender: id); message 'scrollPageDown:';
    procedure scrollLineUp (sender: id); message 'scrollLineUp:';
    procedure scrollLineDown (sender: id); message 'scrollLineDown:';
    procedure scrollToBeginningOfDocument (sender: id); message 'scrollToBeginningOfDocument:';
    procedure scrollToEndOfDocument (sender: id); message 'scrollToEndOfDocument:';
    procedure transpose (sender: id); message 'transpose:';
    procedure transposeWords (sender: id); message 'transposeWords:';
    procedure selectAll (sender: id); message 'selectAll:';
    procedure selectParagraph (sender: id); message 'selectParagraph:';
    procedure selectLine (sender: id); message 'selectLine:';
    procedure selectWord (sender: id); message 'selectWord:';
    procedure indent (sender: id); message 'indent:';
    procedure insertTab (sender: id); message 'insertTab:';
    procedure insertBacktab (sender: id); message 'insertBacktab:';
    procedure insertNewline (sender: id); message 'insertNewline:';
    procedure insertParagraphSeparator (sender: id); message 'insertParagraphSeparator:';
    procedure insertNewlineIgnoringFieldEditor (sender: id); message 'insertNewlineIgnoringFieldEditor:';
    procedure insertTabIgnoringFieldEditor (sender: id); message 'insertTabIgnoringFieldEditor:';
    procedure insertLineBreak (sender: id); message 'insertLineBreak:';
    procedure insertContainerBreak (sender: id); message 'insertContainerBreak:';
    procedure insertSingleQuoteIgnoringSubstitution (sender: id); message 'insertSingleQuoteIgnoringSubstitution:'; { available in macos  }
    procedure insertDoubleQuoteIgnoringSubstitution (sender: id); message 'insertDoubleQuoteIgnoringSubstitution:'; { available in macos  }
    procedure changeCaseOfLetter (sender: id); message 'changeCaseOfLetter:';
    procedure uppercaseWord (sender: id); message 'uppercaseWord:';
    procedure lowercaseWord (sender: id); message 'lowercaseWord:';
    procedure capitalizeWord (sender: id); message 'capitalizeWord:';
    procedure deleteForward (sender: id); message 'deleteForward:';
    procedure deleteBackward (sender: id); message 'deleteBackward:';
    procedure deleteBackwardByDecomposingPreviousCharacter (sender: id); message 'deleteBackwardByDecomposingPreviousCharacter:';
    procedure deleteWordForward (sender: id); message 'deleteWordForward:';
    procedure deleteWordBackward (sender: id); message 'deleteWordBackward:';
    procedure deleteToBeginningOfLine (sender: id); message 'deleteToBeginningOfLine:';
    procedure deleteToEndOfLine (sender: id); message 'deleteToEndOfLine:';
    procedure deleteToBeginningOfParagraph (sender: id); message 'deleteToBeginningOfParagraph:';
    procedure deleteToEndOfParagraph (sender: id); message 'deleteToEndOfParagraph:';
    procedure yank (sender: id); message 'yank:';
    procedure complete (sender: id); message 'complete:';
    procedure setMark (sender: id); message 'setMark:';
    procedure deleteToMark (sender: id); message 'deleteToMark:';
    procedure selectToMark (sender: id); message 'selectToMark:';
    procedure swapWithMark (sender: id); message 'swapWithMark:';
    procedure cancelOperation (sender: id); message 'cancelOperation:';
    procedure makeBaseWritingDirectionNatural (sender: id); message 'makeBaseWritingDirectionNatural:'; { available in macos  }
    procedure makeBaseWritingDirectionLeftToRight (sender: id); message 'makeBaseWritingDirectionLeftToRight:'; { available in macos  }
    procedure makeBaseWritingDirectionRightToLeft (sender: id); message 'makeBaseWritingDirectionRightToLeft:'; { available in macos  }
    procedure makeTextWritingDirectionNatural (sender: id); message 'makeTextWritingDirectionNatural:'; { available in macos  }
    procedure makeTextWritingDirectionLeftToRight (sender: id); message 'makeTextWritingDirectionLeftToRight:'; { available in macos  }
    procedure makeTextWritingDirectionRightToLeft (sender: id); message 'makeTextWritingDirectionRightToLeft:'; { available in macos  }
    procedure quickLookPreviewItems (sender: id); message 'quickLookPreviewItems:'; { available in macos  }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSStandardKeyBindingMethods = objccategory external (NSResponder)
  end;

type
  NSUndoSupport = objccategory external (NSResponder)
    function undoManager: NSUndoManager; message 'undoManager';
  end;

type
  NSControlEditingSupport = objccategory external (NSResponder)
    function validateProposedFirstResponder_forEvent (responder: NSResponder; event: NSEvent): objcbool; message 'validateProposedFirstResponder:forEvent:'; { available in macos  }
  end;

type
  NSErrorPresentation = objccategory external (NSResponder)
    procedure presentError_modalForWindow_delegate_didPresentSelector_contextInfo (error: NSError; window: NSWindow; delegate: id; didPresentSelector: SEL; contextInfo: pointer); message 'presentError:modalForWindow:delegate:didPresentSelector:contextInfo:';
    function presentError (error: NSError): objcbool; message 'presentError:';
    function willPresentError (error: NSError): NSError; message 'willPresentError:';
  end;

type
  NSTextFinderSupport = objccategory external (NSResponder)
    procedure performTextFinderAction (sender: id); message 'performTextFinderAction:'; { available in macos  }
  end;

type
  NSWindowTabbing = objccategory external (NSResponder)
    procedure newWindowForTab (sender: id); message 'newWindowForTab:'; { available in macos  }
  end;

type
  NSResponder_NSDeprecated = objccategory external name 'NSDeprecated' (NSResponder)
    function performMnemonic (string_: NSString): objcbool; message 'performMnemonic:'; deprecated 'This has always returned NO and had no effect on macOS';
  end;
{$endif}

