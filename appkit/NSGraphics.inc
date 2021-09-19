{ Parsed from AppKit.framework NSGraphics.h }
{$ifdef TYPES}
type
  NSCompositingOperation = NSUInteger;
  NSCompositingOperationPtr = ^NSCompositingOperation;

const
  NSCompositingOperationClear = 0;
  NSCompositingOperationCopy = 1;
  NSCompositingOperationSourceOver = 2;
  NSCompositingOperationSourceIn = 3;
  NSCompositingOperationSourceOut = 4;
  NSCompositingOperationSourceAtop = 5;
  NSCompositingOperationDestinationOver = 6;
  NSCompositingOperationDestinationIn = 7;
  NSCompositingOperationDestinationOut = 8;
  NSCompositingOperationDestinationAtop = 9;
  NSCompositingOperationXOR = 10;
  NSCompositingOperationPlusDarker = 11;
  NSCompositingOperationHighlight = 12 deprecated 'Use NSCompositingOperationSourceOver instead';
  NSCompositingOperationPlusLighter = 13;
  NSCompositingOperationMultiply = 14 { available in macos 10.10 };
  NSCompositingOperationScreen = 15 { available in macos 10.10 };
  NSCompositingOperationOverlay = 16 { available in macos 10.10 };
  NSCompositingOperationDarken = 17 { available in macos 10.10 };
  NSCompositingOperationLighten = 18 { available in macos 10.10 };
  NSCompositingOperationColorDodge = 19 { available in macos 10.10 };
  NSCompositingOperationColorBurn = 20 { available in macos 10.10 };
  NSCompositingOperationSoftLight = 21 { available in macos 10.10 };
  NSCompositingOperationHardLight = 22 { available in macos 10.10 };
  NSCompositingOperationDifference = 23 { available in macos 10.10 };
  NSCompositingOperationExclusion = 24 { available in macos 10.10 };
  NSCompositingOperationHue = 25 { available in macos 10.10 };
  NSCompositingOperationSaturation = 26 { available in macos 10.10 };
  NSCompositingOperationColor = 27 { available in macos 10.10 };
  NSCompositingOperationLuminosity = 28 { available in macos 10.10 };

const
  NSCompositeClear = NSCompositingOperationClear deprecated 'replace with NSCompositingOperationClear';
  NSCompositeCopy = NSCompositingOperationCopy deprecated 'replace with NSCompositingOperationCopy';
  NSCompositeSourceOver = NSCompositingOperationSourceOver deprecated 'replace with NSCompositingOperationSourceOver';
  NSCompositeSourceIn = NSCompositingOperationSourceIn deprecated 'replace with NSCompositingOperationSourceIn';
  NSCompositeSourceOut = NSCompositingOperationSourceOut deprecated 'replace with NSCompositingOperationSourceOut';
  NSCompositeSourceAtop = NSCompositingOperationSourceAtop deprecated 'replace with NSCompositingOperationSourceAtop';
  NSCompositeDestinationOver = NSCompositingOperationDestinationOver deprecated 'replace with NSCompositingOperationDestinationOver';
  NSCompositeDestinationIn = NSCompositingOperationDestinationIn deprecated 'replace with NSCompositingOperationDestinationIn';
  NSCompositeDestinationOut = NSCompositingOperationDestinationOut deprecated 'replace with NSCompositingOperationDestinationOut';
  NSCompositeDestinationAtop = NSCompositingOperationDestinationAtop deprecated 'replace with NSCompositingOperationDestinationAtop';
  NSCompositeXOR = NSCompositingOperationXOR deprecated 'replace with NSCompositingOperationXOR';
  NSCompositePlusDarker = NSCompositingOperationPlusDarker deprecated 'replace with NSCompositingOperationPlusDarker';
  NSCompositeHighlight = NSCompositingOperationHighlight deprecated 'replace with NSCompositingOperationSourceOver';
  NSCompositePlusLighter = NSCompositingOperationPlusLighter deprecated 'replace with NSCompositingOperationPlusLighter';
  NSCompositeMultiply = NSCompositingOperationMultiply deprecated 'replace with NSCompositingOperationMultiply';
  NSCompositeScreen = NSCompositingOperationScreen deprecated 'replace with NSCompositingOperationScreen';
  NSCompositeOverlay = NSCompositingOperationOverlay deprecated 'replace with NSCompositingOperationOverlay';
  NSCompositeDarken = NSCompositingOperationDarken deprecated 'replace with NSCompositingOperationDarken';
  NSCompositeLighten = NSCompositingOperationLighten deprecated 'replace with NSCompositingOperationLighten';
  NSCompositeColorDodge = NSCompositingOperationColorDodge deprecated 'replace with NSCompositingOperationColorDodge';
  NSCompositeColorBurn = NSCompositingOperationColorBurn deprecated 'replace with NSCompositingOperationColorBurn';
  NSCompositeSoftLight = NSCompositingOperationSoftLight deprecated 'replace with NSCompositingOperationSoftLight';
  NSCompositeHardLight = NSCompositingOperationHardLight deprecated 'replace with NSCompositingOperationHardLight';
  NSCompositeDifference = NSCompositingOperationDifference deprecated 'replace with NSCompositingOperationDifference';
  NSCompositeExclusion = NSCompositingOperationExclusion deprecated 'replace with NSCompositingOperationExclusion';
  NSCompositeHue = NSCompositingOperationHue deprecated 'replace with NSCompositingOperationHue';
  NSCompositeSaturation = NSCompositingOperationSaturation deprecated 'replace with NSCompositingOperationSaturation';
  NSCompositeColor = NSCompositingOperationColor deprecated 'replace with NSCompositingOperationColor';
  NSCompositeLuminosity = NSCompositingOperationLuminosity deprecated 'replace with NSCompositingOperationLuminosity';

