{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSPasteboardItem.h }

{$ifdef TYPES}
type
  NSPasteboardItemPtr = ^NSPasteboardItem;
  NSPasteboardItemDataProviderProtocolPtr = ^NSPasteboardItemDataProviderProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSPasteboardItem = objcclass external (NSObject, NSPasteboardWritingProtocol, NSPasteboardReadingProtocol)
  public
    function types: NSArray; message 'types';
    function availableTypeFromArray (types_: NSArray): NSPasteboardType; message 'availableTypeFromArray:';
    function setDataProvider_forTypes (dataProvider: NSPasteboardItemDataProviderProtocol; types_: NSArray): objcbool; message 'setDataProvider:forTypes:';
    function setData_forType (data: NSData; type_: NSPasteboardType): objcbool; message 'setData:forType:';
    function setString_forType (string_: NSString; type_: NSPasteboardType): objcbool; message 'setString:forType:';
    function setPropertyList_forType (propertyList: id; type_: NSPasteboardType): objcbool; message 'setPropertyList:forType:';
    function dataForType (type_: NSPasteboardType): NSData; message 'dataForType:';
    function stringForType (type_: NSPasteboardType): NSString; message 'stringForType:';
    function propertyListForType (type_: NSPasteboardType): id; message 'propertyListForType:';

    { Adopted protocols }
    function initWithPasteboardPropertyList_ofType (propertyList: id; type_: NSPasteboardType): id; message 'initWithPasteboardPropertyList:ofType:';
    function pasteboardPropertyListForType (type_: NSPasteboardType): id; message 'pasteboardPropertyListForType:';
    class function readableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'readableTypesForPasteboard:';
    class function readingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardReadingOptions; message 'readingOptionsForType:pasteboard:';
    function writableTypesForPasteboard (pasteboard: NSPasteboard): NSArray; message 'writableTypesForPasteboard:';
    function writingOptionsForType_pasteboard (type_: NSPasteboardType; pasteboard: NSPasteboard): NSPasteboardWritingOptions; message 'writingOptionsForType:pasteboard:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSPasteboardItemDataProviderProtocol = objcprotocol external name 'NSPasteboardItemDataProvider' (NSObjectProtocol)
  required
    procedure pasteboard_item_provideDataForType (pasteboard: NSPasteboard; item: NSPasteboardItem; type_: NSPasteboardType); message 'pasteboard:item:provideDataForType:';
  optional
    procedure pasteboardFinishedWithDataProvider (pasteboard: NSPasteboard); message 'pasteboardFinishedWithDataProvider:';
  end;
{$endif}

