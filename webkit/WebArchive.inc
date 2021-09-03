{ Parsed from WebKit.framework /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk/System/Library/Frameworks/WebKit.framework/Headers/WebArchive.h }

{$ifdef TYPES}
type
  WebArchivePtr = ^WebArchive;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebArchivePboardType: NSString deprecated 'in 10_3, 10_14'; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  WebArchive = objcclass external (NSObject, NSCodingProtocol, NSCopyingProtocol)
  private
    _private: WebArchivePrivate;
  public
    function initWithMainResource_subresources_subframeArchives (mainResource: WebResource; subresources: NSArray; subframeArchives: NSArray): id; message 'initWithMainResource:subresources:subframeArchives:';
    function initWithData (data: NSData): id; message 'initWithData:';
    function mainResource: WebResource; message 'mainResource';
    function subresources: NSArray; message 'subresources';
    function subframeArchives: NSArray; message 'subframeArchives';
    function data: NSData; message 'data';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

