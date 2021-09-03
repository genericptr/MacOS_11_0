{ Parsed from CloudKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CloudKit.framework/Headers/CKAsset.h }

{$ifdef TYPES}
type
  CKAssetPtr = ^CKAsset;
{$endif}

{$ifdef CLASSES}

type
  CKAsset = objcclass external (NSObject)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithFileURL (fileURL: NSURL): id; message 'initWithFileURL:';
    function fileURL: NSURL; message 'fileURL';
  end;
{$endif}

