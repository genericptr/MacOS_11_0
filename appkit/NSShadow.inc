{ Parsed from AppKit.framework NSShadow.h }

{$ifdef TYPES}
type
  NSShadowPtr = ^NSShadow;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSShadow = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setShadowOffset(newValue: NSSize); message 'setShadowOffset:';
    function shadowOffset: NSSize; message 'shadowOffset';
    procedure setShadowBlurRadius(newValue: CGFloat); message 'setShadowBlurRadius:';
    function shadowBlurRadius: CGFloat; message 'shadowBlurRadius';
    procedure setShadowColor(newValue: NSColor); message 'setShadowColor:';
    function shadowColor: NSColor; message 'shadowColor';
    procedure set_; message 'set';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$endif}

{$else}
{$endif}
