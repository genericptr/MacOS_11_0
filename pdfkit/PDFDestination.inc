{ Parsed from PDFKit.framework PDFDestination.h }

{$ifdef TYPES}
type
  PDFDestinationPtr = ^PDFDestination;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kPDFDestinationUnspecifiedValue: CGFloat { available in macos 10.4, ios 11.0 }; cvar; external;
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
    procedure setZoom(newValue: CGFloat); message 'setZoom:'; { available in macos 10.7, ios 11.0 }
    function zoom: CGFloat; message 'zoom'; { available in macos 10.7, ios 11.0 }
    function compare (destination: PDFDestination): NSComparisonResult; message 'compare:'; { available in macos 10.5, ios 11.0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

