{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSFetchIndexDescription.h }

{$ifdef TYPES}
type
  NSFetchIndexDescriptionPtr = ^NSFetchIndexDescription;
{$endif}

{$ifdef CLASSES}

type
  NSFetchIndexDescription = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  private
  public
    function initWithName_elements (name: NSString; elements: NSArray): id; message 'initWithName:elements:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setElements(newValue: NSArray); message 'setElements:';
    function elements: NSArray; message 'elements';
    function entity: NSEntityDescription; message 'entity';
    procedure setPartialIndexPredicate(newValue: NSPredicate); message 'setPartialIndexPredicate:';
    function partialIndexPredicate: NSPredicate; message 'partialIndexPredicate';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

