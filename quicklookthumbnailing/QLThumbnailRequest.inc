{ Parsed from QuickLookThumbnailing.framework QLThumbnailRequest.h }

{$ifdef TYPES}
type
  QLFileThumbnailRequestPtr = ^QLFileThumbnailRequest;
{$endif}

{$ifdef CLASSES}

type
  QLFileThumbnailRequest = objcclass external (NSObject)
  public
    function maximumSize: CGSize; message 'maximumSize';
    function minimumSize: CGSize; message 'minimumSize';
    function scale: CGFloat; message 'scale';
    function fileURL: NSURL; message 'fileURL';
  end;
{$endif}

