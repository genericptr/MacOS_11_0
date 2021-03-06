{ Parsed from AppKit.framework NSStringDrawing.h }

{$ifdef TYPES}
type
  NSStringDrawingContextPtr = ^NSStringDrawingContext;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSStringDrawingContext = objcclass external (NSObject)
  public
    procedure setMinimumScaleFactor(newValue: CGFloat); message 'setMinimumScaleFactor:';
    function minimumScaleFactor: CGFloat; message 'minimumScaleFactor';
    function actualScaleFactor: CGFloat; message 'actualScaleFactor';
    function totalBounds: NSRect; message 'totalBounds';
  end;


type
  NSString_NSStringDrawing = objccategory external name 'NSStringDrawing' (NSString)
    function sizeWithAttributes (attrs: NSDictionary): NSSize; message 'sizeWithAttributes:'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure drawAtPoint_withAttributes (point: NSPoint; attrs: NSDictionary); message 'drawAtPoint:withAttributes:'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
    procedure drawInRect_withAttributes (rect: NSRect; attrs: NSDictionary); message 'drawInRect:withAttributes:'; { available in macos 10.0, ios 7.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSStringDrawing = objccategory external (NSAttributedString)
    function size: NSSize; message 'size'; { available in macos 10.0, ios 6.0, watchos 2.0, tvos 9.0 }
    procedure drawAtPoint (point: NSPoint); message 'drawAtPoint:'; { available in macos 10.0, ios 6.0, watchos 2.0, tvos 9.0 }
    procedure drawInRect (rect: NSRect); message 'drawInRect:'; { available in macos 10.0, ios 6.0, watchos 2.0, tvos 9.0 }
  end;
{$endif}

{$ifdef TYPES}
type
  NSStringDrawingOptions = NSInteger;
  NSStringDrawingOptionsPtr = ^NSStringDrawingOptions;

const
  NSStringDrawingUsesLineFragmentOrigin = 1 shl 0;
  NSStringDrawingUsesFontLeading = 1 shl 1;
  NSStringDrawingUsesDeviceMetrics = 1 shl 3;
  NSStringDrawingTruncatesLastVisibleLine = 1 shl 5 { available in macos 10.5, ios 6.0, watchos 2.0, tvos 9.0 };
  NSStringDrawingDisableScreenFontSubstitution = 1 shl 2 deprecated;
  NSStringDrawingOneShot = 1 shl 4 deprecated;
{$endif}

{$ifdef CLASSES}

type
  NSString_NSExtendedStringDrawing = objccategory external name 'NSExtendedStringDrawing' (NSString)
    procedure drawWithRect_options_attributes_context (rect: NSRect; options: NSStringDrawingOptions; attributes: NSDictionary; context: NSStringDrawingContext); message 'drawWithRect:options:attributes:context:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
    function boundingRectWithSize_options_attributes_context (size: NSSize; options: NSStringDrawingOptions; attributes: NSDictionary; context: NSStringDrawingContext): NSRect; message 'boundingRectWithSize:options:attributes:context:'; { available in macos 10.11, ios 7.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSExtendedStringDrawing = objccategory external (NSAttributedString)
    procedure drawWithRect_options_context (rect: NSRect; options: NSStringDrawingOptions; context: NSStringDrawingContext); message 'drawWithRect:options:context:'; { available in macos 10.11, ios 6.0, watchos 2.0, tvos 9.0 }
    function boundingRectWithSize_options_context (size: NSSize; options: NSStringDrawingOptions; context: NSStringDrawingContext): NSRect; message 'boundingRectWithSize:options:context:'; { available in macos 10.11, ios 6.0, watchos 2.0, tvos 9.0 }
  end;

type
  NSString_NSStringDrawingDeprecated = objccategory external name 'NSStringDrawingDeprecated' (NSString)
    procedure drawWithRect_options_attributes (rect: NSRect; options: NSStringDrawingOptions; attributes: NSDictionary); message 'drawWithRect:options:attributes:';
    function boundingRectWithSize_options_attributes (size: NSSize; options: NSStringDrawingOptions; attributes: NSDictionary): NSRect; message 'boundingRectWithSize:options:attributes:';
  end;

type
  NSStringDrawingDeprecated = objccategory external (NSAttributedString)
    procedure drawWithRect_options (rect: NSRect; options: NSStringDrawingOptions); message 'drawWithRect:options:';
    function boundingRectWithSize_options (size: NSSize; options: NSStringDrawingOptions): NSRect; message 'boundingRectWithSize:options:';
  end;
{$endif}

{$endif}

{$else}
{$endif}
