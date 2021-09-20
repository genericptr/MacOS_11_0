{ Parsed from PDFKit.framework PDFAppearanceCharacteristics.h }

{$ifdef TYPES}
type
  PDFAppearanceCharacteristicsPtr = ^PDFAppearanceCharacteristics;
{$endif}

{$ifdef TYPES}
type
  PDFAppearanceCharacteristicsKey = NSString;
  PDFAppearanceCharacteristicsKeyPtr = ^PDFAppearanceCharacteristicsKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFAppearanceCharacteristicsKeyBackgroundColor: PDFAppearanceCharacteristicsKey { available in macos 10.13, ios 11.0 }; cvar; external;
  PDFAppearanceCharacteristicsKeyBorderColor: PDFAppearanceCharacteristicsKey { available in macos 10.13, ios 11.0 }; cvar; external;
  PDFAppearanceCharacteristicsKeyRotation: PDFAppearanceCharacteristicsKey { available in macos 10.13, ios 11.0 }; cvar; external;
  PDFAppearanceCharacteristicsKeyCaption: PDFAppearanceCharacteristicsKey { available in macos 10.13, ios 11.0 }; cvar; external;
  PDFAppearanceCharacteristicsKeyRolloverCaption: PDFAppearanceCharacteristicsKey { available in macos 10.13, ios 11.0 }; cvar; external;
  PDFAppearanceCharacteristicsKeyDownCaption: PDFAppearanceCharacteristicsKey { available in macos 10.13, ios 11.0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PDFAppearanceCharacteristics = objcclass external (NSObject, NSCopyingProtocol)
  private
    _private: PDFAppearanceCharacteristicsPrivate;
  public
    procedure setControlType(newValue: PDFWidgetControlType); message 'setControlType:';
    function controlType: PDFWidgetControlType; message 'controlType';
    procedure setBackgroundColor(newValue: PDFKitPlatformColorPtr); message 'setBackgroundColor:';
    function backgroundColor: PDFKitPlatformColorPtr; message 'backgroundColor';
    procedure setBorderColor(newValue: PDFKitPlatformColorPtr); message 'setBorderColor:';
    function borderColor: PDFKitPlatformColorPtr; message 'borderColor';
    procedure setRotation(newValue: NSInteger); message 'setRotation:';
    function rotation: NSInteger; message 'rotation';
    procedure setCaption(newValue: NSString); message 'setCaption:';
    function caption: NSString; message 'caption';
    procedure setRolloverCaption(newValue: NSString); message 'setRolloverCaption:';
    function rolloverCaption: NSString; message 'rolloverCaption';
    procedure setDownCaption(newValue: NSString); message 'setDownCaption:';
    function downCaption: NSString; message 'downCaption';
    function appearanceCharacteristicsKeyValues: NSDictionary; message 'appearanceCharacteristicsKeyValues';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

