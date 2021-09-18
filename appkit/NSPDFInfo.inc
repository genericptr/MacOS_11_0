{ Parsed from AppKit.framework NSPDFInfo.h }

{$ifdef TYPES}
type
  NSPDFInfoPtr = ^NSPDFInfo;
{$endif}

{$ifdef CLASSES}

type
  NSPDFInfo = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setFileExtensionHidden(newValue: objcbool); message 'setFileExtensionHidden:';
    function isFileExtensionHidden: objcbool; message 'isFileExtensionHidden';
    procedure setTagNames(newValue: NSArray); message 'setTagNames:';
    function tagNames: NSArray; message 'tagNames';
    procedure setOrientation(newValue: NSPaperOrientation); message 'setOrientation:';
    function orientation: NSPaperOrientation; message 'orientation';
    procedure setPaperSize(newValue: NSSize); message 'setPaperSize:';
    function paperSize: NSSize; message 'paperSize';
    function attributes: NSMutableDictionary; message 'attributes';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

