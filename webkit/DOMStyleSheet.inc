{ Parsed from WebKit.framework DOMStyleSheet.h }

{$ifdef TYPES}
type
  DOMStyleSheetPtr = ^DOMStyleSheet;
{$endif}

{$ifdef CLASSES}

type
  DOMStyleSheet = objcclass external (DOMObject)
  public
    function type_: NSString; message 'type';
    procedure setDisabled(newValue: objcbool); message 'setDisabled:';
    function disabled: objcbool; message 'disabled';
    function ownerNode: DOMNode; message 'ownerNode';
    function parentStyleSheet: DOMStyleSheet; message 'parentStyleSheet';
    function href: NSString; message 'href';
    function title: NSString; message 'title';
    function media: DOMMediaList; message 'media';
  end;
{$endif}

