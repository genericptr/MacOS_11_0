{ Parsed from ImageKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Headers/IKFilterUI.h }

{$ifdef TYPES}
type
  IKFilterCustomUIProviderProtocolPtr = ^IKFilterCustomUIProviderProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  IKUISizeFlavor: NSString; cvar; external;
  IKUISizeMini: NSString; cvar; external;
  IKUISizeSmall: NSString; cvar; external;
  IKUISizeRegular: NSString; cvar; external;
  IKUImaxSize: NSString; cvar; external;
  IKUIFlavorAllowFallback: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  IKFilterUIAddition = objccategory external (CIFilter)
    function viewForUIConfiguration_excludedKeys (inUIConfiguration: NSDictionary; inKeys: NSArray): IKFilterUIView; message 'viewForUIConfiguration:excludedKeys:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  IKFilterCustomUIProviderProtocol = objcprotocol external name 'IKFilterCustomUIProvider'
    function provideViewForUIConfiguration_excludedKeys (inUIConfiguration: NSDictionary; inKeys: NSArray): IKFilterUIView; message 'provideViewForUIConfiguration:excludedKeys:';
  end;
{$endif}

