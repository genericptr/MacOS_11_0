{ Parsed from WebKit.framework WKOpenPanelParameters.h }

{$ifdef TYPES}
type
  WKOpenPanelParametersPtr = ^WKOpenPanelParameters;
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKOpenPanelParameters = objcclass external (NSObject)
  public
    function allowsMultipleSelection: objcbool; message 'allowsMultipleSelection';
    function allowsDirectories: objcbool; message 'allowsDirectories'; { available in macos 10.13.4 }
  end;
{$endif}

{$endif}
