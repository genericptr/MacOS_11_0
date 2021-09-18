{ Parsed from PDFKit.framework PDFThumbnailView.h }

{ Types from PDFThumbnailView }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  PDFThumbnailViewPtr = ^PDFThumbnailView;
{$endif}

{$if (defined(PDFKIT_PLATFORM_IOS))}
{$ifdef TYPES}
type
  PDFThumbnailLayoutMode = NSInteger;
  PDFThumbnailLayoutModePtr = ^PDFThumbnailLayoutMode;

const
  PDFThumbnailLayoutModeVertical = 0;
  PDFThumbnailLayoutModeHorizontal = 1;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  PDFThumbnailViewDocumentEditedNotification: NSString { available in 10_4, 11_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PDFThumbnailView = objcclass external (PDFKitPlatformView, NSCodingProtocol)
  private
    _private: PDFThumbnailViewPrivate;
  public
    procedure setPDFView(newValue: PDFView); message 'setPDFView:';
    function PDFView_: PDFView; message 'PDFView';
    procedure setBackgroundColor(newValue: PDFKitPlatformColorPtr); message 'setBackgroundColor:';
    function backgroundColor: PDFKitPlatformColorPtr; message 'backgroundColor';
    function selectedPages: NSArray; message 'selectedPages';
    procedure setThumbnailSize(newValue: PDFSize); message 'setThumbnailSize:';
    function thumbnailSize: PDFSize; message 'thumbnailSize';
    {$if (defined(PDFKIT_PLATFORM_OSX))}
    procedure setMaximumNumberOfColumns(newValue: NSUInteger); message 'setMaximumNumberOfColumns:';
    function maximumNumberOfColumns: NSUInteger; message 'maximumNumberOfColumns';
    procedure setLabelFont(newValue: PDFKitPlatformFontPtr); message 'setLabelFont:';
    function labelFont: PDFKitPlatformFontPtr; message 'labelFont';
    procedure setAllowsDragging(newValue: objcbool); message 'setAllowsDragging:';
    function allowsDragging: objcbool; message 'allowsDragging';
    procedure setAllowsMultipleSelection(newValue: objcbool); message 'setAllowsMultipleSelection:';
    function allowsMultipleSelection: objcbool; message 'allowsMultipleSelection';
    {$elseif (defined(PDFKIT_PLATFORM_IOS))}
    procedure setLayoutMode(newValue: PDFThumbnailLayoutMode); message 'setLayoutMode:'; { available in NA, 11_0 }
    function layoutMode: PDFThumbnailLayoutMode; message 'layoutMode'; { available in NA, 11_0 }
    procedure setContentInset(newValue: UIEdgeInsets); message 'setContentInset:'; { available in NA, 11_0 }
    function contentInset: UIEdgeInsets; message 'contentInset'; { available in NA, 11_0 }
    {$endif}

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

