{ Parsed from Foundation.framework NSItemProvider.h }

{$ifdef CALLBACKS}
type
  NSItemProviderLoadDataWithTypeIdentifierCallback = reference to procedure (data: NSData; error: NSErrorPtr); cblock; cdecl;
  NSItemProviderRegisterDataRepresentationForTypeIdentifierCallback = reference to function (param1: OpaqueCBlock): NSProgress; cblock; cdecl;
  NSItemProviderRegisterFileRepresentationForTypeIdentifierCallback = reference to function (param1: OpaqueCBlock): NSProgress; cblock; cdecl;
  NSItemProviderLoadDataRepresentationForTypeIdentifierCallback = reference to procedure (data: NSData; error: NSErrorPtr); cblock; cdecl;
  NSItemProviderLoadFileRepresentationForTypeIdentifierCallback = reference to procedure (url: NSURL; error: NSErrorPtr); cblock; cdecl;
  NSItemProviderLoadInPlaceFileRepresentationForTypeIdentifierCallback = reference to procedure (url: NSURL; isInPlace: objcbool; error: NSErrorPtr); cblock; cdecl;
  NSItemProviderRegisterObjectOfClassCallback = reference to function (param1: OpaqueCBlock): NSProgress; cblock; cdecl;
  NSItemProviderLoadObjectOfClassCallback = reference to procedure (object_: NSItemProviderReadingProtocol; error: NSErrorPtr); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSItemProviderPtr = ^NSItemProvider;
  NSItemProviderWritingProtocolPtr = ^NSItemProviderWritingProtocol;
  NSItemProviderReadingProtocolPtr = ^NSItemProviderReadingProtocol;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef TYPES}
type
  NSItemProviderRepresentationVisibility = NSInteger;
  NSItemProviderRepresentationVisibilityPtr = ^NSItemProviderRepresentationVisibility;

const
  NSItemProviderRepresentationVisibilityAll = 0;
  NSItemProviderRepresentationVisibilityTeam = 1 { unavailable in macos };
  NSItemProviderRepresentationVisibilityGroup = 2 { unavailable in ios, watchos, tvos };
  NSItemProviderRepresentationVisibilityOwnProcess = 3;

type
  NSItemProviderFileOptions = NSInteger;
  NSItemProviderFileOptionsPtr = ^NSItemProviderFileOptions;

const
  NSItemProviderFileOptionOpenInPlace = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  NSItemProviderWritingProtocol = objcprotocol external name 'NSItemProviderWriting' (NSObjectProtocol)
    class function writableTypeIdentifiersForItemProvider: NSArray; message 'writableTypeIdentifiersForItemProvider';
  optional
    function writableTypeIdentifiersForItemProvider_: NSArray; message 'writableTypeIdentifiersForItemProvider';
    class function itemProviderVisibilityForRepresentationWithTypeIdentifier (typeIdentifier: NSString): NSItemProviderRepresentationVisibility; message 'itemProviderVisibilityForRepresentationWithTypeIdentifier:';
    function itemProviderVisibilityForRepresentationWithTypeIdentifier_ (typeIdentifier: NSString): NSItemProviderRepresentationVisibility; message 'itemProviderVisibilityForRepresentationWithTypeIdentifier:';
  required
    function loadDataWithTypeIdentifier_forItemProviderCompletionHandler (typeIdentifier: NSString; completionHandler: NSItemProviderLoadDataWithTypeIdentifierCallback): NSProgress; message 'loadDataWithTypeIdentifier:forItemProviderCompletionHandler:';
  end;

type
  NSItemProviderReadingProtocol = objcprotocol external name 'NSItemProviderReading' (NSObjectProtocol)
    class function readableTypeIdentifiersForItemProvider: NSArray; message 'readableTypeIdentifiersForItemProvider';
    class function objectWithItemProviderData_typeIdentifier_error (data: NSData; typeIdentifier: NSString; outError: NSErrorPtr): id; message 'objectWithItemProviderData:typeIdentifier:error:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSItemProviderCompletionHandler = reference to procedure (item: id; error: NSErrorPtr); cblock; cdecl;
  NSItemProviderLoadHandler = reference to procedure (completionHandler: NSItemProviderCompletionHandler; expectedValueClass: pobjc_class; options: NSDictionary); cblock; cdecl;
{$endif}

{$ifdef CLASSES}

