{ Parsed from AppKit.framework NSDockTile.h }

{$ifdef TYPES}
type
  NSDockTilePtr = ^NSDockTile;
  NSDockTilePlugInProtocolPtr = ^NSDockTilePlugInProtocol;
{$endif}

{$ifdef TYPES}
const
  NSAppKitVersionNumberWithDockTilePlugInSupport = 1001.0;
{$endif}

{$ifdef CLASSES}

type
  NSDockTile = objcclass external (NSObject)
  public
    function size: NSSize; message 'size';
    procedure setContentView(newValue: NSView); message 'setContentView:';
    function contentView: NSView; message 'contentView';
    procedure display; message 'display';
    procedure setShowsApplicationBadge(newValue: objcbool); message 'setShowsApplicationBadge:';
    function showsApplicationBadge: objcbool; message 'showsApplicationBadge';
    procedure setBadgeLabel(newValue: NSString); message 'setBadgeLabel:';
    function badgeLabel: NSString; message 'badgeLabel';
    function owner: id; message 'owner';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSDockTilePlugInProtocol = objcprotocol external name 'NSDockTilePlugIn' (NSObjectProtocol)
  required
    procedure setDockTile (dockTile: NSDockTile); message 'setDockTile:';
  optional
    function dockMenu: NSMenu; message 'dockMenu';
  end;
{$endif}

