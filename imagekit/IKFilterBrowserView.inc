{ Parsed from ImageKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Headers/IKFilterBrowserView.h }

{$ifdef TYPES}
type
  IKFilterBrowserViewPtr = ^IKFilterBrowserView;
{$endif}

{$ifdef CLASSES}

type
  IKFilterBrowserView = objcclass external (NSView)
  private
    _actionButton: id;
    _addCollectionButton: id;
    _browser: id;
    _descriptionField: id;
    _previewView: id;
    _removeCollectionButton: id;
    _searchField: id;
    _OKButton: id;
    _CancelButton: id;
    _foundFilters: NSMutableArray;
    _options: NSDictionary;
    _showPreviewView: objcbool;
    _useNarrowLayout: objcbool;
    _modalDelegate: id;
    _priv:array[0..7] of pointer;
  public
    procedure setPreviewState (inState: objcbool); message 'setPreviewState:';
    function filterName: NSString; message 'filterName';
  end;
{$endif}

