{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSFontManager.h }

{$ifdef TYPES}
type
  NSFontManagerPtr = ^NSFontManager;
{$endif}

{$ifdef TYPES}
type
  NSFontTraitMask = NSUInteger;
  NSFontTraitMaskPtr = ^NSFontTraitMask;

const
  NSItalicFontMask = $00000001;
  NSBoldFontMask = $00000002;
  NSUnboldFontMask = $00000004;
  NSNonStandardCharacterSetFontMask = $00000008;
  NSNarrowFontMask = $00000010;
  NSExpandedFontMask = $00000020;
  NSCondensedFontMask = $00000040;
  NSSmallCapsFontMask = $00000080;
  NSPosterFontMask = $00000100;
  NSCompressedFontMask = $00000200;
  NSFixedPitchFontMask = $00000400;
  NSUnitalicFontMask = $01000000;

type
  NSFontCollectionOptions = NSUInteger;
  NSFontCollectionOptionsPtr = ^NSFontCollectionOptions;

const
  NSFontCollectionApplicationOnlyMask = 1 shl 0;

type
  NSFontAction = NSUInteger;
  NSFontActionPtr = ^NSFontAction;

const
  NSNoFontChangeAction = 0;
  NSViaPanelFontAction = 1;
  NSAddTraitFontAction = 2;
  NSSizeUpFontAction = 3;
  NSSizeDownFontAction = 4;
  NSHeavierFontAction = 5;
  NSLighterFontAction = 6;
  NSRemoveTraitFontAction = 7;
{$endif}

{$ifdef CLASSES}

