{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSDataAsset.h }

{$ifdef TYPES}
type
  NSDataAssetPtr = ^NSDataAsset;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  NSDataAssetName = NSString { available in ios , macos , tvos , watchos  };
  NSDataAssetNamePtr = ^NSDataAssetName { available in ios , macos , tvos , watchos  };
{$endif}

{$ifdef CLASSES}

type
  NSDataAsset = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: id; message 'init';
    function initWithName (name: NSDataAssetName): id; message 'initWithName:';
    function initWithName_bundle (name: NSDataAssetName; bundle: NSBundle): id; message 'initWithName:bundle:'; { NS_DESIGNATED_INITIALIZER }
    function name: NSDataAssetName; message 'name';
    function data: NSData; message 'data';
    function typeIdentifier: NSString; message 'typeIdentifier';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
