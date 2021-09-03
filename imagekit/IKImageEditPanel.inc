{ Parsed from ImageKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Headers/IKImageEditPanel.h }

{$ifdef TYPES}
type
  IKImageEditPanelPtr = ^IKImageEditPanel;
  IKImageEditPanelDataSourceProtocolPtr = ^IKImageEditPanelDataSourceProtocol;
{$endif}

{$ifndef IKImageEditPanel_h}
{$ifdef PROTOCOLS}

type
  IKImageEditPanelDataSourceProtocol = objcprotocol external name 'IKImageEditPanelDataSource'
  required
    function image: CGImageRef; message 'image';
    procedure setImage_imageProperties (image_: CGImageRef; metaData: NSDictionary); message 'setImage:imageProperties:';
  optional
    function thumbnailWithMaximumSize (size: NSSize): CGImageRef; message 'thumbnailWithMaximumSize:';
    function imageProperties: NSDictionary; message 'imageProperties';
    function hasAdjustMode: objcbool; message 'hasAdjustMode';
    function hasEffectsMode: objcbool; message 'hasEffectsMode';
    function hasDetailsMode: objcbool; message 'hasDetailsMode';
  end;
{$endif}

{$ifdef CLASSES}

type
  IKImageEditPanel = objcclass external (NSPanel)
  private
    _privateData: pointer;
  public
    procedure setDataSource(newValue: id); message 'setDataSource:';
    function dataSource: id; message 'dataSource';
    function filterArray: NSArray; message 'filterArray';
    class function sharedImageEditPanel: IKImageEditPanel; message 'sharedImageEditPanel';
    procedure reloadData; message 'reloadData';
  end;
{$endif}

{$endif}