type
  NSBackingStoreType = NSUInteger;
  NSBackingStoreTypePtr = ^NSBackingStoreType;

const
  NSBackingStoreRetained = 0 deprecated 'replace with NSBackingStoreBuffered';
  NSBackingStoreNonretained = 1 deprecated 'replace with NSBackingStoreBuffered';
  NSBackingStoreBuffered = 2;

type
  NSWindowOrderingMode = NSInteger;
  NSWindowOrderingModePtr = ^NSWindowOrderingMode;

const
  NSWindowAbove = 1;
  NSWindowBelow = -1;
  NSWindowOut = 0;

type
  NSFocusRingPlacement = NSUInteger;
  NSFocusRingPlacementPtr = ^NSFocusRingPlacement;

const
  NSFocusRingOnly = 0;
  NSFocusRingBelow = 1;
  NSFocusRingAbove = 2;

type
  NSFocusRingType = NSUInteger;
  NSFocusRingTypePtr = ^NSFocusRingType;

const
  NSFocusRingTypeDefault = 0;
  NSFocusRingTypeNone = 1;
  NSFocusRingTypeExterior = 2;

type
  NSColorRenderingIntent = NSInteger;
  NSColorRenderingIntentPtr = ^NSColorRenderingIntent;

const
  NSColorRenderingIntentDefault = 0;
  NSColorRenderingIntentAbsoluteColorimetric = 1;
  NSColorRenderingIntentRelativeColorimetric = 2;
  NSColorRenderingIntentPerceptual = 3;
  NSColorRenderingIntentSaturation = 4;

type
  NSColorSpaceName = NSString;
  NSColorSpaceNamePtr = ^NSColorSpaceName;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSCalibratedWhiteColorSpace: NSColorSpaceName; cvar; external;
  NSCalibratedRGBColorSpace: NSColorSpaceName; cvar; external;
  NSDeviceWhiteColorSpace: NSColorSpaceName; cvar; external;
  NSDeviceRGBColorSpace: NSColorSpaceName; cvar; external;
  NSDeviceCMYKColorSpace: NSColorSpaceName; cvar; external;
  NSNamedColorSpace: NSColorSpaceName; cvar; external;
  NSPatternColorSpace: NSColorSpaceName; cvar; external;
  NSCustomColorSpace: NSColorSpaceName; cvar; external;
  NSCalibratedBlackColorSpace: NSColorSpaceName deprecated; cvar; external;
  NSDeviceBlackColorSpace: NSColorSpaceName deprecated; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSWindowDepth = cint32;
  NSWindowDepthPtr = ^NSWindowDepth;

