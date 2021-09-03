{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSColorSampler.h }

{$ifdef CALLBACKS}
type
  NSColorSamplerShowSamplerWithSelectionHandlerCallback = reference to function (selectedColor: NSColor): pointer; cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  NSColorSamplerPtr = ^NSColorSampler;
{$endif}

{$ifdef CLASSES}

type
  NSColorSampler = objcclass external (NSObject)
  public
    procedure showSamplerWithSelectionHandler (selectionHandler: NSColorSamplerShowSamplerWithSelectionHandlerCallback); message 'showSamplerWithSelectionHandler:';
  end;
{$endif}

