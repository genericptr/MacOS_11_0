{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSNib.h }

{$ifdef TYPES}
type
  NSNibPtr = ^NSNib;
{$endif}

{$ifdef TYPES}
type
  NSNibName = NSString;
  NSNibNamePtr = ^NSNibName;
{$endif}

{$ifdef CLASSES}

type
  NSNib = objcclass external (NSObject, NSCodingProtocol)
  public
    function initWithNibNamed_bundle (nibName: NSNibName; bundle: NSBundle): id; message 'initWithNibNamed:bundle:';
    function initWithNibData_bundle (nibData: NSData; bundle: NSBundle): id; message 'initWithNibData:bundle:'; { available in macos  }
    function instantiateWithOwner_topLevelObjects (owner: id; topLevelObjects: NSArrayPtr): objcbool; message 'instantiateWithOwner:topLevelObjects:'; { available in macos  }

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;


type
  NSNib_NSDeprecated = objccategory external name 'NSDeprecated' (NSNib)
    function initWithContentsOfURL (nibFileURL: NSURL): id; message 'initWithContentsOfURL:'; deprecated;
    function instantiateNibWithExternalNameTable (externalNameTable: NSDictionary): objcbool; message 'instantiateNibWithExternalNameTable:'; deprecated;
    function instantiateNibWithOwner_topLevelObjects (owner: id; topLevelObjects: NSArrayPtr): objcbool; message 'instantiateNibWithOwner:topLevelObjects:'; deprecated;
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSNibOwner: NSString deprecated; cvar; external;
  NSNibTopLevelObjects: NSString deprecated; cvar; external;
{$endif}

