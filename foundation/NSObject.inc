{ Parsed from Foundation.framework NSObject.h }

{ Types from NSDeprecatedMethods }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSCopyingProtocolPtr = ^NSCopyingProtocol;
  NSMutableCopyingProtocolPtr = ^NSMutableCopyingProtocol;
  NSCodingProtocolPtr = ^NSCodingProtocol;
  NSSecureCodingProtocolPtr = ^NSSecureCodingProtocol;
  NSDiscardableContentProtocolPtr = ^NSDiscardableContentProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSCopyingProtocol = objcprotocol external name 'NSCopying'
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;

type
  NSMutableCopyingProtocol = objcprotocol external name 'NSMutableCopying'
    function mutableCopyWithZone (zone: NSZonePtr): id; message 'mutableCopyWithZone:';
  end;

type
  NSCodingProtocol = objcprotocol external name 'NSCoding'
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;

type
  NSSecureCodingProtocol = objcprotocol external name 'NSSecureCoding' (NSCodingProtocol)
  required
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSCoderMethods = objccategory external (NSObject)
    class function version: NSInteger; message 'version';
    class procedure setVersion (aVersion: NSInteger); message 'setVersion:';
    function classForCoder: pobjc_class; message 'classForCoder';
    function replacementObjectForCoder (coder: NSCoder): id; message 'replacementObjectForCoder:';
    function awakeAfterUsingCoder (coder: NSCoder): id; message 'awakeAfterUsingCoder:';
  end;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  NSDeprecatedMethods = objccategory external (NSObject)
  end;
{$endif}

{$endif}
{$ifdef PROTOCOLS}

type
  NSDiscardableContentProtocol = objcprotocol external name 'NSDiscardableContent'
  required
    function beginContentAccess: objcbool; message 'beginContentAccess';
    procedure endContentAccess; message 'endContentAccess';
    procedure discardContentIfPossible; message 'discardContentIfPossible';
    function isContentDiscarded: objcbool; message 'isContentDiscarded';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSDiscardableContentProxy = objccategory external (NSObject)
    function autoContentAccessingProxy: id; message 'autoContentAccessingProxy'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$ifdef FUNCTIONS}
function NSAllocateObject(aClass: pobjc_class; extraBytes: NSUInteger; zone: NSZonePtr): id; cdecl; external;
function NSDeallocateObject(object_: id): pointer; cdecl; external;
function NSCopyObject(object_: id; extraBytes: NSUInteger; zone: NSZonePtr): id; cdecl; external; deprecated 'Not supported';
function NSShouldRetainWithZone(anObject: id; requestedZone: NSZonePtr): objcbool; cdecl; external;
function NSIncrementExtraRefCount(object_: id): pointer; cdecl; external;
function NSDecrementExtraRefCountWasZero(object_: id): objcbool; cdecl; external;
function NSExtraRefCount(object_: id): NSUInteger; cdecl; external;
{$endif}

