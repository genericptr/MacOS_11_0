{ Parsed from Photos.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Photos.framework/Headers/PHCloudIdentifier.h }

{$ifdef TYPES}
type
  PHCloudIdentifierPtr = ^PHCloudIdentifier;
{$endif}

{$ifdef CLASSES}

type
  PHCloudIdentifier = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    class function notFoundIdentifier: PHCloudIdentifier; message 'notFoundIdentifier';
    function stringValue: NSString; message 'stringValue';
    function initWithStringValue (stringValue_: NSString): id; message 'initWithStringValue:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;


type
  CloudIdentifiers = objccategory external (PHPhotoLibrary)
    function localIdentifiersForCloudIdentifiers (cloudIdentifiers: NSArray): NSArray; message 'localIdentifiersForCloudIdentifiers:';
    function cloudIdentifiersForLocalIdentifiers (localIdentifiers: NSArray): NSArray; message 'cloudIdentifiersForLocalIdentifiers:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PHLocalIdentifierNotFound: NSString; cvar; external;
{$endif}

