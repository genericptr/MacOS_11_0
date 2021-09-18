{ Parsed from PDFKit.framework PDFDestination.h }

{$ifdef TYPES}
type
  PDFDestinationPtr = ^PDFDestination;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kPDFDestinationUnspecifiedValue: CGFloat { available in 10_4, 11_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PDFDestination = objcclass external (NSObject, NSCopyingProtocol)
  private
    _private: PDFDestinationPrivate;
  public
    function initWithPage_atPoint (page: PDFPage; point: PDFPoint): id; message 'initWithPage:atPoint:'; { NS_DESIGNATED_INITIALIZER }
    function page: PDFPage; message 'page';
    function point: PDFPoint; message 'point';
    procedure setZoom(newValue: CGFloat); message 'setZoom:'; { available in 10_7, 11_0 }
    function zoom: CGFloat; message 'zoom'; { available in 10_7, 11_0 }
    function compare (destination: PDFDestination): NSComparisonResult; message 'compare:'; { available in 10_5, 11_0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

