{ Parsed from PDFKit.framework PDFAnnotationChoiceWidget.h }

{$ifdef TYPES}
type
  PDFAnnotationChoiceWidgetPtr = ^PDFAnnotationChoiceWidget;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationChoiceWidget = objcclass external (PDFAnnotation, NSCopyingProtocol)
  private
    _private2: PDFAnnotationChoiceWidgetPrivateVars;
  public
    function stringValue: NSString; message 'stringValue';
    procedure setStringValue (value: NSString); message 'setStringValue:';
    function backgroundColor: PDFKitPlatformColorPtr; message 'backgroundColor';
    procedure setBackgroundColor (color_: PDFKitPlatformColorPtr); message 'setBackgroundColor:';
    function font: PDFKitPlatformFontPtr; message 'font';
    procedure setFont (font_: PDFKitPlatformFontPtr); message 'setFont:';
    function fontColor: PDFKitPlatformColorPtr; message 'fontColor';
    procedure setFontColor (color_: PDFKitPlatformColorPtr); message 'setFontColor:';
    function fieldName: NSString; message 'fieldName';
    procedure setFieldName (name: NSString); message 'setFieldName:';
    function isListChoice: objcbool; message 'isListChoice';
    procedure setIsListChoice (isList: objcbool); message 'setIsListChoice:';
    function choices: NSArray; message 'choices';
    procedure setChoices (options: NSArray); message 'setChoices:';
  end;
{$endif}

