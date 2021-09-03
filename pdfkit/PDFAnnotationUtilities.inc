{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationUtilities.h }
{$ifdef TYPES}
type
  PDFLineStyle = NSInteger;
  PDFLineStylePtr = ^PDFLineStyle;

const
  kPDFLineStyleNone = 0;
  kPDFLineStyleSquare = 1;
  kPDFLineStyleCircle = 2;
  kPDFLineStyleDiamond = 3;
  kPDFLineStyleOpenArrow = 4;
  kPDFLineStyleClosedArrow = 5;

type
  PDFTextAnnotationIconType = NSInteger;
  PDFTextAnnotationIconTypePtr = ^PDFTextAnnotationIconType;

const
  kPDFTextAnnotationIconComment = 0;
  kPDFTextAnnotationIconKey = 1;
  kPDFTextAnnotationIconNote = 2;
  kPDFTextAnnotationIconHelp = 3;
  kPDFTextAnnotationIconNewParagraph = 4;
  kPDFTextAnnotationIconParagraph = 5;
  kPDFTextAnnotationIconInsert = 6;

type
  PDFMarkupType = NSInteger;
  PDFMarkupTypePtr = ^PDFMarkupType;

const
  kPDFMarkupTypeHighlight = 0;
  kPDFMarkupTypeStrikeOut = 1;
  kPDFMarkupTypeUnderline = 2;
  kPDFMarkupTypeRedact = 3;

type
  PDFWidgetControlType = NSInteger;
  PDFWidgetControlTypePtr = ^PDFWidgetControlType;

const
  kPDFWidgetUnknownControl = -1;
  kPDFWidgetPushButtonControl = 0;
  kPDFWidgetRadioButtonControl = 1;
  kPDFWidgetCheckBoxControl = 2;

type
  PDFWidgetCellState = NSInteger;
  PDFWidgetCellStatePtr = ^PDFWidgetCellState;

