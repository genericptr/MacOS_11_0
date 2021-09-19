{ Parsed from AppKit.framework NSKeyValueBinding.h }

{$ifdef TYPES}
type
  NSBindingSelectionMarkerPtr = ^NSBindingSelectionMarker;
  NSEditorProtocolPtr = ^NSEditorProtocol;
  NSEditorRegistrationProtocolPtr = ^NSEditorRegistrationProtocol;
{$endif}

{$ifdef TYPES}
type
  NSBindingName = NSString;
  NSBindingNamePtr = ^NSBindingName;
  NSBindingOption = NSString;
  NSBindingOptionPtr = ^NSBindingOption;
{$endif}

{$ifdef CLASSES}

type
  NSBindingSelectionMarker = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: id; message 'init';
    class function multipleValuesSelectionMarker: NSBindingSelectionMarker; message 'multipleValuesSelectionMarker'; { available in macos 10.14 }
    class function noSelectionMarker: NSBindingSelectionMarker; message 'noSelectionMarker'; { available in macos 10.14 }
    class function notApplicableSelectionMarker: NSBindingSelectionMarker; message 'notApplicableSelectionMarker'; { available in macos 10.14 }
    class procedure setDefaultPlaceholder_forMarker_onClass_withBinding (placeholder: id; marker: NSBindingSelectionMarker; objectClass: pobjc_class; binding: NSBindingName); message 'setDefaultPlaceholder:forMarker:onClass:withBinding:'; { available in macos 10.15 }
    class function defaultPlaceholderForMarker_onClass_withBinding (marker: NSBindingSelectionMarker; objectClass: pobjc_class; binding: NSBindingName): id; message 'defaultPlaceholderForMarker:onClass:withBinding:'; { available in macos 10.15 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSMultipleValuesMarker: id deprecated 'replace with NSBindingSelectionMarker.multipleValuesSelectionMarker'; cvar; external;
  NSNoSelectionMarker: id deprecated 'replace with NSBindingSelectionMarker.noSelectionMarker'; cvar; external;
  NSNotApplicableMarker: id deprecated 'replace with NSBindingSelectionMarker.notApplicableSelectionMarker'; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function NSIsControllerMarker(object_: id): objcbool; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  NSBindingInfoKey = NSString;
  NSBindingInfoKeyPtr = ^NSBindingInfoKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSObservedObjectKey: NSBindingInfoKey; cvar; external;
  NSObservedKeyPathKey: NSBindingInfoKey; cvar; external;
  NSOptionsKey: NSBindingInfoKey; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSKeyValueBindingCreation = objccategory external (NSObject)
    class procedure exposeBinding (binding: NSBindingName); message 'exposeBinding:';
    function exposedBindings: NSArray; message 'exposedBindings';
    function valueClassForBinding (binding: NSBindingName): pobjc_class; message 'valueClassForBinding:';
    procedure bind_toObject_withKeyPath_options (binding: NSBindingName; observable: id; keyPath: NSString; options: NSDictionary); message 'bind:toObject:withKeyPath:options:';
    procedure unbind (binding: NSBindingName); message 'unbind:';
    function infoForBinding (binding: NSBindingName): NSDictionary; message 'infoForBinding:';
    function optionDescriptionsForBinding (binding: NSBindingName): NSArray; message 'optionDescriptionsForBinding:'; { available in macos 10.5 }
  end;

type
  NSPlaceholders = objccategory external (NSObject)
    class procedure setDefaultPlaceholder_forMarker_withBinding (placeholder: id; marker: id; binding: NSBindingName); message 'setDefaultPlaceholder:forMarker:withBinding:'; deprecated 'replace with +[NSBindingSelectionMarker setDefaultPlaceholder:forMarker:withBinding:onClass:]';
    class function defaultPlaceholderForMarker_withBinding (marker: id; binding: NSBindingName): id; message 'defaultPlaceholderForMarker:withBinding:'; deprecated 'replace with +[NSBindingSelectionMarker defaultPlaceholder:forMarker:withBinding:onClass:]';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSEditorProtocol = objcprotocol external name 'NSEditor' (NSObjectProtocol)
    procedure discardEditing; message 'discardEditing';
    function commitEditing: objcbool; message 'commitEditing';
    procedure commitEditingWithDelegate_didCommitSelector_contextInfo (delegate: id; didCommitSelector: SEL; contextInfo: pointer); message 'commitEditingWithDelegate:didCommitSelector:contextInfo:';
    function commitEditingAndReturnError (error: NSErrorPtr): objcbool; message 'commitEditingAndReturnError:'; { available in macos 10.7 }
  end;

type
  NSEditorRegistrationProtocol = objcprotocol external name 'NSEditorRegistration' (NSObjectProtocol)
  optional
    procedure objectDidBeginEditing (editor: NSEditorProtocol); message 'objectDidBeginEditing:';
    procedure objectDidEndEditing (editor: NSEditorProtocol); message 'objectDidEndEditing:';
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSEditor = objccategory external (NSObject)
    procedure discardEditing; message 'discardEditing'; deprecated 'This is now a method of the NSEditor protocol.';
    function commitEditing: objcbool; message 'commitEditing'; deprecated 'This is now a method of the NSEditor protocol.';
    procedure commitEditingWithDelegate_didCommitSelector_contextInfo (delegate: id; didCommitSelector: SEL; contextInfo: pointer); message 'commitEditingWithDelegate:didCommitSelector:contextInfo:'; deprecated 'This is now a method of the NSEditor protocol.';
    function commitEditingAndReturnError (error: NSErrorPtr): objcbool; message 'commitEditingAndReturnError:'; deprecated 'This is now a method of the NSEditor protocol.';
  end;

type
  NSEditorRegistration = objccategory external (NSObject)
    procedure objectDidBeginEditing (editor: NSEditorProtocol); message 'objectDidBeginEditing:'; deprecated 'This is now a method of the NSEditorRegistration protocol.';
    procedure objectDidEndEditing (editor: NSEditorProtocol); message 'objectDidEndEditing:'; deprecated 'This is now a method of the NSEditorRegistration protocol.';
  end;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  NSAlignmentBinding: NSBindingName; cvar; external;
  NSAlternateImageBinding: NSBindingName; cvar; external;
  NSAlternateTitleBinding: NSBindingName; cvar; external;
  NSAnimateBinding: NSBindingName; cvar; external;
  NSAnimationDelayBinding: NSBindingName; cvar; external;
  NSArgumentBinding: NSBindingName; cvar; external;
  NSAttributedStringBinding: NSBindingName; cvar; external;
  NSContentArrayBinding: NSBindingName; cvar; external;
  NSContentArrayForMultipleSelectionBinding: NSBindingName; cvar; external;
  NSContentBinding: NSBindingName; cvar; external;
  NSContentDictionaryBinding: NSBindingName { available in macos 10.5 }; cvar; external;
  NSContentHeightBinding: NSBindingName; cvar; external;
  NSContentObjectBinding: NSBindingName; cvar; external;
  NSContentObjectsBinding: NSBindingName; cvar; external;
  NSContentSetBinding: NSBindingName; cvar; external;
  NSContentValuesBinding: NSBindingName; cvar; external;
  NSContentWidthBinding: NSBindingName; cvar; external;
  NSCriticalValueBinding: NSBindingName; cvar; external;
  NSDataBinding: NSBindingName; cvar; external;
  NSDisplayPatternTitleBinding: NSBindingName; cvar; external;
  NSDisplayPatternValueBinding: NSBindingName; cvar; external;
  NSDocumentEditedBinding: NSBindingName; cvar; external;
  NSDoubleClickArgumentBinding: NSBindingName; cvar; external;
  NSDoubleClickTargetBinding: NSBindingName; cvar; external;
  NSEditableBinding: NSBindingName; cvar; external;
  NSEnabledBinding: NSBindingName; cvar; external;
  NSExcludedKeysBinding: NSBindingName { available in macos 10.5 }; cvar; external;
  NSFilterPredicateBinding: NSBindingName; cvar; external;
  NSFontBinding: NSBindingName; cvar; external;
  NSFontBoldBinding: NSBindingName; cvar; external;
  NSFontFamilyNameBinding: NSBindingName; cvar; external;
  NSFontItalicBinding: NSBindingName; cvar; external;
  NSFontNameBinding: NSBindingName; cvar; external;
  NSFontSizeBinding: NSBindingName; cvar; external;
  NSHeaderTitleBinding: NSBindingName; cvar; external;
  NSHiddenBinding: NSBindingName; cvar; external;
  NSImageBinding: NSBindingName; cvar; external;
  NSIncludedKeysBinding: NSBindingName { available in macos 10.5 }; cvar; external;
  NSInitialKeyBinding: NSBindingName { available in macos 10.5 }; cvar; external;
  NSInitialValueBinding: NSBindingName { available in macos 10.5 }; cvar; external;
  NSIsIndeterminateBinding: NSBindingName; cvar; external;
  NSLabelBinding: NSBindingName; cvar; external;
  NSLocalizedKeyDictionaryBinding: NSBindingName { available in macos 10.5 }; cvar; external;
  NSManagedObjectContextBinding: NSBindingName; cvar; external;
  NSMaximumRecentsBinding: NSBindingName; cvar; external;
  NSMaxValueBinding: NSBindingName; cvar; external;
  NSMaxWidthBinding: NSBindingName; cvar; external;
  NSMinValueBinding: NSBindingName; cvar; external;
  NSMinWidthBinding: NSBindingName; cvar; external;
  NSMixedStateImageBinding: NSBindingName; cvar; external;
  NSOffStateImageBinding: NSBindingName; cvar; external;
  NSOnStateImageBinding: NSBindingName; cvar; external;
  NSPositioningRectBinding: NSBindingName { available in macos 10.7 }; cvar; external;
  NSPredicateBinding: NSBindingName; cvar; external;
  NSRecentSearchesBinding: NSBindingName; cvar; external;
  NSRepresentedFilenameBinding: NSBindingName; cvar; external;
  NSRowHeightBinding: NSBindingName; cvar; external;
  NSSelectedIdentifierBinding: NSBindingName; cvar; external;
  NSSelectedIndexBinding: NSBindingName; cvar; external;
  NSSelectedLabelBinding: NSBindingName; cvar; external;
  NSSelectedObjectBinding: NSBindingName; cvar; external;
  NSSelectedObjectsBinding: NSBindingName; cvar; external;
  NSSelectedTagBinding: NSBindingName; cvar; external;
  NSSelectedValueBinding: NSBindingName; cvar; external;
  NSSelectedValuesBinding: NSBindingName; cvar; external;
  NSSelectionIndexesBinding: NSBindingName; cvar; external;
  NSSelectionIndexPathsBinding: NSBindingName; cvar; external;
  NSSortDescriptorsBinding: NSBindingName; cvar; external;
  NSTargetBinding: NSBindingName; cvar; external;
  NSTextColorBinding: NSBindingName; cvar; external;
  NSTitleBinding: NSBindingName; cvar; external;
  NSToolTipBinding: NSBindingName; cvar; external;
  NSTransparentBinding: NSBindingName { available in macos 10.5 }; cvar; external;
  NSValueBinding: NSBindingName; cvar; external;
  NSValuePathBinding: NSBindingName; cvar; external;
  NSValueURLBinding: NSBindingName; cvar; external;
  NSVisibleBinding: NSBindingName; cvar; external;
  NSWarningValueBinding: NSBindingName; cvar; external;
  NSWidthBinding: NSBindingName; cvar; external;
  NSAllowsEditingMultipleValuesSelectionBindingOption: NSBindingOption; cvar; external;
  NSAllowsNullArgumentBindingOption: NSBindingOption; cvar; external;
  NSAlwaysPresentsApplicationModalAlertsBindingOption: NSBindingOption; cvar; external;
  NSConditionallySetsEditableBindingOption: NSBindingOption; cvar; external;
  NSConditionallySetsEnabledBindingOption: NSBindingOption; cvar; external;
  NSConditionallySetsHiddenBindingOption: NSBindingOption; cvar; external;
  NSContinuouslyUpdatesValueBindingOption: NSBindingOption; cvar; external;
  NSCreatesSortDescriptorBindingOption: NSBindingOption; cvar; external;
  NSDeletesObjectsOnRemoveBindingsOption: NSBindingOption; cvar; external;
  NSDisplayNameBindingOption: NSBindingOption; cvar; external;
  NSDisplayPatternBindingOption: NSBindingOption; cvar; external;
  NSContentPlacementTagBindingOption: NSBindingOption { available in macos 10.5 }; cvar; external;
  NSHandlesContentAsCompoundValueBindingOption: NSBindingOption; cvar; external;
  NSInsertsNullPlaceholderBindingOption: NSBindingOption; cvar; external;
  NSInvokesSeparatelyWithArrayObjectsBindingOption: NSBindingOption; cvar; external;
  NSMultipleValuesPlaceholderBindingOption: NSBindingOption; cvar; external;
  NSNoSelectionPlaceholderBindingOption: NSBindingOption; cvar; external;
  NSNotApplicablePlaceholderBindingOption: NSBindingOption; cvar; external;
  NSNullPlaceholderBindingOption: NSBindingOption; cvar; external;
  NSRaisesForNotApplicableKeysBindingOption: NSBindingOption; cvar; external;
  NSPredicateFormatBindingOption: NSBindingOption; cvar; external;
  NSSelectorNameBindingOption: NSBindingOption; cvar; external;
  NSSelectsAllWhenSettingContentBindingOption: NSBindingOption; cvar; external;
  NSValidatesImmediatelyBindingOption: NSBindingOption; cvar; external;
  NSValueTransformerNameBindingOption: NSBindingOption; cvar; external;
  NSValueTransformerBindingOption: NSBindingOption; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSEditorAndEditorRegistrationConformance = objccategory external (NSManagedObjectContext)
  end;
{$endif}

