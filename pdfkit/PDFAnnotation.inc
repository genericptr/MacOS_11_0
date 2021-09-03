{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotation.h }

{ Types from PDFAnnotation }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  PDFAnnotationPtr = ^PDFAnnotation;
{$endif}

{$ifdef TYPES}
type
  PDFAnnotationSubtype = NSString;
  PDFAnnotationSubtypePtr = ^PDFAnnotationSubtype;
  PDFAnnotationKey = NSString;
  PDFAnnotationKeyPtr = ^PDFAnnotationKey;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFAnnotationKeyAppearanceDictionary: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyAppearanceState: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyBorder: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyColor: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyContents: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyFlags: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyDate: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyName: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyPage: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyRect: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeySubtype: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyAction: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyAdditionalActions: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyBorderStyle: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyDefaultAppearance: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyDestination: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyHighlightingMode: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyInklist: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyInteriorColor: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyLinePoints: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyLineEndingStyles: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyIconName: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyOpen: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyParent: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyPopup: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyQuadding: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyQuadPoints: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyTextLabel: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetDownCaption: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetBorderColor: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetBackgroundColor: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetCaption: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetDefaultValue: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetFieldFlags: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetFieldType: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetAppearanceDictionary: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetMaxLen: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetOptions: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetRotation: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetRolloverCaption: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetTextLabelUI: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationKeyWidgetValue: PDFAnnotationKey { available in 10_13, 11_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotation = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  private
    _private: PDFAnnotationPrivateVars;
  public
    function initWithBounds_forType_withProperties (bounds: PDFRect; annotationType: PDFAnnotationSubtype; properties: NSDictionary): id; message 'initWithBounds:forType:withProperties:'; { available in 10_13, 11_0 }
    procedure setPage(newValue: PDFPage); message 'setPage:';
    function page: PDFPage; message 'page';
    procedure setType(newValue: NSString); message 'setType:';
    function type_: NSString; message 'type';
    procedure setBounds(newValue: PDFRect); message 'setBounds:';
    function bounds: PDFRect; message 'bounds';
    procedure setShouldDisplay(newValue: objcbool); message 'setShouldDisplay:';
    function shouldDisplay: objcbool; message 'shouldDisplay';
    procedure setShouldPrint(newValue: objcbool); message 'setShouldPrint:';
    function shouldPrint: objcbool; message 'shouldPrint';
    procedure setModificationDate(newValue: NSDate); message 'setModificationDate:'; { available in 10_5, 11_0 }
    function modificationDate: NSDate; message 'modificationDate'; { available in 10_5, 11_0 }
    procedure setUserName(newValue: NSString); message 'setUserName:'; { available in 10_5, 11_0 }
    function userName: NSString; message 'userName'; { available in 10_5, 11_0 }
    {$if (defined(PDFKIT_PLATFORM_OSX))}
    procedure setPopup(newValue: PDFAnnotationPopup); message 'setPopup:'; { available in 10_5, 11_0 }
    function popup: PDFAnnotationPopup; message 'popup'; { available in 10_5, 11_0 }
    {$else}
    procedure setPopup_(newValue: PDFAnnotation); message 'setPopup:'; { available in 10_5, 11_0 }
    function popup_: PDFAnnotation; message 'popup'; { available in 10_5, 11_0 }
    {$endif}
    procedure setBorder(newValue: PDFBorder); message 'setBorder:'; { available in 10_4, 11_0 }
    function border: PDFBorder; message 'border'; { available in 10_4, 11_0 }
    procedure setColor(newValue: PDFKitPlatformColorPtr); message 'setColor:'; { available in 10_4, 11_0 }
    function color: PDFKitPlatformColorPtr; message 'color'; { available in 10_4, 11_0 }
    procedure setContents(newValue: NSString); message 'setContents:'; { available in 10_5, 11_0 }
    function contents: NSString; message 'contents'; { available in 10_5, 11_0 }
    procedure setAction(newValue: PDFAction); message 'setAction:'; { available in 10_5, 11_0 }
    function action: PDFAction; message 'action'; { available in 10_5, 11_0 }
    function hasAppearanceStream: objcbool; message 'hasAppearanceStream';
    procedure setHighlighted(newValue: objcbool); message 'setHighlighted:'; { available in 10_13, 11_0 }
    function isHighlighted: objcbool; message 'isHighlighted'; { available in 10_13, 11_0 }
    procedure drawWithBox_inContext (box: PDFDisplayBox; context: CGContextRef); message 'drawWithBox:inContext:'; { available in 10_12, 11_0 }
    function setValue_forAnnotationKey (value: id; key: PDFAnnotationKey): objcbool; message 'setValue:forAnnotationKey:'; { available in 10_12, 11_0 }
    function setBoolean_forAnnotationKey (value: objcbool; key: PDFAnnotationKey): objcbool; message 'setBoolean:forAnnotationKey:'; { available in 10_12, 11_0 }
    function setRect_forAnnotationKey (value: PDFRect; key: PDFAnnotationKey): objcbool; message 'setRect:forAnnotationKey:'; { available in 10_12, 11_0 }
    function annotationKeyValues: NSDictionary; message 'annotationKeyValues'; { available in 10_13, 11_0 }
    function valueForAnnotationKey (key: PDFAnnotationKey): id; message 'valueForAnnotationKey:'; { available in 10_12, 11_0 }
    procedure removeValueForAnnotationKey (key: PDFAnnotationKey); message 'removeValueForAnnotationKey:'; { available in 10_12, 11_0 }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

{$if (defined(PDFKIT_PLATFORM_OSX))}
{$ifdef CLASSES}

type
  PDFAnnotationDeprecated = objccategory external (PDFAnnotation)
    function initWithDictionary_forPage (dictionary: NSDictionary; page_: PDFPage): id; message 'initWithDictionary:forPage:'; deprecated 'in 10_12, 10_13, NA, NA';
    function initWithBounds (bounds_: PDFRect): id; message 'initWithBounds:'; deprecated 'in 10_4, 10_12, NA, NA';
    function toolTip: NSString; message 'toolTip'; deprecated 'in 10_5, 10_12, NA, NA';
    procedure setMouseUpAction(newValue: PDFAction); message 'setMouseUpAction:'; deprecated 'in 10_5, 10_13, NA, NA';
    function mouseUpAction: PDFAction; message 'mouseUpAction'; deprecated 'in 10_5, 10_13, NA, NA';
    procedure removeAllAppearanceStreams; message 'removeAllAppearanceStreams'; deprecated 'in 10_5, 10_12, NA, NA';
    procedure drawWithBox (box: PDFDisplayBox); message 'drawWithBox:'; deprecated 'in 10_4, 10_12, NA, NA';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kPDFAnnotationKey_AppearanceDictionary: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_AppearanceState: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Border: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Color: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Contents: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Flags: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Date: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Name: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Page: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Rect: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Subtype: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Action: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_AdditionalActions: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_BorderStyle: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_DefaultAppearance: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Destination: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_HighlightingMode: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Inklist: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_InteriorColor: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_LinePoints: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_LineEndingStyles: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_IconName: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Open: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Parent: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Popup: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_Quadding: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_QuadPoints: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_TextLabel: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_WidgetDefaultValue: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_WidgetFieldFlags: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_WidgetFieldType: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_WidgetAppearanceDictionary: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_WidgetMaxLen: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_WidgetOptions: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_WidgetTextLabelUI: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
  kPDFAnnotationKey_WidgetValue: PDFAnnotationKey deprecated 'in 10_12, 10_13, NA, NA'; cvar; external;
{$endif}

{$endif}
