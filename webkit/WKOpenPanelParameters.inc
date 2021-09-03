{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WKOpenPanelParameters.h }

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
    function allowsDirectories: objcbool; message 'allowsDirectories'; { available in macos  }
  end;
{$endif}

{$endif}
