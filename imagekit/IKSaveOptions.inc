{ Parsed from ImageKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Headers/IKSaveOptions.h }

{ Types from IKSaveOptions }
{$ifdef TYPES}


{$endif}


{$ifdef TYPES}
type
  IKSaveOptionsPtr = ^IKSaveOptions;
{$endif}

{$ifndef IKSaveOptions_h}
{$ifdef CLASSES}

type
  IKSaveOptionsDelegate = objccategory external (NSObject)
    function saveOptions_shouldShowUTType (saveOptions: IKSaveOptions; utType: NSString): objcbool; message 'saveOptions:shouldShowUTType:';
  end;


type
  IKSaveOptions = objcclass external (NSObject)
  private
    _privateData: pointer;
    _saveOptionsView: id;
  public
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function imageProperties: NSDictionary; message 'imageProperties';
    function imageUTType: NSString; message 'imageUTType';
    function userSelection: NSDictionary; message 'userSelection';
    function initWithImageProperties_imageUTType (imageProperties_: NSDictionary; imageUTType_: NSString): id; message 'initWithImageProperties:imageUTType:';
    procedure addSaveOptionsAccessoryViewToSavePanel (savePanel: NSSavePanel); message 'addSaveOptionsAccessoryViewToSavePanel:';
    {$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_6)}
    procedure addSaveOptionsToView (view: NSView); message 'addSaveOptionsToView:';
    {$endif}
    {$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_11_3)}
    procedure setRememberLastSetting(newValue: objcbool); message 'setRememberLastSetting:';
    function rememberLastSetting: objcbool; message 'rememberLastSetting';
    {$endif}
  end;
{$endif}

{$endif}
