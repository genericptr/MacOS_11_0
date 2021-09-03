{ Parsed from CoreML.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/CoreML.framework/Headers/MLModelCollectionEntry.h }

{$ifdef TYPES}
type
  MLModelCollectionEntryPtr = ^MLModelCollectionEntry;
{$endif}

{$ifdef CLASSES}

type
  MLModelCollectionEntry = objcclass external (NSObject)
  public
    function modelIdentifier: NSString; message 'modelIdentifier';
    function modelURL: NSURL; message 'modelURL';
    function isEqualToModelCollectionEntry (entry: MLModelCollectionEntry): objcbool; message 'isEqualToModelCollectionEntry:';
    function init: id; message 'init';
    class function new_: id; message 'new';
  end;
{$endif}

