{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSRulerMarker.h }

{$ifdef TYPES}
type
  NSRulerMarkerPtr = ^NSRulerMarker;
{$endif}

{$ifdef CLASSES}

type
  NSRulerMarker = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function initWithRulerView_markerLocation_image_imageOrigin (ruler: NSRulerView; location: CGFloat; image: NSImage; imageOrigin: NSPoint): id; message 'initWithRulerView:markerLocation:image:imageOrigin:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init';
    function ruler: NSRulerView; message 'ruler';
    procedure setMarkerLocation(newValue: CGFloat); message 'setMarkerLocation:';
    function markerLocation: CGFloat; message 'markerLocation';
    procedure setImage(newValue: NSImage); message 'setImage:';
    function image: NSImage; message 'image';
    procedure setImageOrigin(newValue: NSPoint); message 'setImageOrigin:';
    function imageOrigin: NSPoint; message 'imageOrigin';
    procedure setMovable(newValue: objcbool); message 'setMovable:';
    function isMovable: objcbool; message 'isMovable';
    procedure setRemovable(newValue: objcbool); message 'setRemovable:';
    function isRemovable: objcbool; message 'isRemovable';
    function isDragging: objcbool; message 'isDragging';
    procedure setRepresentedObject(newValue: NSCopyingProtocol); message 'setRepresentedObject:';
    function representedObject: NSCopyingProtocol; message 'representedObject';
    function imageRectInRuler: NSRect; message 'imageRectInRuler';
    function thicknessRequiredInRuler: CGFloat; message 'thicknessRequiredInRuler';
    procedure drawRect (rect: NSRect); message 'drawRect:';
    function trackMouse_adding (mouseDownEvent: NSEvent; isAdding: objcbool): objcbool; message 'trackMouse:adding:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

