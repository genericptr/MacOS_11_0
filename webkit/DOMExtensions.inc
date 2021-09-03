{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/DOMExtensions.h }
{$ifdef CLASSES}

type
  DOMNodeExtensions = objccategory external (DOMNode)
    function boundingBox: NSRect; message 'boundingBox'; { available in 10_5 }
    function lineBoxRects: NSArray; message 'lineBoxRects'; { available in 10_5 }
  end;

type
  DOMElementAppKitExtensions = objccategory external (DOMElement)
    function image: NSImage; message 'image'; { available in 10_5 }
  end;

type
  DOMHTMLDocumentExtensions = objccategory external (DOMHTMLDocument)
    function createDocumentFragmentWithMarkupString_baseURL (markupString: NSString; baseURL: NSURL): DOMDocumentFragment; message 'createDocumentFragmentWithMarkupString:baseURL:'; { available in 10_5 }
    function createDocumentFragmentWithText (text: NSString): DOMDocumentFragment; message 'createDocumentFragmentWithText:'; { available in 10_5 }
  end;
{$endif}

