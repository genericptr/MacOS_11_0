{ Parsed from WebKit.framework WKFindConfiguration.h }

{$ifdef TYPES}
type
  WKFindConfigurationPtr = ^WKFindConfiguration;
{$endif}

{$ifdef CLASSES}

type
  WKFindConfiguration = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setBackwards(newValue: objcbool); message 'setBackwards:';
    function backwards: objcbool; message 'backwards';
    procedure setCaseSensitive(newValue: objcbool); message 'setCaseSensitive:';
    function caseSensitive: objcbool; message 'caseSensitive';
    procedure setWraps(newValue: objcbool); message 'setWraps:';
    function wraps: objcbool; message 'wraps';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

