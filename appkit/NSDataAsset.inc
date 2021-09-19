{ Parsed from AppKit.framework NSDataAsset.h }

{$ifdef TYPES}
type
  NSDataAssetPtr = ^NSDataAsset;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  NSDataAssetName = NSString { available in ios 9.0, macos 10.11, tvos 9.0, watchos 2.0 };
  NSDataAssetNamePtr = ^NSDataAssetName { available in ios 9.0, macos 10.11, tvos 9.0, watchos 2.0 };
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
