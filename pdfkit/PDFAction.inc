{ Parsed from PDFKit.framework PDFAction.h }

{$ifdef TYPES}
type
  PDFActionPtr = ^PDFAction;
{$endif}

{$ifdef CLASSES}

type
  PDFAction = objcclass external (NSObject, NSCopyingProtocol)
  private
    _private: PDFActionPrivate;
  public
    function type_: NSString; message 'type';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

