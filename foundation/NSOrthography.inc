{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSOrthography.h }

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
    function initWithDominantScript_languageMap (script: NSString; map: NSDictionary): id; message 'initWithDominantScript:languageMap:'; { available in macos , ios , watchos , tvos  }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  NSOrthographyExtended = objccategory external (NSOrthography)
    function languagesForScript (script: NSString): NSArray; message 'languagesForScript:'; { available in macos , ios , watchos , tvos  }
    function dominantLanguageForScript (script: NSString): NSString; message 'dominantLanguageForScript:'; { available in macos , ios , watchos , tvos  }
    function dominantLanguage: NSString; message 'dominantLanguage'; { available in macos , ios , watchos , tvos  }
    function allScripts: NSArray; message 'allScripts'; { available in macos , ios , watchos , tvos  }
    function allLanguages: NSArray; message 'allLanguages'; { available in macos , ios , watchos , tvos  }
    class function defaultOrthographyForLanguage (language: NSString): id; message 'defaultOrthographyForLanguage:'; { available in macosx , ios , watchos , tvos  }
  end;

type
  NSOrthographyCreation = objccategory external (NSOrthography)
    class function orthographyWithDominantScript_languageMap (script: NSString; map: NSDictionary): id; message 'orthographyWithDominantScript:languageMap:'; { available in macos , ios , watchos , tvos  }
  end;
{$endif}

