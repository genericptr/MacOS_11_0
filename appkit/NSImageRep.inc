{ Parsed from AppKit.framework NSImageRep.h }

{$ifdef TYPES}
type
  NSImageRepPtr = ^NSImageRep;
{$endif}

{$ifdef TYPES}
type
  NSImageHintKey = NSString;
  NSImageHintKeyPtr = ^NSImageHintKey;

const
  NSImageRepMatchesDevice = 0;

type
  NSImageLayoutDirection = NSInteger;
  NSImageLayoutDirectionPtr = ^NSImageLayoutDirection;

const
  NSImageLayoutDirectionUnspecified = -1;
  NSImageLayoutDirectionLeftToRight = 2;
  NSImageLayoutDirectionRightToLeft = 3;
{$endif}

{$ifdef CLASSES}

type
  NSImageRep = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function draw: objcbool; message 'draw';
    function drawAtPoint (point: NSPoint): objcbool; message 'drawAtPoint:';
    function drawInRect (rect: NSRect): objcbool; message 'drawInRect:';
    function drawInRect_fromRect_operation_fraction_respectFlipped_hints (dstSpacePortionRect: NSRect; srcSpacePortionRect: NSRect; op: NSCompositingOperation; requestedAlpha: CGFloat; respectContextIsFlipped: objcbool; hints: NSDictionary): objcbool; message 'drawInRect:fromRect:operation:fraction:respectFlipped:hints:'; { available in macos  }
    procedure setSize(newValue: NSSize); message 'setSize:';
    function size: NSSize; message 'size';
    procedure setAlpha(newValue: objcbool); message 'setAlpha:';
    function hasAlpha: objcbool; message 'hasAlpha';
    procedure setOpaque(newValue: objcbool); message 'setOpaque:';
    function isOpaque: objcbool; message 'isOpaque';
    procedure setColorSpaceName(newValue: NSColorSpaceName); message 'setColorSpaceName:';
    function colorSpaceName: NSColorSpaceName; message 'colorSpaceName';
    procedure setBitsPerSample(newValue: NSInteger); message 'setBitsPerSample:';
    function bitsPerSample: NSInteger; message 'bitsPerSample';
    procedure setPixelsWide(newValue: NSInteger); message 'setPixelsWide:';
    function pixelsWide: NSInteger; message 'pixelsWide';
    procedure setPixelsHigh(newValue: NSInteger); message 'setPixelsHigh:';
    function pixelsHigh: NSInteger; message 'pixelsHigh';
    procedure setLayoutDirection(newValue: NSImageLayoutDirection); message 'setLayoutDirection:'; { available in macos  }
    function layoutDirection: NSImageLayoutDirection; message 'layoutDirection'; { available in macos  }
    class procedure registerImageRepClass (imageRepClass: pobjc_class); message 'registerImageRepClass:';
    class procedure unregisterImageRepClass (imageRepClass: pobjc_class); message 'unregisterImageRepClass:';
    class function registeredImageRepClasses: NSArray; message 'registeredImageRepClasses';
    class function imageRepClassForFileType (type_: NSString): pobjc_class; message 'imageRepClassForFileType:'; deprecated 'Use +imageRepClassForType: instead';
    class function imageRepClassForPasteboardType (type_: NSPasteboardType): pobjc_class; message 'imageRepClassForPasteboardType:'; deprecated 'Use +imageRepClassForType: instead';
    class function imageRepClassForType (type_: NSString): pobjc_class; message 'imageRepClassForType:'; { available in macos  }
    class function imageRepClassForData (data: NSData): pobjc_class; message 'imageRepClassForData:';
    class function canInitWithData (data: NSData): objcbool; message 'canInitWithData:';
    class function imageUnfilteredFileTypes: NSArray; message 'imageUnfilteredFileTypes'; deprecated 'Use +imageUnfilteredTypes instead';
    class function imageUnfilteredPasteboardTypes: NSArray; message 'imageUnfilteredPasteboardTypes'; deprecated 'Use +imageUnfilteredTypes instead';
    class function imageFileTypes: NSArray; message 'imageFileTypes'; deprecated 'Use +imageTypes instead';
    class function imagePasteboardTypes: NSArray; message 'imagePasteboardTypes'; deprecated 'Use +imageTypes instead';
    class function imageUnfilteredTypes: NSArray; message 'imageUnfilteredTypes'; { available in macos  }
    class function imageTypes: NSArray; message 'imageTypes'; { available in macos  }
    class function canInitWithPasteboard (pasteboard: NSPasteboard): objcbool; message 'canInitWithPasteboard:';
    class function imageRepsWithContentsOfFile (filename: NSString): NSArray; message 'imageRepsWithContentsOfFile:';
    class function imageRepWithContentsOfFile (filename: NSString): NSImageRep; message 'imageRepWithContentsOfFile:';
    class function imageRepsWithContentsOfURL (url: NSURL): NSArray; message 'imageRepsWithContentsOfURL:';
    class function imageRepWithContentsOfURL (url: NSURL): NSImageRep; message 'imageRepWithContentsOfURL:';
    class function imageRepsWithPasteboard (pasteboard: NSPasteboard): NSArray; message 'imageRepsWithPasteboard:';
    class function imageRepWithPasteboard (pasteboard: NSPasteboard): NSImageRep; message 'imageRepWithPasteboard:';
    function CGImageForProposedRect_context_hints (proposedDestRect: NSRectPtr; context: NSGraphicsContext; hints: NSDictionary): CGImageRef; message 'CGImageForProposedRect:context:hints:'; { available in macos  }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSImageRepRegistryDidChangeNotification: NSNotificationName; cvar; external;
{$endif}

