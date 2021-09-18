{ Parsed from WebKit.framework DOMHTMLTableCellElement.h }

{$ifdef TYPES}
type
  DOMHTMLTableCellElementPtr = ^DOMHTMLTableCellElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLTableCellElement = objcclass external (DOMHTMLElement)
  public
    function cellIndex: cint; message 'cellIndex';
    procedure setAlign(newValue: NSString); message 'setAlign:';
    function align: NSString; message 'align';
    procedure setAxis(newValue: NSString); message 'setAxis:';
    function axis: NSString; message 'axis';
    procedure setBgColor(newValue: NSString); message 'setBgColor:';
    function bgColor: NSString; message 'bgColor';
    procedure setCh(newValue: NSString); message 'setCh:';
    function ch: NSString; message 'ch';
    procedure setChOff(newValue: NSString); message 'setChOff:';
    function chOff: NSString; message 'chOff';
    procedure setColSpan(newValue: cint); message 'setColSpan:';
    function colSpan: cint; message 'colSpan';
    procedure setRowSpan(newValue: cint); message 'setRowSpan:';
    function rowSpan: cint; message 'rowSpan';
    procedure setHeaders(newValue: NSString); message 'setHeaders:';
    function headers: NSString; message 'headers';
    procedure setHeight(newValue: NSString); message 'setHeight:';
    function height: NSString; message 'height';
    procedure setNoWrap(newValue: objcbool); message 'setNoWrap:';
    function noWrap: objcbool; message 'noWrap';
    procedure setVAlign(newValue: NSString); message 'setVAlign:';
    function vAlign: NSString; message 'vAlign';
    procedure setWidth(newValue: NSString); message 'setWidth:';
    function width: NSString; message 'width';
    procedure setAbbr(newValue: NSString); message 'setAbbr:';
    function abbr: NSString; message 'abbr';
    procedure setScope(newValue: NSString); message 'setScope:';
    function scope: NSString; message 'scope';
  end;
{$endif}