const
  NSWindowDepthTwentyfourBitRGB = $208;
  NSWindowDepthSixtyfourBitRGB = $210;
  NSWindowDepthOnehundredtwentyeightBitRGB = $220;
{$endif}

{$ifdef FUNCTIONS}
function NSBestDepth(colorSpace: NSColorSpaceName; bps: NSInteger; bpp: NSInteger; planar: objcbool; exactMatch: objcboolPtr): NSWindowDepth; cdecl; external;
function NSPlanarFromDepth(depth: NSWindowDepth): objcbool; cdecl; external;
function NSColorSpaceFromDepth(depth: NSWindowDepth): NSColorSpaceName; cdecl; external;
function NSBitsPerSampleFromDepth(depth: NSWindowDepth): NSInteger; cdecl; external;
function NSBitsPerPixelFromDepth(depth: NSWindowDepth): NSInteger; cdecl; external;
function NSNumberOfColorComponents(colorSpaceName: NSColorSpaceName): NSInteger; cdecl; external;
function NSAvailableWindowDepths: NSWindowDepthPtr; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSWhite: CGFloat; cvar; external;
  NSLightGray: CGFloat; cvar; external;
  NSDarkGray: CGFloat; cvar; external;
  NSBlack: CGFloat; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSDisplayGamut = NSInteger;
  NSDisplayGamutPtr = ^NSDisplayGamut;

const
  NSDisplayGamutSRGB = 1;
  NSDisplayGamutP3 = 2;

type
  NSDeviceDescriptionKey = NSString;
  NSDeviceDescriptionKeyPtr = ^NSDeviceDescriptionKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSDeviceResolution: NSDeviceDescriptionKey; cvar; external;
  NSDeviceColorSpaceName: NSDeviceDescriptionKey; cvar; external;
  NSDeviceBitsPerSample: NSDeviceDescriptionKey; cvar; external;
  NSDeviceIsScreen: NSDeviceDescriptionKey; cvar; external;
  NSDeviceIsPrinter: NSDeviceDescriptionKey; cvar; external;
  NSDeviceSize: NSDeviceDescriptionKey; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function NSRectFill(rect: NSRect): pointer; cdecl; external;
