{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSFetchIndexElementDescription.h }

{$ifdef TYPES}
type
  NSFetchIndexElementDescriptionPtr = ^NSFetchIndexElementDescription;
{$endif}

{$ifdef TYPES}
type
  NSFetchIndexElementType = NSUInteger;
  NSFetchIndexElementTypePtr = ^NSFetchIndexElementType;

const
  NSFetchIndexElementTypeBinary = 0;
  NSFetchIndexElementTypeRTree = 1;
{$endif}

{$ifdef CLASSES}

type
  NSFetchIndexElementDescription = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  private
  public
    function initWithProperty_collationType (property_: NSPropertyDescription; collationType: NSFetchIndexElementType): id; message 'initWithProperty:collationType:';
    function property_: NSPropertyDescription; message 'property';
    function propertyName: NSString; message 'propertyName';
    procedure setCollationType(newValue: NSFetchIndexElementType); message 'setCollationType:';
    function collationType: NSFetchIndexElementType; message 'collationType';
    procedure setAscending(newValue: objcbool); message 'setAscending:';
    function isAscending: objcbool; message 'isAscending';
    function indexDescription: NSFetchIndexDescription; message 'indexDescription';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

