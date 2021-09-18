{ Parsed from WebKit.framework WKFindResult.h }

{$ifdef TYPES}
type
  WKFindResultPtr = ^WKFindResult;
{$endif}

{$ifdef CLASSES}

type
  WKFindResult = objcclass external (NSObject, NSCopyingProtocol)
  public
    function init: id; message 'init';
    function matchFound: objcbool; message 'matchFound';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

