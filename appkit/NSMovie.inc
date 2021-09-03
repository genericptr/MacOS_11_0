{ Parsed from AppKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSMovie.h }

{$ifdef TYPES}
type
  NSMoviePtr = ^NSMovie;
{$endif}

{$ifdef CLASSES}

type
  NSMovie = objcclass external (NSObject, NSCodingProtocol)
  public
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function init: id; message 'init'; deprecated 'As of macOS 10.15 this method always returns nil.';
    function initWithMovie (movie: QTMovie): id; message 'initWithMovie:'; deprecated 'As of macOS 10.15 this method always returns nil.';
    function QTMovie_: QTMovie; message 'QTMovie'; deprecated 'As of macOS 10.15 this method always returns nil.';

    { Adopted protocols }
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

