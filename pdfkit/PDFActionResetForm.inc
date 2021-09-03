{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFActionResetForm.h }

{$ifdef TYPES}
type
  PDFActionResetFormPtr = ^PDFActionResetForm;
{$endif}

{$ifdef CLASSES}

type
  PDFActionResetForm = objcclass external (PDFAction, NSCopyingProtocol)
  private
    _private2: PDFActionResetFormPrivateVars;
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setFields(newValue: NSArray); message 'setFields:';
    function fields: NSArray; message 'fields';
    procedure setFieldsIncludedAreCleared(newValue: objcbool); message 'setFieldsIncludedAreCleared:';
    function fieldsIncludedAreCleared: objcbool; message 'fieldsIncludedAreCleared';
  end;
{$endif}

