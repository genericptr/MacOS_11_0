{ Parsed from Foundation.framework NSOrthography.h }

{$ifdef TYPES}
type
  NSOrthographyPtr = ^NSOrthography;
{$endif}

{$ifdef CLASSES}

type
  NSOrthography = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function dominantScript: NSString; message 'dominantScript';
    function languageMap: NSDictionary; message 'languageMap';
    function initWithDominantScript_languageMap (script: NSString; map: NSDictionary): id; message 'initWithDominantScript:languageMap:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSOrthographyExtended = objccategory external (NSOrthography)
    function languagesForScript (script: NSString): NSArray; message 'languagesForScript:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function dominantLanguageForScript (script: NSString): NSString; message 'dominantLanguageForScript:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function dominantLanguage: NSString; message 'dominantLanguage'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function allScripts: NSArray; message 'allScripts'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    function allLanguages: NSArray; message 'allLanguages'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
    class function defaultOrthographyForLanguage (language: NSString): id; message 'defaultOrthographyForLanguage:'; { available in macosx 10.13, ios 11.0, watchos 4.0, tvos 11.0 }
  end;

type
  NSOrthographyCreation = objccategory external (NSOrthography)
    class function orthographyWithDominantScript_languageMap (script: NSString; map: NSDictionary): id; message 'orthographyWithDominantScript:languageMap:'; { available in macos 10.6, ios 4.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

