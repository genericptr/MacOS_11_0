{ Parsed from AppKit.framework NSPasteboard.h }

{$ifdef TYPES}
type
  NSPasteboardPtr = ^NSPasteboard;
  NSPasteboardTypeOwnerProtocolPtr = ^NSPasteboardTypeOwnerProtocol;
  NSPasteboardWritingProtocolPtr = ^NSPasteboardWritingProtocol;
  NSPasteboardReadingProtocolPtr = ^NSPasteboardReadingProtocol;
{$endif}

{$ifdef TYPES}
type
  NSPasteboardType = NSString;
  NSPasteboardTypePtr = ^NSPasteboardType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPasteboardTypeString: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypePDF: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeTIFF: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypePNG: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeRTF: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeRTFD: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeHTML: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeTabularText: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeFont: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeRuler: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeColor: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeSound: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeMultipleTextSelection: NSPasteboardType { available in macos 10.6 }; cvar; external;
  NSPasteboardTypeTextFinderOptions: NSPasteboardType { available in macos 10.7 }; cvar; external;
  NSPasteboardTypeURL: NSPasteboardType { available in macos 10.13 }; cvar; external;
  NSPasteboardTypeFileURL: NSPasteboardType { available in macos 10.13 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSPasteboardName = NSString;
  NSPasteboardNamePtr = ^NSPasteboardName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPasteboardNameGeneral: NSPasteboardName { available in macos 10.13 }; cvar; external;
  NSPasteboardNameFont: NSPasteboardName { available in macos 10.13 }; cvar; external;
  NSPasteboardNameRuler: NSPasteboardName { available in macos 10.13 }; cvar; external;
  NSPasteboardNameFind: NSPasteboardName { available in macos 10.13 }; cvar; external;
  NSPasteboardNameDrag: NSPasteboardName { available in macos 10.13 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSPasteboardContentsOptions = NSUInteger;
  NSPasteboardContentsOptionsPtr = ^NSPasteboardContentsOptions;

const
  NSPasteboardContentsCurrentHostOnly = 1 shl 0;

type
  NSPasteboardReadingOptionKey = NSString;
  NSPasteboardReadingOptionKeyPtr = ^NSPasteboardReadingOptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSPasteboardURLReadingFileURLsOnlyKey: NSPasteboardReadingOptionKey { available in macos 10.6 }; cvar; external;
  NSPasteboardURLReadingContentsConformToTypesKey: NSPasteboardReadingOptionKey { available in macos 10.6 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  NSPasteboard = objcclass external (NSObject)
  public
    class function generalPasteboard: NSPasteboard; message 'generalPasteboard';
    class function pasteboardWithName (name: NSPasteboardName): NSPasteboard; message 'pasteboardWithName:';
    class function pasteboardWithUniqueName: NSPasteboard; message 'pasteboardWithUniqueName';
    function name: NSPasteboardName; message 'name';
    function changeCount: NSInteger; message 'changeCount';
    procedure releaseGlobally; message 'releaseGlobally';
    function prepareForNewContentsWithOptions (options: NSPasteboardContentsOptions): NSInteger; message 'prepareForNewContentsWithOptions:'; { available in macos 10.12 }
    function clearContents: NSInteger; message 'clearContents'; { available in macos 10.6 }
    function writeObjects (objects: NSArray): objcbool; message 'writeObjects:'; { available in macos 10.6 }
    function readObjectsForClasses_options (classArray: NSArray; options: NSDictionary): NSArray; message 'readObjectsForClasses:options:'; { available in macos 10.6 }
    function pasteboardItems: NSArray; message 'pasteboardItems'; { available in macos 10.6 }
    function indexOfPasteboardItem (pasteboardItem: NSPasteboardItem): NSUInteger; message 'indexOfPasteboardItem:'; { available in macos 10.6 }
    function canReadItemWithDataConformingToTypes (types: NSArray): objcbool; message 'canReadItemWithDataConformingToTypes:'; { available in macos 10.6 }
    function canReadObjectForClasses_options (classArray: NSArray; options: NSDictionary): objcbool; message 'canReadObjectForClasses:options:'; { available in macos 10.6 }
    function declareTypes_owner (newTypes: NSArray; newOwner: id): NSInteger; message 'declareTypes:owner:';
    function addTypes_owner (newTypes: NSArray; newOwner: id): NSInteger; message 'addTypes:owner:';
    function types: NSArray; message 'types';
    function availableTypeFromArray (types_: NSArray): NSPasteboardType; message 'availableTypeFromArray:';
    function setData_forType (data: NSData; dataType: NSPasteboardType): objcbool; message 'setData:forType:';
    function setPropertyList_forType (plist: id; dataType: NSPasteboardType): objcbool; message 'setPropertyList:forType:';
    function setString_forType (string_: NSString; dataType: NSPasteboardType): objcbool; message 'setString:forType:';
    function dataForType (dataType: NSPasteboardType): NSData; message 'dataForType:';
    function propertyListForType (dataType: NSPasteboardType): id; message 'propertyListForType:';
    function stringForType (dataType: NSPasteboardType): NSString; message 'stringForType:';
  end;


type
  FilterServices = objccategory external (NSPasteboard)
    class function typesFilterableTo (type_: NSPasteboardType): NSArray; message 'typesFilterableTo:';
    class function pasteboardByFilteringFile (filename: NSString): NSPasteboard; message 'pasteboardByFilteringFile:';
    class function pasteboardByFilteringData_ofType (data: NSData; type_: NSPasteboardType): NSPasteboard; message 'pasteboardByFilteringData:ofType:';
    class function pasteboardByFilteringTypesInPasteboard (pboard: NSPasteboard): NSPasteboard; message 'pasteboardByFilteringTypesInPasteboard:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPasteboardTypeOwnerProtocol = objcprotocol external name 'NSPasteboardTypeOwner' (NSObjectProtocol)
    procedure pasteboard_provideDataForType (sender: NSPasteboard; type_: NSPasteboardType); message 'pasteboard:provideDataForType:';
  optional
    procedure pasteboardChangedOwner (sender: NSPasteboard); message 'pasteboardChangedOwner:';
  end;
{$endif}

{$if (__swift__ < 40200)}
{$ifdef CLASSES}

type
  NSPasteboardOwner = objccategory external (NSObject)
    procedure pasteboard_provideDataForType (sender: NSPasteboard; type_: NSPasteboardType); message 'pasteboard:provideDataForType:'; deprecated 'This is now a method of the NSPasteboardTypeOwner protocol.';
    procedure pasteboardChangedOwner (sender: NSPasteboard); message 'pasteboardChangedOwner:'; deprecated 'This is now an optional method of the NSPasteboardTypeOwner protocol.';
  end;
{$endif}

{$endif}
{$ifdef TYPES}
type
  NSPasteboardWritingOptions = NSUInteger;
  NSPasteboardWritingOptionsPtr = ^NSPasteboardWritingOptions;

const
  NSPasteboardWritingPromised = 1 shl 9;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPasteboardWritingProtocol = objcprotocol external name 'NSPasteboardWriting' (NSObjectProtocol)
  required
    function writableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'writableTypesForPasteboard:';
  optional
    function writingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardWritingOptions; message 'writingOptionsForType:pasteboard:';
  required
    function pasteboardPropertyListForType (type_: NSPasteboardType): id; message 'pasteboardPropertyListForType:';
  end;
{$endif}

{$ifdef TYPES}
type
  NSPasteboardReadingOptions = NSUInteger;
  NSPasteboardReadingOptionsPtr = ^NSPasteboardReadingOptions;

const
  NSPasteboardReadingAsData = 0;
  NSPasteboardReadingAsString = 1 shl 0;
  NSPasteboardReadingAsPropertyList = 1 shl 1;
  NSPasteboardReadingAsKeyedArchive = 1 shl 2;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPasteboardReadingProtocol = objcprotocol external name 'NSPasteboardReading' (NSObjectProtocol)
  required
    class function readableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'readableTypesForPasteboard:';
  optional
    class function readingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardReadingOptions; message 'readingOptionsForType:pasteboard:';
  optional
    function initWithPasteboardPropertyList_ofType (propertyList: id; type_: NSPasteboardType): id; message 'initWithPasteboardPropertyList:ofType:';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSURL_NSPasteboardSupport = objccategory external name 'NSPasteboardSupport' (NSURL)
    class function URLFromPasteboard (pasteBoard: NSPasteboard): NSURL; message 'URLFromPasteboard:';
    procedure writeToPasteboard (pasteBoard: NSPasteboard); message 'writeToPasteboard:';
  end;

type
  NSPasteboardSupport = objccategory external (NSString)
  end;

type
  NSFileContents = objccategory external (NSPasteboard)
    function writeFileContents (filename: NSString): objcbool; message 'writeFileContents:';
    function readFileContentsType_toFile (type_: NSPasteboardType; filename: NSString): NSString; message 'readFileContentsType:toFile:';
    function writeFileWrapper (wrapper: NSFileWrapper): objcbool; message 'writeFileWrapper:';
    function readFileWrapper: NSFileWrapper; message 'readFileWrapper';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSFileContentsPboardType: NSPasteboardType; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function NSCreateFilenamePboardType(fileType: NSString): NSPasteboardType; cdecl; external;
function NSCreateFileContentsPboardType(fileType: NSString): NSPasteboardType; cdecl; external;
function NSGetFileType(pboardType: NSPasteboardType): NSString; cdecl; external;
function NSGetFileTypes(pboardTypes: NSArray): NSArray; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSStringPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeString'; cvar; external;
  NSFilenamesPboardType: NSPasteboardType deprecated 'Create multiple pasteboard items with NSPasteboardTypeFileURL or kUTTypeFileURL instead'; cvar; external;
  NSTIFFPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeTIFF'; cvar; external;
  NSRTFPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeRTF'; cvar; external;
  NSTabularTextPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeTabularText'; cvar; external;
  NSFontPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeFont'; cvar; external;
  NSRulerPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeRuler'; cvar; external;
  NSColorPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeColor'; cvar; external;
  NSRTFDPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeRTFD'; cvar; external;
  NSHTMLPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeHTML'; cvar; external;
  NSURLPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeURL'; cvar; external;
  NSPDFPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypePDF'; cvar; external;
  NSMultipleTextSelectionPboardType: NSPasteboardType deprecated 'replace with NSPasteboardTypeMultipleTextSelection'; cvar; external;
  NSPostScriptPboardType: NSPasteboardType deprecated 'in "@\"com.adobe.encapsulated-postscript\"", '; cvar; external;
  NSVCardPboardType: NSPasteboardType deprecated 'replace with kUTTypeVCard'; cvar; external;
  NSInkTextPboardType: NSPasteboardType deprecated 'replace with kUTTypeInkText'; cvar; external;
  NSFilesPromisePboardType: NSPasteboardType deprecated 'replace with kPasteboardTypeFileURLPromise'; cvar; external;
  NSPasteboardTypeFindPanelSearchOptions: NSPasteboardType deprecated 'replace with NSPasteboardTypeTextFinderOptions'; cvar; external;
  NSGeneralPboard: NSPasteboardName deprecated 'replace with NSPasteboardNameGeneral'; cvar; external;
  NSFontPboard: NSPasteboardName deprecated 'replace with NSPasteboardNameFont'; cvar; external;
  NSRulerPboard: NSPasteboardName deprecated 'replace with NSPasteboardNameRuler'; cvar; external;
  NSFindPboard: NSPasteboardName deprecated 'replace with NSPasteboardNameFind'; cvar; external;
  NSDragPboard: NSPasteboardName deprecated 'replace with NSPasteboardNameDrag'; cvar; external;
  NSPICTPboardType: NSPasteboardType deprecated; cvar; external;
{$endif}

