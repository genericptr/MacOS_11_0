{ Parsed from ModelIO.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/ModelIO.framework/Headers/MDLAssetResolver.h }

{$ifdef TYPES}
type
  MDLRelativeAssetResolverPtr = ^MDLRelativeAssetResolver;
  MDLPathAssetResolverPtr = ^MDLPathAssetResolver;
  MDLBundleAssetResolverPtr = ^MDLBundleAssetResolver;
  MDLAssetResolverProtocolPtr = ^MDLAssetResolverProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  MDLAssetResolverProtocol = objcprotocol external name 'MDLAssetResolver' (NSObjectProtocol)
    function canResolveAssetNamed (name: NSString): objcbool; message 'canResolveAssetNamed:';
    function resolveAssetNamed (name: NSString): NSURL; message 'resolveAssetNamed:';
  end;
{$endif}

{$ifdef CLASSES}

type
  MDLRelativeAssetResolver = objcclass external (NSObject, MDLAssetResolverProtocol)
  public
    function initWithAsset (asset: MDLAsset): id; message 'initWithAsset:';
    procedure setAsset(newValue: MDLAsset); message 'setAsset:';
    function asset: MDLAsset; message 'asset';

    { Adopted protocols }
    function canResolveAssetNamed (name: NSString): objcbool; message 'canResolveAssetNamed:';
    function resolveAssetNamed (name: NSString): NSURL; message 'resolveAssetNamed:';
  end;

type
  MDLPathAssetResolver = objcclass external (NSObject, MDLAssetResolverProtocol)
  public
    function initWithPath (path: NSString): id; message 'initWithPath:';
    procedure setPath(newValue: NSString); message 'setPath:';
    function path: NSString; message 'path';

    { Adopted protocols }
    function canResolveAssetNamed (name: NSString): objcbool; message 'canResolveAssetNamed:';
    function resolveAssetNamed (name: NSString): NSURL; message 'resolveAssetNamed:';
  end;

type
  MDLBundleAssetResolver = objcclass external (NSObject, MDLAssetResolverProtocol)
  public
    function initWithBundle (path: NSString): id; message 'initWithBundle:';
    procedure setPath(newValue: NSString); message 'setPath:';
    function path: NSString; message 'path';

    { Adopted protocols }
    function canResolveAssetNamed (name: NSString): objcbool; message 'canResolveAssetNamed:';
    function resolveAssetNamed (name: NSString): NSURL; message 'resolveAssetNamed:';
  end;
{$endif}

