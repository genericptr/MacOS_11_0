{ Parsed from Foundation.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Foundation.framework/Headers/NSScriptCommandDescription.h }

{$ifdef TYPES}
type
  NSScriptCommandDescriptionPtr = ^NSScriptCommandDescription;
{$endif}

{$ifdef CLASSES}

type
  NSScriptCommandDescription = objcclass external (NSObject, NSCodingProtocol)
  private
    _suiteName: NSString;
    _plistCommandName: NSString;
    _classAppleEventCode: FourCharCode;
    _idAppleEventCode: FourCharCode;
    _objcClassName: NSString;
    _resultTypeNameOrDescription: NSObjectPtr;
    _plistResultTypeAppleEventCode: FourCharCode;
    _moreVars: id;
  public
    function init: id; message 'init'; { unavailable in macos, ios, watchos, tvos }
    function initWithSuiteName_commandName_dictionary (suiteName: NSString; commandName: NSString; commandDeclaration: NSDictionary): id; message 'initWithSuiteName:commandName:dictionary:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (inCoder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function suiteName: NSString; message 'suiteName';
    function commandName: NSString; message 'commandName';
    function appleEventClassCode: FourCharCode; message 'appleEventClassCode';
    function appleEventCode: FourCharCode; message 'appleEventCode';
    function commandClassName: NSString; message 'commandClassName';
    function returnType: NSString; message 'returnType';
    function appleEventCodeForReturnType: FourCharCode; message 'appleEventCodeForReturnType';
    function argumentNames: NSArray; message 'argumentNames';
    function typeForArgumentWithName (argumentName: NSString): NSString; message 'typeForArgumentWithName:';
    function appleEventCodeForArgumentWithName (argumentName: NSString): FourCharCode; message 'appleEventCodeForArgumentWithName:';
    function isOptionalArgumentWithName (argumentName: NSString): objcbool; message 'isOptionalArgumentWithName:';
    function createCommandInstance: NSScriptCommand; message 'createCommandInstance';
    function createCommandInstanceWithZone (zone: NSZonePtr): NSScriptCommand; message 'createCommandInstanceWithZone:';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

