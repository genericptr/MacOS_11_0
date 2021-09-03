{ Parsed from PDFKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/PDFKit.framework/Headers/PDFKitPlatform.h }

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_SIMULATOR) or defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MACCATALYST)))}
{$ifdef TYPES}
type
  PDFKitPlatformView = NSView;
  PDFKitPlatformViewController = NSViewController;
  PDFKitPlatformScrollView = NSScrollView;
  PDFKitPlatformColor = NSColor;
  PDFKitPlatformBezierPath = NSBezierPath;
  PDFKitPlatformBezierPathElement = NSBezierPathElement;
  PDFKitPlatformImage = NSImage;
  PDFKitPlatformImageView = NSImageView;
  PDFKitPlatformEvent = NSEvent;
  PDFKitPlatformFont = NSFont;
  PDFKitPlatformControl = NSControl;
  PDFKitPlatformTextField = NSTextField;
  PDFKitPlatformTextView = NSTextView;
  PDFKitPlatformTextViewDelegate = NSTextViewDelegateProtocol;
  PDFKitPlatformChoiceWidgetComboBoxView = NSPopUpButton;
  PDFKitPlatformChoiceWidgetListView = NSTableView;
  PDFKitPlatformButton = NSButton;
  PDFKitPlatformButtonCell = NSButtonCell;
  PDFKitPlatformAccessibilityElement = NSAccessibilityElement;
  PDFKitResponder = NSResponder;

type
  PDFKitPlatformViewPtr = ^PDFKitPlatformView;
  PDFKitPlatformViewControllerPtr = ^PDFKitPlatformViewController;
  PDFKitPlatformScrollViewPtr = ^PDFKitPlatformScrollView;
  PDFKitPlatformColorPtr = ^PDFKitPlatformColor;
  PDFKitPlatformBezierPathPtr = ^PDFKitPlatformBezierPath;
  PDFKitPlatformBezierPathElementPtr = ^PDFKitPlatformBezierPathElement;
  PDFKitPlatformImagePtr = ^PDFKitPlatformImage;
  PDFKitPlatformImageViewPtr = ^PDFKitPlatformImageView;
  PDFKitPlatformEventPtr = ^PDFKitPlatformEvent;
  PDFKitPlatformFontPtr = ^PDFKitPlatformFont;
  PDFKitPlatformControlPtr = ^PDFKitPlatformControl;
  PDFKitPlatformTextFieldPtr = ^PDFKitPlatformTextField;
  PDFKitPlatformTextViewPtr = ^PDFKitPlatformTextView;
  PDFKitPlatformTextViewDelegatePtr = ^PDFKitPlatformTextViewDelegate;
  PDFKitPlatformChoiceWidgetComboBoxViewPtr = ^PDFKitPlatformChoiceWidgetComboBoxView;
  PDFKitPlatformChoiceWidgetListViewPtr = ^PDFKitPlatformChoiceWidgetListView;
  PDFKitPlatformButtonPtr = ^PDFKitPlatformButton;
  PDFKitPlatformButtonCellPtr = ^PDFKitPlatformButtonCell;
  PDFKitPlatformAccessibilityElementPtr = ^PDFKitPlatformAccessibilityElement;
  PDFKitResponderPtr = ^PDFKitResponder;

{$endif}

{$elseif (defined(TARGET_OS_SIMULATOR) or defined(TARGET_OS_IPHONE) or defined(TARGET_OS_MACCATALYST))}

{$else}
{$endif}
