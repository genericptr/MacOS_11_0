{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSMediaLibraryBrowserController.h }

{$ifdef TYPES}
type
  NSMediaLibraryBrowserControllerPtr = ^NSMediaLibraryBrowserController;
{$endif}

{$ifdef TYPES}
type
  NSMediaLibrary = NSUInteger;
  NSMediaLibraryPtr = ^NSMediaLibrary;

const
  NSMediaLibraryAudio = 1 shl 0;
  NSMediaLibraryImage = 1 shl 1;
  NSMediaLibraryMovie = 1 shl 2;
{$endif}

{$ifdef CLASSES}

type
  NSMediaLibraryBrowserController = objcclass external (NSObject)
  public
    procedure setVisible(newValue: objcbool); message 'setVisible:';
    function isVisible: objcbool; message 'isVisible';
    procedure setFrame(newValue: NSRect); message 'setFrame:';
    function frame: NSRect; message 'frame';
    procedure setMediaLibraries(newValue: NSMediaLibrary); message 'setMediaLibraries:';
    function mediaLibraries: NSMediaLibrary; message 'mediaLibraries';
    class function sharedMediaLibraryBrowserController: NSMediaLibraryBrowserController; message 'sharedMediaLibraryBrowserController';
    procedure togglePanel (sender: id); message 'togglePanel:';
  end;
{$endif}

