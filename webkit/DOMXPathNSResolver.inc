{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMXPathNSResolver.h }

{$ifdef TYPES}
type
  DOMXPathNSResolverProtocolPtr = ^DOMXPathNSResolverProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  DOMXPathNSResolverProtocol = objcprotocol external name 'DOMXPathNSResolver' (NSObjectProtocol)
    function lookupNamespaceURI (prefix: NSString): NSString; message 'lookupNamespaceURI:';
  end;
{$endif}