type
  NSItemProvider = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure registerDataRepresentationForTypeIdentifier_visibility_loadHandler (typeIdentifier: NSString; visibility: NSItemProviderRepresentationVisibility; loadHandler: NSItemProviderRegisterDataRepresentationForTypeIdentifierCallback); message 'registerDataRepresentationForTypeIdentifier:visibility:loadHandler:'; { available in macos , ios , watchos , tvos  }
    procedure registerFileRepresentationForTypeIdentifier_fileOptions_visibility_loadHandler (typeIdentifier: NSString; fileOptions: NSItemProviderFileOptions; visibility: NSItemProviderRepresentationVisibility; loadHandler: NSItemProviderRegisterFileRepresentationForTypeIdentifierCallback); message 'registerFileRepresentationForTypeIdentifier:fileOptions:visibility:loadHandler:'; { available in macos , ios , watchos , tvos  }
    function registeredTypeIdentifiers: NSArray; message 'registeredTypeIdentifiers';
    function registeredTypeIdentifiersWithFileOptions (fileOptions: NSItemProviderFileOptions): NSArray; message 'registeredTypeIdentifiersWithFileOptions:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function hasItemConformingToTypeIdentifier (typeIdentifier: NSString): objcbool; message 'hasItemConformingToTypeIdentifier:';
    function hasRepresentationConformingToTypeIdentifier_fileOptions (typeIdentifier: NSString; fileOptions: NSItemProviderFileOptions): objcbool; message 'hasRepresentationConformingToTypeIdentifier:fileOptions:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function loadDataRepresentationForTypeIdentifier_completionHandler (typeIdentifier: NSString; completionHandler: NSItemProviderLoadDataRepresentationForTypeIdentifierCallback): NSProgress; message 'loadDataRepresentationForTypeIdentifier:completionHandler:'; { available in macos , ios , watchos , tvos  }
    function loadFileRepresentationForTypeIdentifier_completionHandler (typeIdentifier: NSString; completionHandler: NSItemProviderLoadFileRepresentationForTypeIdentifierCallback): NSProgress; message 'loadFileRepresentationForTypeIdentifier:completionHandler:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function loadInPlaceFileRepresentationForTypeIdentifier_completionHandler (typeIdentifier: NSString; completionHandler: NSItemProviderLoadInPlaceFileRepresentationForTypeIdentifierCallback): NSProgress; message 'loadInPlaceFileRepresentationForTypeIdentifier:completionHandler:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    procedure setSuggestedName(newValue: NSString); message 'setSuggestedName:'; { unavailable in watchos, tvos }
    function suggestedName: NSString; message 'suggestedName'; { unavailable in watchos, tvos }
    function initWithObject (object_: id): id; message 'initWithObject:'; { available in macos 10.14, ios 11.0 }
    procedure registerObject_visibility (object_: id; visibility: NSItemProviderRepresentationVisibility); message 'registerObject:visibility:'; { available in macos 10.14, ios 11.0 }
    procedure registerObjectOfClass_visibility_loadHandler (aClass: pobjc_class; visibility: NSItemProviderRepresentationVisibility; loadHandler: NSItemProviderRegisterObjectOfClassCallback); message 'registerObjectOfClass:visibility:loadHandler:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function canLoadObjectOfClass (aClass: pobjc_class): objcbool; message 'canLoadObjectOfClass:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function loadObjectOfClass_completionHandler (aClass: pobjc_class; completionHandler: NSItemProviderLoadObjectOfClassCallback): NSProgress; message 'loadObjectOfClass:completionHandler:'; { available in macos 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
    function initWithItem_typeIdentifier (item: id; typeIdentifier: NSString): id; message 'initWithItem:typeIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function initWithContentsOfURL (fileURL: NSURL): id; message 'initWithContentsOfURL:';
    procedure registerItemForTypeIdentifier_loadHandler (typeIdentifier: NSString; loadHandler: NSItemProviderLoadHandler); message 'registerItemForTypeIdentifier:loadHandler:';
    procedure loadItemForTypeIdentifier_options_completionHandler (typeIdentifier: NSString; options: NSDictionary; completionHandler: NSItemProviderCompletionHandler); message 'loadItemForTypeIdentifier:options:completionHandler:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSItemProviderPreferredImageSizeKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSPreviewSupport = objccategory external (NSItemProvider)
    procedure setPreviewImageHandler(newValue: NSItemProviderLoadHandler); message 'setPreviewImageHandler:'; { available in macos , ios , watchos , tvos  }
    function previewImageHandler: NSItemProviderLoadHandler; message 'previewImageHandler'; { available in macos , ios , watchos , tvos  }
    procedure loadPreviewImageWithOptions_completionHandler (options: NSDictionary; completionHandler: NSItemProviderCompletionHandler); message 'loadPreviewImageWithOptions:completionHandler:'; { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSExtensionJavaScriptPreprocessingResultsKey: NSString { available in macos , ios , watchos , tvos  }; cvar; external;
  NSExtensionJavaScriptFinalizeArgumentKey: NSString { unavailable in macos }; cvar; external;
  NSItemProviderErrorDomain: NSString { available in macos 10.10, ios 8.0, watchos 2.0, tvos 9.0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSItemProviderErrorCode = NSInteger;
  NSItemProviderErrorCodePtr = ^NSItemProviderErrorCode;

const
  NSItemProviderUnknownError = -1;
  NSItemProviderItemUnavailableError = -1000;
  NSItemProviderUnexpectedValueClassError = -1100;
  NSItemProviderUnavailableCoercionError = -1200 { available in macos , ios , watchos , tvos  };
{$endif}

{$else}
{$ifdef PROTOCOLS}

type
  NSItemProviderReadingProtocol = objcprotocol external name 'NSItemProviderReading' (NSObjectProtocol)
  end;

type
  NSItemProviderWritingProtocol = objcprotocol external name 'NSItemProviderWriting' (NSObjectProtocol)
  end;
{$endif}

{$endif}
