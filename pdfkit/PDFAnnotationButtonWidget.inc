{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFAnnotationButtonWidget.h }

{$ifdef TYPES}
type
  PDFAnnotationButtonWidgetPtr = ^PDFAnnotationButtonWidget;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationButtonWidget = objcclass external (PDFAnnotation, NSCopyingProtocol)
  private
    _private2: PDFAnnotationButtonWidgetPrivateVars;
  public
    function controlType: PDFWidgetControlType; message 'controlType';
    procedure setControlType (type_: PDFWidgetControlType); message 'setControlType:';
    function state: NSInteger; message 'state';
    procedure setState (value: NSInteger); message 'setState:';
    function backgroundColor: PDFKitPlatformColorPtr; message 'backgroundColor';
    procedure setBackgroundColor (color_: PDFKitPlatformColorPtr); message 'setBackgroundColor:';
    function allowsToggleToOff: objcbool; message 'allowsToggleToOff';
    procedure setAllowsToggleToOff (allowOff: objcbool); message 'setAllowsToggleToOff:';
    function font: PDFKitPlatformFontPtr; message 'font';
    procedure setFont (font_: PDFKitPlatformFontPtr); message 'setFont:';
    function fontColor: PDFKitPlatformColorPtr; message 'fontColor';
    procedure setFontColor (color_: PDFKitPlatformColorPtr); message 'setFontColor:';
    function caption: NSString; message 'caption';
    procedure setCaption (name: NSString); message 'setCaption:';
    function fieldName: NSString; message 'fieldName';
    procedure setFieldName (name: NSString); message 'setFieldName:';
    function onStateValue: NSString; message 'onStateValue';
    procedure setOnStateValue (name: NSString); message 'setOnStateValue:';
  end;
{$endif}

