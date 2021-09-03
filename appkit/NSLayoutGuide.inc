{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSLayoutGuide.h }

{ Types from NSLayoutGuide }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSLayoutGuidePtr = ^NSLayoutGuide;
{$endif}

{$ifdef CLASSES}

type
  NSLayoutGuide = objcclass external (NSObject, NSCodingProtocol, NSUserInterfaceItemIdentificationProtocol)
  public
    function frame: NSRect; message 'frame';
    procedure setOwningView(newValue: NSView); message 'setOwningView:';
    function owningView: NSView; message 'owningView';
    procedure setIdentifier(newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
    function identifier: NSUserInterfaceItemIdentifier; message 'identifier';
    function leadingAnchor: NSLayoutXAxisAnchor; message 'leadingAnchor';
    function trailingAnchor: NSLayoutXAxisAnchor; message 'trailingAnchor';
    function leftAnchor: NSLayoutXAxisAnchor; message 'leftAnchor';
    function rightAnchor: NSLayoutXAxisAnchor; message 'rightAnchor';
    function topAnchor: NSLayoutYAxisAnchor; message 'topAnchor';
    function bottomAnchor: NSLayoutYAxisAnchor; message 'bottomAnchor';
    function widthAnchor: NSLayoutDimension; message 'widthAnchor';
    function heightAnchor: NSLayoutDimension; message 'heightAnchor';
    function centerXAnchor: NSLayoutXAxisAnchor; message 'centerXAnchor';
    function centerYAnchor: NSLayoutYAxisAnchor; message 'centerYAnchor';
    {$if  not defined(TARGET_OS_IPHONE)}
    function hasAmbiguousLayout: objcbool; message 'hasAmbiguousLayout'; { available in macos  }
    function constraintsAffectingLayoutForOrientation (orientation: NSLayoutConstraintOrientation): NSArray; message 'constraintsAffectingLayoutForOrientation:'; { available in macos  }
    {$endif}

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function identifier_: NSUserInterfaceItemIdentifier; message 'identifier';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    procedure setIdentifier_ (newValue: NSUserInterfaceItemIdentifier); message 'setIdentifier:';
  end;


type
  NSLayoutGuideSupport = objccategory external (NSView)
    procedure addLayoutGuide (guide: NSLayoutGuide); message 'addLayoutGuide:'; { available in macos  }
    procedure removeLayoutGuide (guide: NSLayoutGuide); message 'removeLayoutGuide:'; { available in macos  }
    function layoutGuides: NSArray; message 'layoutGuides'; { available in macos  }
  end;
{$endif}

