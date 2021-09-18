{ Parsed from Foundation.framework NSProxy.h }

{$ifdef TYPES}
type
  NSProxyPtr = ^NSProxy;
{$endif}

{$ifdef CLASSES}

type
  NSProxy = objcclass external (NSObject, NSObjectProtocol)
  private
    isa: pointer;
  public
    class function alloc: id; message 'alloc';
    class function allocWithZone (zone: NSZonePtr): id; message 'allocWithZone:';
    class function class_: pobjc_class; message 'class';
    procedure forwardInvocation (invocation: NSInvocation); message 'forwardInvocation:';
    function methodSignatureForSelector (sel_: SEL): NSMethodSignature; message 'methodSignatureForSelector:';
    procedure dealloc; message 'dealloc';
    procedure finalize; message 'finalize';
    function description: NSString; message 'description';
    function debugDescription: NSString; message 'debugDescription';
    function respondsToSelector (aSelector: SEL): objcbool; message 'respondsToSelector:';
    function allowsWeakReference: objcbool; message 'allowsWeakReference'; { unavailable in macos, ios, watchos, tvos }
    function retainWeakReference: objcbool; message 'retainWeakReference'; { unavailable in macos, ios, watchos, tvos }
  end;
{$endif}

