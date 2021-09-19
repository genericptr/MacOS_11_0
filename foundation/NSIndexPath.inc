{ Parsed from Foundation.framework NSIndexPath.h }

{$ifdef TYPES}
type
  NSIndexPathPtr = ^NSIndexPath;
{$endif}

{$ifdef CLASSES}

type
  NSIndexPath = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  private
    _indexes: NSUIntegerPtr;
    {$if  not defined(__OBJC2__)}
    _hash: NSUInteger;
    {$endif}
    _length: NSUInteger;
    _reserved: pointer;
  public
    class function indexPathWithIndex (index: NSUInteger): id; message 'indexPathWithIndex:';
    class function indexPathWithIndexes_length (indexes: NSUIntegerPtr { variable size array of NSUInteger }; length: NSUInteger): id; message 'indexPathWithIndexes:length:';
    function initWithIndexes_length (indexes: NSUIntegerPtr { variable size array of NSUInteger }; length: NSUInteger): id; message 'initWithIndexes:length:'; { NS_DESIGNATED_INITIALIZER }
    function initWithIndex (index: NSUInteger): id; message 'initWithIndex:';
    function indexPathByAddingIndex (index: NSUInteger): NSIndexPath; message 'indexPathByAddingIndex:';
    function indexPathByRemovingLastIndex: NSIndexPath; message 'indexPathByRemovingLastIndex';
    function indexAtPosition (position: NSUInteger): NSUInteger; message 'indexAtPosition:';
    function length: NSUInteger; message 'length';
    procedure getIndexes_range (indexes: NSUIntegerPtr; positionRange: NSRange); message 'getIndexes:range:'; { available in macos 10.9, ios 7.0, watchos 2.0, tvos 9.0 }
    function compare (otherObject: NSIndexPath): NSComparisonResult; message 'compare:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSIndexPath_NSDeprecated = objccategory external name 'NSDeprecated' (NSIndexPath)
    procedure getIndexes (indexes: NSUIntegerPtr); message 'getIndexes:'; deprecated 'replace with getIndexes:range:';
  end;
{$endif}