function NSRectFillList(rects: NSRectPtr; count: NSInteger): pointer; cdecl; external;
function NSRectFillListWithGrays(rects: NSRectPtr; grays: CGFloatPtr; num: NSInteger): pointer; cdecl; external;
function NSRectFillListWithColors(rects: NSRectPtr; colors: NSColorPtr; num: NSInteger): pointer; cdecl; external;
function NSRectFillUsingOperation(rect: NSRect; op: NSCompositingOperation): pointer; cdecl; external;
function NSRectFillListUsingOperation(rects: NSRectPtr; count: NSInteger; op: NSCompositingOperation): pointer; cdecl; external;
function NSRectFillListWithColorsUsingOperation(rects: NSRectPtr; colors: NSColorPtr; num: NSInteger; op: NSCompositingOperation): pointer; cdecl; external;
function NSFrameRect(rect: NSRect): pointer; cdecl; external;
function NSFrameRectWithWidth(rect: NSRect; frameWidth: CGFloat): pointer; cdecl; external;
function NSFrameRectWithWidthUsingOperation(rect: NSRect; frameWidth: CGFloat; op: NSCompositingOperation): pointer; cdecl; external;
function NSRectClip(rect: NSRect): pointer; cdecl; external;
function NSRectClipList(rects: NSRectPtr; count: NSInteger): pointer; cdecl; external;
function NSDrawTiledRects(boundsRect: NSRect; clipRect: NSRect; sides: NSRectEdgePtr; grays: CGFloatPtr; count: NSInteger): NSRect; cdecl; external;
function NSDrawGrayBezel(rect: NSRect; clipRect: NSRect): pointer; cdecl; external;
function NSDrawGroove(rect: NSRect; clipRect: NSRect): pointer; cdecl; external;
function NSDrawWhiteBezel(rect: NSRect; clipRect: NSRect): pointer; cdecl; external;
function NSDrawButton(rect: NSRect; clipRect: NSRect): pointer; cdecl; external;
function NSEraseRect(rect: NSRect): pointer; cdecl; external;
function NSReadPixel(passedPoint: NSPoint): NSColor; cdecl; external; deprecated 'Use -[NSBitmapImageRep colorAtX:y:] to interrogate pixel values.  If necessary, use -[NSView cacheDisplayInRect:toBitmapImageRep:] to snapshot a view hierarchy into an NSBitmapImageRep.';
function NSDrawBitmap(rect: NSRect; width: NSInteger; height: NSInteger; bps: NSInteger; spp: NSInteger; bpp: NSInteger; bpr: NSInteger; isPlanar: objcbool; hasAlpha: objcbool; colorSpaceName: NSColorSpaceName; data: PChar { 5 element array of PChar }): pointer; cdecl; external;
function NSHighlightRect(rect: NSRect): pointer; cdecl; external; deprecated;
function NSBeep: pointer; cdecl; external;
function NSGetWindowServerMemory(context: NSInteger; virtualMemory: NSIntegerPtr; windowBackingMemory: NSIntegerPtr; windowDumpString: NSStringPtr): NSInteger; cdecl; external; deprecated 'Doesn''t return anything useful since 10.0';
function NSDrawColorTiledRects(boundsRect: NSRect; clipRect: NSRect; sides: NSRectEdgePtr; colors: NSColorPtr; count: NSInteger): NSRect; cdecl; external;
function NSDrawDarkBezel(rect: NSRect; clipRect: NSRect): pointer; cdecl; external;
function NSDrawLightBezel(rect: NSRect; clipRect: NSRect): pointer; cdecl; external;
function NSDottedFrameRect(rect: NSRect): pointer; cdecl; external;
function NSDrawWindowBackground(rect: NSRect): pointer; cdecl; external;
function NSSetFocusRingStyle(placement: NSFocusRingPlacement): pointer; cdecl; external;
function NSDisableScreenUpdates: pointer; cdecl; external; deprecated 'As of 10.11 it is not generally necessary to take explicit action to achieve visual atomicity. +[NSAnimationContext runAnimationGroup:] and other similar methods can be used when a stronger than normal need for visual atomicity is required. The NSAnimationContext methods do not suffer from the same performance problems as NSDisableScreenUpdates.';
function NSEnableScreenUpdates: pointer; cdecl; external; deprecated 'As of 10.11 it is not generally necessary to take explicit action to achieve visual atomicity. +[NSAnimationContext runAnimationGroup:] and other similar methods can be used when a stronger than normal need for visual atomicity is required. The NSAnimationContext methods do not suffer from the same performance problems as NSEnableScreenUpdates.';
{$endif}

{$ifdef TYPES}
type
  NSAnimationEffect = NSUInteger;
  NSAnimationEffectPtr = ^NSAnimationEffect;

const
  NSAnimationEffectDisappearingItemDefault = 0;
  NSAnimationEffectPoof = 10;
{$endif}

{$ifdef FUNCTIONS}
function NSShowAnimationEffect(animationEffect: NSAnimationEffect; centerLocation: NSPoint; size: NSSize; animationDelegate: id; didEndSelector: SEL; contextInfo: pointer): pointer; cdecl; external;
function NSCountWindows(count: NSIntegerPtr): pointer; cdecl; external; deprecated 'Use +[NSWindow windowNumbersWithOptions:] instead';
function NSWindowList(size: NSInteger; list: NSIntegerPtr { variable size array of NSInteger }): pointer; cdecl; external; deprecated 'Use +[NSWindow windowNumbersWithOptions:] instead';
function NSCountWindowsForContext(context: NSInteger; count: NSIntegerPtr): pointer; cdecl; external; deprecated 'Use +[NSWindow windowNumbersWithOptions:] instead';
function NSWindowListForContext(context: NSInteger; size: NSInteger; list: NSIntegerPtr { variable size array of NSInteger }): pointer; cdecl; external; deprecated 'Use +[NSWindow windowNumbersWithOptions:] instead';
function NSCopyBits(srcGState: NSInteger; srcRect: NSRect; destPoint: NSPoint): pointer; cdecl; external; deprecated;
{$endif}

