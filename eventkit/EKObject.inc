{ Parsed from EventKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/EventKit.framework/Headers/EKObject.h }

{ Types from EKObject }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  EKObjectPtr = ^EKObject;
{$endif}

{$ifdef CLASSES}

type
  EKObject = objcclass external (NSObject)
  public
    function hasChanges: objcbool; message 'hasChanges';
    {$if (defined(__cplusplus))}
    function isNew: objcbool; message 'isNew';
    {$else}
    function isNew_: objcbool; message 'isNew';
    {$endif}
    procedure reset; message 'reset';
    procedure rollback; message 'rollback';
    function refresh: objcbool; message 'refresh';
  end;
{$endif}

