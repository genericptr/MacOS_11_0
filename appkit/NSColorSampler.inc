{ Parsed from AppKit.framework NSColorSampler.h }

{$ifdef CALLBACKS}
type
  NSColorSamplerShowSamplerWithSelectionHandlerCallback = reference to procedure (selectedColor: NSColor); cblock; cdecl;
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

