{ Parsed from AppKit.framework NSPrinter.h }

{$ifdef TYPES}
type
  NSPrinterPtr = ^NSPrinter;
{$endif}

{$ifdef TYPES}
type
  NSPrinterTableStatus = NSUInteger;
  NSPrinterTableStatusPtr = ^NSPrinterTableStatus;

const
  NSPrinterTableOK = 0;
  NSPrinterTableNotFound = 1;
  NSPrinterTableError = 2;

type
  NSPrinterTypeName = NSString;
  NSPrinterTypeNamePtr = ^NSPrinterTypeName;
  NSPrinterPaperName = NSString;
  NSPrinterPaperNamePtr = ^NSPrinterPaperName;
{$endif}

{$ifdef CLASSES}

type
  NSPrinter = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    class function printerNames: NSArray; message 'printerNames';
    class function printerTypes: NSArray; message 'printerTypes';
    class function printerWithName (name: NSString): NSPrinter; message 'printerWithName:';
    class function printerWithType (type_: NSPrinterTypeName): NSPrinter; message 'printerWithType:';
    function name: NSString; message 'name';
    function type_: NSPrinterTypeName; message 'type';
    function languageLevel: NSInteger; message 'languageLevel';
    function pageSizeForPaper (paperName: NSPrinterPaperName): NSSize; message 'pageSizeForPaper:';
    function deviceDescription: NSDictionary; message 'deviceDescription';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;


type
  NSPrinter_NSDeprecated = objccategory external name 'NSDeprecated' (NSPrinter)
    function statusForTable (tableName: NSString): NSPrinterTableStatus; message 'statusForTable:'; deprecated;
    function isKey_inTable (key: NSString; table: NSString): objcbool; message 'isKey:inTable:'; deprecated;
    function booleanForKey_inTable (key: NSString; table: NSString): objcbool; message 'booleanForKey:inTable:'; deprecated;
    function floatForKey_inTable (key: NSString; table: NSString): single; message 'floatForKey:inTable:'; deprecated;
    function intForKey_inTable (key: NSString; table: NSString): cint; message 'intForKey:inTable:'; deprecated;
    function rectForKey_inTable (key: NSString; table: NSString): NSRect; message 'rectForKey:inTable:'; deprecated;
    function sizeForKey_inTable (key: NSString; table: NSString): NSSize; message 'sizeForKey:inTable:'; deprecated;
    function stringForKey_inTable (key: NSString; table: NSString): NSString; message 'stringForKey:inTable:'; deprecated;
    function stringListForKey_inTable (key: NSString; table: NSString): NSArray; message 'stringListForKey:inTable:'; deprecated;
    function imageRectForPaper (paperName: NSString): NSRect; message 'imageRectForPaper:'; deprecated;
    function acceptsBinary: objcbool; message 'acceptsBinary'; deprecated;
    function isColor: objcbool; message 'isColor'; deprecated;
    function isFontAvailable (faceName: NSString): objcbool; message 'isFontAvailable:'; deprecated;
    function isOutputStackInReverseOrder: objcbool; message 'isOutputStackInReverseOrder'; deprecated;
    class function printerWithName_domain_includeUnavailable (name_: NSString; domain: NSString; flag: objcbool): NSPrinter; message 'printerWithName:domain:includeUnavailable:'; deprecated;
    function domain: NSString; message 'domain'; deprecated;
    function host: NSString; message 'host'; deprecated;
    function note: NSString; message 'note'; deprecated;
  end;
{$endif}

