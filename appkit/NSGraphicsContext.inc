{ Parsed from AppKit.framework NSGraphicsContext.h }

{$ifdef TYPES}
type
  NSGraphicsContextPtr = ^NSGraphicsContext;
{$endif}

{$ifdef TYPES}
type
  NSGraphicsContextAttributeKey = NSString;
  NSGraphicsContextAttributeKeyPtr = ^NSGraphicsContextAttributeKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSGraphicsContextDestinationAttributeName: NSGraphicsContextAttributeKey; cvar; external;
  NSGraphicsContextRepresentationFormatAttributeName: NSGraphicsContextAttributeKey; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSGraphicsContextRepresentationFormatName = NSString;
  NSGraphicsContextRepresentationFormatNamePtr = ^NSGraphicsContextRepresentationFormatName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSGraphicsContextPSFormat: NSGraphicsContextRepresentationFormatName; cvar; external;
  NSGraphicsContextPDFFormat: NSGraphicsContextRepresentationFormatName; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSImageInterpolation = NSUInteger;
  NSImageInterpolationPtr = ^NSImageInterpolation;

const
  NSImageInterpolationDefault = 0;
  NSImageInterpolationNone = 1;
  NSImageInterpolationLow = 2;
  NSImageInterpolationMedium = 4 { available in macos 10.6 };
  NSImageInterpolationHigh = 3;
{$endif}

{$ifdef CLASSES}

type
  NSGraphicsContext = objcclass external (NSObject)
  public
    class function graphicsContextWithAttributes (attributes: NSDictionary): NSGraphicsContext; message 'graphicsContextWithAttributes:';
    class function graphicsContextWithWindow (window: NSWindow): NSGraphicsContext; message 'graphicsContextWithWindow:';
    class function graphicsContextWithBitmapImageRep (bitmapRep: NSBitmapImageRep): NSGraphicsContext; message 'graphicsContextWithBitmapImageRep:';
    class function graphicsContextWithCGContext_flipped (graphicsPort: CGContextRef; initialFlippedState: objcbool): NSGraphicsContext; message 'graphicsContextWithCGContext:flipped:'; { available in macos 10.10 }
    class procedure setCurrentContext(newValue: NSGraphicsContext); message 'setCurrentContext:';
    class function currentContext: NSGraphicsContext; message 'currentContext';
    class function currentContextDrawingToScreen: objcbool; message 'currentContextDrawingToScreen';
    class procedure classSaveGraphicsState; message 'saveGraphicsState';
    class procedure classRestoreGraphicsState; message 'restoreGraphicsState';
    function attributes: NSDictionary; message 'attributes';
    function isDrawingToScreen: objcbool; message 'isDrawingToScreen';
    procedure saveGraphicsState; message 'saveGraphicsState';
    procedure restoreGraphicsState; message 'restoreGraphicsState';
    procedure flushGraphics; message 'flushGraphics';
    function CGContext: CGContextRef; message 'CGContext'; { available in macos 10.10 }
    function isFlipped: objcbool; message 'isFlipped';
  end;


type
  NSGraphicsContext_RenderingOptions = objccategory external (NSGraphicsContext)
    procedure setShouldAntialias(newValue: objcbool); message 'setShouldAntialias:';
    function shouldAntialias: objcbool; message 'shouldAntialias';
    procedure setImageInterpolation(newValue: NSImageInterpolation); message 'setImageInterpolation:';
    function imageInterpolation: NSImageInterpolation; message 'imageInterpolation';
    procedure setPatternPhase(newValue: NSPoint); message 'setPatternPhase:';
    function patternPhase: NSPoint; message 'patternPhase';
    procedure setCompositingOperation(newValue: NSCompositingOperation); message 'setCompositingOperation:';
    function compositingOperation: NSCompositingOperation; message 'compositingOperation';
    procedure setColorRenderingIntent(newValue: NSColorRenderingIntent); message 'setColorRenderingIntent:'; { available in macos 10.5 }
    function colorRenderingIntent: NSColorRenderingIntent; message 'colorRenderingIntent'; { available in macos 10.5 }
  end;

type
  NSGraphicsContext_NSQuartzCoreAdditions = objccategory external name 'NSQuartzCoreAdditions' (NSGraphicsContext)
    function CIContext_: CIContext; message 'CIContext';
  end;

type
  NSGraphicsContextDeprecated = objccategory external (NSGraphicsContext)
    class procedure setGraphicsState (gState: NSInteger); message 'setGraphicsState:'; deprecated 'This method has no effect';
    function focusStack: id; message 'focusStack'; deprecated;
    procedure setFocusStack (stack: id); message 'setFocusStack:'; deprecated;
    class function graphicsContextWithGraphicsPort_flipped (graphicsPort: pointer; initialFlippedState: objcbool): NSGraphicsContext; message 'graphicsContextWithGraphicsPort:flipped:'; deprecated 'replace with graphicsContextWithCGContext:flipped:';
    function graphicsPort: pointer; message 'graphicsPort'; deprecated 'replace with CGContext';
  end;
{$endif}

