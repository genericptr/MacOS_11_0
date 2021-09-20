{ Parsed from QuickLookThumbnailing.framework QLThumbnailRepresentation.h }

{$ifdef TYPES}
type
  QLThumbnailRepresentationPtr = ^QLThumbnailRepresentation;
{$endif}

{$ifdef TYPES}
type
  QLThumbnailRepresentationType = NSInteger;
  QLThumbnailRepresentationTypePtr = ^QLThumbnailRepresentationType;

const
  QLThumbnailRepresentationTypeIcon = 0;
  QLThumbnailRepresentationTypeLowQualityThumbnail = 1;
  QLThumbnailRepresentationTypeThumbnail = 2;
{$endif}

{$ifdef CLASSES}

type
  QLThumbnailRepresentation = objcclass external (NSObject)
  public
    function type_: QLThumbnailRepresentationType; message 'type';
    function CGImage: CGImageRef; message 'CGImage';
    function UIImage_: UIImage; message 'UIImage'; { unavailable in macos }
    function NSImage_: NSImage; message 'NSImage'; { unavailable in ios }
  end;
{$endif}

