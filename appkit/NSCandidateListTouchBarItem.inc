{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSCandidateListTouchBarItem.h }

{$ifdef CALLBACKS}
type
  NSCandidateListTouchBarItemAttributedStringForCandidateCallback = reference to function (candidate: id; index: NSInteger): NSAttributedString; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSCandidateListTouchBarItemPtr = ^NSCandidateListTouchBarItem;
  NSCandidateListTouchBarItemDelegateProtocolPtr = ^NSCandidateListTouchBarItemDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSCandidateListTouchBarItem = objcclass external (NSTouchBarItem)
  public
    procedure setClient(newValue: NSView); message 'setClient:';
    function client: NSView; message 'client';
    procedure setDelegate(newValue: id); message 'setDelegate:'; { unavailable in macCatalyst }
    function delegate: id; message 'delegate'; { unavailable in macCatalyst }
    procedure setCollapsed(newValue: objcbool); message 'setCollapsed:'; { unavailable in macCatalyst }
    function isCollapsed: objcbool; message 'isCollapsed'; { unavailable in macCatalyst }
    procedure setAllowsCollapsing(newValue: objcbool); message 'setAllowsCollapsing:'; { unavailable in macCatalyst }
    function allowsCollapsing: objcbool; message 'allowsCollapsing'; { unavailable in macCatalyst }
    function isCandidateListVisible: objcbool; message 'isCandidateListVisible'; { unavailable in macCatalyst }
    procedure updateWithInsertionPointVisibility (isVisible_: objcbool); message 'updateWithInsertionPointVisibility:'; { unavailable in macCatalyst }
    procedure setAllowsTextInputContextCandidates(newValue: objcbool); message 'setAllowsTextInputContextCandidates:';
    function allowsTextInputContextCandidates: objcbool; message 'allowsTextInputContextCandidates';
    procedure setAttributedStringForCandidate(newValue: NSCandidateListTouchBarItemAttributedStringForCandidateCallback); message 'setAttributedStringForCandidate:'; { unavailable in macCatalyst }
    function attributedStringForCandidate: NSCandidateListTouchBarItemAttributedStringForCandidateCallback; message 'attributedStringForCandidate'; { unavailable in macCatalyst }
    function candidates: NSArray; message 'candidates'; { unavailable in macCatalyst }
    procedure setCandidates_forSelectedRange_inString (candidates_: NSArray; selectedRange: NSRange; originalString: NSString); message 'setCandidates:forSelectedRange:inString:'; { unavailable in macCatalyst }
    procedure setCustomizationLabel(newValue: NSString); message 'setCustomizationLabel:'; { unavailable in macCatalyst }
    function customizationLabel: NSString; message 'customizationLabel'; { unavailable in macCatalyst }
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSCandidateListTouchBarItemDelegateProtocol = objcprotocol external name 'NSCandidateListTouchBarItemDelegate' (NSObjectProtocol)
  optional
    procedure candidateListTouchBarItem_beginSelectingCandidateAtIndex (anItem: NSCandidateListTouchBarItem; index: NSInteger); message 'candidateListTouchBarItem:beginSelectingCandidateAtIndex:'; { unavailable in macCatalyst }
    procedure candidateListTouchBarItem_changeSelectionFromCandidateAtIndex_toIndex (anItem: NSCandidateListTouchBarItem; previousIndex: NSInteger; index: NSInteger); message 'candidateListTouchBarItem:changeSelectionFromCandidateAtIndex:toIndex:'; { unavailable in macCatalyst }
    procedure candidateListTouchBarItem_endSelectingCandidateAtIndex (anItem: NSCandidateListTouchBarItem; index: NSInteger); message 'candidateListTouchBarItem:endSelectingCandidateAtIndex:'; { unavailable in macCatalyst }
    procedure candidateListTouchBarItem_changedCandidateListVisibility (anItem: NSCandidateListTouchBarItem; isVisible: objcbool); message 'candidateListTouchBarItem:changedCandidateListVisibility:'; { unavailable in macCatalyst }
  end;
{$endif}

{$ifdef CLASSES}

type
  NSView_NSCandidateListTouchBarItem = objccategory external name 'NSCandidateListTouchBarItem' (NSView)
    function candidateListTouchBarItem: NSCandidateListTouchBarItem; message 'candidateListTouchBarItem'; { available in macos  }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTouchBarItemIdentifierCandidateList: NSTouchBarItemIdentifier { unavailable in macCatalyst }; cvar; external;
{$endif}

