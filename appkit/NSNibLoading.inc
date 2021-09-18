{ Parsed from AppKit.framework NSNibLoading.h }
{$ifdef CLASSES}

type
  NSNibLoading = objccategory external (NSBundle)
    function loadNibNamed_owner_topLevelObjects (nibName: NSNibName; owner: id; topLevelObjects: NSArrayPtr): objcbool; message 'loadNibNamed:owner:topLevelObjects:'; { available in macos  }
  end;

type
  NSNibAwaking = objccategory external (NSObject)
    procedure awakeFromNib; message 'awakeFromNib';
    procedure prepareForInterfaceBuilder; message 'prepareForInterfaceBuilder'; { available in macos  }
  end;

type
  NSNibLoadingDeprecated = objccategory external (NSBundle)
    class function loadNibFile_externalNameTable_withZone (fileName: NSString; context: NSDictionary; zone: NSZonePtr): objcbool; message 'loadNibFile:externalNameTable:withZone:'; deprecated;
    class function loadNibNamed_owner (nibName: NSString; owner: id): objcbool; message 'loadNibNamed:owner:'; deprecated;
    function loadNibFile_externalNameTable_withZone_ (fileName: NSString; context: NSDictionary; zone: NSZonePtr): objcbool; message 'loadNibFile:externalNameTable:withZone:'; deprecated;
  end;
{$endif}

