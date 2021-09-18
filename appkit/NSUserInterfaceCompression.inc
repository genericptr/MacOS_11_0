{ Parsed from AppKit.framework NSUserInterfaceCompression.h }

{$ifdef TYPES}
type
  NSUserInterfaceCompressionOptionsPtr = ^NSUserInterfaceCompressionOptions;
  NSUserInterfaceCompressionProtocolPtr = ^NSUserInterfaceCompressionProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSUserInterfaceCompressionOptions = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function init: id; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithIdentifier (identifier: NSString): id; message 'initWithIdentifier:'; { NS_DESIGNATED_INITIALIZER }
    function initWithCompressionOptions (options: NSSet): id; message 'initWithCompressionOptions:'; { NS_DESIGNATED_INITIALIZER }
    function containsOptions (options: NSUserInterfaceCompressionOptions): objcbool; message 'containsOptions:';
    function intersectsOptions (options: NSUserInterfaceCompressionOptions): objcbool; message 'intersectsOptions:';
    function isEmpty: objcbool; message 'isEmpty';
    function optionsByAddingOptions (options: NSUserInterfaceCompressionOptions): NSUserInterfaceCompressionOptions; message 'optionsByAddingOptions:';
    function optionsByRemovingOptions (options: NSUserInterfaceCompressionOptions): NSUserInterfaceCompressionOptions; message 'optionsByRemovingOptions:';
    class function hideImagesOption: NSUserInterfaceCompressionOptions; message 'hideImagesOption';
    class function hideTextOption: NSUserInterfaceCompressionOptions; message 'hideTextOption';
    class function reduceMetricsOption: NSUserInterfaceCompressionOptions; message 'reduceMetricsOption';
    class function breakEqualWidthsOption: NSUserInterfaceCompressionOptions; message 'breakEqualWidthsOption';
    class function standardOptions: NSUserInterfaceCompressionOptions; message 'standardOptions';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSUserInterfaceCompressionProtocol = objcprotocol external name 'NSUserInterfaceCompression'
  required
    procedure compressWithPrioritizedCompressionOptions (prioritizedOptions: NSArray); message 'compressWithPrioritizedCompressionOptions:';
    function minimumSizeWithPrioritizedCompressionOptions (prioritizedOptions: NSArray): NSSize; message 'minimumSizeWithPrioritizedCompressionOptions:';
    function activeCompressionOptions: NSUserInterfaceCompressionOptions; message 'activeCompressionOptions';
  end;
{$endif}

