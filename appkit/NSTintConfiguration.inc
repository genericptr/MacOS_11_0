{ Parsed from AppKit.framework NSTintConfiguration.h }

{$ifdef TYPES}
type
  NSTintConfigurationPtr = ^NSTintConfiguration;
{$endif}

{$ifdef CLASSES}

type
  NSTintConfiguration = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    class function defaultTintConfiguration: NSTintConfiguration; message 'defaultTintConfiguration';
    class function monochromeTintConfiguration: NSTintConfiguration; message 'monochromeTintConfiguration';
    class function tintConfigurationWithPreferredColor (color: NSColor): id; message 'tintConfigurationWithPreferredColor:';
    class function tintConfigurationWithFixedColor (color: NSColor): id; message 'tintConfigurationWithFixedColor:';
    function baseTintColor: NSColor; message 'baseTintColor';
    function equivalentContentTintColor: NSColor; message 'equivalentContentTintColor';
    function adaptsToUserAccentColor: objcbool; message 'adaptsToUserAccentColor';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