type
  NSFontManager = objcclass external (NSObject, NSMenuItemValidationProtocol)
  public
    class procedure setFontPanelFactory (factoryId: pobjc_class); message 'setFontPanelFactory:';
    class procedure setFontManagerFactory (factoryId: pobjc_class); message 'setFontManagerFactory:';
    class function sharedFontManager: NSFontManager; message 'sharedFontManager';
    function isMultiple: objcbool; message 'isMultiple';
    function selectedFont: NSFont; message 'selectedFont';
    procedure setSelectedFont_isMultiple (fontObj: NSFont; flag: objcbool); message 'setSelectedFont:isMultiple:';
    procedure setFontMenu (newMenu: NSMenu); message 'setFontMenu:';
    function fontMenu (create_: objcbool): NSMenu; message 'fontMenu:';
    function fontPanel (create_: objcbool): NSFontPanel; message 'fontPanel:';
    function fontWithFamily_traits_weight_size (family: NSString; traits: NSFontTraitMask; weight: NSInteger; size: CGFloat): NSFont; message 'fontWithFamily:traits:weight:size:';
    function traitsOfFont (fontObj: NSFont): NSFontTraitMask; message 'traitsOfFont:';
    function weightOfFont (fontObj: NSFont): NSInteger; message 'weightOfFont:';
    function availableFonts: NSArray; message 'availableFonts';
    function availableFontFamilies: NSArray; message 'availableFontFamilies';
    function availableMembersOfFontFamily (fam: NSString): NSArray; message 'availableMembersOfFontFamily:';
    function convertFont (fontObj: NSFont): NSFont; message 'convertFont:';
    function convertFont_toSize (fontObj: NSFont; size: CGFloat): NSFont; message 'convertFont:toSize:';
    function convertFont_toFace (fontObj: NSFont; typeface: NSString): NSFont; message 'convertFont:toFace:';
    function convertFont_toFamily (fontObj: NSFont; family: NSString): NSFont; message 'convertFont:toFamily:';
    function convertFont_toHaveTrait (fontObj: NSFont; trait: NSFontTraitMask): NSFont; message 'convertFont:toHaveTrait:';
    function convertFont_toNotHaveTrait (fontObj: NSFont; trait: NSFontTraitMask): NSFont; message 'convertFont:toNotHaveTrait:';
    function convertWeight_ofFont (upFlag: objcbool; fontObj: NSFont): NSFont; message 'convertWeight:ofFont:';
    procedure setEnabled(newValue: objcbool); message 'setEnabled:';
    function isEnabled: objcbool; message 'isEnabled';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setDelegate(newValue: id); message 'setDelegate:'; deprecated 'NSFontManager doesn''t have any delegate method. This property should not be used.';
    function delegate: id; message 'delegate'; deprecated 'NSFontManager doesn''t have any delegate method. This property should not be used.';
    function sendAction: objcbool; message 'sendAction';
    function localizedNameForFamily_face (family: NSString; faceKey: NSString): NSString; message 'localizedNameForFamily:face:';
    procedure setSelectedAttributes_isMultiple (attributes: NSDictionary; flag: objcbool); message 'setSelectedAttributes:isMultiple:';
    function convertAttributes (attributes: NSDictionary): NSDictionary; message 'convertAttributes:';
    function availableFontNamesMatchingFontDescriptor (descriptor: NSFontDescriptor): NSArray; message 'availableFontNamesMatchingFontDescriptor:'; deprecated 'Use -[NSFontDescriptor matchingFontDescriptorsWithMandatoryKeys:] instead';
    function collectionNames: NSArray; message 'collectionNames'; deprecated 'Use +[NSFontCollection allFontCollectionNames] instead';
    function fontDescriptorsInCollection (collectionNames_: NSString): NSArray; message 'fontDescriptorsInCollection:'; deprecated 'Use -[NSFontCollection matchingDescriptors] instead';
    function addCollection_options (collectionName: NSString; collectionOptions: NSFontCollectionOptions): objcbool; message 'addCollection:options:'; deprecated 'Use +[NSFontCollection showFontCollection:withName:visibility:name:] instead';
    function removeCollection (collectionName: NSString): objcbool; message 'removeCollection:'; deprecated 'Use +[NSFontCollection hideFontCollectionWithName:visibility:error:] instead';
    procedure addFontDescriptors_toCollection (descriptors: NSArray; collectionName: NSString); message 'addFontDescriptors:toCollection:'; deprecated 'Use -[NSMutableFontCollection addQueryForDescriptors:] instead';
    procedure removeFontDescriptor_fromCollection (descriptor: NSFontDescriptor; collection: NSString); message 'removeFontDescriptor:fromCollection:'; deprecated 'Use -[NSMutableFontCollection removeQueryForDescriptors:] instead';
    function currentFontAction: NSFontAction; message 'currentFontAction'; { available in macos  }
    function convertFontTraits (traits: NSFontTraitMask): NSFontTraitMask; message 'convertFontTraits:'; { available in macos  }
    procedure setTarget(newValue: id); message 'setTarget:'; { available in macos  }
    function target: id; message 'target'; { available in macos  }

    { Adopted protocols }
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
  end;


type
  NSFontManagerMenuActionMethods = objccategory external (NSFontManager)
    function fontNamed_hasTraits (fName: NSString; someTraits: NSFontTraitMask): objcbool; message 'fontNamed:hasTraits:';
    function availableFontNamesWithTraits (someTraits: NSFontTraitMask): NSArray; message 'availableFontNamesWithTraits:';
    procedure addFontTrait (sender: id); message 'addFontTrait:';
    procedure removeFontTrait (sender: id); message 'removeFontTrait:';
    procedure modifyFontViaPanel (sender: id); message 'modifyFontViaPanel:';
    procedure modifyFont (sender: id); message 'modifyFont:';
    procedure orderFrontFontPanel (sender: id); message 'orderFrontFontPanel:';
    procedure orderFrontStylesPanel (sender: id); message 'orderFrontStylesPanel:';
  end;

type
  NSFontManagerDelegate = objccategory external (NSObject)
    function fontManager_willIncludeFont (sender: id; fontName: NSString): objcbool; message 'fontManager:willIncludeFont:'; deprecated 'Use NSFontCollection for providing filtered font lists';
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSFontManagerResponderMethod = objccategory external (NSObject)
    procedure changeFont (sender: id); message 'changeFont:'; deprecated 'This is now an optional method of the NSFontChanging protocol.';
  end;
{$endif}

{$endif}
