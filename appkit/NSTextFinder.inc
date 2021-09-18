{ Parsed from AppKit.framework NSTextFinder.h }

{$ifdef TYPES}
type
  NSTextFinderPtr = ^NSTextFinder;
  NSTextFinderClientProtocolPtr = ^NSTextFinderClientProtocol;
  NSTextFinderBarContainerProtocolPtr = ^NSTextFinderBarContainerProtocol;
{$endif}

{$ifdef TYPES}
type
  NSTextFinderAction = NSInteger;
  NSTextFinderActionPtr = ^NSTextFinderAction;

const
  NSTextFinderActionShowFindInterface = 1;
  NSTextFinderActionNextMatch = 2;
  NSTextFinderActionPreviousMatch = 3;
  NSTextFinderActionReplaceAll = 4;
  NSTextFinderActionReplace = 5;
  NSTextFinderActionReplaceAndFind = 6;
  NSTextFinderActionSetSearchString = 7;
  NSTextFinderActionReplaceAllInSelection = 8;
  NSTextFinderActionSelectAll = 9;
  NSTextFinderActionSelectAllInSelection = 10;
  NSTextFinderActionHideFindInterface = 11;
  NSTextFinderActionShowReplaceInterface = 12;
  NSTextFinderActionHideReplaceInterface = 13;

type
  NSPasteboardTypeTextFinderOptionKey = NSString;
  NSPasteboardTypeTextFinderOptionKeyPtr = ^NSPasteboardTypeTextFinderOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextFinderCaseInsensitiveKey: NSPasteboardTypeTextFinderOptionKey { available in macos  }; cvar; external;
  NSTextFinderMatchingTypeKey: NSPasteboardTypeTextFinderOptionKey { available in macos  }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSTextFinderMatchingType = NSInteger;
  NSTextFinderMatchingTypePtr = ^NSTextFinderMatchingType;

const
  NSTextFinderMatchingTypeContains = 0;
  NSTextFinderMatchingTypeStartsWith = 1;
  NSTextFinderMatchingTypeFullWord = 2;
  NSTextFinderMatchingTypeEndsWith = 3;
{$endif}

{$ifdef CLASSES}

type
  NSTextFinder = objcclass external (NSObject, NSCodingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setClient(newValue: NSTextFinderClientProtocol); message 'setClient:';
    function client: NSTextFinderClientProtocol; message 'client';
    procedure performAction (op: NSTextFinderAction); message 'performAction:';
    function validateAction (op: NSTextFinderAction): objcbool; message 'validateAction:';
    procedure setFindBarContainer(newValue: NSTextFinderBarContainerProtocol); message 'setFindBarContainer:';
    function findBarContainer: NSTextFinderBarContainerProtocol; message 'findBarContainer';
    procedure cancelFindIndicator; message 'cancelFindIndicator';
    procedure setFindIndicatorNeedsUpdate(newValue: objcbool); message 'setFindIndicatorNeedsUpdate:';
    function findIndicatorNeedsUpdate: objcbool; message 'findIndicatorNeedsUpdate';
    procedure setIncrementalSearchingEnabled(newValue: objcbool); message 'setIncrementalSearchingEnabled:';
    function isIncrementalSearchingEnabled: objcbool; message 'isIncrementalSearchingEnabled';
    procedure setIncrementalSearchingShouldDimContentView(newValue: objcbool); message 'setIncrementalSearchingShouldDimContentView:';
    function incrementalSearchingShouldDimContentView: objcbool; message 'incrementalSearchingShouldDimContentView';
    function incrementalMatchRanges: NSArray; message 'incrementalMatchRanges';
    class procedure drawIncrementalMatchHighlightInRect (rect: NSRect); message 'drawIncrementalMatchHighlightInRect:';
    procedure noteClientStringWillChange; message 'noteClientStringWillChange';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSTextFinderClientProtocol = objcprotocol external name 'NSTextFinderClient' (NSObjectProtocol)
  optional
    function isSelectable: objcbool; message 'isSelectable';
    function allowsMultipleSelection: objcbool; message 'allowsMultipleSelection';
    function isEditable: objcbool; message 'isEditable';
    function string_: NSString; message 'string';
    function stringAtIndex_effectiveRange_endsWithSearchBoundary (characterIndex: NSUInteger; outRange: NSRangePointer; outFlag: objcboolPtr): NSString; message 'stringAtIndex:effectiveRange:endsWithSearchBoundary:';
    function stringLength: NSUInteger; message 'stringLength';
    function firstSelectedRange: NSRange; message 'firstSelectedRange';
    procedure setSelectedRanges(newValue: NSArray); message 'setSelectedRanges:';
    function selectedRanges: NSArray; message 'selectedRanges';
    procedure scrollRangeToVisible (range: NSRange); message 'scrollRangeToVisible:';
    function shouldReplaceCharactersInRanges_withStrings (ranges: NSArray; strings: NSArray): objcbool; message 'shouldReplaceCharactersInRanges:withStrings:';
    procedure replaceCharactersInRange_withString (range: NSRange; string_: NSString); message 'replaceCharactersInRange:withString:';
    procedure didReplaceCharacters; message 'didReplaceCharacters';
    function contentViewAtIndex_effectiveCharacterRange (index: NSUInteger; outRange: NSRangePointer): NSView; message 'contentViewAtIndex:effectiveCharacterRange:';
    function rectsForCharacterRange (range: NSRange): NSArray; message 'rectsForCharacterRange:';
    function visibleCharacterRanges: NSArray; message 'visibleCharacterRanges';
    procedure drawCharactersInRange_forContentView (range: NSRange; view: NSView); message 'drawCharactersInRange:forContentView:';
  end;

type
  NSTextFinderBarContainerProtocol = objcprotocol external name 'NSTextFinderBarContainer' (NSObjectProtocol)
  required
    procedure setFindBarView(newValue: NSView); message 'setFindBarView:';
    function findBarView: NSView; message 'findBarView';
    procedure setFindBarVisible(newValue: objcbool); message 'setFindBarVisible:';
    function isFindBarVisible: objcbool; message 'isFindBarVisible';
    procedure findBarViewDidChangeHeight; message 'findBarViewDidChangeHeight';
  optional
    function contentView: NSView; message 'contentView';
  end;
{$endif}

