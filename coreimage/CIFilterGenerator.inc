{ Parsed from CoreImage.framework CIFilterGenerator.h }

{$ifdef TYPES}
type
  CIFilterGeneratorPtr = ^CIFilterGenerator;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCIFilterGeneratorExportedKey: NSString { available in 10_5 }; cvar; external;
  kCIFilterGeneratorExportedKeyTargetObject: NSString { available in 10_5 }; cvar; external;
  kCIFilterGeneratorExportedKeyName: NSString { available in 10_5 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  CIFilterGenerator = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol, CIFilterConstructorProtocol)
  private
    _filterGeneratorStruct: CIFilterGeneratorStructPtr;
  public
    class function filterGenerator: CIFilterGenerator; message 'filterGenerator';
    class function filterGeneratorWithContentsOfURL (aURL: NSURL): CIFilterGenerator; message 'filterGeneratorWithContentsOfURL:';
    function initWithContentsOfURL (aURL: NSURL): id; message 'initWithContentsOfURL:';
    procedure connectObject_withKey_toObject_withKey (sourceObject: id; sourceKey: NSString; targetObject: id; targetKey: NSString); message 'connectObject:withKey:toObject:withKey:';
    procedure disconnectObject_withKey_toObject_withKey (sourceObject: id; sourceKey: NSString; targetObject: id; targetKey: NSString); message 'disconnectObject:withKey:toObject:withKey:';
    procedure exportKey_fromObject_withName (key: NSString; targetObject: id; exportedKeyName: NSString); message 'exportKey:fromObject:withName:';
    procedure removeExportedKey (exportedKeyName: NSString); message 'removeExportedKey:';
    function exportedKeys: NSDictionary; message 'exportedKeys';
    procedure setAttributes_forExportedKey (attributes: NSDictionary; key: NSString); message 'setAttributes:forExportedKey:';
    procedure setClassAttributes(newValue: NSDictionary); message 'setClassAttributes:';
    function classAttributes: NSDictionary; message 'classAttributes';
    function filter: CIFilter; message 'filter';
    procedure registerFilterName (name: NSString); message 'registerFilterName:';
    function writeToURL_atomically (aURL: NSURL; flag: objcbool): objcbool; message 'writeToURL:atomically:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function filterWithName (name: NSString): CIFilter; message 'filterWithName:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

