{ Parsed from AppKit.framework NSImageView.h }

{$ifdef TYPES}
type
  NSImageViewPtr = ^NSImageView;
{$endif}

{$ifdef CLASSES}

type
  NSImageView = objcclass external (NSControl, NSAccessibilityImageProtocol, NSMenuItemValidationProtocol)
  public
    class function imageViewWithImage (image: NSImage): id; message 'imageViewWithImage:'; { available in macos  }
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setEditable(newValue: objcbool); message 'setEditable:';
    function isEditable: objcbool; message 'isEditable';
    procedure setImageAlignment(newValue: NSImageAlignment); message 'setImageAlignment:';
    function imageAlignment: NSImageAlignment; message 'imageAlignment';
    procedure setImageScaling(newValue: NSImageScaling); message 'setImageScaling:';
    function imageScaling: NSImageScaling; message 'imageScaling';
    procedure setImageFrameStyle(newValue: NSImageFrameStyle); message 'setImageFrameStyle:';
    function imageFrameStyle: NSImageFrameStyle; message 'imageFrameStyle';
    procedure setSymbolConfiguration(newValue: NSImageSymbolConfiguration); message 'setSymbolConfiguration:'; { available in macos  }
    function symbolConfiguration: NSImageSymbolConfiguration; message 'symbolConfiguration'; { available in macos  }
    procedure setContentTintColor(newValue: NSColor); message 'setContentTintColor:'; { available in macos  }
    function contentTintColor: NSColor; message 'contentTintColor'; { available in macos  }
    procedure setAnimates(newValue: objcbool); message 'setAnimates:';
    function animates: objcbool; message 'animates';
    procedure setAllowsCutCopyPaste(newValue: objcbool); message 'setAllowsCutCopyPaste:';
    function allowsCutCopyPaste: objcbool; message 'allowsCutCopyPaste';

    { Adopted protocols }
    function validateMenuItem (menuItem: NSMenuItem): objcbool; message 'validateMenuItem:';
  end;
{$endif}

