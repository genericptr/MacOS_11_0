{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSTextContainer.h }

{ Types from NSTextContainer }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  NSTextContainerPtr = ^NSTextContainer;
{$endif}

{$if defined(__NULL_MACRO__)}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef CLASSES}

type
  NSTextContainer = objcclass external (NSObject, NSSecureCodingProtocol, NSTextLayoutOrientationProviderProtocol)
  public
    function initWithSize (size: NSSize): id; message 'initWithSize:'; { available in macos , ios , tvos  }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    procedure setLayoutManager(newValue: NSLayoutManager); message 'setLayoutManager:';
    function layoutManager: NSLayoutManager; message 'layoutManager';
    procedure replaceLayoutManager (newLayoutManager: NSLayoutManager); message 'replaceLayoutManager:'; { available in macos , ios , tvos  }
    procedure setSize(newValue: NSSize); message 'setSize:'; { available in macos , ios , tvos  }
    function size: NSSize; message 'size'; { available in macos , ios , tvos  }
    procedure setExclusionPaths(newValue: NSArray); message 'setExclusionPaths:'; { available in macos , ios , tvos  }
    function exclusionPaths: NSArray; message 'exclusionPaths'; { available in macos , ios , tvos  }
    procedure setLineBreakMode(newValue: NSLineBreakMode); message 'setLineBreakMode:'; { available in macos , ios , tvos  }
    function lineBreakMode: NSLineBreakMode; message 'lineBreakMode'; { available in macos , ios , tvos  }
    procedure setLineFragmentPadding(newValue: CGFloat); message 'setLineFragmentPadding:';
    function lineFragmentPadding: CGFloat; message 'lineFragmentPadding';
    procedure setMaximumNumberOfLines(newValue: NSUInteger); message 'setMaximumNumberOfLines:'; { available in macos , ios , tvos  }
    function maximumNumberOfLines: NSUInteger; message 'maximumNumberOfLines'; { available in macos , ios , tvos  }
    function lineFragmentRectForProposedRect_atIndex_writingDirection_remainingRect (proposedRect: NSRect; characterIndex: NSUInteger; baseWritingDirection: NSWritingDirection; remainingRect: NSRectPtr): NSRect; message 'lineFragmentRectForProposedRect:atIndex:writingDirection:remainingRect:'; { available in macos , ios , tvos  }
    function isSimpleRectangularTextContainer: objcbool; message 'isSimpleRectangularTextContainer'; { available in 10_0, 9_0 }
    procedure setWidthTracksTextView(newValue: objcbool); message 'setWidthTracksTextView:';
    function widthTracksTextView: objcbool; message 'widthTracksTextView';
    procedure setHeightTracksTextView(newValue: objcbool); message 'setHeightTracksTextView:';
    function heightTracksTextView: objcbool; message 'heightTracksTextView';
    {$if (MAC_OS_X_VERSION_MIN_REQUIRED < MAC_OS_X_VERSION_10_12)}
    procedure setTextView(newValue: NSTextView); message 'setTextView:';
    function textView: NSTextView; message 'textView';
    {$else}
    procedure setTextView_(newValue: NSTextView); message 'setTextView:';
    function textView_: NSTextView; message 'textView';
    {$endif}

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function layoutOrientation: NSTextLayoutOrientation; message 'layoutOrientation'; { available in macos , ios , tvos  }
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef TYPES}
type
  NSLineSweepDirection = NSUInteger;
  NSLineSweepDirectionPtr = ^NSLineSweepDirection;

const
  NSLineSweepLeft = 0;
  NSLineSweepRight = 1;
  NSLineSweepDown = 2;
  NSLineSweepUp = 3;

type
  NSLineMovementDirection = NSUInteger;
  NSLineMovementDirectionPtr = ^NSLineMovementDirection;

const
  NSLineDoesntMove = 0;
  NSLineMovesLeft = 1;
  NSLineMovesRight = 2;
  NSLineMovesDown = 3;
  NSLineMovesUp = 4;
{$endif}

{$ifdef CLASSES}

type
  NSTextContainerDeprecated = objccategory external (NSTextContainer)
    function initWithContainerSize (aContainerSize: NSSize): id; message 'initWithContainerSize:';
    procedure setContainerSize(newValue: NSSize); message 'setContainerSize:';
    function containerSize: NSSize; message 'containerSize';
    function lineFragmentRectForProposedRect_sweepDirection_movementDirection_remainingRect (proposedRect: NSRect; sweepDirection: NSLineSweepDirection; movementDirection: NSLineMovementDirection; remainingRect: NSRectPointer): NSRect; message 'lineFragmentRectForProposedRect:sweepDirection:movementDirection:remainingRect:';
    function containsPoint (point: NSPoint): objcbool; message 'containsPoint:'; deprecated;
  end;
{$endif}

{$endif}

{$else}
{$endif}