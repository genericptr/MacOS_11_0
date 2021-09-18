{ Parsed from WebKit.framework WKContextMenuElementInfo.h }

{$ifdef TYPES}
type
  WKContextMenuElementInfoPtr = ^WKContextMenuElementInfo;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  WKContextMenuElementInfo = objcclass external (NSObject)
  public
    function init: id; message 'init';
    function linkURL: NSURL; message 'linkURL';
  end;
{$endif}

{$endif}
