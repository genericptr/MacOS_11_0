{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSColorPicker.h }

{$ifdef TYPES}
type
  NSColorPickerPtr = ^NSColorPicker;
{$endif}

{$ifdef CLASSES}

type
  NSColorPicker = objcclass external (NSObject, NSColorPickingDefaultProtocol)
  public
    function initWithPickerMask_colorPanel (mask: NSUInteger; owningColorPanel: NSColorPanel): id; message 'initWithPickerMask:colorPanel:';
    function colorPanel: NSColorPanel; message 'colorPanel';
    function provideNewButtonImage: NSImage; message 'provideNewButtonImage';
    procedure insertNewButtonImage_in (newButtonImage: NSImage; buttonCell: NSButtonCell); message 'insertNewButtonImage:in:';
    procedure viewSizeChanged (sender: id); message 'viewSizeChanged:';
    procedure attachColorList (colorList: NSColorList); message 'attachColorList:';
    procedure detachColorList (colorList: NSColorList); message 'detachColorList:';
    procedure setMode (mode: NSColorPanelMode); message 'setMode:';
    function buttonToolTip: NSString; message 'buttonToolTip';
    function minContentSize: NSSize; message 'minContentSize';

    { Adopted protocols }
    procedure alphaControlAddedOrRemoved (sender: id); message 'alphaControlAddedOrRemoved:';
  end;
{$endif}

