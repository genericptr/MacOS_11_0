{ Parsed from CoreData.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreData.framework/Headers/NSQueryGenerationToken.h }

{$ifdef TYPES}
type
  NSQueryGenerationTokenPtr = ^NSQueryGenerationToken;
{$endif}

{$ifdef CLASSES}

type
  NSQueryGenerationToken = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function currentQueryGenerationToken: NSQueryGenerationToken; message 'currentQueryGenerationToken';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

