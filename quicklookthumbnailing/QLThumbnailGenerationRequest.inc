{ Parsed from QuickLookThumbnailing.framework QLThumbnailGenerationRequest.h }

{$ifdef TYPES}
type
  QLThumbnailGenerationRequestPtr = ^QLThumbnailGenerationRequest;
{$endif}

{$ifdef TYPES}
type
  QLThumbnailGenerationRequestRepresentationTypes = NSUInteger;
  QLThumbnailGenerationRequestRepresentationTypesPtr = ^QLThumbnailGenerationRequestRepresentationTypes;

const
  QLThumbnailGenerationRequestRepresentationTypeIcon = 1 shl 0;
  QLThumbnailGenerationRequestRepresentationTypeLowQualityThumbnail = 1 shl 1;
  QLThumbnailGenerationRequestRepresentationTypeThumbnail = 1 shl 2;
  QLThumbnailGenerationRequestRepresentationTypeAll = NSUIntegerMax;
{$endif}

{$ifdef CLASSES}

type
  QLThumbnailGenerationRequest = objcclass external (NSObject, NSCopyingProtocol, NSSecureCodingProtocol)
  public
    function init: id; message 'init';
    class function new_: id; message 'new';
    function initWithFileAtURL_size_scale_representationTypes (url: NSURL; size: CGSize; scale: CGFloat; representationTypes: QLThumbnailGenerationRequestRepresentationTypes): id; message 'initWithFileAtURL:size:scale:representationTypes:';
    procedure setContentType(newValue: UTType); message 'setContentType:'; { available in ios 14.0, macos 11.0 }
    function contentType: UTType; message 'contentType'; { available in ios 14.0, macos 11.0 }
    procedure setMinimumDimension(newValue: CGFloat); message 'setMinimumDimension:';
    function minimumDimension: CGFloat; message 'minimumDimension';
    procedure setIconMode(newValue: objcbool); message 'setIconMode:';
    function iconMode: objcbool; message 'iconMode';
    function size: CGSize; message 'size';
    function scale: CGFloat; message 'scale';
    function representationTypes: QLThumbnailGenerationRequestRepresentationTypes; message 'representationTypes';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (coder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (coder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: objcbool; message 'supportsSecureCoding';
  end;
{$endif}

