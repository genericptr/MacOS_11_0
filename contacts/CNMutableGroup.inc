{ Parsed from Contacts.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/Contacts.framework/Headers/CNMutableGroup.h }

{$ifdef TYPES}
type
  CNMutableGroupPtr = ^CNMutableGroup;
{$endif}

{$ifdef CLASSES}

type
  CNMutableGroup = objcclass external (CNGroup)
  public
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
  end;
{$endif}

