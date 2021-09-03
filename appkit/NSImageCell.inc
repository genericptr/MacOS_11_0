{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSImageCell.h }

{$ifdef TYPES}
type
  NSImageCellPtr = ^NSImageCell;
{$endif}

{$ifdef TYPES}
type
  NSImageAlignment = NSUInteger;
  NSImageAlignmentPtr = ^NSImageAlignment;

const
  NSImageAlignCenter = 0;
  NSImageAlignTop = 1;
  NSImageAlignTopLeft = 2;
  NSImageAlignTopRight = 3;
  NSImageAlignLeft = 4;
  NSImageAlignBottom = 5;
  NSImageAlignBottomLeft = 6;
  NSImageAlignBottomRight = 7;
  NSImageAlignRight = 8;

type
  NSImageFrameStyle = NSUInteger;
  NSImageFrameStylePtr = ^NSImageFrameStyle;

const
  NSImageFrameNone = 0;
  NSImageFramePhoto = 1;
  NSImageFrameGrayBezel = 2;
  NSImageFrameGroove = 3;
  NSImageFrameButton = 4;
{$endif}

{$ifdef CLASSES}

type
  NSImageCell = objcclass external (NSCell, NSCopyingProtocol, NSCodingProtocol)
  public
    procedure setImageAlignment(newValue: NSImageAlignment); message 'setImageAlignment:';
    function imageAlignment: NSImageAlignment; message 'imageAlignment';
    procedure setImageScaling(newValue: NSImageScaling); message 'setImageScaling:';
    function imageScaling: NSImageScaling; message 'imageScaling';
    procedure setImageFrameStyle(newValue: NSImageFrameStyle); message 'setImageFrameStyle:';
    function imageFrameStyle: NSImageFrameStyle; message 'imageFrameStyle';
  end;
{$endif}