const
  kPDFWidgetMixedState = -1;
  kPDFWidgetOffState = 0;
  kPDFWidgetOnState = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFAnnotationSubtypeText: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeLink: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeFreeText: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeLine: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeSquare: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeCircle: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeHighlight: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeUnderline: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeStrikeOut: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeInk: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeStamp: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypePopup: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationSubtypeWidget: PDFAnnotationSubtype { available in 10_13, 11_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PDFAnnotationWidgetSubtype = NSString;
  PDFAnnotationWidgetSubtypePtr = ^PDFAnnotationWidgetSubtype;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFAnnotationWidgetSubtypeButton: PDFAnnotationWidgetSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationWidgetSubtypeChoice: PDFAnnotationWidgetSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationWidgetSubtypeSignature: PDFAnnotationWidgetSubtype { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationWidgetSubtypeText: PDFAnnotationWidgetSubtype { available in 10_13, 11_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PDFAnnotationLineEndingStyle = NSString;
  PDFAnnotationLineEndingStylePtr = ^PDFAnnotationLineEndingStyle;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFAnnotationLineEndingStyleNone: PDFAnnotationLineEndingStyle { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationLineEndingStyleSquare: PDFAnnotationLineEndingStyle { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationLineEndingStyleCircle: PDFAnnotationLineEndingStyle { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationLineEndingStyleDiamond: PDFAnnotationLineEndingStyle { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationLineEndingStyleOpenArrow: PDFAnnotationLineEndingStyle { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationLineEndingStyleClosedArrow: PDFAnnotationLineEndingStyle { available in 10_13, 11_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PDFAnnotationTextIconType = NSString;
  PDFAnnotationTextIconTypePtr = ^PDFAnnotationTextIconType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFAnnotationTextIconTypeComment: PDFAnnotationTextIconType { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationTextIconTypeKey: PDFAnnotationTextIconType { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationTextIconTypeNote: PDFAnnotationTextIconType { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationTextIconTypeHelp: PDFAnnotationTextIconType { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationTextIconTypeNewParagraph: PDFAnnotationTextIconType { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationTextIconTypeParagraph: PDFAnnotationTextIconType { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationTextIconTypeInsert: PDFAnnotationTextIconType { available in 10_13, 11_0 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  PDFAnnotationHighlightingMode = NSString;
  PDFAnnotationHighlightingModePtr = ^PDFAnnotationHighlightingMode;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  PDFAnnotationHighlightingModeNone: PDFAnnotationHighlightingMode { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationHighlightingModeInvert: PDFAnnotationHighlightingMode { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationHighlightingModeOutline: PDFAnnotationHighlightingMode { available in 10_13, 11_0 }; cvar; external;
  PDFAnnotationHighlightingModePush: PDFAnnotationHighlightingMode { available in 10_13, 11_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationUtilities = objccategory external (PDFAnnotation)
    procedure setFont(newValue: PDFKitPlatformFontPtr); message 'setFont:';
    function font: PDFKitPlatformFontPtr; message 'font';
    procedure setFontColor(newValue: PDFKitPlatformColorPtr); message 'setFontColor:';
    function fontColor: PDFKitPlatformColorPtr; message 'fontColor';
    procedure setInteriorColor(newValue: PDFKitPlatformColorPtr); message 'setInteriorColor:';
    function interiorColor: PDFKitPlatformColorPtr; message 'interiorColor';
    procedure setAlignment(newValue: NSTextAlignment); message 'setAlignment:';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setStartPoint(newValue: PDFPoint); message 'setStartPoint:';
    function startPoint: PDFPoint; message 'startPoint';
    procedure setEndPoint(newValue: PDFPoint); message 'setEndPoint:';
    function endPoint: PDFPoint; message 'endPoint';
    procedure setStartLineStyle(newValue: PDFLineStyle); message 'setStartLineStyle:';
    function startLineStyle: PDFLineStyle; message 'startLineStyle';
    procedure setEndLineStyle(newValue: PDFLineStyle); message 'setEndLineStyle:';
    function endLineStyle: PDFLineStyle; message 'endLineStyle';
    class function lineStyleFromName (name: NSString): PDFLineStyle; message 'lineStyleFromName:';
    class function nameForLineStyle (style: PDFLineStyle): NSString; message 'nameForLineStyle:';
    procedure setIconType(newValue: PDFTextAnnotationIconType); message 'setIconType:';
    function iconType: PDFTextAnnotationIconType; message 'iconType';
    procedure setQuadrilateralPoints(newValue: NSArray); message 'setQuadrilateralPoints:';
    function quadrilateralPoints: NSArray; message 'quadrilateralPoints';
    procedure setMarkupType(newValue: PDFMarkupType); message 'setMarkupType:';
    function markupType: PDFMarkupType; message 'markupType';
    procedure setWidgetFieldType(newValue: PDFAnnotationWidgetSubtype); message 'setWidgetFieldType:';
    function widgetFieldType: PDFAnnotationWidgetSubtype; message 'widgetFieldType';
    procedure setWidgetControlType(newValue: PDFWidgetControlType); message 'setWidgetControlType:';
    function widgetControlType: PDFWidgetControlType; message 'widgetControlType';
    procedure setMultiline(newValue: objcbool); message 'setMultiline:';
    function isMultiline: objcbool; message 'isMultiline';
    function isPasswordField: objcbool; message 'isPasswordField';
    procedure setComb(newValue: objcbool); message 'setComb:';
    function hasComb: objcbool; message 'hasComb';
    procedure setMaximumLength(newValue: NSInteger); message 'setMaximumLength:';
    function maximumLength: NSInteger; message 'maximumLength';
    procedure setWidgetStringValue(newValue: NSString); message 'setWidgetStringValue:';
    function widgetStringValue: NSString; message 'widgetStringValue';
    procedure setWidgetDefaultStringValue(newValue: NSString); message 'setWidgetDefaultStringValue:';
    function widgetDefaultStringValue: NSString; message 'widgetDefaultStringValue';
    procedure setAllowsToggleToOff(newValue: objcbool); message 'setAllowsToggleToOff:';
    function allowsToggleToOff: objcbool; message 'allowsToggleToOff';
    procedure setRadiosInUnison(newValue: objcbool); message 'setRadiosInUnison:';
    function radiosInUnison: objcbool; message 'radiosInUnison';
    procedure setReadOnly(newValue: objcbool); message 'setReadOnly:';
    function isReadOnly: objcbool; message 'isReadOnly';
    procedure setListChoice(newValue: objcbool); message 'setListChoice:';
    function isListChoice: objcbool; message 'isListChoice';
    procedure setChoices(newValue: NSArray); message 'setChoices:';
    function choices: NSArray; message 'choices';
    procedure setValues(newValue: NSArray); message 'setValues:';
    function values: NSArray; message 'values';
    procedure setButtonWidgetState(newValue: PDFWidgetCellState); message 'setButtonWidgetState:';
    function buttonWidgetState: PDFWidgetCellState; message 'buttonWidgetState';
    procedure setButtonWidgetStateString(newValue: NSString); message 'setButtonWidgetStateString:';
    function buttonWidgetStateString: NSString; message 'buttonWidgetStateString';
    procedure setOpen(newValue: objcbool); message 'setOpen:';
    function isOpen: objcbool; message 'isOpen';
    function paths: NSArray; message 'paths';
    procedure addBezierPath (path: PDFKitPlatformBezierPathPtr); message 'addBezierPath:';
    procedure removeBezierPath (path: PDFKitPlatformBezierPathPtr); message 'removeBezierPath:';
    procedure setDestination(newValue: PDFDestination); message 'setDestination:';
    function destination: PDFDestination; message 'destination';
    procedure setURL(newValue: NSURL); message 'setURL:';
    function URL: NSURL; message 'URL';
    procedure setFieldName(newValue: NSString); message 'setFieldName:';
    function fieldName: NSString; message 'fieldName';
    procedure setCaption(newValue: NSString); message 'setCaption:';
    function caption: NSString; message 'caption';
    procedure setBackgroundColor(newValue: PDFKitPlatformColorPtr); message 'setBackgroundColor:';
    function backgroundColor: PDFKitPlatformColorPtr; message 'backgroundColor';
    procedure setStampName(newValue: NSString); message 'setStampName:';
    function stampName: NSString; message 'stampName';
  end;
{$endif}

