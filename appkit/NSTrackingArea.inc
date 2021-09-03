{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTrackingArea.h }

{$ifdef TYPES}
type
  NSTrackingAreaPtr = ^NSTrackingArea;
{$endif}

{$ifdef TYPES}
type
  NSTrackingAreaOptions = NSUInteger;
  NSTrackingAreaOptionsPtr = ^NSTrackingAreaOptions;

const
  NSTrackingMouseEnteredAndExited = $01;
  NSTrackingMouseMoved = $02;
  NSTrackingCursorUpdate = $04;
  NSTrackingActiveWhenFirstResponder = $10;
  NSTrackingActiveInKeyWindow = $20;
  NSTrackingActiveInActiveApp = $40;
  NSTrackingActiveAlways = $80;
  NSTrackingAssumeInside = $100;
  NSTrackingInVisibleRect = $200;
  NSTrackingEnabledDuringMouseDrag = $400;
{$endif}

{$ifdef CLASSES}

type
  NSTrackingArea = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function initWithRect_options_owner_userInfo (rect: NSRect; options: NSTrackingAreaOptions; owner: id; userInfo: NSDictionary): id; message 'initWithRect:options:owner:userInfo:';
    function rect: NSRect; message 'rect';
    function options: NSTrackingAreaOptions; message 'options';
    function owner: id; message 'owner';
    function userInfo: NSDictionary; message 'userInfo';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

