{ Parsed from CoreImage.framework CIPlugIn.h }

{$ifdef TYPES}
type
  CIPlugInPtr = ^CIPlugIn;
{$endif}

{$if defined(TARGET_OS_OSX)}
{$ifdef CLASSES}

type
  CIPlugIn = objcclass external (NSObject)
  private
    _priv:array[0..7] of pointer;
  public
    class procedure loadAllPlugIns; message 'loadAllPlugIns'; deprecated 'in 10_4, 10_15';
    class procedure loadNonExecutablePlugIns; message 'loadNonExecutablePlugIns';
    class procedure loadPlugIn_allowNonExecutable (url: NSURL; allowNonExecutable: objcbool); message 'loadPlugIn:allowNonExecutable:'; deprecated 'in 10_4, 10_7';
    class procedure loadPlugIn_allowExecutableCode (url: NSURL; allowExecutableCode: objcbool); message 'loadPlugIn:allowExecutableCode:'; deprecated 'in 10_7, 10_15';
    class procedure loadNonExecutablePlugIn (url: NSURL); message 'loadNonExecutablePlugIn:'; { available in 10_15 }
  end;
{$endif}

{$endif}
