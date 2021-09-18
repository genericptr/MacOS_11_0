{ Parsed from PDFKit.framework PDFAnnotationTextWidget.h }

{$ifdef TYPES}
type
  PDFAnnotationTextWidgetPtr = ^PDFAnnotationTextWidget;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationTextWidget = objcclass external (PDFAnnotation, NSCopyingProtocol)
  private
    _private2: PDFAnnotationTextWidgetPrivateVars;
  public
    function stringValue: NSString; message 'stringValue';
    procedure setStringValue (value: NSString); message 'setStringValue:';
    function attributedStringValue: NSAttributedString; message 'attributedStringValue';
    procedure setAttributedStringValue (value: NSAttributedString); message 'setAttributedStringValue:';
    function backgroundColor: PDFKitPlatformColorPtr; message 'backgroundColor';
    procedure setBackgroundColor (color_: PDFKitPlatformColorPtr); message 'setBackgroundColor:';
    function rotation: NSInteger; message 'rotation';
    procedure setRotation (rotation_: cint); message 'setRotation:';
    function font: PDFKitPlatformFontPtr; message 'font';
    procedure setFont (font_: PDFKitPlatformFontPtr); message 'setFont:';
    function fontColor: PDFKitPlatformColorPtr; message 'fontColor';
    procedure setFontColor (color_: PDFKitPlatformColorPtr); message 'setFontColor:';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setAlignment (alignment_: NSTextAlignment); message 'setAlignment:';
    function maximumLength: NSUInteger; message 'maximumLength';
    procedure setMaximumLength (maxLen: NSUInteger); message 'setMaximumLength:';
    function fieldName: NSString; message 'fieldName';
    procedure setFieldName (name: NSString); message 'setFieldName:';
    function isMultiline: objcbool; message 'isMultiline';
    procedure setIsMultiline (multiline: objcbool); message 'setIsMultiline:';
  end;
{$endif}

