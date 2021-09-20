{ Parsed from QuickLookThumbnailing.framework QLThumbnailProvider.h }

{$ifdef CALLBACKS}
type
  QLThumbnailProviderProvideThumbnailForFileRequestCallback = reference to procedure (reply: QLThumbnailReply; error: NSError); cblock; cdecl;
{$endif}


{$ifdef TYPES}
type
  QLThumbnailProviderPtr = ^QLThumbnailProvider;
{$endif}

{$ifdef CLASSES}

type
  QLThumbnailProvider = objcclass external (NSObject)
  public
    procedure provideThumbnailForFileRequest_completionHandler (request: QLFileThumbnailRequest; handler: QLThumbnailProviderProvideThumbnailForFileRequestCallback); message 'provideThumbnailForFileRequest:completionHandler:';
  end;
{$endif}

